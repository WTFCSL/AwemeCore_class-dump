//
//     Generated by private class-dump
//

@protocol AWECommentInputViewControllerDelegate <NSObject>

- (void)commentInputViewControllerSendCommentFinished:(id)arg0 model:(id)arg1 error:(id)arg2;
- (void)commentInputViewControllerCreateRepostFinished:(id)arg0 success:(BOOL)arg1 extraLog:(id)arg2;

@optional

- (void)commentInputViewShrinkButtonClicked:(id)arg0;
- (BOOL)commentInputGrowingTextViewShouldBeginEditing:(id)arg0;
- (void)commentInputViewFastEmojiBarDidClickedWithImage:(id)arg0 emoticonModel:(id)arg1 index:(long long)arg2;
- (id)commentInputViewFastEmojiAnimationParentView;
- (BOOL)manager_commentInputViewShouldReturn:(id)arg0;
- (BOOL)manager_commentInputViewCustomSendAction:(id)arg0;
- (BOOL)manager_commentInputViewShouldBeginEditing:(id)arg0;
- (void)commentInputViewController:(id)arg0 textViewDidBeginEditing:(id)arg1;
- (void)manager_commentInputViewDanmakuSwitchButtonClicked;
- (BOOL)commentInputViewControllerWillSendComment:(id)arg0 fakeModel:(id)arg1;

@end
