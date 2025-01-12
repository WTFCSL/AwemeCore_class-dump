//
//     Generated by private class-dump
//

@class AWEAwemeShareLinkInfo, AWEAwemeDetailViewModel, NSMutableDictionary, AWECampaignWatchViewModel, NSDictionary, AWEAwemeDetailBottomBarCoordinator, AWEBinding, AWEFeedVideoSafetyCheckHandler, UILabel, UIVisualEffectView, UIView, AWEFilterDetailTipView, NSString, AWEAwemeModel, NSArray, AWEDiscoverFeedEntranceView, AWEAwemeDetailGQActivityBanner, NSNumber, UIImageView;
@protocol AWEGrootBottomViewProtocol;

@interface AWEAwemeDetailViewController : AWEAwemeDetailBaseViewController <AWEUserMessage, AWERouterViewControllerProtocol, AWEZoomTransitionInnerContextProvider, AWEStoryContainerViewControllerDelegate, AWEFeedRecordSpeciesTipViewProtocol, AWEDetailVCPopTransitionContextProvider, AWEAwemeDetailViewControllerPrivateProtocol, AWEPlayletPaymentMessage, AWEAwemeDetailViewControllerProtocol> {
    BOOL _isAppear;
    BOOL _isLoading;
    BOOL _showVote;
    BOOL _forbidComment;
    BOOL _level1CommentDeleted;
    BOOL _isForcedToShowInputView;
    BOOL _isForcedToShowInputViewSync;
    BOOL _fromReplyCommentVideo;
    BOOL _shouldShowDefaultText;
    BOOL _shouldShowShareGuideWhenOpen;
    BOOL _shouldWaitForViewerDataBeforeShowingCommentPanel;
    BOOL _hasDisappeared;
    BOOL _needPlayAfterViewDidAppear;
    BOOL _needHandlerPitayaAfterViewDidAppear;
    BOOL _isCommentPanelAppeard;
    BOOL _shouldEnablePushSourceTracker;
    BOOL _isFromPush;
    BOOL _slideToProfile;
    BOOL _isShowLiveReplayToast;
    BOOL _isSendGoldCoinAppeard;
    BOOL _isVideoOrImageReflow;
    BOOL _shouldShowPitayaSharePanel;
    BOOL _commentForceOpenReply;
    BOOL _isFromCommentPublishNotice;
    BOOL _isStoryFromRouter;
    BOOL _ecomReflowTracked;
    BOOL _isFromOwnPostedCommentPage;
    BOOL _isMentionAwemeChannel;
    BOOL _keepObservers;
    BOOL _isNotFirstDidApear;
    BOOL _imageShouldJump;
    BOOL _isFromRouter;
    BOOL _shouldShowFriendsDiggList;
    UIView<AWEGrootBottomViewProtocol> *_grootSpeciesShootTipView;
    NSString *_sharerUID;
    UIVisualEffectView *_effectView;
    AWEFilterDetailTipView *_filterDetailTipView;
    NSString *_awemeID;
    NSString *_authorID;
    NSString *_originImageCommentID;
    NSArray *_insertCids;
    long long _commentLiteRewardCoin;
    NSString *_commentChannel;
    NSArray *_insertLikerIDs;
    NSArray *_insertViewerIDs;
    NSArray *_insertRewarderIDs;
    NSArray *_insertFavoriteIDs;
    NSArray *_insertReqIDs;
    NSString *_notificationAction;
    NSString *_pushCommentID;
    NSNumber *_voteOptionID;
    unsigned long long _intentCommentTab;
    NSString *_popType;
    NSString *_openProductId;
    NSString *_openModalViewBizType;
    NSString *_shareObject;
    long long _adScene;
    NSString *_repostTextFromAITextPanel;
    long long _repostTextStartIdxFromAITextPanel;
    AWEAwemeDetailViewModel *_viewModel;
    AWEAwemeDetailGQActivityBanner *_gqActivityBanner;
    UIView *_returnView;
    AWEDiscoverFeedEntranceView *_discoverEntranceView;
    NSNumber *_yesterdayIncreaseCollectionCount;
    NSString *_nearbyTagName;
    NSString *_commentAuthorID;
    AWEAwemeShareLinkInfo *_linkInfo;
    NSString *_pitayaOpenFEScchema;
    long long _pitayaShareTaskType;
    NSString *_shareTokenHandlerID;
    NSString *_eTaskString;
    NSString *_commentInsertConversationID;
    NSString *_gdLabel;
    AWEAwemeDetailBottomBarCoordinator *_bottomBarCoordinator;
    NSString *_duetFromAwemeId;
    NSString *_imageAlbumIndex;
    long long _awemeType;
    NSDictionary *_ecomShareTrackParams;
    NSString *_bcmShareId;
    NSString *_accountType;
    AWECampaignWatchViewModel *_taskViewModel;
    NSString *_fromMentionUID;
    NSMutableDictionary *_infoPanelDict;
    NSString *_videoShareGroupStr;
    NSString *_firstShareUserID;
    NSString *_subScene;
    NSString *_messageExemptFilter;
    NSString *_sceneFrom;
    NSString *_aigcActivityStickID;
    NSString *_activityVideoType;
    long long _imagePhotosPosition;
    NSString *_sourceBtmToken;
    AWEFeedVideoSafetyCheckHandler *_safetyCheckHandler;
    UIImageView *_upImageView;
    UIImageView *_bottomImageView;
    UIView *_backgroundBlurView;
    UIImageView *_backgroundImageView;
    id _bindPlayerController;
    AWEBinding *_playerBind;
    AWEBinding *_frameBind;
    UIView *_downloadBarView;
    UILabel *_prohibitedMessage;
}

@property (retain, nonatomic) NSString *awemeID;
@property (retain, nonatomic) NSString *authorID;
@property (retain, nonatomic) NSString *originImageCommentID;
@property (retain, nonatomic) NSArray *insertCids;
@property (nonatomic) long long commentLiteRewardCoin;
@property (copy, nonatomic) NSString *commentChannel;
@property (copy, nonatomic) NSArray *insertLikerIDs;
@property (copy, nonatomic) NSArray *insertViewerIDs;
@property (copy, nonatomic) NSArray *insertRewarderIDs;
@property (copy, nonatomic) NSArray *insertFavoriteIDs;
@property (copy, nonatomic) NSArray *insertReqIDs;
@property (retain, nonatomic) NSString *notificationAction;
@property (copy, nonatomic) NSString *pushCommentID;
@property (nonatomic) BOOL showVote;
@property (retain, nonatomic) NSNumber *voteOptionID;
@property (nonatomic) unsigned long long intentCommentTab;
@property (nonatomic) BOOL forbidComment;
@property (copy, nonatomic) NSString *popType;
@property (nonatomic) BOOL level1CommentDeleted;
@property (nonatomic) BOOL isForcedToShowInputView;
@property (nonatomic) BOOL isForcedToShowInputViewSync;
@property (nonatomic) BOOL fromReplyCommentVideo;
@property (copy, nonatomic) NSString *openProductId;
@property (copy, nonatomic) NSString *openModalViewBizType;
@property (copy, nonatomic) NSString *shareObject;
@property (nonatomic) long long adScene;
@property (nonatomic) BOOL shouldShowDefaultText;
@property (nonatomic) BOOL shouldShowShareGuideWhenOpen;
@property (nonatomic) BOOL shouldWaitForViewerDataBeforeShowingCommentPanel;
@property (copy, nonatomic) NSString *repostTextFromAITextPanel;
@property (nonatomic) long long repostTextStartIdxFromAITextPanel;
@property (retain, nonatomic) AWEAwemeDetailViewModel *viewModel;
@property (retain, nonatomic) AWEAwemeDetailGQActivityBanner *gqActivityBanner;
@property (retain, nonatomic) UIView *returnView;
@property (retain, nonatomic) AWEDiscoverFeedEntranceView *discoverEntranceView;
@property (nonatomic) BOOL isAppear;
@property (nonatomic) BOOL isLoading;
@property (nonatomic) BOOL hasDisappeared;
@property (nonatomic) BOOL needPlayAfterViewDidAppear;
@property (nonatomic) BOOL needHandlerPitayaAfterViewDidAppear;
@property (copy, nonatomic) NSString *sharerUID;
@property (nonatomic) BOOL isCommentPanelAppeard;
@property (nonatomic) BOOL shouldEnablePushSourceTracker;
@property (nonatomic) BOOL isFromPush;
@property (nonatomic) BOOL slideToProfile;
@property (nonatomic) BOOL isShowLiveReplayToast;
@property (nonatomic) BOOL isSendGoldCoinAppeard;
@property (retain, nonatomic) NSNumber *yesterdayIncreaseCollectionCount;
@property (nonatomic) BOOL isVideoOrImageReflow;
@property (retain, nonatomic) NSString *nearbyTagName;
@property (retain, nonatomic) NSString *commentAuthorID;
@property (retain, nonatomic) AWEAwemeShareLinkInfo *linkInfo;
@property (nonatomic) BOOL shouldShowPitayaSharePanel;
@property (copy, nonatomic) NSString *pitayaOpenFEScchema;
@property (nonatomic) long long pitayaShareTaskType;
@property (copy, nonatomic) NSString *shareTokenHandlerID;
@property (nonatomic) BOOL commentForceOpenReply;
@property (copy, nonatomic) NSString *eTaskString;
@property (copy, nonatomic) NSString *commentInsertConversationID;
@property (copy, nonatomic) NSString *gdLabel;
@property (retain, nonatomic) AWEAwemeDetailBottomBarCoordinator *bottomBarCoordinator;
@property (copy, nonatomic) NSString *duetFromAwemeId;
@property (nonatomic) BOOL isFromCommentPublishNotice;
@property (copy, nonatomic) NSString *imageAlbumIndex;
@property (nonatomic) BOOL isStoryFromRouter;
@property (nonatomic) long long awemeType;
@property (copy, nonatomic) NSDictionary *ecomShareTrackParams;
@property (copy, nonatomic) NSString *bcmShareId;
@property (nonatomic) BOOL ecomReflowTracked;
@property (copy, nonatomic) NSString *accountType;
@property (nonatomic) BOOL isFromOwnPostedCommentPage;
@property (retain, nonatomic) AWECampaignWatchViewModel *taskViewModel;
@property (retain, nonatomic) UIView<AWEGrootBottomViewProtocol> *grootSpeciesShootTipView;
@property (nonatomic) BOOL isMentionAwemeChannel;
@property (copy, nonatomic) NSString *fromMentionUID;
@property (retain, nonatomic) NSMutableDictionary *infoPanelDict;
@property (copy, nonatomic) NSString *videoShareGroupStr;
@property (copy, nonatomic) NSString *firstShareUserID;
@property (copy, nonatomic) NSString *subScene;
@property (copy, nonatomic) NSString *messageExemptFilter;
@property (nonatomic) BOOL keepObservers;
@property (nonatomic) BOOL isNotFirstDidApear;
@property (copy, nonatomic) NSString *sceneFrom;
@property (copy, nonatomic) NSString *aigcActivityStickID;
@property (copy, nonatomic) NSString *activityVideoType;
@property (nonatomic) long long imagePhotosPosition;
@property (nonatomic) BOOL imageShouldJump;
@property (copy, nonatomic) NSString *sourceBtmToken;
@property (retain, nonatomic) AWEFeedVideoSafetyCheckHandler *safetyCheckHandler;
@property (retain, nonatomic) UIImageView *upImageView;
@property (retain, nonatomic) UIImageView *bottomImageView;
@property (retain, nonatomic) UIView *backgroundBlurView;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (weak, nonatomic) id bindPlayerController;
@property (retain, nonatomic) AWEBinding *playerBind;
@property (retain, nonatomic) AWEBinding *frameBind;
@property (nonatomic) BOOL isFromRouter;
@property (nonatomic) BOOL shouldShowFriendsDiggList;
@property (retain, nonatomic) UIView *downloadBarView;
@property (retain, nonatomic) UILabel *prohibitedMessage;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) AWEFilterDetailTipView *filterDetailTipView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSDictionary *logExtraDict;

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWELiteUGSocialModuleAdapterClass;
+ (Class)aAWEFeedModuleServiceDOUYINLiteAdaperClass;
+ (id)stringArrayFromString:(id)arg0;
+ (Class)aAWEAwemeDetailViewControllerDOUYINLiteAdapterClass;

- (void)didFinishTapTAIsFriendWithUser:(id)arg0 isFriend:(BOOL)arg1;
- (BOOL)configWithRouterParamDict:(id)arg0;
- (void)player:(id)arg0 didChangeStallState:(long long)arg1;
- (id)insertLikerIDs;
- (void)setInsertLikerIDs:(id)arg0;
- (id)insertFavoriteIDs;
- (void)setInsertFavoriteIDs:(id)arg0;
- (id)insertViewerIDs;
- (void)setInsertViewerIDs:(id)arg0;
- (id)insertRewarderIDs;
- (void)setInsertRewarderIDs:(id)arg0;
- (id)insertReqIDs;
- (void)setInsertReqIDs:(id)arg0;
- (BOOL)shouldShowDefaultText;
- (void)setShouldShowDefaultText:(BOOL)arg0;
- (BOOL)isForcedToShowInputView;
- (void)setIsForcedToShowInputView:(BOOL)arg0;
- (BOOL)isForcedToShowInputViewSync;
- (void)setIsForcedToShowInputViewSync:(BOOL)arg0;
- (BOOL)currentVCIsActive;
- (void)storyContainerViewControllerDidChangePlayingModel:(id)arg0 externalModel:(id)arg1;
- (void)player:(id)arg0 didChangePlaybackToAction:(long long)arg1;
- (void)transition_didStartTransitionWithContext:(id)arg0;
- (id)transition_destinatedViewControllerForSlideDirection:(unsigned long long)arg0 gestureRecognizer:(id)arg1;
- (void)seekPlayTimeWithItemID:(id)arg0;
- (unsigned long long)zoomTransitionAllowedTriggerDirection;
- (BOOL)zoomTransitionShouldAnimateWithTransform;
- (id)awesst_enterFrom;
- (id)subScene;
- (BOOL)transition_enableCustomActionForSlideDirection:(unsigned long long)arg0 gestureRecognizer:(id)arg1;
- (id)aAWEPadModuleAdapter;
- (void)awe_onReturnButtonClicked:(id)arg0;
- (BOOL)awesst_isVideoPlayViewController;
- (void)transition_performCustomActionForSlideDirection:(unsigned long long)arg0 gestureRecognizer:(id)arg1;
- (BOOL)forbidComment;
- (void)setForbidComment:(BOOL)arg0;
- (id)openModalViewBizType;
- (void)setOpenModalViewBizType:(id)arg0;
- (void)setIntentCommentTab:(unsigned long long)arg0;
- (void)updateBottomBarWithAweme:(id)arg0 updateTiming:(long long)arg1;
- (id)openProductId;
- (void)setOpenProductId:(id)arg0;
- (void)requestAwemeItemWithID:(id)arg0 parameters:(id)arg1 completion:(id /* block */)arg2;
- (long long)awemeType;
- (id)sharerUID;
- (void)handleRequestModelCompletely:(id)arg0;
- (void)setAwemeID:(id)arg0;
- (void)setSourceBtmToken:(id)arg0;
- (id)shareTokenHandlerID;
- (void)setShareTokenHandlerID:(id)arg0;
- (id)awemeID;
- (void)setAwemeType:(long long)arg0;
- (BOOL)isAppear;
- (void)setIsAppear:(BOOL)arg0;
- (id)gdLabel;
- (void)setActivityVideoType:(id)arg0;
- (id)activityVideoType;
- (void)addNotifications;
- (id)sourceBtmToken;
- (id)popType;
- (void)setPopType:(id)arg0;
- (id)shareObject;
- (void)setShareObject:(id)arg0;
- (void)setSubScene:(id)arg0;
- (id)linkInfo;
- (void)onDiscoverButtonClicked:(id)arg0;
- (void)playIfActive;
- (void)setGdLabel:(id)arg0;
- (id)ecomShareTrackParams;
- (void)setEcomShareTrackParams:(id)arg0;
- (id)bcmShareId;
- (void)setBcmShareId:(id)arg0;
- (void)setLinkInfo:(id)arg0;
- (BOOL)isFromCommentPublishNotice;
- (void)setIsFromCommentPublishNotice:(BOOL)arg0;
- (id)aAWELiteUGSocialModuleAdapter;
- (void)setReturnView:(id)arg0;
- (id)returnView;
- (id)bottomBarCoordinator;
- (long long)adScene;
- (void)_windowDidBecomeKeyNotification:(id)arg0;
- (void)_windowDidResignKeyNotification:(id)arg0;
- (void)_onAwemeDeleteNotification:(id)arg0;
- (void)setAdScene:(long long)arg0;
- (BOOL)needPlayAfterViewDidAppear;
- (void)setNeedPlayAfterViewDidAppear:(BOOL)arg0;
- (BOOL)isFromPush;
- (void)doActionIfNotValid;
- (BOOL)canOpenDuetCamera;
- (void)updatePlayletPaymentInfoWithModels:(id)arg0;
- (id)aAWEFeedModuleServiceDOUYINLiteAdaper;
- (void)initInteractController;
- (id)filterDetailTipView;
- (BOOL)shouldRespondDoubleClick;
- (void)setFilterDetailTipView:(id)arg0;
- (BOOL)shouldShowDiscoverEntranceView;
- (void)updateUpperRightButtonHidden:(BOOL)arg0 awemeModel:(id)arg1;
- (void)updateByExchangeNotification:(id)arg0;
- (void)videoPrivacyChanged:(id)arg0;
- (id)grootSpeciesShootTipView;
- (BOOL)isListCell;
- (id)createBottomBarCommonContext;
- (id /* block */)createCommentInputViewContextBlock;
- (id /* block */)createFeedViewedViewContextBlock;
- (void)viewDidClickedWithActionType:(unsigned long long)arg0;
- (void)setGrootSpeciesShootTipView:(id)arg0;
- (void)setBottomBarCoordinator:(id)arg0;
- (void)enterPureMode:(id)arg0;
- (id)discoverEntranceView;
- (void)setDiscoverEntranceView:(id)arg0;
- (void)setImageShouldJump:(BOOL)arg0;
- (void)setImagePhotosPosition:(long long)arg0;
- (BOOL)imageShouldJump;
- (long long)imagePhotosPosition;
- (BOOL)shouldEnablePushSourceTracker;
- (void)setShouldEnablePushSourceTracker:(BOOL)arg0;
- (BOOL)p_shouldPreventVideoPause;
- (void)updateUpperRightButtonWithAweme:(id)arg0;
- (id /* block */)createBottomShootViewContextBlock;
- (void)onPushAwemeDislikeNotification:(id)arg0;
- (unsigned long long)intentCommentTab;
- (id)downloadBarView;
- (void)setDownloadBarView:(id)arg0;
- (void)setIsFromPush:(BOOL)arg0;
- (void)setTaskViewModel:(id)arg0;
- (void)setOriginImageCommentID:(id)arg0;
- (void)setRepostTextFromAITextPanel:(id)arg0;
- (void)setRepostTextStartIdxFromAITextPanel:(long long)arg0;
- (void)setPushCommentID:(id)arg0;
- (void)setShowVote:(BOOL)arg0;
- (void)setVoteOptionID:(id)arg0;
- (void)setCommentForceOpenReply:(BOOL)arg0;
- (void)setETaskString:(id)arg0;
- (void)setYesterdayIncreaseCollectionCount:(id)arg0;
- (void)setIsFromOwnPostedCommentPage:(BOOL)arg0;
- (void)setSharerUID:(id)arg0;
- (void)setLevel1CommentDeleted:(BOOL)arg0;
- (void)setIsStoryFromRouter:(BOOL)arg0;
- (void)setInsertCids:(id)arg0;
- (void)setCommentLiteRewardCoin:(long long)arg0;
- (void)setCommentChannel:(id)arg0;
- (void)setFromReplyCommentVideo:(BOOL)arg0;
- (void)setIsMentionAwemeChannel:(BOOL)arg0;
- (void)setFromMentionUID:(id)arg0;
- (void)setMessageExemptFilter:(id)arg0;
- (void)setVideoShareGroupStr:(id)arg0;
- (void)setFirstShareUserID:(id)arg0;
- (void)setEcomReflowTracked:(BOOL)arg0;
- (id)taskViewModel;
- (void)setNearbyTagName:(id)arg0;
- (void)setCommentAuthorID:(id)arg0;
- (void)setShouldShowShareGuideWhenOpen:(BOOL)arg0;
- (void)setDuetFromAwemeId:(id)arg0;
- (void)setImageAlbumIndex:(id)arg0;
- (void)setIsVideoOrImageReflow:(BOOL)arg0;
- (BOOL)isVideoOrImageReflow;
- (void)setSceneFrom:(id)arg0;
- (id)aAWEAwemeDetailViewControllerDOUYINLiteAdapter;
- (void)setAigcActivityStickID:(id)arg0;
- (void)setCommentInsertConversationID:(id)arg0;
- (void)setShouldShowFriendsDiggList:(BOOL)arg0;
- (void)setShouldShowPitayaSharePanel:(BOOL)arg0;
- (void)setPitayaOpenFEScchema:(id)arg0;
- (void)setPitayaShareTaskType:(long long)arg0;
- (void)setIsFromRouter:(BOOL)arg0;
- (void)setKeepObservers:(BOOL)arg0;
- (id)originImageCommentID;
- (void)trackShowCommentPanel;
- (BOOL)isMentionAwemeChannel;
- (id)fromMentionUID;
- (void)addDiscoverEntranceView;
- (void)trackPushClickAndEnterPlayerVCEventIfNeeded;
- (void)prepareForGQActivity;
- (void)screenCapturedDidChange:(id)arg0;
- (void)setupBindings;
- (void)reportMethodExecuteWithMethodName:(id)arg0;
- (id)playerBind;
- (void)setPlayerBind:(id)arg0;
- (id)bindPlayerController;
- (id)frameBind;
- (void)setBindPlayerController:(id)arg0;
- (void)setFrameBind:(id)arg0;
- (void)updateImageViewLayout;
- (void)_loadAndPlay:(BOOL)arg0;
- (void)setSlideToProfile:(BOOL)arg0;
- (BOOL)isNotFirstDidApear;
- (void)setIsNotFirstDidApear:(BOOL)arg0;
- (BOOL)needHandlerPitayaAfterViewDidAppear;
- (void)setNeedHandlerPitayaAfterViewDidAppear:(BOOL)arg0;
- (void)handlerPitaya;
- (BOOL)keepObservers;
- (void)addNotificationsObserversAtCurrentVC;
- (void)removeHotSpotViewControllerIfNeed;
- (BOOL)ecomReflowTracked;
- (void)removeNotificationsObserversAtCurrentVC;
- (BOOL)slideToProfile;
- (BOOL)isFromRouter;
- (void)handleLiveReplayAlertIfNeed;
- (void)popupToastIfNeeded;
- (BOOL)isPaidMixScreenRecording;
- (id)messageExemptFilter;
- (id)sceneFrom;
- (BOOL)shouldRequestAssistButtonInAwemeRequest;
- (id)firstShareUserID;
- (BOOL)isStoryFromRouter;
- (void)showBottomViewIfNeed;
- (void)afterRequest:(id)arg0 error:(id)arg1 requestAsStory:(BOOL)arg2 loadingView:(id)arg3 complete:(id /* block */)arg4;
- (BOOL)hasDisappeared;
- (void)showFilterDetailTipViewIfNeeded;
- (BOOL)isSendGoldCoinAppeard;
- (void)setIsSendGoldCoinAppeard:(BOOL)arg0;
- (BOOL)shouldShowShareGuideWhenOpen;
- (id)yesterdayIncreaseCollectionCount;
- (BOOL)shouldRequestBoostInfoPanelDataOnInit;
- (void)requestBoostInfoPanelDataWithAwemeModel:(id)arg0;
- (void)_showCommentPanelIfNeed;
- (id)pushCommentID;
- (BOOL)showVote;
- (id)voteOptionID;
- (id)repostTextFromAITextPanel;
- (long long)repostTextStartIdxFromAITextPanel;
- (BOOL)shouldShowFriendsDiggList;
- (id)imageAlbumIndex;
- (void)configBasicLogic;
- (id)pitayaOpenFEScchema;
- (BOOL)shouldShowPitayaSharePanel;
- (long long)pitayaShareTaskType;
- (BOOL)isCommentPanelAppeard;
- (BOOL)commentForceOpenReply;
- (id)insertCids;
- (BOOL)level1CommentDeleted;
- (BOOL)fromReplyCommentVideo;
- (long long)commentLiteRewardCoin;
- (void)setIsCommentPanelAppeard:(BOOL)arg0;
- (id)nearbyTagName;
- (id)commentAuthorID;
- (BOOL)isFromOwnPostedCommentPage;
- (id)commentChannel;
- (id)commentInsertConversationID;
- (void)handleVideoSafetyPreCheckNotification:(id)arg0;
- (id)safetyCheckHandler;
- (void)storeCurrentAwemeId;
- (void)setupGQActivityBanner;
- (id)gqActivityBanner;
- (void)setGqActivityBanner:(id)arg0;
- (void)showGQActivityBannerAnimated;
- (id)buildBottomShootInfoDict;
- (id)aigcActivityStickID;
- (id)videoShareGroupStr;
- (id)infoPanelDict;
- (BOOL)shouldShowBoostInfoPanelWithInfoModel:(id)arg0;
- (void)setInfoPanelDict:(id)arg0;
- (BOOL)isShowLiveReplayToast;
- (void)reportLiveReplayNotPermissionEvent;
- (void)setIsShowLiveReplayToast:(BOOL)arg0;
- (void)reportLiveReplayToastAppearEvent;
- (void)reportLiveReplayToastCheckEvent:(id)arg0;
- (void)liveReplayTicketCancellationWithRetryCount:(long long)arg0;
- (unsigned long long)detailPopTransitionTriggerDirection;
- (id)prohibitedMessage;
- (BOOL)shouldWaitForViewerDataBeforeShowingCommentPanel;
- (void)setShouldWaitForViewerDataBeforeShowingCommentPanel:(BOOL)arg0;
- (void)setHasDisappeared:(BOOL)arg0;
- (id)eTaskString;
- (id)duetFromAwemeId;
- (void)setSafetyCheckHandler:(id)arg0;
- (void)setProhibitedMessage:(id)arg0;
- (void)setModel:(id)arg0;
- (BOOL)isLoading;
- (id)init;
- (id)effectView;
- (void)didMoveToParentViewController:(id)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)_removeNotification;
- (id)backgroundImageView;
- (void)viewWillDisappear:(BOOL)arg0;
- (id)accountType;
- (long long)preferredStatusBarStyle;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)setViewModel:(id)arg0;
- (void)setEffectView:(id)arg0;
- (BOOL)isActive;
- (id)viewModel;
- (void)setAccountType:(id)arg0;
- (BOOL)prefersStatusBarHidden;
- (void)viewWillAppear:(BOOL)arg0;
- (void)dealloc;
- (id)backgroundBlurView;
- (void)play;
- (void)setIsLoading:(BOOL)arg0;
- (void)viewDidLoad;
- (void)setBackgroundBlurView:(id)arg0;
- (void)_appWillResignActive:(id)arg0;
- (void)setBackgroundImageView:(id)arg0;
- (void)_appDidBecomeActive:(id)arg0;
- (id)notificationAction;
- (void)setNotificationAction:(id)arg0;
- (id)bottomImageView;
- (void)setBottomImageView:(id)arg0;
- (id)authorID;
- (void)setAuthorID:(id)arg0;
- (id)upImageView;
- (void)setUpImageView:(id)arg0;

@end
