// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "third_party/blink/renderer/core/editing/editor.h"

#include "third_party/blink/renderer/core/clipboard/system_clipboard.h"
#include "third_party/blink/renderer/core/dom/text.h"
#include "third_party/blink/renderer/core/editing/commands/editor_command.h"
#include "third_party/blink/renderer/core/editing/frame_selection.h"
#include "third_party/blink/renderer/core/editing/selection_template.h"
#include "third_party/blink/renderer/core/editing/testing/editing_test_base.h"
#include "third_party/blink/renderer/core/frame/local_frame.h"
#include "third_party/blink/renderer/core/html/forms/html_input_element.h"
#include "third_party/blink/renderer/platform/testing/unit_test_helpers.h"

namespace blink {

class EditorTest : public EditingTestBase {
 public:
  void TearDown() override {
    GetDocument().GetFrame()->GetSystemClipboard()->WritePlainText(String(""));
    GetDocument().GetFrame()->GetSystemClipboard()->CommitWrite();
    EditingTestBase::TearDown();
  }

  void ExecuteCopy() {
    Editor& editor = GetDocument().GetFrame()->GetEditor();
    editor.CreateCommand("Copy").Execute();
    test::RunPendingTasks();
  }
};

TEST_F(EditorTest, CanCopyCrossingShadowBoundary) {
  const SelectionInDOMTree selection = SetSelectionTextToBody(
      "<p><template data-mode=open>^abc</template></p><b>|</b>");
  Selection().SetSelection(selection, SetSelectionOptions());
  EXPECT_TRUE(GetDocument().GetFrame()->GetEditor().CanCopy());
}

TEST_F(EditorTest, copyGeneratedPassword) {
  // Checks that if the password field has the value generated by Chrome
  // (HTMLInputElement::shouldRevealPassword will be true), copying the field
  // should be available.
  const char* body_content = "<input type='password' id='password'></input>";
  SetBodyContent(body_content);

  auto& element =
      To<HTMLInputElement>(*GetDocument().getElementById("password"));

  const String kPasswordValue = "secret";
  element.focus();
  element.setValue(kPasswordValue);
  element.SetSelectionRange(0, kPasswordValue.length());

  Editor& editor = GetDocument().GetFrame()->GetEditor();
  EXPECT_FALSE(editor.CanCopy());

  element.SetShouldRevealPassword(true);
  EXPECT_TRUE(editor.CanCopy());
}

TEST_F(EditorTest, CopyVisibleSelection) {
  const char* body_content = "<input id=hiding value=HEY>";
  SetBodyContent(body_content);

  auto& text_control =
      To<HTMLInputElement>(*GetDocument().getElementById("hiding"));
  text_control.select();

  ExecuteCopy();

  const String copied =
      GetDocument().GetFrame()->GetSystemClipboard()->ReadPlainText();
  EXPECT_EQ("HEY", copied);
}

TEST_F(EditorTest, DontCopyHiddenSelections) {
  const char* body_content =
      "<input type=checkbox id=checkbox>"
      "<input id=hiding value=HEY>";
  SetBodyContent(body_content);

  auto& text_control =
      To<HTMLInputElement>(*GetDocument().getElementById("hiding"));
  text_control.select();

  auto& checkbox =
      To<HTMLInputElement>(*GetDocument().getElementById("checkbox"));
  checkbox.focus();

  ExecuteCopy();

  const String copied =
      GetDocument().GetFrame()->GetSystemClipboard()->ReadPlainText();
  EXPECT_TRUE(copied.IsEmpty()) << copied << " was copied.";
}

TEST_F(EditorTest, ReplaceSelection) {
  const char* body_content = "<input id=text value='HELLO'>";
  SetBodyContent(body_content);

  auto& text_control =
      To<HTMLInputElement>(*GetDocument().getElementById("text"));
  text_control.select();
  text_control.SetSelectionRange(2, 2);

  Editor& editor = GetDocument().GetFrame()->GetEditor();
  editor.ReplaceSelection("NEW");

  EXPECT_EQ("HENEWLLO", text_control.value());
}

// http://crbug.com/873037
TEST_F(EditorTest, UndoWithInvalidSelection) {
  const SelectionInDOMTree selection = SetSelectionTextToBody(
      "<div contenteditable><div></div><b>^abc|</b></div>");
  Selection().SetSelection(selection, SetSelectionOptions());
  auto& abc = To<Text>(*selection.Base().ComputeContainerNode());
  // Push Text node "abc" into undo stack
  GetDocument().execCommand("italic", false, "", ASSERT_NO_EXCEPTION);
  // Change Text node "abc" in undo stack
  abc.setData("");
  GetDocument().GetFrame()->GetEditor().Undo();
  EXPECT_EQ("<div contenteditable><div></div><b>|</b></div>",
            GetSelectionTextFromBody());
}

}  // namespace blink