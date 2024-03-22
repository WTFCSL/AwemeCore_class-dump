//
//     Generated by private class-dump
//

@class AWEAwemeModel, NSMutableArray, AWEIMStickerModel;
@protocol AWECommentInputViewManagerDelegate;

@protocol AWECommentInputViewManagerProtocol <NSObject>

@property (nonatomic, copy) id /* block */ willShowKeyboard;
@property (nonatomic, copy) id /* block */ willTriggleShowKeyboard;
@property (nonatomic, copy) id /* block */ willChangeFrame;
@property (nonatomic, copy) id /* block */ didShowKeyboard;
@property (nonatomic, copy) id /* block */ willHideKeyboard;
@property (nonatomic, copy) id /* block */ didHideKeyboard;
@property (nonatomic, copy) id /* block */ userTappedSend;
@property (nonatomic, copy) id /* block */ forbidComment;
@property (nonatomic, copy) id /* block */ tapReturnKeyboard;
@property (nonatomic, copy) id /* block */ willShowInputViewAdditional;
@property (nonatomic, copy) id /* block */ didSendAlbumVideoComment;
@property (nonatomic, copy) id /* block */ commentSentSuccessfully;
@property (nonatomic, copy) id /* block */ commentWillSendAndCustomSendAction;
@property (nonatomic, copy) id /* block */ commentSentFailed;
@property (nonatomic, copy) id /* block */ willPausePreviousPlayer;
@property (nonatomic, copy) id /* block */ willResumePreviousPlayer;
@property (nonatomic, readonly) NSMutableArray *extraInfo;
@property (nonatomic, readonly) AWEIMStickerModel *sticker;
@property (nonatomic, readonly) AWEAwemeModel *awemeModel;
@property (nonatomic, weak) id<AWECommentInputViewManagerDelegate> delegate;

- (id /* block */)didSendAlbumVideoComment;
- (void)setDidSendAlbumVideoComment:(id /* block */)arg0;
- (id /* block */)willPausePreviousPlayer;
- (void)setWillPausePreviousPlayer:(id /* block */)arg0;
- (id /* block */)willResumePreviousPlayer;
- (void)setWillResumePreviousPlayer:(id /* block */)arg0;
- (id)awemeModel;
- (void)recoverInputContent:(id)arg0;
- (id)inputContent;
- (BOOL)hasContentToSend;
- (void)clearAllInputContent;
- (id /* block */)willShowKeyboard;
- (id /* block */)willTriggleShowKeyboard;
- (void)setWillTriggleShowKeyboard:(id /* block */)arg0;
- (id /* block */)willChangeFrame;
- (void)setWillChangeFrame:(id /* block */)arg0;
- (id /* block */)didShowKeyboard;
- (id /* block */)willHideKeyboard;
- (id /* block */)didHideKeyboard;
- (id /* block */)userTappedSend;
- (void)setUserTappedSend:(id /* block */)arg0;
- (id /* block */)forbidComment;
- (void)setForbidComment:(id /* block */)arg0;
- (id /* block */)tapReturnKeyboard;
- (void)setTapReturnKeyboard:(id /* block */)arg0;
- (id /* block */)willShowInputViewAdditional;
- (void)setWillShowInputViewAdditional:(id /* block */)arg0;
- (id /* block */)commentSentSuccessfully;
- (void)setCommentSentSuccessfully:(id /* block */)arg0;
- (id /* block */)commentWillSendAndCustomSendAction;
- (void)setCommentWillSendAndCustomSendAction:(id /* block */)arg0;
- (id /* block */)commentSentFailed;
- (void)setCommentSentFailed:(id /* block */)arg0;
- (void)showKeyBoardWithMethod:(long long)arg0;
- (void)showKeyBoardWithMethod:(long long)arg0;
- (void)updateWithAweme:(id)arg0 context:(id)arg1;
- (void)updateWithAweme:(id)arg0 context:(id)arg1;
- (void)updateCommentPlaceholderWithReplyComment:(id)arg0;
- (void)updateCommentPlaceholderWithReplyComment:(id)arg0;
- (id)currentCommentInputView;
- (id)currentCommentListInputView;
- (void)resetInputAfterSendIfNeed;
- (BOOL)canReplyCommentWithModel:(id)arg0 failReasonCallBack:(id /* block */)arg1;
- (BOOL)canReplyCommentWithModel:(id)arg0 failReasonCallBack:(id /* block */)arg1;
- (void)publishComment:(id)arg0 skipToast:(BOOL)arg1;
- (void)publishComment:(id)arg0 skipToast:(BOOL)arg1 isRetry:(BOOL)arg2 waitInterval:(long long)arg3;
- (struct CGSize { double x0; double x1; })currentKeyboardSize;
- (void)showWithAweme:(id)arg0 context:(id)arg1;
- (void)showWithAweme:(id)arg0 context:(id)arg1;
- (void)setWillHideKeyboard:(id /* block */)arg0;
- (void)setWillShowKeyboard:(id /* block */)arg0;
- (void)setDidHideKeyboard:(id /* block */)arg0;
- (void)setDidShowKeyboard:(id /* block */)arg0;
- (void)dismissKeyboard;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (BOOL)isShowingKeyboard;
- (id)sticker;
- (id)extraInfo;
- (id)plainText;

@end
