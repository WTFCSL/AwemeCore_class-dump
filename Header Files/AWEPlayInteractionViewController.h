//
//     Generated by private class-dump
//

@class NSDictionary, UIViewController, AWEAwemeModel, AWEPlayInteractionElementConfigs, NSMutableArray, NSString, UILongPressGestureRecognizer, UIImage, AWEPlayInteractionBottomTempAnimationManager, NSTimer, AWEPauseInteractiveEntranceView, AWEPlayInteractiveBottomContainerFilterHandler, AWEElementContainer, AWEPlayInteractionDispatcherManager, UIView, AWEPlayInteractionViewModel, AWEPlayInteractionContext, AWEAwemePageContext, AWEPlayInteractionContextAbilityConfig, AWEPlayInteractionDispatchCoordinator, UIPinchGestureRecognizer, UIPanGestureRecognizer, AWEPlayInteractionPanelViewModel, AWEPlayInteractionConfigsHelper, AWESmartCommentPreloadTrigger;
@protocol AWEPlayInteractionPaginatedProgressControllerProtocol, AWEPlayInteractionPOIBusinessInnerDelegate, AWELikeUserListPanelViewControllerProtocol, AWEAwemePlayInteractionECommerceInnerDelegate, AWEAwemeLongPressModalViewControllerProtocol, AWEAwemeBizPlayVideoProtocol, AWEAwemeBaseViewControllerDelegate, AWEAwemePlayInteractionCommerceDelegate, AWESearchVideoFeedMaskViewProtocol, AWEStoryShootGuideViewControllerProtocol, AWEFeedInteractionPreloadProtocol, AWEHPChannelControllerConfigProtocol, AWEAwemePlayInteractionCommerceInnerDelegate, AFDRichContentContainerViewControllerProtocol, AWEAwemePlayVideoTrackProtocol, AWEAwemePlayInteractionPanelDelegate;

@interface AWEPlayInteractionViewController : UIViewController <AWEAwemePlayInteractionUIDisplayDelegate, AWEAwemePlayInteractionUpdateDelegate, UIGestureRecognizerDelegate, AWEDigitalWellbeingMessage, AWEPlayInteractionViewControllerNewProtocol, AWEPlayInteractionViewControllerProtocol, AWEAwemePlayInteractionCommerceDelegate, AWEAwemePlayInteractionPanelDelegate> {
    BOOL _showGoodsElement;
    BOOL _showGoodsCardAnchorElement;
    BOOL _isPreload;
    BOOL _isViewAppearing;
    BOOL _isDisplaying;
    BOOL _pureMode;
    BOOL _shouldPrepareForDisplay;
    BOOL _showFollowStatus;
    BOOL _isHotSearchStatus;
    BOOL _isBottomHotBarShowing;
    BOOL _shouldShowSearchVideoFeedMaskView;
    BOOL _isAWEStory;
    BOOL _isFromRecommendBigCard;
    BOOL _needsSetPureMode;
    BOOL _hideMusicInfo;
    BOOL _canShowAttachMaterial;
    BOOL _isLightLandingShowing;
    BOOL _canHideRightInteractionWithPreviousPage;
    BOOL _hasReached5s;
    BOOL _firstViewWillAppear;
    BOOL _isFirstAppear;
    BOOL _needUpdateHeight;
    BOOL _pauseEntranceShow;
    BOOL _isDispatcherSetModelCall;
    id<AWEHPChannelControllerConfigProtocol> _channelConfig;
    id<AWEFeedInteractionPreloadProtocol> _preloader;
    id<AWEAwemeBaseViewControllerDelegate> _awemeBaseViewController;
    id<AFDRichContentContainerViewControllerProtocol> richContentContainer;
    NSString *_referString;
    NSDictionary *_logExtraDict;
    NSString *_enterFrom;
    NSDictionary *_trackContext;
    NSString *_shareTokenHandlerID;
    NSString *_cityInfoString;
    NSString *_adEventName;
    NSDictionary *_trackerExtendsInfo;
    AWEAwemeModel *_model;
    AWEAwemeModel *_fromModel;
    id _superCell;
    AWEAwemeModel *_registerElementModel;
    NSDictionary *_extraBusinessParams;
    long long _mediaType;
    unsigned long long _interactionType;
    id<AWEAwemeBizPlayVideoProtocol, AWEAwemePlayVideoTrackProtocol> _videoDelegate;
    AWEPlayInteractionDispatchCoordinator *_dispatchCoordinator;
    double _controlOffset;
    double _controlYOffset;
    id /* block */ _pureModeBlock;
    id /* block */ _relatedPanelWillAppearBlock;
    id /* block */ _relatedPanelDidDismissBlock;
    UIView *_playerView;
    UIView *_hotPointDividerLine;
    AWEAwemePageContext *_outerPageContext;
    UIImage *_diggFestivalImage;
    UIImage *_undiggFestivalImage;
    UIImage *_commentFestivalImage;
    UIImage *_shareFestivalImage;
    UIImage *_shareTipFestivalImage;
    NSString *_duetAwemeId;
    NSTimer *_commentListPreloadTimer;
    AWESmartCommentPreloadTrigger *_smartCommentPreloadTrigger;
    AWEPlayInteractionContext *_context;
    AWEElementContainer *_leftContainer;
    AWEElementContainer *_rightContainer;
    AWEElementContainer *_bottomContainer;
    AWEPlayInteractionDispatcherManager *_dispatcherManager;
    AWEPlayInteractionElementConfigs *_elementConfigs;
    id /* block */ _adjustReturnViewAlphaBlock;
    id /* block */ _closeVCWithCloseMethodBlock;
    UIView<AWESearchVideoFeedMaskViewProtocol> *_searchVideoFeedMaskView;
    AWEPlayInteractionConfigsHelper *_configHelper;
    AWEPlayInteractionBottomTempAnimationManager *_bottomTempAnimationManager;
    AWEPlayInteractiveBottomContainerFilterHandler *_bottomFilterHandler;
    id<AWEAwemePlayInteractionCommerceDelegate> _commerceDelegate;
    id<AWEAwemePlayInteractionCommerceInnerDelegate> _commerceInnerDelegate;
    id<AWEAwemePlayInteractionECommerceInnerDelegate> _ecommerceInnerDelegate;
    id<AWEPlayInteractionPOIBusinessInnerDelegate> _poiBusinessInnerDelegate;
    id<AWEAwemePlayInteractionPanelDelegate> _panelDelegate;
    id<AWEPlayInteractionPaginatedProgressControllerProtocol> _pagiantedController;
    UIView *_clearPlaceHolderView;
    UIView *_authorExtraPlaceHolderView;
    UIView *_descriptionExtraPlaceHolderView;
    AWEPauseInteractiveEntranceView *_searchPictureView;
    id /* block */ _pageAppearHandler;
    double _screenWidthCache;
    AWEPlayInteractionContextAbilityConfig *_abilityConfig;
    UIView *_chapterProgressBarPlaceHolderView;
    AWEPlayInteractionViewModel *_viewModel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL hasReached5s;
@property (retain, nonatomic) UIView<AWESearchVideoFeedMaskViewProtocol> *searchVideoFeedMaskView;
@property (nonatomic) BOOL firstViewWillAppear;
@property (nonatomic) BOOL isFirstAppear;
@property (retain, nonatomic) AWEPlayInteractionConfigsHelper *configHelper;
@property (retain, nonatomic) AWEPlayInteractionBottomTempAnimationManager *bottomTempAnimationManager;
@property (retain, nonatomic) AWEPlayInteractiveBottomContainerFilterHandler *bottomFilterHandler;
@property (retain, nonatomic) id<AWEAwemePlayInteractionCommerceDelegate> commerceDelegate;
@property (retain, nonatomic) id<AWEAwemePlayInteractionCommerceInnerDelegate> commerceInnerDelegate;
@property (retain, nonatomic) id<AWEAwemePlayInteractionECommerceInnerDelegate> ecommerceInnerDelegate;
@property (retain, nonatomic) id<AWEPlayInteractionPOIBusinessInnerDelegate> poiBusinessInnerDelegate;
@property (retain, nonatomic) id<AWEAwemePlayInteractionPanelDelegate> panelDelegate;
@property (retain, nonatomic) id<AWEPlayInteractionPaginatedProgressControllerProtocol> pagiantedController;
@property (nonatomic) BOOL needUpdateHeight;
@property (retain, nonatomic) UIView *clearPlaceHolderView;
@property (retain, nonatomic) UIView *authorExtraPlaceHolderView;
@property (retain, nonatomic) UIView *descriptionExtraPlaceHolderView;
@property (retain, nonatomic) AWEPauseInteractiveEntranceView *searchPictureView;
@property (nonatomic) BOOL pauseEntranceShow;
@property (copy, nonatomic) id /* block */ pageAppearHandler;
@property (nonatomic) double screenWidthCache;
@property (retain, nonatomic) AWEPlayInteractionContextAbilityConfig *abilityConfig;
@property (retain, nonatomic) UIView *chapterProgressBarPlaceHolderView;
@property (nonatomic) BOOL isDispatcherSetModelCall;
@property (retain, nonatomic) AWEPlayInteractionViewModel *viewModel;
@property (nonatomic) long long mediaType;
@property (nonatomic) unsigned long long interactionType;
@property (retain, nonatomic) AWEAwemeModel *registerElementModel;
@property (readonly, nonatomic) BOOL isScreenCast;
@property (nonatomic) BOOL showFollowStatus;
@property (nonatomic) BOOL isHotSearchStatus;
@property (nonatomic) BOOL isBottomHotBarShowing;
@property (nonatomic) BOOL shouldShowSearchVideoFeedMaskView;
@property (copy, nonatomic) NSString *shareTokenHandlerID;
@property (weak, nonatomic) id<AWEAwemeBizPlayVideoProtocol, AWEAwemePlayVideoTrackProtocol> videoDelegate;
@property (retain, nonatomic) AWEPlayInteractionDispatchCoordinator *dispatchCoordinator;
@property (nonatomic) double controlOffset;
@property (nonatomic) double controlYOffset;
@property (copy, nonatomic) id /* block */ pureModeBlock;
@property (copy, nonatomic) id /* block */ relatedPanelWillAppearBlock;
@property (copy, nonatomic) id /* block */ relatedPanelDidDismissBlock;
@property (readonly, nonatomic) long long type;
@property (nonatomic) BOOL isAWEStory;
@property (nonatomic) BOOL isFromRecommendBigCard;
@property (weak, nonatomic) UIView *playerView;
@property (retain, nonatomic) UIView *hotPointDividerLine;
@property (nonatomic) BOOL needsSetPureMode;
@property (nonatomic) BOOL shouldPrepareForDisplay;
@property (nonatomic) BOOL hideMusicInfo;
@property (nonatomic) BOOL canShowAttachMaterial;
@property (nonatomic) BOOL isLightLandingShowing;
@property (retain, nonatomic) AWEAwemePageContext *outerPageContext;
@property (retain, nonatomic) UIImage *diggFestivalImage;
@property (retain, nonatomic) UIImage *undiggFestivalImage;
@property (retain, nonatomic) UIImage *commentFestivalImage;
@property (retain, nonatomic) UIImage *shareFestivalImage;
@property (retain, nonatomic) UIImage *shareTipFestivalImage;
@property (retain, nonatomic) NSString *duetAwemeId;
@property (retain, nonatomic) NSTimer *commentListPreloadTimer;
@property (retain, nonatomic) AWESmartCommentPreloadTrigger *smartCommentPreloadTrigger;
@property (retain, nonatomic) AWEPlayInteractionContext *context;
@property (retain, nonatomic) AWEElementContainer *leftContainer;
@property (retain, nonatomic) AWEElementContainer *rightContainer;
@property (retain, nonatomic) AWEElementContainer *bottomContainer;
@property (retain, nonatomic) AWEPlayInteractionDispatcherManager *dispatcherManager;
@property (retain, nonatomic) AWEPlayInteractionElementConfigs *elementConfigs;
@property (nonatomic) BOOL canHideRightInteractionWithPreviousPage;
@property (copy, nonatomic) id /* block */ adjustReturnViewAlphaBlock;
@property (copy, nonatomic) id /* block */ closeVCWithCloseMethodBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *cityInfoString;
@property (copy, nonatomic) NSString *adEventName;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEAwemeModel *fromModel;
@property (weak, nonatomic) id<AWEAwemeBaseViewControllerDelegate> awemeBaseViewController;
@property (nonatomic) BOOL showGoodsElement;
@property (nonatomic) BOOL showGoodsCardAnchorElement;
@property (weak, nonatomic) id<AWEFeedInteractionPreloadProtocol> preloader;
@property (nonatomic) BOOL isPreload;
@property (nonatomic) BOOL isViewAppearing;
@property (nonatomic) BOOL isDisplaying;
@property (weak, nonatomic) id<AFDRichContentContainerViewControllerProtocol> richContentContainer;
@property (readonly, copy, nonatomic) NSString *referString;
@property (readonly, copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (copy, nonatomic) NSDictionary *extraBusinessParams;
@property (readonly, nonatomic) BOOL pureMode;
@property (retain, nonatomic) UIView *view;
@property (copy, nonatomic) NSDictionary *trackContext;
@property (nonatomic) BOOL isSlidingPorgressSlider;
@property (nonatomic) BOOL disableShowLongPressMenu;
@property (weak, nonatomic) id<AWEHPChannelControllerConfigProtocol> channelConfig;
@property (retain, nonatomic) NSMutableArray *commentModelListToInsert;
@property (readonly, nonatomic) UILongPressGestureRecognizer *dislikeGesture;
@property (readonly, nonatomic) UIPinchGestureRecognizer *pinchGesture;
@property (readonly, nonatomic) UIPanGestureRecognizer *panGesture;
@property (nonatomic) BOOL sharePanelShowed;
@property (retain, nonatomic) UIViewController<AWELikeUserListPanelViewControllerProtocol> *likeUserListViewController;
@property (retain, nonatomic) UIViewController<AWEAwemeLongPressModalViewControllerProtocol> *longPressVC;
@property (retain, nonatomic) UIViewController<AWEStoryShootGuideViewControllerProtocol> *storyShootGuideVC;
@property (readonly, nonatomic) AWEPlayInteractionPanelViewModel *panelViewModel;
@property (nonatomic) double horizontalTopRadio;

+ (Class)aAWEPadModuleAdapterClass;

- (id)awemeModel;
- (id)cityInfoString;
- (void)setCityInfoString:(id)arg0;
- (id)referString;
- (void)setEnterFrom:(id)arg0;
- (void)duxGrid_viewDidChangeBreakPointFrom:(struct { long long x0; long long x1; })arg0 toBreakPoint:(struct { long long x0; long long x1; })arg1;
- (void)updateCommentCount;
- (void)setReferString:(id)arg0;
- (void)setLogExtraDict:(id)arg0;
- (void)setPureMode:(BOOL)arg0;
- (id)logExtraDict;
- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (id)enterFrom;
- (id)adEventName;
- (void)setAdEventName:(id)arg0;
- (id)fromModel;
- (void)setFromModel:(id)arg0;
- (id /* block */)pureModeBlock;
- (void)setPureModeBlock:(id /* block */)arg0;
- (BOOL)shouldPrepareForDisplay;
- (void)setShouldPrepareForDisplay:(BOOL)arg0;
- (void)setHide:(BOOL)arg0;
- (void)willSetPureModeBlock:(BOOL)arg0;
- (BOOL)shouldUseTTPlayerForXiGuaVideo;
- (void)bufferStart;
- (void)bufferEnd;
- (id)richContentContainer;
- (id)controllerByProtocol:(id)arg0;
- (BOOL)isShowingDislike;
- (void)onPlayerWillLoopPlaying:(id)arg0;
- (void)onPlayer:(id)arg0 didChangePlaybackStateWithAction:(long long)arg1;
- (double)currentPlayerPlaybackTime;
- (BOOL)isRelatedVideoPanelShowing;
- (BOOL)isAITextPanelShowing;
- (BOOL)isVideoDescriptionPanelShowing;
- (BOOL)isVideoRelatedPanelShowing;
- (void)onPlayerPlay:(id)arg0 ifPlay:(BOOL)arg1;
- (void)onPlayerPause:(id)arg0;
- (void)onPlayerDidReadyForDisplay:(id)arg0;
- (void)onPlayerAddPeriodicTimeObserverCallback:(id)arg0;
- (id)aAWEPadModuleAdapter;
- (void)playLoadingAnimation;
- (void)playMusicAnimations;
- (void)stopMusicAnimations;
- (BOOL)hideMusicInfo;
- (void)setHideMusicInfo:(BOOL)arg0;
- (BOOL)showGoodsElement;
- (void)setShowGoodsElement:(BOOL)arg0;
- (BOOL)showGoodsCardAnchorElement;
- (void)setShowGoodsCardAnchorElement:(BOOL)arg0;
- (BOOL)showFollowStatus;
- (void)setShowFollowStatus:(BOOL)arg0;
- (BOOL)pureMode;
- (BOOL)isHotSearchStatus;
- (void)setIsHotSearchStatus:(BOOL)arg0;
- (BOOL)isBottomHotBarShowing;
- (void)setIsBottomHotBarShowing:(BOOL)arg0;
- (BOOL)shouldShowSearchVideoFeedMaskView;
- (void)setShouldShowSearchVideoFeedMaskView:(BOOL)arg0;
- (id)shareTokenHandlerID;
- (void)setShareTokenHandlerID:(id)arg0;
- (double)controlOffset;
- (void)setControlOffset:(double)arg0;
- (BOOL)isFromRecommendBigCard;
- (void)setIsFromRecommendBigCard:(BOOL)arg0;
- (BOOL)needsSetPureMode;
- (void)setNeedsSetPureMode:(BOOL)arg0;
- (BOOL)canShowAttachMaterial;
- (void)setCanShowAttachMaterial:(BOOL)arg0;
- (BOOL)isSlidingPorgressSlider;
- (void)onVideoPlayerViewDoubleClicked:(id)arg0;
- (double)infoAreaHeight;
- (void)showDislikeOnVideo;
- (void)setPureMode:(BOOL)arg0 animated:(BOOL)arg1;
- (void)setPureMode:(BOOL)arg0 animateDuration:(double)arg1;
- (BOOL)touchCapturedWithPosition:(struct CGPoint { double x0; double x1; })arg0;
- (void)setupInteractiveDataSourceIfNecessary:(id)arg0;
- (void)updateAllSubViews;
- (void)preloadUpdateAllSubview;
- (void)playVideoControllerWillLoopPlay;
- (BOOL)isCommerceInteracting;
- (void)awemePlayInteractionPause:(BOOL)arg0;
- (void)videoPlayPeriodObserver:(double)arg0 duration:(double)arg1;
- (void)videoPlayDidChangePlaybackRate:(double)arg0;
- (void)videoPlayerOnMaskInfoCallBack:(id)arg0 pts:(unsigned long long)arg1;
- (void)resumeCardAnimation;
- (void)cancelCardAnimation;
- (void)videoDidActivity;
- (void)showGoodsCardWithMediaPlayedSeconds:(double)arg0;
- (struct CGPoint { double x0; double x1; })centerOfRedPacket;
- (void)checkIfShouldShowNoticeBarView;
- (void)updateAntiAddictedOptStrongRemindView:(BOOL)arg0;
- (BOOL)isScreenCast;
- (id)awemeBaseViewController;
- (void)setAwemeBaseViewController:(id)arg0;
- (id)dispatchCoordinator;
- (void)setDispatchCoordinator:(id)arg0;
- (double)controlYOffset;
- (void)setControlYOffset:(double)arg0;
- (id /* block */)relatedPanelWillAppearBlock;
- (void)setRelatedPanelWillAppearBlock:(id /* block */)arg0;
- (id /* block */)relatedPanelDidDismissBlock;
- (void)setRelatedPanelDidDismissBlock:(id /* block */)arg0;
- (BOOL)isAWEStory;
- (void)setIsAWEStory:(BOOL)arg0;
- (id)hotPointDividerLine;
- (void)setHotPointDividerLine:(id)arg0;
- (BOOL)isLightLandingShowing;
- (void)setIsLightLandingShowing:(BOOL)arg0;
- (id)outerPageContext;
- (void)setOuterPageContext:(id)arg0;
- (id)diggFestivalImage;
- (void)setDiggFestivalImage:(id)arg0;
- (id)undiggFestivalImage;
- (void)setUndiggFestivalImage:(id)arg0;
- (id)commentFestivalImage;
- (void)setCommentFestivalImage:(id)arg0;
- (id)shareFestivalImage;
- (void)setShareFestivalImage:(id)arg0;
- (id)shareTipFestivalImage;
- (void)setShareTipFestivalImage:(id)arg0;
- (id)duetAwemeId;
- (void)setDuetAwemeId:(id)arg0;
- (BOOL)isPreload;
- (void)setIsPreload:(BOOL)arg0;
- (void)setIsViewAppearing:(BOOL)arg0;
- (void)setIsDisplaying:(BOOL)arg0;
- (id)commentListPreloadTimer;
- (void)setCommentListPreloadTimer:(id)arg0;
- (void)updateLeftContainer:(id /* block */)arg0;
- (void)updateRightContainer:(id /* block */)arg0;
- (void)updateBottomContainer:(id /* block */)arg0;
- (void)resumeVideo;
- (double)p_stackContainerViewBottomOffset;
- (void)calculateFinalPureAndUpdateUI:(BOOL)arg0 animateDuration:(double)arg1;
- (BOOL)alertIfNotValidForAction:(long long)arg0;
- (BOOL)isCommentVCShowing;
- (id)subUnitsInfo;
- (void)setupContainer;
- (void)makeViewConstraints;
- (void)removeAndRebuildLeftContainer;
- (void)removeAndRebuildBottomContainer;
- (void)removeAndRebuildAllContainers;
- (void)removeAndRebuildConstraintsAllContainers;
- (void)updateLeftContainerWidth;
- (BOOL)removeAndRebuildLeftContainerIfNeeded;
- (void)rebuildAllContainersAndManagers;
- (void)dismissPauseEntranceView;
- (void)adjustReturnViewAlpha:(BOOL)arg0 progress:(double)arg1;
- (void)closeVCWithCloseMethod:(id)arg0;
- (void)commentVCDidDismiss;
- (id)leftContainer;
- (id)rightContainer;
- (id)dispatcherManager;
- (void)setRichContentContainer:(id)arg0;
- (id)extraBusinessParams;
- (void)setExtraBusinessParams:(id)arg0;
- (BOOL)sharePanelShowed;
- (void)dismissLongPressViewControllerAnimated:(BOOL)arg0;
- (BOOL)disableShowLongPressMenu;
- (void)setDisableShowLongPressMenu:(BOOL)arg0;
- (void)hideRightElementsForRemotePlay;
- (void)hideLeftElementsForRemotePlay;
- (void)hideBottomElementsForRemotePlay;
- (void)hideRightElementsExceptMusicElement;
- (void)richAwemeWillBeginDragging;
- (void)richAwemeDidEndDragging;
- (void)richContentContainerWillBeginDragging:(id)arg0;
- (void)richContentContainerDidEndDragging:(id)arg0;
- (id)commentSearchHelperController;
- (id)anchorController;
- (id)longVideoController;
- (id)maskController;
- (id)playControlBarDelegate;
- (id)paymentDetailController;
- (id)paymentMaskController;
- (void)onLinkAdButtonClicked:(id)arg0;
- (void)onDouLinkButtonClicked:(id)arg0;
- (void)onGameButtonTapped:(id)arg0;
- (void)onIronManButtonTapped:(id)arg0;
- (void)onMediumButtonTapped:(id)arg0;
- (void)onMvLabelClicked:(id)arg0;
- (void)onOneKeyLabelClicked:(id)arg0;
- (void)onMusicBeatTemplateLabelClicked:(id)arg0;
- (void)onGeneralLabelClicked:(id)arg0;
- (void)onOpenPlatformLabelClicked:(id)arg0;
- (void)onPoiLabelClicked:(id)arg0;
- (void)onLocalLifeLabelClicked:(id)arg0;
- (void)onShoppingCartIconClicked:(id)arg0;
- (void)onStarAtlasLinkButtonClicked:(id)arg0;
- (void)onStickerLabelClicked:(id)arg0;
- (void)onTaskLinkButtonClicked:(id)arg0;
- (void)onLikeButtonClicked:(id)arg0;
- (void)onCommentButtonClicked:(id)arg0;
- (void)onShareButtonTapped:(id)arg0;
- (void)onGreenScreenLabelClicked:(id)arg0;
- (void)onCarAnchorClicked:(id)arg0;
- (void)onNormalAppAnchorClicked:(id)arg0;
- (void)onSoloKTVLabelClicked:(id)arg0;
- (void)enterMusicDetail:(id)arg0;
- (void)onAuthorLabelClicked:(id)arg0;
- (void)enterDiggedUser:(id)arg0;
- (void)onMusicButtonClicked:(id)arg0;
- (void)onImageTemplateAnchorClicked:(id)arg0;
- (void)onAdDescriptionClicked:(id)arg0 url:(id)arg1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg2;
- (void)onDescriptionLabelClicked:(id)arg0 url:(id)arg1;
- (id)channelConfig;
- (void)setChannelConfig:(id)arg0;
- (id)commentVC;
- (BOOL)adOperationGuideShowing;
- (id)commentModelListToInsert;
- (BOOL)isCommentListShowing;
- (BOOL)isLikeUserListShowing;
- (void)performLikeAction;
- (void)performCommentAction;
- (void)showSharePanel;
- (void)showVoteDetailPanel:(id)arg0;
- (void)showMusicGuidance;
- (BOOL)shouldShowShoppingEntrance;
- (void)showShareHintWithPlayTimes:(long long)arg0;
- (void)showNewUserShareGuideWithLoopCount:(long long)arg0 fromLike:(BOOL)arg1;
- (void)showFestivalShareHint;
- (void)updateFestivalButtons;
- (void)showIMShareGuideAnimation;
- (void)checkIfShouldShowCampaignMaskViewWithCampaignID:(id)arg0;
- (void)handleFestivalImagesCompletion:(id /* block */)arg0;
- (void)showAnimateBtnDetailWithPlayTimes:(long long)arg0;
- (void)showLikeUserListVCWithUserList;
- (void)showViewerListViewController;
- (void)showFavoriteListViewController;
- (void)showSendGoldCoinListViewControllerWithInsertIDs:(id)arg0;
- (void)showGoldLikeListViewControllerWithInsertIDs:(id)arg0;
- (void)ec_interactWithLoopTimes:(long long)arg0;
- (void)showGoodsPanel;
- (void)showGoodsPanelWithProuctId:(id)arg0;
- (void)clearScreen:(BOOL)arg0;
- (void)clearScreen:(BOOL)arg0 longPress:(BOOL)arg1;
- (void)weakInteractionView:(BOOL)arg0;
- (void)weakInteractionView:(BOOL)arg0 longPress:(BOOL)arg1;
- (void)clearInteractionView:(BOOL)arg0;
- (void)traceEnterScreen:(id)arg0 state:(id)arg1 event:(id)arg2;
- (id)dislikeGesture;
- (void)setSharePanelShowed:(BOOL)arg0;
- (id)likeUserListViewController;
- (void)setLikeUserListViewController:(id)arg0;
- (id)longPressVC;
- (void)setLongPressVC:(id)arg0;
- (id)storyShootGuideVC;
- (void)setStoryShootGuideVC:(id)arg0;
- (double)horizontalTopRadio;
- (void)setHorizontalTopRadio:(double)arg0;
- (void)showCommentPanelWithInsertIDs:(id)arg0;
- (void)showCommentPanelWithInsertIDs:(id)arg0 isForcedToShowInputView:(BOOL)arg1;
- (void)showCommentPanelWithInsertIDs:(id)arg0 isForcedToShowInputView:(BOOL)arg1 shouldShowDefaultText:(BOOL)arg2;
- (void)showCommentPanelWithInsertIDs:(id)arg0 highlightID:(id)arg1;
- (void)showCommentPanelWithInsertIDs:(id)arg0 scrollToTop:(BOOL)arg1 isForcedToShowInputViewSync:(BOOL)arg2;
- (void)showCommentPanelWithInsertIDs:(id)arg0 scrollToTop:(BOOL)arg1 isForcedToShowInputView:(BOOL)arg2 isForcedToShowInputViewSync:(BOOL)arg3 highlightID:(id)arg4 intentTab:(unsigned long long)arg5;
- (void)showCommentPanelWithInsertIDs:(id)arg0 scrollToTop:(BOOL)arg1 isForcedToShowInputView:(BOOL)arg2 isForcedToShowInputViewSync:(BOOL)arg3 highlightID:(id)arg4 intentTab:(unsigned long long)arg5 shouldShowDefaultText:(BOOL)arg6 params:(id)arg7;
- (void)showCommentPanelWithInsertIDs:(id)arg0 scrollToTop:(BOOL)arg1 isForcedToShowInputView:(BOOL)arg2 isForcedToShowInputViewSync:(BOOL)arg3 highlightID:(id)arg4 intentTab:(unsigned long long)arg5 shouldShowDefaultText:(BOOL)arg6 shouldShowReply:(BOOL)arg7;
- (void)showShareHintIfPossible;
- (void)addLoadAndVolumeViewForShow;
- (void)setloadAndVolumeViewHidden:(BOOL)arg0;
- (void)removeLoadAndVolumeViewForHidden;
- (void)setProgressSliderHidden:(BOOL)arg0;
- (BOOL)isProgressSliderHidden;
- (void)setProgressSliderUnderViewHidden:(BOOL)arg0;
- (BOOL)isProgressSliderUnderViewHidden;
- (void)updateFollowStatus;
- (void)updateDiggCount;
- (void)updateShareButton;
- (void)updateLivePalletView;
- (void)updateHasRequestLiveInfo;
- (void)setRightAreaHidden:(BOOL)arg0;
- (void)setLeftAreaHidden:(BOOL)arg0;
- (void)setBottomAreaHidden:(BOOL)arg0;
- (void)updateCampaignRedPacketImageView;
- (void)setShareButtonTouchUpInsideBlock:(id /* block */)arg0;
- (id)superCell;
- (void)setSuperCell:(id)arg0;
- (void)didDisplay;
- (void)onPlayerStop:(id)arg0;
- (void)onPlayer:(id)arg0 didSingleClick:(id)arg1;
- (void)onPlayer:(id)arg0 didDoubleClick:(id)arg1;
- (void)onPlayerReplaceWithNewPlayerViewController:(id)arg0;
- (void)onUpdatePlayerController:(id)arg0 withPlayVideoVC:(id)arg1;
- (void)onPlayFromOutCall;
- (void)onPauseFromOutCall;
- (void)onPauseIfNotStopFromOutCall;
- (void)onStopFromOutCall;
- (void)onPlayer:(id)arg0 didChangePlaybackRate:(double)arg1;
- (void)onPlayer:(id)arg0 maskInfoCallBack:(id)arg1 pts:(unsigned long long)arg2;
- (id)leftContainerView;
- (id)rightContainerView;
- (id)currentInfoForSubUnits;
- (id)currentInfoForUnitWithIdentifier:(id)arg0;
- (id)currentInfoForUnitWithClassName:(id)arg0;
- (id)elementPriorityAvoidTrack;
- (void)hideLeftContainer:(BOOL)arg0 animated:(BOOL)arg1;
- (void)hideRightContainer:(BOOL)arg0 animated:(BOOL)arg1;
- (void)hideBottomContainer:(BOOL)arg0 animated:(BOOL)arg1;
- (void)rebuildLeftContainer;
- (void)rebuildRightContainer;
- (void)rebuildBottomContainer;
- (id)trackerExtendsInfo;
- (void)setTrackerExtendsInfo:(id)arg0;
- (void)popUpAdPromptView:(BOOL)arg0;
- (void)videoController_updatePlayerIfNeeded:(id)arg0;
- (void)showDouPlusEntryGuideAnimation;
- (void)playAdRiflePendantElementWebpIcon;
- (void)setRightContainer:(id)arg0;
- (void)setLeftContainer:(id)arg0;
- (void)setIsFirstAppear:(BOOL)arg0;
- (void)registerMessage;
- (id)hmdPageExtension;
- (BOOL)enableMemoryOptimizeWithNunki;
- (void)didReceiveMemeoryDangerLevelTopNotification;
- (double)p_leftContainerWidth;
- (BOOL)shouldAdjustFullScreenCellDisplay;
- (void)teenModeDidChange:(BOOL)arg0 isLogout:(BOOL)arg1;
- (void)showAdOperationViewWithPlayTimes:(long long)arg0;
- (void)showAdMannorOperationViewWithPlayTimes:(long long)arg0;
- (void)closeAdOperationGuide:(unsigned long long)arg0;
- (void)showLearnMoreView:(BOOL)arg0 withModel:(id)arg1;
- (void)notifyScreenRotation;
- (void)flashLearnMoreViewWithAnimation:(BOOL)arg0;
- (void)hideRewardView:(BOOL)arg0 withModel:(id)arg1;
- (void)popUpAdSimilarRecommandView;
- (void)closeAdPromptView;
- (BOOL)isDecouplingFromMask;
- (BOOL)isPromptModalShowing;
- (void)resetPromptCardIfNeeded;
- (void)resetAdOperationWebViewIfNeeded;
- (void)preloadWebViewOperationWithModel:(id)arg0;
- (void)popUpAnchorView;
- (void)showRedpacketAnimation;
- (void)animateLeftBottomByXOffset:(double)arg0 yOffset:(double)arg1 alpha:(double)arg2;
- (void)handleVideoPlayWhenOpenLandingPage:(id)arg0;
- (id)similarAdManager;
- (void)p_prepareForDisplay;
- (id)registerElementModel;
- (void)setRegisterElementModel:(id)arg0;
- (id)elementConfigs;
- (void)setElementConfigs:(id)arg0;
- (id)panelDelegate;
- (void)setPanelDelegate:(id)arg0;
- (void)updateProgressSliderWithTime:(double)arg0 totalDuration:(double)arg1 model:(id)arg2;
- (void)setPlayProgressWithTime:(double)arg0 totalDuration:(double)arg1 model:(id)arg2;
- (void)updatePlayProgressWithTime:(double)arg0 totalDuration:(double)arg1 model:(id)arg2;
- (void)unregisterMessage;
- (void)setAdjustReturnViewAlphaBlock:(id /* block */)arg0;
- (void)setCloseVCWithCloseMethodBlock:(id /* block */)arg0;
- (id)panelViewModel;
- (void)setupEvent;
- (void)setupBottomContainer;
- (void)setDispatcherManager:(id)arg0;
- (id)commerceDelegate;
- (BOOL)onVideoPlayerViewSingleClicked:(id)arg0;
- (void)setCommerceDelegate:(id)arg0;
- (void)setupLeftContainer;
- (void)setupRightContainer;
- (void)setupDispatcherManager;
- (BOOL)shouldRespondToPadKeyBoardBindings;
- (double)screenWidthCache;
- (void)setScreenWidthCache:(double)arg0;
- (void)showPauseEntranceViewWithBlock:(id /* block */)arg0;
- (BOOL)pauseEntranceShow;
- (id)searchPictureView;
- (void)setSearchPictureView:(id)arg0;
- (void)setPauseEntranceShow:(BOOL)arg0;
- (void)p_performOnDisplay:(id /* block */)arg0;
- (void)p_trackEventOnDisplay:(id)arg0 params:(id)arg1 needStagingFlag:(BOOL)arg2;
- (void)clearContainsWithSlideClearMode:(BOOL)arg0;
- (Class)dispatcherManagerClassType;
- (Class)elementConfigsClassType;
- (void)viewLayoutIfNeeded;
- (id)clearPlaceHolderView;
- (void)setClearPlaceHolderView:(id)arg0;
- (void)enterRichAweme:(id)arg0;
- (BOOL)richAwemeplainTextClick;
- (BOOL)isDispatcherSetModelCall;
- (BOOL)isDouDiscountInnerPage;
- (BOOL)notSmallDevice;
- (void)setHasReached5s:(BOOL)arg0;
- (BOOL)hasReached5s;
- (id)exposedCommonCommerceDelegate;
- (double)p_rightContainerWidth;
- (id)commerceInnerDelegate;
- (id)smartCommentPreloadTrigger;
- (void)setSmartCommentPreloadTrigger:(id)arg0;
- (void)setCommerceInnerDelegate:(id)arg0;
- (void)p_performOnHide:(id /* block */)arg0;
- (BOOL)isExistSelector:(SEL)arg0 inClass:(Class)arg1;
- (void /* function */ *)safeImplementation:(SEL)arg0;
- (void)showNoSelectorMessage:(id)arg0;
- (void)bindConfigProperties;
- (void)bindConfigWithHelper;
- (void)setupPreTrackerNode;
- (id)chapterProgressBarPlaceHolderView;
- (void)configureLeftContainerElement;
- (id /* block */)adjustReturnViewAlphaBlock;
- (id /* block */)closeVCWithCloseMethodBlock;
- (void)bulletStatusSwitch;
- (BOOL)needUpdateHeight;
- (void)setNeedUpdateHeight:(BOOL)arg0;
- (void)setPageAppearHandler:(id /* block */)arg0;
- (id /* block */)pageAppearHandler;
- (void)commerceControllerLazyLoad:(id)arg0;
- (void)ecommerce_setModel:(id)arg0;
- (id)poiBusinessInnerDelegate;
- (void)setIsDispatcherSetModelCall:(BOOL)arg0;
- (void)updateContainerData:(id)arg0;
- (BOOL)initRightFlag:(BOOL)arg0;
- (BOOL)forceCleanMode;
- (BOOL)showLeftOnly;
- (void)setupClearPlaceHolderView;
- (void)hideRightElementsForTeenChannel;
- (id)authorExtraPlaceHolderView;
- (id)descriptionExtraPlaceHolderView;
- (void)printViewTree:(id)arg0 start:(BOOL)arg1;
- (id)abilityConfig;
- (id)bottomFilterHandler;
- (id)bottomTempAnimationManager;
- (void)onAuthorExtraPlaceHolderViewClick:(id)arg0;
- (void)onDescriptionExtraPlaceHolderViewClick:(id)arg0;
- (double)p_leftAndRightContainerBottomOffset;
- (double)leftContainerBottomOffset;
- (BOOL)needsRebuildLeftContainer;
- (id)getConstraintDescriptionArray:(id)arg0;
- (void)monitorLeftElementsHidden;
- (void)updateCommerceController;
- (void)removeAndRebuildRightContainer;
- (id)pagiantedController;
- (id)videoDescriptionMaskLayerDelegate;
- (void)ecommerce_resumeCardAnimation;
- (void)ecommerce_cancelCardAnimation;
- (id)ecommerceInnerDelegate;
- (void)setupOuterEvent;
- (id)searchVideoFeedMaskView;
- (BOOL)__isNearbyWaterFall;
- (BOOL)canHideRightInteractionWithPreviousPage;
- (void)setCanHideRightInteractionWithPreviousPage:(BOOL)arg0;
- (void)setSearchVideoFeedMaskView:(id)arg0;
- (BOOL)firstViewWillAppear;
- (void)setFirstViewWillAppear:(BOOL)arg0;
- (void)setBottomTempAnimationManager:(id)arg0;
- (void)setBottomFilterHandler:(id)arg0;
- (void)setEcommerceInnerDelegate:(id)arg0;
- (void)setPoiBusinessInnerDelegate:(id)arg0;
- (void)setPagiantedController:(id)arg0;
- (void)setAuthorExtraPlaceHolderView:(id)arg0;
- (void)setDescriptionExtraPlaceHolderView:(id)arg0;
- (void)setAbilityConfig:(id)arg0;
- (void)setChapterProgressBarPlaceHolderView:(id)arg0;
- (void)prepareForDisplay;
- (void)setModel:(id)arg0;
- (void)scrollViewWillBeginDecelerating:(id)arg0;
- (id)init;
- (void)setMediaType:(long long)arg0;
- (unsigned long long)interactionType;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (id)pinchGesture;
- (void)applicationWillEnterForeground;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint { double x0; double x1; })arg1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)arg2;
- (void)setContext:(id)arg0;
- (id)model;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })arg0 withTransitionCoordinator:(id)arg1;
- (long long)mediaType;
- (long long)type;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)scrollViewDidEndScrollingAnimation:(id)arg0;
- (BOOL)isInteracting;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)setViewModel:(id)arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (void)touchesEnded:(id)arg0 withEvent:(id)arg1;
- (id)panelController;
- (id)context;
- (void)applicationDidEnterBackground;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (id)viewModel;
- (void)didReceiveMemoryWarning;
- (id)playerView;
- (id)initWithMediaType:(long long)arg0;
- (id)forwardingTargetForSelector:(SEL)arg0;
- (void)viewWillAppear:(BOOL)arg0;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (void)dealloc;
- (void)setPlayerView:(id)arg0;
- (void)reset;
- (void)viewDidLoad;
- (void)pause:(BOOL)arg0;
- (void)setInteractionType:(unsigned long long)arg0;
- (id)panGesture;
- (BOOL)isDisplaying;
- (id)preloader;
- (void)setPreloader:(id)arg0;
- (id)previewController;
- (void)didEndDisplaying;
- (BOOL)isFirstAppear;
- (void)setupContext;
- (void)stopLoadingAnimation;
- (id)progressController;
- (BOOL)isViewAppearing;
- (id)bottomContainerView;
- (void)setupNotifications;
- (id)configHelper;
- (void)setConfigHelper:(id)arg0;
- (void)willDisplay;
- (void)playVideo;
- (void)pauseVideo;
- (void)_updateViewConstraints;
- (id)bottomContainer;
- (void)setBottomContainer:(id)arg0;
- (void)setVideoDelegate:(id)arg0;
- (id)videoDelegate;

@end
