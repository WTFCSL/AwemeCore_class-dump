//
//     Generated by private class-dump
//

@interface AWECommentSwiftImpl.CommentInputAudioInputElement : _TtGC19AWECommentSwiftImpl27CommentInputViewBaseElementCS_38CommentInputAudioInputElementViewModel_ <AWECommentAudioRecorderControllerDelegate, AWECommentAudioRefactorInputViewDelegate> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_bgMaskView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_audioInputView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_audioRecordController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_audioKeyboardButton;
}

- (void)exitInputViewWhenShowAudioAlert;
- (void)generateAudioPreviewBubbleWithRecordedModel:(id)arg0;
- (void)trackAudioRecordCompletedWithDuration:(long long)arg0 isCleared:(BOOL)arg1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })currentInputViewRect;
- (void)showRecorderAnimation;
- (void)dismissRecorderAnimation;
- (void)audioKeyboardButtonClicked;
- (id)init;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end