//
//     Generated by private class-dump
//

@interface AWECommentSwiftImpl.CommentInputTextView : AWEGrowingTextView <AWEPublishTaskMessage> {
    void /* unknown type, empty encoding */ subElements;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ willExitFullScreen;
    void /* unknown type, empty encoding */ beforeTextWidth;
    void /* unknown type, empty encoding */ tempAdditionalText;
    void /* unknown type, empty encoding */ textInitialWidth;
    void /* unknown type, empty encoding */ textUnfoldInitialWidth;
    void /* unknown type, empty encoding */ textFoldWidth;
    void /* unknown type, empty encoding */ textViewPasted;
    void /* unknown type, empty encoding */ hasSearchRemindTextShown;
    void /* unknown type, empty encoding */ searchRemindText;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ textInputController;
    void /* unknown type, empty encoding */ searchHelper;
    void /* unknown type, empty encoding */ emoticonKeyboardHelper;
    void /* unknown type, empty encoding */ dispatcher;
    void /* unknown type, empty encoding */ inputBgView;
    void /* unknown type, empty encoding */ isPublishingMediaAblumVideo;
    void /* unknown type, empty encoding */ theme;
    void /* unknown type, empty encoding */ replyCommentInfoMap;
    void /* unknown type, empty encoding */ topMargin;
    void /* unknown type, empty encoding */ textBeforePaste;
    void /* unknown type, empty encoding */ cursorPositionBeforePaste;
    void /* unknown type, empty encoding */ fullScreenElement;
    void /* unknown type, empty encoding */ recoverInitialWidth;
    void /* unknown type, empty encoding */ didSetRecordScrollable;
    void /* unknown type, empty encoding */ currentTheme;
    void /* unknown type, empty encoding */ needUpdateSomeElementsState;
    void /* unknown type, empty encoding */ textParagraphStyle;
    void /* unknown type, empty encoding */ recordScrollable;
    void /* unknown type, empty encoding */ intentSpace;
    void /* unknown type, empty encoding */ $__lazy_storage_$_placeHolderLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_intentLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_inputAccessoryElement;
    void /* unknown type, empty encoding */ $__lazy_storage_$_inputTrackerElement;
}

- (void)task:(id)arg0 didEndWithResult:(long long)arg1 error:(id)arg2;
- (void)exitInputView;
- (void)refreshHeight;
- (void)byNewline;
- (void)handleIMPushNoti;
- (void)menuWillShow;
- (void).cxx_destruct;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)initWithCoder:(id)arg0;
- (BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 textContainer:(id)arg1;

@end