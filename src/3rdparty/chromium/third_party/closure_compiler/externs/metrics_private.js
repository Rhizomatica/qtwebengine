// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file was generated by:
//   tools/json_schema_compiler/compiler.py.
// NOTE: The format of types has changed. 'FooType' is now
//   'chrome.metricsPrivate.FooType'.
// Please run the closure compiler before committing changes.
// See https://chromium.googlesource.com/chromium/src/+/master/docs/closure_compilation.md

/** @fileoverview Externs generated from namespace: metricsPrivate */

/** @const */
chrome.metricsPrivate = {};

/**
 * @enum {string}
 */
chrome.metricsPrivate.MetricTypeType = {
  HISTOGRAM_LOG: 'histogram-log',
  HISTOGRAM_LINEAR: 'histogram-linear',
};

/**
 * Describes the type of metric that is to be collected.
 * @typedef {{
 *   metricName: string,
 *   type: !chrome.metricsPrivate.MetricTypeType,
 *   min: number,
 *   max: number,
 *   buckets: number
 * }}
 */
chrome.metricsPrivate.MetricType;

/**
 * @typedef {{
 *   min: number,
 *   max: number,
 *   count: number
 * }}
 */
chrome.metricsPrivate.HistogramBucket;

/**
 * @typedef {{
 *   sum: number,
 *   buckets: !Array<!chrome.metricsPrivate.HistogramBucket>
 * }}
 */
chrome.metricsPrivate.Histogram;

/**
 * Get details about a histogram displayed at chrome://histogram.
 * @param {string} name Histogram name, e.g. 'Accessibility.CrosAutoclick'.
 * @param {function(!chrome.metricsPrivate.Histogram): void} callback Invoked
 *     with details.
 */
chrome.metricsPrivate.getHistogram = function(name, callback) {};

/**
 * Returns true if the user opted in to sending crash reports.
 * @param {function(boolean): void} callback
 */
chrome.metricsPrivate.getIsCrashReportingEnabled = function(callback) {};

/**
 * Returns the group name chosen for the named trial, or the empty string if the
 * trial does not exist or is not enabled.
 * @param {string} name
 * @param {function(string): void} callback
 */
chrome.metricsPrivate.getFieldTrial = function(name, callback) {};

/**
 * Returns variation parameters for the named trial if available, or undefined
 * otherwise.
 * @param {string} name
 * @param {function((Object|undefined)): void} callback
 */
chrome.metricsPrivate.getVariationParams = function(name, callback) {};

/**
 * Records an action performed by the user.
 * @param {string} name
 */
chrome.metricsPrivate.recordUserAction = function(name) {};

/**
 * Records a percentage value from 1 to 100.
 * @param {string} metricName
 * @param {number} value
 */
chrome.metricsPrivate.recordPercentage = function(metricName, value) {};

/**
 * Records a value than can range from 1 to 1,000,000.
 * @param {string} metricName
 * @param {number} value
 */
chrome.metricsPrivate.recordCount = function(metricName, value) {};

/**
 * Records a value than can range from 1 to 100.
 * @param {string} metricName
 * @param {number} value
 */
chrome.metricsPrivate.recordSmallCount = function(metricName, value) {};

/**
 * Records a value than can range from 1 to 10,000.
 * @param {string} metricName
 * @param {number} value
 */
chrome.metricsPrivate.recordMediumCount = function(metricName, value) {};

/**
 * Records an elapsed time of no more than 10 seconds.  The sample value is
 * specified in milliseconds.
 * @param {string} metricName
 * @param {number} value
 */
chrome.metricsPrivate.recordTime = function(metricName, value) {};

/**
 * Records an elapsed time of no more than 3 minutes.  The sample value is
 * specified in milliseconds.
 * @param {string} metricName
 * @param {number} value
 */
chrome.metricsPrivate.recordMediumTime = function(metricName, value) {};

/**
 * Records an elapsed time of no more than 1 hour.  The sample value is
 * specified in milliseconds.
 * @param {string} metricName
 * @param {number} value
 */
chrome.metricsPrivate.recordLongTime = function(metricName, value) {};

/**
 * Increments the count associated with the hash of |value| in the sparse
 * histogram defined by the |metricName|.
 * @param {string} metricName
 * @param {string} value
 */
chrome.metricsPrivate.recordSparseHashable = function(metricName, value) {};

/**
 * Increments the count associated with |value| in the sparse histogram defined
 * by the |metricName|.
 * @param {string} metricName
 * @param {number} value
 */
chrome.metricsPrivate.recordSparseValue = function(metricName, value) {};

/**
 * Adds a value to the given metric.
 * @param {!chrome.metricsPrivate.MetricType} metric
 * @param {number} value
 */
chrome.metricsPrivate.recordValue = function(metric, value) {};

/**
 * Records a boolean value to the given metric. Analogous to
 * base::UmaHistogramBoolean().
 * @param {string} metricName
 * @param {boolean} value
 */
chrome.metricsPrivate.recordBoolean = function(metricName, value) {};

/**
 * Records an enumeration value to the given metric. Analogous to
 * base::UmaHistogramEnumeration(). Use recordSparseValue for sparse enums or
 * enums not starting at 0.
 * @param {string} metricName
 * @param {number} value
 * @param {number} enumSize
 */
chrome.metricsPrivate.recordEnumerationValue = function(metricName, value, enumSize) {};