//
//     Generated by private class-dump
//

@interface AWECommentSwiftImpl.CommentInputViewDispatcher : NSObject <AWETextInputControllerDelegate, AWEGrowingTextViewDelegate> {
    void /* unknown type, empty encoding */ elementList;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ container;
    void /* unknown type, empty encoding */ configuration;
}

- (void)textInputDismissCompletion;
- (void)textInputValueChanged:(id)arg0;
- (void)textInputDidAddUser:(id)arg0;
- (void)textInputDidDeleteUser:(id)arg0;
- (void)textInputDidClearInputData:(id)arg0;
- (void)textInput:(id)arg0 didDeleteTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1;
- (void)textInputDidDeleteDuetChain:(id)arg0;
- (void)textInputDidExceedMaxLength:(id)arg0;
- (void)textInputDidDeleteCommentChain:(id)arg0;
- (void)textInputDidExceedMaxUserCount:(id)arg0;
- (void)textInputDidNeedClosingSuggestion:(id)arg0;
- (void)textInputDidStartLoadingSuggestions:(id)arg0;
- (void)textInput:(id)arg0 didReplaceTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 withText:(id)arg2;
- (void)textInput:(id)arg0 didRequestSuggestion:(id)arg1 hitBlockList:(BOOL)arg2;
- (double)textInputCurrentAwemeDuration:(id)arg0;
- (BOOL)textInputTimeExtraShouldShowUnderLine:(id)arg0;
- (BOOL)textInputShouldMatchTimeExtra:(id)arg0;
- (void)growingTextViewDidChange:(id)arg0;
- (void)growingTextViewDidEndEditing:(id)arg0;
- (void)growingTextViewDidBeginEditing:(id)arg0;
- (void)growingTextViewDidChangeSelection:(id)arg0;
- (void)growingTextView:(id)arg0 didChangeHeight:(float)arg1;
- (void)growingTextView:(id)arg0 willChangeHeight:(float)arg1;
- (id)growingTextView:(id)arg0 itemsForDrag:(id)arg1;
- (BOOL)growingTextView:(id)arg0 shouldInteractWithTextAttachment:(id)arg1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg2 interaction:(long long)arg3;
- (BOOL)growingTextViewShouldEndEditing:(id)arg0;
- (BOOL)growingTextViewShouldBeginEditing:(id)arg0;
- (BOOL)growingTextView:(id)arg0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 replacementText:(id)arg2;
- (id)init;
- (void).cxx_destruct;

@end
