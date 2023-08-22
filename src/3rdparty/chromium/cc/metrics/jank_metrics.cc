// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "cc/metrics/jank_metrics.h"

#include <memory>
#include <string>
#include <utility>

#include "base/metrics/histogram.h"
#include "base/metrics/histogram_macros.h"
#include "base/strings/strcat.h"
#include "base/trace_event/trace_event.h"
#include "cc/metrics/frame_sequence_tracker.h"

namespace cc {

namespace {

constexpr int kBuiltinJankSequenceNum =
    static_cast<int>(FrameSequenceTrackerType::kMaxType) + 1;
constexpr int kMaximumJankHistogramIndex = 2 * kBuiltinJankSequenceNum;

constexpr bool IsValidJankThreadType(FrameSequenceMetrics::ThreadType type) {
  return type == FrameSequenceMetrics::ThreadType::kCompositor ||
         type == FrameSequenceMetrics::ThreadType::kMain;
}

const char* GetJankThreadTypeName(FrameSequenceMetrics::ThreadType type) {
  DCHECK(IsValidJankThreadType(type));

  switch (type) {
    case FrameSequenceMetrics::ThreadType::kCompositor:
      return "Compositor";
    case FrameSequenceMetrics::ThreadType::kMain:
      return "Main";
    default:
      NOTREACHED();
      return "";
  }
}

int GetIndexForJankMetric(FrameSequenceMetrics::ThreadType thread_type,
                          FrameSequenceTrackerType type) {
  DCHECK(IsValidJankThreadType(thread_type));
  if (thread_type == FrameSequenceMetrics::ThreadType::kMain)
    return static_cast<int>(type);

  DCHECK_EQ(thread_type, FrameSequenceMetrics::ThreadType::kCompositor);
  return static_cast<int>(type) + kBuiltinJankSequenceNum;
}

std::string GetJankHistogramName(FrameSequenceTrackerType type,
                                 const char* thread_name) {
  return base::StrCat(
      {"Graphics.Smoothness.Jank.", thread_name, ".",
       FrameSequenceTracker::GetFrameSequenceTrackerTypeName(type)});
}

}  // namespace

JankMetrics::JankMetrics(FrameSequenceTrackerType tracker_type,
                         FrameSequenceMetrics::ThreadType effective_thread)
    : tracker_type_(tracker_type), effective_thread_(effective_thread) {
  DCHECK(IsValidJankThreadType(effective_thread));
}
JankMetrics::~JankMetrics() = default;

void JankMetrics::AddSubmitFrame(uint32_t frame_token,
                                 uint32_t sequence_number) {
  // When a frame is submitted, record its |frame_token| and its associated
  // |sequence_number|. This pushed item will be removed when this frame is
  // presented.
  queue_frame_token_and_id_.push({frame_token, sequence_number});
}

void JankMetrics::AddFrameWithNoUpdate(uint32_t sequence_number,
                                       base::TimeDelta frame_interval) {
  // If a frame does not cause an increase in expected frames, it will be
  // recorded here and later subtracted from the presentation interval that
  // includes this frame.
  queue_frame_id_and_interval_.push({sequence_number, frame_interval});
}

void JankMetrics::AddPresentedFrame(
    uint32_t presented_frame_token,
    base::TimeTicks current_presentation_timestamp,
    base::TimeDelta frame_interval) {
  uint32_t presented_frame_id = 0;

  // Find the main_sequence_number of the presented_frame_token
  while (!queue_frame_token_and_id_.empty()) {
    auto token_and_id = queue_frame_token_and_id_.front();

    if (token_and_id.first > presented_frame_token) {
      // The submitting of this presented frame was not recorded (e.g. the
      // submitting might have occurred before JankMetrics starts recording).
      // In that case, do not use this frame presentation for jank detection.
      return;
    }
    queue_frame_token_and_id_.pop();

    if (token_and_id.first == presented_frame_token) {
      // Found information about the submit of this presented frame;
      // retrieve the frame's sequence number.
      presented_frame_id = token_and_id.second;
      break;
    }
  }
  // If for any reason the sequence number associated with the
  // presented_frame_token cannot be identified, then ignore this frame
  // presentation.
  if (presented_frame_id == 0)
    return;

  base::TimeDelta no_update_time;  // The frame time spanned by the frames that
                                   // have no updates

  // Compute the presentation delay contributed by no-update frames that began
  // BEFORE (i.e. have smaller sequence number than) the current presented
  // frame.
  while (!queue_frame_id_and_interval_.empty() &&
         queue_frame_id_and_interval_.front().first < presented_frame_id) {
    auto id_and_interval = queue_frame_id_and_interval_.front();
    if (id_and_interval.first >= last_presentation_frame_id_) {
      // Only count no-update frames that began SINCE (i.e. have a greater [or
      // equal] sequence number than) the beginning of previous presented frame.
      // If, in rare cases, there are still no-update frames that began BEFORE
      // the beginning of previous presented frame left in the queue, those
      // frames will simply be discarded and not counted into |no_update_time|.
      no_update_time += id_and_interval.second;
    }
    queue_frame_id_and_interval_.pop();
  }

  // Exclude the presentation delay introduced by no-update frames. If this
  // exclusion results in negative frame delta, treat the frame delta as 0.
  base::TimeDelta current_frame_delta = current_presentation_timestamp -
                                        last_presentation_timestamp_ -
                                        no_update_time;
  if (current_frame_delta < base::TimeDelta::FromMilliseconds(0))
    current_frame_delta = base::TimeDelta::FromMilliseconds(0);

  // Only start tracking jank if this function has already been
  // called at least once (so that |last_presentation_timestamp_|
  // and |prev_frame_delta_| have been set).
  //
  // The presentation interval is typically a multiple of VSync
  // intervals (i.e. 16.67ms, 33.33ms, 50ms ... on a 60Hz display)
  // with small fluctuations. The 0.5 * |frame_interval| criterion
  // is chosen so that the jank detection is robust to those
  // fluctuations.
  if (!last_presentation_timestamp_.is_null() && !prev_frame_delta_.is_zero() &&
      current_frame_delta > prev_frame_delta_ + 0.5 * frame_interval) {
    jank_count_++;

    TRACE_EVENT_NESTABLE_ASYNC_BEGIN_WITH_TIMESTAMP1(
        "cc,benchmark", "Jank", TRACE_ID_LOCAL(this),
        last_presentation_timestamp_, "thread-type",
        GetJankThreadTypeName(effective_thread_));
    TRACE_EVENT_NESTABLE_ASYNC_END_WITH_TIMESTAMP1(
        "cc,benchmark", "Jank", TRACE_ID_LOCAL(this),
        current_presentation_timestamp, "tracker-type",
        FrameSequenceTracker::GetFrameSequenceTrackerTypeName(tracker_type_));
  }
  last_presentation_timestamp_ = current_presentation_timestamp;
  last_presentation_frame_id_ = presented_frame_id;
  prev_frame_delta_ = current_frame_delta;
}

void JankMetrics::ReportJankMetrics(int frames_expected) {
  if (tracker_type_ == FrameSequenceTrackerType::kCustom)
    return;

  int jank_percent = static_cast<int>(100 * jank_count_ / frames_expected);

  const char* jank_thread_name = GetJankThreadTypeName(effective_thread_);

  STATIC_HISTOGRAM_POINTER_GROUP(
      GetJankHistogramName(tracker_type_, jank_thread_name),
      GetIndexForJankMetric(effective_thread_, tracker_type_),
      kMaximumJankHistogramIndex, Add(jank_percent),
      base::LinearHistogram::FactoryGet(
          GetJankHistogramName(tracker_type_, jank_thread_name), 1, 100, 101,
          base::HistogramBase::kUmaTargetedHistogramFlag));
}

void JankMetrics::Merge(std::unique_ptr<JankMetrics> jank_metrics) {
  if (jank_metrics)
    jank_count_ += jank_metrics->jank_count_;
}

}  // namespace cc