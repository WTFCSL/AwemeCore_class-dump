//
//     Generated by private class-dump
//

@class ACCVideoEditFlowControlViewModel, UIView, NSNumber, NSString, UIImageView, UIButton, NSObject, UILabel, ACCAnimatedButton;
@protocol ACCLoadingViewProtocol, ACCInfoStickerServiceProtocol, ACCEditTransitionServiceProtocol, ACCEditClipV1ServiceProtocol, ACCVideoEditTipsService, ACCPublishServiceProtocol, ACCEditPublishSettingsServiceProtocol, ACCEditScanServiceProtocol, ACCNewActionSheetProtocol, ACCRichTextEditorServiceProtocol, ACCQuickSaveService, ACCAIGCEffectServiceProtocol, ACCEditMusicServiceProtocol, ACCEditViewContainer, ACCSequenceEditServiceProtocol, ACCVideoEditBottomControlService, ACCEditServiceProtocol, ACCMultiStyleAlertProtocol;

@interface ACCVideoEditFlowControlComponent : ACCFeatureComponent <ACCPublishServiceMessage, ACCActionSheetDelegate, ACCVideoEditTipsServiceSubscriber, ACCVideoEditBottomControlSubscriber, ACCSubtitleActionSheetDelegate, ACCTouchSensingViewSubscriberProtocol, ACCEditSessionLifeCircleEvent, ACCEditScanServiceSubscriber> {
    BOOL _hasKVOController;
    BOOL _isFirstAppear;
    BOOL _isViewAppear;
    BOOL _didIgnoreImageAlbumEditFirstTransformTrack;
    BOOL _dismissed;
    BOOL _didResetBackAlertFlag;
    BOOL _finishCreateSceneWhenDismiss;
    BOOL _ignoreSaveDraftWhenDismiss;
    BOOL _ignoreDeleteDraftWhenDismiss;
    BOOL _ignoreCancelBlock;
    BOOL _hasMarkedStayInRecorderView;
    BOOL _isSaveDraftDidClicked;
    BOOL _viewHasAppeared;
    BOOL _isImageAlbumEditPublish;
    BOOL _isImageAlbumNeedSave;
    ACCAnimatedButton *_backButton;
    UIButton *_nextButton;
    UIButton *_publishButton;
    UIButton *_publishNormalButton;
    UILabel *_nextLabel;
    UIImageView *_nextImageView;
    UIView *_bottomBackButton;
    ACCVideoEditFlowControlViewModel *_viewModel;
    UIView<ACCLoadingViewProtocol> *_loadingView;
    id /* block */ _backAlertConfig;
    NSObject<ACCMultiStyleAlertProtocol> *_backAlert;
    id<ACCNewActionSheetProtocol> _backActionSheet;
    id<ACCPublishServiceProtocol> _publishService;
    id<ACCEditViewContainer> _viewContainer;
    id<ACCVideoEditTipsService> _tipsSerivce;
    id<ACCEditServiceProtocol> _editService;
    id<ACCSequenceEditServiceProtocol> _sequenceEditService;
    id<ACCQuickSaveService> _quickSaveService;
    id<ACCEditMusicServiceProtocol> _musicService;
    id<ACCVideoEditBottomControlService> _bottomControlService;
    id<ACCInfoStickerServiceProtocol> _infoStickerService;
    id<ACCEditTransitionServiceProtocol> _transitionService;
    id<ACCEditClipV1ServiceProtocol> _clipServiceV1;
    id<ACCRichTextEditorServiceProtocol> _richTextEditorService;
    id<ACCAIGCEffectServiceProtocol> _aigcService;
    id /* block */ _finishCreateSceneCompletion;
    id<ACCEditPublishSettingsServiceProtocol> _publishSettingsService;
    id<ACCEditScanServiceProtocol> _editScanService;
    NSNumber *_totalVideoDuration;
}

@property (retain, nonatomic) ACCAnimatedButton *backButton;
@property (retain, nonatomic) UIButton *nextButton;
@property (retain, nonatomic) UIButton *publishButton;
@property (retain, nonatomic) UIButton *publishNormalButton;
@property (retain, nonatomic) UILabel *nextLabel;
@property (retain, nonatomic) UIImageView *nextImageView;
@property (retain, nonatomic) UIView *bottomBackButton;
@property (retain, nonatomic) ACCVideoEditFlowControlViewModel *viewModel;
@property (retain, nonatomic) UIView<ACCLoadingViewProtocol> *loadingView;
@property (copy, nonatomic) id /* block */ backAlertConfig;
@property (retain, nonatomic) NSObject<ACCMultiStyleAlertProtocol> *backAlert;
@property (retain, nonatomic) id<ACCNewActionSheetProtocol> backActionSheet;
@property (retain, nonatomic) id<ACCPublishServiceProtocol> publishService;
@property (nonatomic) BOOL hasKVOController;
@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCVideoEditTipsService> tipsSerivce;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (weak, nonatomic) id<ACCQuickSaveService> quickSaveService;
@property (weak, nonatomic) id<ACCEditMusicServiceProtocol> musicService;
@property (weak, nonatomic) id<ACCVideoEditBottomControlService> bottomControlService;
@property (weak, nonatomic) id<ACCInfoStickerServiceProtocol> infoStickerService;
@property (weak, nonatomic) id<ACCEditTransitionServiceProtocol> transitionService;
@property (weak, nonatomic) id<ACCEditClipV1ServiceProtocol> clipServiceV1;
@property (weak, nonatomic) id<ACCRichTextEditorServiceProtocol> richTextEditorService;
@property (weak, nonatomic) id<ACCAIGCEffectServiceProtocol> aigcService;
@property (nonatomic) BOOL isFirstAppear;
@property (nonatomic) BOOL isViewAppear;
@property (nonatomic) BOOL didIgnoreImageAlbumEditFirstTransformTrack;
@property (nonatomic) BOOL dismissed;
@property (nonatomic) BOOL didResetBackAlertFlag;
@property (nonatomic, getter=shouldFinishCreateSceneWhenDismiss) BOOL finishCreateSceneWhenDismiss;
@property (copy, nonatomic) id /* block */ finishCreateSceneCompletion;
@property (nonatomic) BOOL ignoreSaveDraftWhenDismiss;
@property (nonatomic) BOOL ignoreDeleteDraftWhenDismiss;
@property (nonatomic) BOOL ignoreCancelBlock;
@property (nonatomic) BOOL hasMarkedStayInRecorderView;
@property (nonatomic) BOOL isSaveDraftDidClicked;
@property (retain, nonatomic) id<ACCEditPublishSettingsServiceProtocol> publishSettingsService;
@property (nonatomic) BOOL viewHasAppeared;
@property (retain, nonatomic) id<ACCEditScanServiceProtocol> editScanService;
@property (retain, nonatomic) NSNumber *totalVideoDuration;
@property (nonatomic) BOOL isImageAlbumEditPublish;
@property (nonatomic) BOOL isImageAlbumNeedSave;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)publishModel;
- (BOOL)isViewAppear;
- (void)setIsViewAppear:(BOOL)arg0;
- (void)setIsFirstAppear:(BOOL)arg0;
- (id)totalVideoDuration;
- (void)p_bindViewModel;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (void)componentDidAppear;
- (void)componentWillDisappear;
- (unsigned long long)preferredLoadPhase;
- (void)componentWillAppear;
- (void)componentDidDisappear;
- (void)p_dismissLoadingView;
- (void)nextButtonClicked;
- (id)transitionService;
- (void)setTransitionService:(id)arg0;
- (id)musicService;
- (void)setMusicService:(id)arg0;
- (id)nextImageView;
- (void)setNextImageView:(id)arg0;
- (void)setPublishService:(id)arg0;
- (id)publishService;
- (id)editService;
- (void)loadComponentView;
- (id)serviceBinding;
- (void)setEditService:(id)arg0;
- (void)bindServices:(id)arg0;
- (void)closeSearchPage;
- (id)publishButton;
- (void)setPublishButton:(id)arg0;
- (id)replacedShareToDairyTextWithOriginalText:(id)arg0;
- (void)setNextLabel:(id)arg0;
- (id)sequenceEditService;
- (void)setSequenceEditService:(id)arg0;
- (void)setQuickSaveService:(id)arg0;
- (void)setBottomControlService:(id)arg0;
- (id)bottomControlService;
- (id)quickSaveService;
- (id)stickerService;
- (void)backClicked;
- (void)removePreUploadingTaskWhenQuit;
- (void)configNextButton;
- (void)firstRenderWithEditService:(id)arg0;
- (void)sensorialRenderWithEditService:(id)arg0;
- (id)tipsSerivce;
- (void)tipService:(id)arg0 didShowFunctionBubbleWithFunctionType:(long long)arg1;
- (void)setTipsSerivce:(id)arg0;
- (void)publishServiceTaskWillAppend:(id)arg0;
- (void)publishServiceTaskDidAppend:(id)arg0;
- (void)publishServiceDraftDidSave;
- (void)onLongPressed:(id)arg0;
- (BOOL)shouldRespondToLongPressGesture;
- (void)publishButtonClicked;
- (void)jumpToPublishViewController;
- (void)updateSecurityFramesConfigIfNeeded;
- (BOOL)hasKVOController;
- (void)setHasKVOController:(BOOL)arg0;
- (void)setTotalVideoDuration:(id)arg0;
- (id)richTextEditorService;
- (id /* block */)p_generateStoryTTLViewIfNeeded;
- (id)publishSettingsService;
- (void)editBottomPanelDidTap:(id)arg0 type:(long long)arg1;
- (void)setPublishSettingsService:(id)arg0;
- (void)setRichTextEditorService:(id)arg0;
- (void)configBottomViewIfNeeded;
- (id)editAndPublishViewBackButtonTitle;
- (id)backAlert;
- (void)setBackAlert:(id)arg0;
- (void)p_dismissSelf:(BOOL)arg0;
- (id)infoStickerService;
- (void)setInfoStickerService:(id)arg0;
- (void)clickScanStickerOpenSearchPage;
- (id)aigcService;
- (void)setAigcService:(id)arg0;
- (BOOL)p_showBackAlertForDraftIfNeeded;
- (BOOL)p_showBackAlertIfNeeded;
- (id /* block */)p_draftBackAlertConfig;
- (void)setBackAlertConfig:(id /* block */)arg0;
- (id)p_businessActionConfigs;
- (BOOL)p_shouldShowSaveDraftAction;
- (BOOL)p_filterBaseCaseForShowAction;
- (id /* block */)p_alertConfigWithoutAction;
- (id /* block */)p_cancelActionConfig;
- (id /* block */)p_saveDraftActionConfig;
- (id)p_commonBackAlertActionTrackInfo;
- (id /* block */)backAlertConfig;
- (void)touchSensingView:(id)arg0 didHitTestPoint:(struct CGPoint { double x0; double x1; })arg1 event:(id)arg2 resultView:(id)arg3;
- (id)editScanService;
- (void)prepareBeforeJumpToPostPage;
- (void)postExitEditPageMessage;
- (void)p_updatePublishBtnUI;
- (void)hidePublishButtonAndUpdateNextButtonFrameIfNeed;
- (void)updateCloseFriendsStoryPublishButton;
- (id)clipServiceV1;
- (void)logNextButton;
- (BOOL)p_shouldDisableNext;
- (id)currentNextButton;
- (void)publishDailyPrivateWork;
- (void)p_publishNormalVideo:(BOOL)arg0;
- (BOOL)isOldQuickShare;
- (void)handleQuickShareDoneActionWithMethod:(id)arg0;
- (void)handleNewStyleQuickShareDoneActionWithMethod:(id)arg0;
- (void)publishImpl;
- (void)updatePublishStoryButtonContent;
- (void)aigcBackClicked;
- (id)quickPublishText;
- (void)addLongPressGestureForButton:(id)arg0;
- (void)buildQuickStoryBottomPanel;
- (void)configCornerRadius:(double)arg0 forView:(id)arg1;
- (void)p_updatePublishBtnAndNextBtnUIToOriginStyle;
- (id)fusionMomentEditPublishBtnTitleReplace:(id)arg0;
- (double)bottomButtonLeftGap;
- (id)editPublishOneButtonText;
- (void)forbidCommerce;
- (void)shootHomeUpdateNexBtnIfNeeded;
- (void)liteRedPackUpdateNextButtonIfNeeded;
- (void)p_updateNextButtonTextIfNeeded;
- (void)hidePublishButtonAndUpdateNextButtonFrame;
- (BOOL)dualCameraHidePublishButton;
- (BOOL)fusionMomentHidePublishButtonIfNeed;
- (BOOL)p_disableNextBtn;
- (BOOL)backClicked:(id)arg0;
- (id /* block */)p_shortPathAlbumImageAlertConfig;
- (BOOL)p_showRedpackDraftAlertIfNeeded;
- (BOOL)backToShootNeedAlert:(BOOL)arg0;
- (BOOL)p_isNeedAlertForBackToShoot;
- (BOOL)hideBackAlertAtShareToStoryScene;
- (BOOL)p_isSegment;
- (BOOL)ignoreDeleteDraftWhenDismiss;
- (BOOL)ignoreSaveDraftWhenDismiss;
- (void)setBackActionSheet:(id)arg0;
- (id)backActionSheet;
- (BOOL)hasMarkedStayInRecorderView;
- (void)p_dismissLoadingViewWithTaptic;
- (void)setFinishCreateSceneWhenDismiss:(BOOL)arg0;
- (BOOL)shouldFinishCreateSceneWhenDismiss;
- (id /* block */)finishCreateSceneCompletion;
- (BOOL)isSaveDraftDidClicked;
- (void)p_resetRecorderData;
- (BOOL)ignoreCancelBlock;
- (void)p_origNextButtonClicked;
- (void)p_triggerCustomAction:(id /* block */)arg0;
- (void)updateRenderContentEditStatus;
- (BOOL)isImageAlbumEditPublish;
- (BOOL)isImageAlbumNeedSave;
- (void)setIsImageAlbumEditPublish:(BOOL)arg0;
- (id)publishNormalButton;
- (void)p_publishNormal;
- (void)p_publishWithDistributeType:(unsigned long long)arg0;
- (void)p_publishNormalVideo;
- (void)handlePublishButtonClickedAction;
- (void)setHasMarkedStayInRecorderView:(BOOL)arg0;
- (void)publishDailyWork;
- (void)handleQuickSharePublishDailyPrivateAction;
- (void)handlePublishDailyPrivateWork;
- (void)p_publishStoryVideo;
- (id)p_commonTrackInfoForDraft;
- (void)p_saveOriginalDraftThenFinishCreateScene;
- (void)p_deleteDraftThenFinishCreateScene;
- (id)bottomBackButton;
- (void)p_saveCurrentDraftThenFinishCreateScene:(id /* block */)arg0;
- (void)p_backToShootForDraft;
- (void)p_finishCreateSceneForDraft;
- (void)p_saveOriginalDraftWithCompletion:(id /* block */)arg0;
- (void)p_saveCurrentDraftWithCompletion:(id /* block */)arg0;
- (void)trackShortPathReturnAlertAction:(id)arg0 extraInfo:(id)arg1;
- (void)setIsImageAlbumNeedSave:(BOOL)arg0;
- (void)setIgnoreSaveDraftWhenDismiss:(BOOL)arg0;
- (void)p_finishCreateScene;
- (BOOL)p_needForceShowBackAlert;
- (void)p_resetBackAlertTypeIfNeed;
- (id /* block */)p_combineBackAlertConfigsWithBusinessConfigs:(id)arg0;
- (void)setDidResetBackAlertFlag:(BOOL)arg0;
- (BOOL)didResetBackAlertFlag;
- (id /* block */)p_clearAndReturnActionConfig;
- (id /* block */)quickShareCancelActionConfig;
- (id /* block */)quickShareDoneActionConfig;
- (id /* block */)p_saveAlbumActionConfig;
- (void)setIsSaveDraftDidClicked:(BOOL)arg0;
- (BOOL)p_shouldStayInRecorder;
- (void)setIgnoreDeleteDraftWhenDismiss:(BOOL)arg0;
- (void)setIgnoreCancelBlock:(BOOL)arg0;
- (void)setFinishCreateSceneCompletion:(id /* block */)arg0;
- (void)cancelPreviousQuickShare;
- (void)exitEditPage;
- (void)publishNormalButtonClicked;
- (void)setBottomBackButton:(id)arg0;
- (void)publishSchoolCircle;
- (void)showOptionViewController;
- (void)updateCloseFriendsStoryPublishButtonWithIsCloseFriendsSelected:(BOOL)arg0 isFriendsSelected:(BOOL)arg1;
- (void)updateFriendsDailyPublishButtonDisplay;
- (void)updateQuickPublishBtn;
- (void)configPublishButtonIconWithUserAvatar:(id)arg0;
- (BOOL)isStoryTTLScene;
- (id)recreatePublishServiceIfNeeded;
- (void)trackGameExitActionWithStatus:(id)arg0;
- (void)p_generateCoverAndSaveDraft;
- (void)p_saveCurrentDraftHiddenWithCompletion:(id /* block */)arg0;
- (void)setPublishNormalButton:(id)arg0;
- (void)setClipServiceV1:(id)arg0;
- (BOOL)didIgnoreImageAlbumEditFirstTransformTrack;
- (void)setDidIgnoreImageAlbumEditFirstTransformTrack:(BOOL)arg0;
- (void)setEditScanService:(id)arg0;
- (void)setDismissed:(BOOL)arg0;
- (void).cxx_destruct;
- (id)containerViewController;
- (BOOL)dismissed;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)dealloc;
- (id)backButton;
- (void)setBackButton:(id)arg0;
- (void)dismissViewController:(id /* block */)arg0;
- (void)dismissHandler;
- (id)nextButton;
- (void)setNextButton:(id)arg0;
- (BOOL)isFirstAppear;
- (BOOL)viewHasAppeared;
- (void)setViewHasAppeared:(BOOL)arg0;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;
- (id)rootPresentingViewController;
- (id)nextLabel;

@end