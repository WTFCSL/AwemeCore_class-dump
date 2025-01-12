//
//     Generated by private class-dump
//

@class AWECommentPublishGuidanceEmoticonModel, NSDictionary, AWECommentActionContainer, UIView, AWECommentModel, NSString, AWEIMConversationInfoModel, NSAttributedString, AWEIMStickerModel, AWEAwemeModel, NSArray, AWECommentAudioModel, AWEGrowingTextView, UIImage;
@protocol AWECommentAudioInputViewProtocol, AWECommentSearchHelperProtocol, AWECommentQuickCommentHelperProtocol, AWECommentPublishVideoModelProtocol, AWECommentListInputViewDelegate, AWETextInputControllerProtocol, AWEStudioComment, AWECommentGeneralModelProtocol, AWEPlayInteractionContextProtocol;

@protocol AWECommentListInputViewProtocol

@property (nonatomic, weak) id<AWECommentListInputViewDelegate> delegate;
@property (nonatomic, readonly) NSAttributedString *mediaAdaptTextViewAttribute;
@property (nonatomic, readonly) AWEGrowingTextView *textView;
@property (nonatomic, readonly) AWECommentActionContainer *actionContainer;
@property (nonatomic, readonly) id<AWETextInputControllerProtocol> textInputController;
@property (nonatomic, retain) id<AWECommentSearchHelperProtocol> searchHelper;
@property (nonatomic, retain) id<AWECommentQuickCommentHelperProtocol> quickCommentHelper;
@property (nonatomic, weak) id<AWEPlayInteractionContextProtocol> interactionContext;
@property (nonatomic, copy) id /* block */ didUpdateLayoutBlock;
@property (nonatomic, copy) id /* block */ exitLandscapeBlock;
@property (nonatomic, copy) id /* block */ didSendAlbumVideoComment;
@property (nonatomic, copy) id /* block */ willChangeFullscreen;
@property (nonatomic) unsigned long long inputMode;
@property (nonatomic, retain) AWEAwemeModel *model;
@property (nonatomic, retain) AWECommentModel *commentModel;
@property (nonatomic, retain) AWECommentModel *generalCommentModel;
@property (nonatomic) BOOL disableStudioComment;
@property (nonatomic) BOOL isSkipLifeCycleTrigger;
@property (nonatomic) BOOL disableAutoUpdateCommentAndPlaceHolder;
@property (nonatomic) BOOL disableUseDefaultPlaceHolder;
@property (nonatomic) BOOL isContainerFullScreen;
@property (nonatomic) long long giphySelectFrom;
@property (nonatomic, copy) NSString *previousPage;
@property (nonatomic, copy) NSString *referString;
@property (nonatomic, copy) NSString *enterFrom;
@property (nonatomic) unsigned long long inputViewExternScene;
@property (nonatomic, copy) NSString *sendMethod;
@property (nonatomic, copy) NSString *enterMethod;
@property (nonatomic, copy) NSString *emptyContentTips;
@property (nonatomic, copy) NSDictionary *logExtraDict;
@property (nonatomic, copy) NSDictionary *tmpLogExtraDict;
@property (nonatomic, readonly) NSDictionary *monitorDict;
@property (nonatomic, copy) NSDictionary *tmpMediaLogExtraDict;
@property (nonatomic) BOOL isAuthorIdentityChecked;
@property (nonatomic) BOOL commentContainerIsAppear;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) BOOL fullscreen;
@property (nonatomic) BOOL fullscreen;
@property (nonatomic) BOOL isPublishingMediaAblumVideo;
@property (nonatomic) BOOL isInCommentManager;
@property (nonatomic, retain) AWEIMStickerModel *selectedSticker;
@property (nonatomic, retain) UIImage *selectedPicture;
@property (nonatomic, copy) NSArray *selectedPictureList;
@property (nonatomic, copy) NSString *selectedPictureSource;
@property (nonatomic, retain) id<AWECommentPublishVideoModelProtocol> selectedVideoModel;
@property (nonatomic, retain) id<AWEStudioComment> studioComment;
@property (nonatomic, readonly) unsigned long long inputSource;
@property (nonatomic, readonly) BOOL isExpanded;
@property (nonatomic, readonly) BOOL isHorizontalScreen;
@property (nonatomic, readonly) BOOL isAting;
@property (nonatomic, readonly) BOOL isShowingKeyboard;
@property (nonatomic, readonly) BOOL isShowEmoticonBoard;
@property (nonatomic, readonly) BOOL isShowMoreBoard;
@property (nonatomic, readonly) BOOL isChoosingPicture;
@property (nonatomic, readonly) BOOL isFromPaste;
@property (nonatomic, copy) NSString *commentContainerType;
@property (nonatomic, readonly) UIView<AWECommentAudioInputViewProtocol> *audioInputView;
@property (nonatomic, retain) AWECommentAudioModel *selectedAudioModel;
@property (nonatomic, copy) id /* block */ willPausePreviousPlayer;
@property (nonatomic, copy) id /* block */ willResumePreviousPlayer;
@property (nonatomic) long long beginEditingMethodType;
@property (nonatomic) long long oldBeginEditingMethodType;
@property (nonatomic) long long endEditingMethodType;
@property (nonatomic, retain) id<AWECommentGeneralModelProtocol> generalModel;
@property (nonatomic, retain) AWECommentPublishGuidanceEmoticonModel *lastSelectedPublishRecommend;
@property (nonatomic, copy) NSDictionary *bizLogExtraDict;
@property (nonatomic) unsigned long long beginInputSource;
@property (nonatomic) long long externalStartEditingMethodType;
@property (nonatomic, copy) NSString *commentPlaceholderFromExternal;
@property (nonatomic, copy) NSString *commentPlaceholderFromPanelTemporary;
@property (nonatomic) BOOL isFromCommentFeedPublish;
@property (nonatomic, readonly) AWEIMConversationInfoModel *conversationInfo;

- (id /* block */)didSendAlbumVideoComment;
- (void)setDidSendAlbumVideoComment:(id /* block */)arg0;
- (id /* block */)willPausePreviousPlayer;
- (void)setWillPausePreviousPlayer:(id /* block */)arg0;
- (id /* block */)willResumePreviousPlayer;
- (void)setWillResumePreviousPlayer:(id /* block */)arg0;
- (void)recoverInputContent:(id)arg0;
- (id)inputContent;
- (BOOL)hasContentToSend;
- (id)referString;
- (void)clearAllInputContent;
- (void)setCommentPlaceholderFromExternal:(id)arg0;
- (BOOL)isShowingBoard;
- (BOOL)isInputing;
- (void)updateKeyboardWithExtraText:(id)arg0;
- (void)updateKeyboardWithExtraText:(id)arg0;
- (void)hasNecessaryContentToSend:(BOOL)arg0;
- (void)hasNecessaryContentToSend:(BOOL)arg0;
- (void)setEnterFrom:(id)arg0;
- (void)setEnterMethod:(id)arg0;
- (id)mediaAdaptTextViewAttribute;
- (id)actionContainer;
- (id)searchHelper;
- (void)setSearchHelper:(id)arg0;
- (id)quickCommentHelper;
- (void)setQuickCommentHelper:(id)arg0;
- (id /* block */)didUpdateLayoutBlock;
- (void)setDidUpdateLayoutBlock:(id /* block */)arg0;
- (id /* block */)exitLandscapeBlock;
- (void)setExitLandscapeBlock:(id /* block */)arg0;
- (id /* block */)willChangeFullscreen;
- (void)setWillChangeFullscreen:(id /* block */)arg0;
- (id)commentModel;
- (void)setCommentModel:(id)arg0;
- (id)generalCommentModel;
- (void)setGeneralCommentModel:(id)arg0;
- (BOOL)disableStudioComment;
- (void)setDisableStudioComment:(BOOL)arg0;
- (BOOL)isSkipLifeCycleTrigger;
- (void)setIsSkipLifeCycleTrigger:(BOOL)arg0;
- (BOOL)disableAutoUpdateCommentAndPlaceHolder;
- (void)setDisableAutoUpdateCommentAndPlaceHolder:(BOOL)arg0;
- (BOOL)disableUseDefaultPlaceHolder;
- (void)setDisableUseDefaultPlaceHolder:(BOOL)arg0;
- (BOOL)isContainerFullScreen;
- (void)setIsContainerFullScreen:(BOOL)arg0;
- (long long)giphySelectFrom;
- (void)setGiphySelectFrom:(long long)arg0;
- (unsigned long long)inputViewExternScene;
- (void)setInputViewExternScene:(unsigned long long)arg0;
- (void)setSendMethod:(id)arg0;
- (id)enterMethod;
- (id)emptyContentTips;
- (void)setEmptyContentTips:(id)arg0;
- (id)tmpLogExtraDict;
- (void)setTmpLogExtraDict:(id)arg0;
- (id)monitorDict;
- (id)tmpMediaLogExtraDict;
- (void)setTmpMediaLogExtraDict:(id)arg0;
- (BOOL)isAuthorIdentityChecked;
- (void)setIsAuthorIdentityChecked:(BOOL)arg0;
- (BOOL)commentContainerIsAppear;
- (void)setCommentContainerIsAppear:(BOOL)arg0;
- (void)setIsShowing:(BOOL)arg0;
- (BOOL)isPublishingMediaAblumVideo;
- (void)setIsPublishingMediaAblumVideo:(BOOL)arg0;
- (BOOL)isInCommentManager;
- (void)setIsInCommentManager:(BOOL)arg0;
- (id)selectedSticker;
- (void)setSelectedSticker:(id)arg0;
- (id)selectedPicture;
- (void)setSelectedPicture:(id)arg0;
- (id)selectedPictureList;
- (void)setSelectedPictureList:(id)arg0;
- (id)selectedPictureSource;
- (void)setSelectedPictureSource:(id)arg0;
- (id)selectedVideoModel;
- (void)setSelectedVideoModel:(id)arg0;
- (id)studioComment;
- (void)setStudioComment:(id)arg0;
- (BOOL)isHorizontalScreen;
- (BOOL)isAting;
- (BOOL)isShowEmoticonBoard;
- (BOOL)isShowMoreBoard;
- (BOOL)isChoosingPicture;
- (BOOL)isFromPaste;
- (id)commentContainerType;
- (void)setCommentContainerType:(id)arg0;
- (id)audioInputView;
- (id)selectedAudioModel;
- (void)setSelectedAudioModel:(id)arg0;
- (long long)beginEditingMethodType;
- (void)setBeginEditingMethodType:(long long)arg0;
- (long long)oldBeginEditingMethodType;
- (void)setOldBeginEditingMethodType:(long long)arg0;
- (long long)endEditingMethodType;
- (void)setEndEditingMethodType:(long long)arg0;
- (void)setGeneralModel:(id)arg0;
- (id)lastSelectedPublishRecommend;
- (void)setLastSelectedPublishRecommend:(id)arg0;
- (id)bizLogExtraDict;
- (void)setBizLogExtraDict:(id)arg0;
- (unsigned long long)beginInputSource;
- (void)setBeginInputSource:(unsigned long long)arg0;
- (long long)externalStartEditingMethodType;
- (void)setExternalStartEditingMethodType:(long long)arg0;
- (id)commentPlaceholderFromExternal;
- (id)commentPlaceholderFromPanelTemporary;
- (void)setCommentPlaceholderFromPanelTemporary:(id)arg0;
- (BOOL)isFromCommentFeedPublish;
- (void)setIsFromCommentFeedPublish:(BOOL)arg0;
- (id)conversationInfo;
- (void)setDisableBlockedGesture:(BOOL)arg0;
- (void)scrollToVmojiEmoticonTabWithAnimated:(BOOL)arg0;
- (void)scrollToVmojiEmoticonTabWithAnimated:(BOOL)arg0;
- (BOOL)hasVisualAttachment;
- (BOOL)anonymousViewSelected;
- (double)inputViewTop;
- (void)updatePlaceHolderContent:(id)arg0;
- (void)updateStudioComment:(id)arg0;
- (void)updateStudioComment:(id)arg0;
- (void)shieldVideoReplyButtonIfNeed:(BOOL)arg0;
- (void)executeMultiReply:(id)arg0;
- (void)startInput;
- (void)stopInput;
- (void)clearTextViewContent;
- (void)removeSelectedSticker;
- (void)removeSelectedGroup;
- (void)clearUserInputForReuse;
- (void)exitInputView;
- (void)clearAllInputContentWithoutAnimation;
- (id)enterTextTrackParams;
- (id)postCommentTrackParams;
- (id)postCommentTrackParamsWithFakeComment:(id)arg0 isRetry:(BOOL)arg1;
- (id)postCommentTrackParamsWithFakeComment:(id)arg0 isRetry:(BOOL)arg1;
- (id)updateCommentEggPlaceholder;
- (id)getBaseCommentPlaceholder;
- (id)generateStudioCommentInfo;
- (void)setText:(id)arg0 sticker:(id)arg1 imageList:(id)arg2 imageSource:(id)arg3 videoData:(id)arg4 extraInfo:(id)arg5;
- (void)showKeyboardWithExtraText:(id)arg0;
- (void)showKeyboardWithExtraText:(id)arg0;
- (void)startInputWithVideoReplyButton;
- (void)commentPanelDidDismiss;
- (void)reLayoutSubViews;
- (void)addEmojiToInputView:(id)arg0 model:(id)arg1;
- (void)addEmojiToInputView:(id)arg0 model:(id)arg1;
- (id)enterEditingMethodStringFromMethodType:(long long)arg0;
- (id)enterEditingMethodStringFromMethodType:(long long)arg0;
- (id)closeEditingMethodStringFromMethodType:(long long)arg0;
- (id)closeEditingMethodStringFromMethodType:(long long)arg0;
- (id)inputContentTypesString;
- (BOOL)inputContentFirstEmoji;
- (double)emoticonShowAnimationDuration;
- (void)feedCellWillDisplay;
- (void)feedCellDidEndDisplay;
- (void)commentTabWillAppear;
- (void)commentTabWillDisappear;
- (void)commentScrollViewWillBeginDragging:(id)arg0;
- (void)commentViewExpandSubComments;
- (void)commentContainerVCDismiss;
- (void)commentPublished:(id)arg0;
- (void)didSendComment;
- (void)commentWithVideo:(id)arg0 completion:(id /* block */)arg1;
- (void)commentWithVideo:(id)arg0 completion:(id /* block */)arg1;
- (void)backToAWERecorderVC;
- (BOOL)shouldShowAudioFunctionInMorePanel;
- (void)showImagePopover;
- (void)choosePictureFromPhotoAlbumWithExtraLog:(id)arg0 mediaCompletionHandler:(id /* block */)arg1;
- (void)choosePictureFromPhotoAlbumWithExtraLog:(id)arg0 mediaCompletionHandler:(id /* block */)arg1;
- (BOOL)canShowSendAnotherBar;
- (BOOL)canAutoEnterMediaFeedShowSendAnotherBar;
- (void)showSendAnotherBar;
- (void)showSendAnotherBarOnClickBlock:(id /* block */)arg0;
- (void)showSendAnotherBarOnClickBlock:(id /* block */)arg0;
- (void)showLuckyDrawInputViewWithParams:(id)arg0;
- (void)showLuckyDrawInputViewWithParams:(id)arg0;
- (BOOL)showRiskUserAlertDialogBeforeComment;
- (BOOL)needContinueAudioPlay;
- (void)updateUIThemeWithInputViewType:(unsigned long long)arg0;
- (void)updateUIThemeWithInputViewType:(unsigned long long)arg0;
- (void)resetKeyBoardIfExitUnexpectedly;
- (void)addExtraAtEnd:(id)arg0;
- (void)addExtraAtEnd:(id)arg0;
- (void)addExtraAtEnd:(id)arg0 addedFromExternal:(BOOL)arg1;
- (void)addExtraAtEnd:(id)arg0 addedFromExternal:(BOOL)arg1;
- (void)setReferString:(id)arg0;
- (void)setLogExtraDict:(id)arg0;
- (id)logExtraDict;
- (id)enterFrom;
- (void)popoverForMoreButtonWithString:(id)arg0 feature:(id)arg1;
- (void)popoverForMoreButtonWithString:(id)arg0 feature:(id)arg1;
- (id)generalModel;
- (id)textView;
- (void)setInputMode:(unsigned long long)arg0;
- (void)setModel:(id)arg0;
- (unsigned long long)inputMode;
- (void)setFullscreen:(BOOL)arg0;
- (void)setFullscreen:(BOOL)arg0;
- (void)showKeyboard;
- (id)model;
- (BOOL)isFullscreen;
- (BOOL)isFullscreen;
- (BOOL)isShowing;
- (BOOL)isExpanded;
- (id)delegate;
- (id)textInputController;
- (void)setDelegate:(id)arg0;
- (id)previousPage;
- (void)setPreviousPage:(id)arg0;
- (BOOL)isShowingKeyboard;
- (unsigned long long)inputSource;
- (void)updateWithModel:(id)arg0;
- (void)updateWithModel:(id)arg0;
- (id)interactionContext;
- (void)setInteractionContext:(id)arg0;
- (id)plainText;
- (id)sendMethod;
- (id)additionalText;

@optional

- (void)showAccessoryView:(BOOL)arg0;

@end
