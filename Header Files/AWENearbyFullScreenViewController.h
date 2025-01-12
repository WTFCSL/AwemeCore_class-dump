//
//     Generated by private class-dump
//

@class UIViewController, AWENearbyDiamondAnimationView, AWENearbySkyLightCatchView, UILabel, AWENearbySubPageUndertakeManager, AWENearbySkylightGestureGuideView, AWENearbySkyLightViewController, NSString, AWENearbyPageContext, AWEPageContext, UITableViewCell, AWENearbySkyLightCapsuleView, AWENearbySkyLightAnchorContainerView, UIView, UIPanGestureRecognizer, AWENearbyWidgetViewController, AWENearbySwitchContext, UIImageView, AWEGradientView, AWEBinding, AWENearbyFullScreenViewModel, AWENearbySkylightPanGestureGuideView;
@protocol AWENewNearbyViewControllerProtocol, AWEFeedRefreshAnimationProtocol, AWERouterViewControllerProtocol, AWENearbyContainerProtocol, AWENearbyThemeStyleProtocol, AWEViewControllerProtocol, AWEFeedTableViewControllerProtocol, AWEFeedTabItemViewControllerProtocol, AWENearbyVcProtocol, AWEXTabChildViewControllerProtocol, AWEFeedViewControllerSwitchProtocol, AWEXTabBaseChannelControllerProtocol;

@interface AWENearbyFullScreenViewController : UIViewController <UIGestureRecognizerDelegate, AWEFullScreenPopTransitionCustomize, AWENearbySkyLightCatchViewDelegate, AWEMotionItemConfigProtocol, DUXPopoverDelegate, AWEPlayVideoMessage, AWENearbyFullScreenViewControllerPrivateProtocol, AWENearbyDCardActionProtocol, AWENearbyResourceResponseProtocol, BTMPageManagableProtocol, AWELivePlayMessage, AWERouterViewControllerProtocol, AWEFeedTabItemViewControllerProtocol, AWENewNearbyViewControllerProtocol, AWEViewControllerProtocol, AWEXTabChildViewControllerProtocol, AWENearbyContainerChildProtocol, AWENearbySubPageUndertakeProtocol> {
    BOOL _isTopBarLightWithActivity;
    BOOL _isHadViewDidLoad;
    BOOL _viewDidAppearOnce;
    BOOL _willAppear;
    BOOL _willAppearOnce;
    BOOL _isRightSlide;
    BOOL _loadmoreNoMatchFilterRefreshLock;
    BOOL _isFeedInNearbyTab;
    BOOL _willRefreshNearbyData;
    BOOL _showSkylightByRefreshWhenNearbyAppear;
    BOOL _didAppear;
    BOOL _enterNearbyFromTabChange;
    BOOL _skylightOpenBySettingsRefresh;
    BOOL _hasSetupUI;
    BOOL _isClickCapsuleView;
    BOOL _didLaunchForUndertake;
    BOOL _isHalfScreenShowing;
    BOOL _needTryShowGuideAnimate;
    BOOL _needTryShowSwitchBtnGuideAnimate;
    BOOL _isScrolling;
    BOOL _isMoveGuideShowed;
    BOOL _isMoveGuideShowing;
    BOOL _isSkyLightAnimating;
    BOOL _isCurrentDiamondCache;
    id<AWEXTabBaseChannelControllerProtocol> _channelController;
    id<AWENearbyVcProtocol> _delegate;
    id<AWENearbyThemeStyleProtocol> _themeDelegate;
    id<AWERouterViewControllerProtocol, AWEFeedTabItemViewControllerProtocol, AWENewNearbyViewControllerProtocol, AWEViewControllerProtocol, AWEXTabChildViewControllerProtocol, AWENearbyContainerProtocol> _parent;
    id /* block */ _initFetchBlock;
    AWENearbyFullScreenViewModel *_viewModel;
    long long _refreshState;
    unsigned long long _slidePanType;
    id<AWEFeedRefreshAnimationProtocol> _refreshAnimation;
    unsigned long long _slideDirection;
    AWEBinding *_feedNoMatchFilterRequestBinding;
    NSString *_referString;
    NSString *_previousReferString;
    AWEPageContext *_currentCellPlayInteractionContext;
    id /* block */ _playInteractionContextHandle;
    UIImageView *_headAreaImageView;
    UIImageView *_backgroundImageView;
    AWEGradientView *_tabbarMaskView;
    UIView *_feedScaleView;
    UITableViewCell *_firstTableViewCell;
    UIImageView *_feedVeinView;
    AWENearbyDiamondAnimationView *_diamondAniationGuideView;
    UIView *_videoTagView;
    UILabel *_videoTagLabel;
    NSString *_lastHalfScreenViewID;
    AWENearbyWidgetViewController *_widgetViewController;
    AWENearbySubPageUndertakeManager *_subPageManager;
    unsigned long long _halfScreenStyle;
    AWENearbySwitchContext *_switchContext;
    AWENearbyPageContext *_pageContext;
    AWENearbySkyLightViewController *_skyLightViewController;
    UIViewController<AWEFeedTableViewControllerProtocol, AWEFeedTabItemViewControllerProtocol, AWEFeedViewControllerSwitchProtocol> *_feedTableViewController;
    AWENearbySkyLightCapsuleView *_capsuleView;
    AWENearbySkyLightCatchView *_catchView;
    AWENearbySkyLightAnchorContainerView *_anchorContainerView;
    UIPanGestureRecognizer *_diamondPanGestureRecognizer;
    AWENearbySkylightPanGestureGuideView *_diamondPanGestureGuideView;
    UIView *_feedMaskView;
}

@property (readonly, nonatomic) AWENearbySkylightGestureGuideView *sklightGestureGuideView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isHadViewDidLoad;
@property (nonatomic) BOOL viewDidAppearOnce;
@property (nonatomic) long long refreshState;
@property (nonatomic) unsigned long long slidePanType;
@property (retain, nonatomic) id<AWEFeedRefreshAnimationProtocol> refreshAnimation;
@property (nonatomic) BOOL willAppear;
@property (nonatomic) BOOL willAppearOnce;
@property (nonatomic) BOOL isRightSlide;
@property (nonatomic) unsigned long long slideDirection;
@property (nonatomic) BOOL loadmoreNoMatchFilterRefreshLock;
@property (retain, nonatomic) AWEBinding *feedNoMatchFilterRequestBinding;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *previousReferString;
@property (nonatomic) BOOL isFeedInNearbyTab;
@property (nonatomic) BOOL willRefreshNearbyData;
@property (nonatomic) BOOL showSkylightByRefreshWhenNearbyAppear;
@property (nonatomic) BOOL didAppear;
@property (nonatomic) BOOL enterNearbyFromTabChange;
@property (nonatomic) BOOL skylightOpenBySettingsRefresh;
@property (weak, nonatomic) AWEPageContext *currentCellPlayInteractionContext;
@property (copy, nonatomic) id /* block */ playInteractionContextHandle;
@property (nonatomic) BOOL hasSetupUI;
@property (nonatomic) BOOL isClickCapsuleView;
@property (nonatomic) BOOL didLaunchForUndertake;
@property (nonatomic) BOOL isHalfScreenShowing;
@property (retain, nonatomic) UIImageView *headAreaImageView;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) AWEGradientView *tabbarMaskView;
@property (weak, nonatomic) UIView *feedScaleView;
@property (weak, nonatomic) UITableViewCell *firstTableViewCell;
@property (retain, nonatomic) UIImageView *feedVeinView;
@property (retain, nonatomic) AWENearbyDiamondAnimationView *diamondAniationGuideView;
@property (retain, nonatomic) UIView *videoTagView;
@property (retain, nonatomic) UILabel *videoTagLabel;
@property (copy, nonatomic) NSString *lastHalfScreenViewID;
@property (retain, nonatomic) AWENearbyWidgetViewController *widgetViewController;
@property (retain, nonatomic) AWENearbySubPageUndertakeManager *subPageManager;
@property (nonatomic) unsigned long long halfScreenStyle;
@property (retain, nonatomic) AWENearbySwitchContext *switchContext;
@property (nonatomic) BOOL needTryShowGuideAnimate;
@property (nonatomic) BOOL needTryShowSwitchBtnGuideAnimate;
@property (retain, nonatomic) AWENearbyPageContext *pageContext;
@property (nonatomic) BOOL isScrolling;
@property (nonatomic) BOOL isMoveGuideShowed;
@property (nonatomic) BOOL isMoveGuideShowing;
@property (nonatomic) BOOL isSkyLightAnimating;
@property (nonatomic) BOOL isCurrentDiamondCache;
@property (retain, nonatomic) AWENearbySkyLightViewController *skyLightViewController;
@property (retain, nonatomic) UIViewController<AWEFeedTableViewControllerProtocol, AWEFeedTabItemViewControllerProtocol, AWEFeedViewControllerSwitchProtocol> *feedTableViewController;
@property (retain, nonatomic) AWENearbySkyLightCapsuleView *capsuleView;
@property (retain, nonatomic) AWENearbySkyLightCatchView *catchView;
@property (retain, nonatomic) AWENearbySkyLightAnchorContainerView *anchorContainerView;
@property (retain, nonatomic) UIPanGestureRecognizer *diamondPanGestureRecognizer;
@property (retain, nonatomic) AWENearbySkylightPanGestureGuideView *diamondPanGestureGuideView;
@property (retain, nonatomic) UIView *feedMaskView;
@property (weak, nonatomic) id<AWEXTabBaseChannelControllerProtocol> channelController;
@property (weak, nonatomic) id<AWENearbyVcProtocol> delegate;
@property (weak, nonatomic) id<AWENearbyThemeStyleProtocol> themeDelegate;
@property (weak, nonatomic) id<AWERouterViewControllerProtocol, AWEFeedTabItemViewControllerProtocol, AWENewNearbyViewControllerProtocol, AWEViewControllerProtocol, AWEXTabChildViewControllerProtocol, AWENearbyContainerProtocol> parent;
@property (copy, nonatomic) id /* block */ initFetchBlock;
@property (copy, nonatomic) NSString *customRefreshEnterMethod;
@property (nonatomic) BOOL isTopBarLightWithActivity;
@property (retain, nonatomic) AWENearbyFullScreenViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) double diamondsViewVisiableHeight;

+ (Class)aAWEFlameHTSAdapterClass;
+ (void)pauseNearbyVideoWithID:(id)arg0 pause:(BOOL)arg1;
+ (Class)aAWENearbyFullScreenViewControllerCommonAdapterClass;

- (id)referString;
- (void)transition_didPopDoneTransitionWithContext:(id)arg0;
- (BOOL)configWithRouterParamDict:(id)arg0;
- (void)pauseWithAnimation;
- (void)playWithAnimation;
- (void)playerDidReadyForDisplay:(id)arg0;
- (void)player:(id)arg0 didChangePlaybackStateWithAction:(long long)arg1;
- (BOOL)btm_autoManaged;
- (id)btm_pageIdentifier;
- (void)setReferString:(id)arg0;
- (void)transition_didStartTransitionWithContext:(id)arg0;
- (id)transition_destinatedViewControllerForSlideDirection:(unsigned long long)arg0 gestureRecognizer:(id)arg1;
- (void)animatedRefreshWithCompletion:(id /* block */)arg0;
- (BOOL)currentTabIsTop;
- (BOOL)canRefresh;
- (BOOL)isCommentPanelShowing;
- (BOOL)isLikeUserPanelShowing;
- (BOOL)isRelatedVideoPanelShowing;
- (BOOL)isAITextPanelShowing;
- (BOOL)isVideoDescriptionPanelShowing;
- (BOOL)isVideoRelatedPanelShowing;
- (void)onAwemeDeleted:(id)arg0 isDislike:(BOOL)arg1;
- (void)onAwemeDeleted:(id)arg0 isLiveFinish:(BOOL)arg1 isDislike:(BOOL)arg2;
- (void)onAwemeMarkDislikeCanWithdraw:(id)arg0;
- (BOOL)onSegmentRepeatedClickWithIndex:(unsigned long long)arg0;
- (void)setRefreshMethod:(id)arg0;
- (id)currentAweme;
- (id)currentAwemeID;
- (id)currentAwemeAuthorID;
- (void)cancelRefresh;
- (double)getPlayTimeStamp;
- (id)currentVideoController;
- (id)channelController;
- (void)setChannelController:(id)arg0;
- (id)xtabFeedTableViewController;
- (BOOL)isSkyLightViewShowing;
- (unsigned long long)transition_destinatedType;
- (void)requestLocationPermission;
- (BOOL)isHalfScreenShowing;
- (id)anchorContainerView;
- (unsigned long long)slideDirection;
- (void)setSlideDirection:(unsigned long long)arg0;
- (BOOL)verticalPanGestureRecognizerShouldBegin:(id)arg0;
- (BOOL)refreshWithType:(long long)arg0 completion:(id /* block */)arg1;
- (id)motionItemConfig;
- (BOOL)enableShake;
- (double)shakeTimeInterval;
- (long long)motionLevel;
- (id)refreshAnimation;
- (void)setRefreshState:(long long)arg0;
- (void)setRefreshAnimation:(id)arg0;
- (void)playIfActive;
- (void)setupBinding;
- (void)didReceiveShakeEvent:(id)arg0 error:(id)arg1 from:(id)arg2;
- (void)_windowDidBecomeKeyNotification:(id)arg0;
- (void)_windowDidResignKeyNotification:(id)arg0;
- (void)_onAwemeDeleteNotification:(id)arg0;
- (void)setDidAppear:(BOOL)arg0;
- (unsigned long long)halfScreenStyle;
- (void)setHalfScreenStyle:(unsigned long long)arg0;
- (id)videoTagView;
- (void)setVideoTagView:(id)arg0;
- (id)feedTableViewController;
- (id)skyLightViewController;
- (id)catchView;
- (void)setSkyLightViewController:(id)arg0;
- (void)setFeedTableViewController:(id)arg0;
- (void)setCatchView:(id)arg0;
- (void)setIsHalfScreenShowing:(BOOL)arg0;
- (id)aAWEFlameHTSAdapter;
- (id /* block */)initFetchBlock;
- (void)setInitFetchBlock:(id /* block */)arg0;
- (id)modelForPlayer:(id)arg0;
- (void)updateRefreshTypeWithTrigger:(unsigned long long)arg0;
- (id)nearbyIdentifier;
- (void)observeDiamondsViewVisiableHeightChange:(id /* block */)arg0;
- (void)saveRequestParamsFromPush:(id)arg0 freshType:(long long)arg1;
- (void)selectCity;
- (unsigned long long)nearbyListType;
- (void)onFeedSwitchToNearbyWithModel:(id)arg0;
- (void)onFeedLeaveFromNearbyWithModel:(id)arg0;
- (void)updatePreviousPageContext:(id)arg0;
- (double)diamondsViewVisiableHeight;
- (id)customRefreshEnterMethod;
- (void)setCustomRefreshEnterMethod:(id)arg0;
- (void)setScrollViewContentInsetAdjustmentBehavior:(long long)arg0;
- (void)_splashViewDidDisappear:(id)arg0;
- (void)p_handleXTabChange:(id)arg0;
- (id)tabbarMaskView;
- (void)setTabbarMaskView:(id)arg0;
- (id)initWithPageContext:(id)arg0;
- (unsigned long long)awe_fullScreenPopTransitionTriggerDirection;
- (BOOL)awe_fullScreenPopTransitionHideTabbarIfNeeded;
- (void)animatedRefreshWithType:(long long)arg0 completion:(id /* block */)arg1;
- (unsigned long long)slidePanType;
- (void)setSlidePanType:(unsigned long long)arg0;
- (void)p_handleTabBarChange:(id)arg0;
- (void)setAnchorContainerView:(id)arg0;
- (void)player:(id)arg0 didChangePlaybackStateWithState:(unsigned long long)arg1;
- (double)p_getSkyLightOffsetYInXTab;
- (id)videoTagLabel;
- (void)setVideoTagLabel:(id)arg0;
- (id)constData;
- (void)handleUndertakeWithDiamondParams:(id)arg0 halfScreenModel:(id)arg1;
- (void)setLastHalfScreenViewID:(id)arg0;
- (void)updateAngleTargetView:(id)arg0;
- (BOOL)startDiamondUpdateAnimationWithViewID:(id)arg0 diamondUpdateInfo:(id)arg1;
- (id)lastHalfScreenViewID;
- (id /* block */)halfScreenBeforeShowHandlerWithHalfScreenModel:(id)arg0 diamondInfo:(id)arg1;
- (id /* block */)halfScreenShowCompletionWithHalfScreenModel:(id)arg0 diamondInfo:(id)arg1;
- (id /* block */)halfScreenCloseHandlerWithHalfScreenModel:(id)arg0 diamondInfo:(id)arg1;
- (void)useCacheLocationPreLoadHalfScreen;
- (void)setIsTopBarLightWithActivity:(BOOL)arg0;
- (id)containerCurrentAwemeModel;
- (void)nearbyAnimatedRefreshWithCompletion:(id /* block */)arg0;
- (void)animateInsertContainerAwemeModel:(id)arg0 index:(long long)arg1 insertType:(unsigned long long)arg2;
- (void)deleteAwemes:(id)arg0;
- (void)willSwitchChannel:(id)arg0;
- (void)didSwitchChannel:(id)arg0;
- (void)willEndSwitchChannel;
- (void)didEndSwitchChannel;
- (void)willStartAnimation;
- (id)currentBgImage;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })currentBgFrame;
- (void)updateCitySelectText:(id)arg0;
- (void)nearbyViewWillTransitionToSize:(struct CGSize { double x0; double x1; })arg0 withTransitionCoordinator:(id)arg1;
- (void)cityWillChange;
- (void)nearbyResourceResponse:(id)arg0 refreshType:(unsigned long long)arg1 pageType:(long long)arg2;
- (BOOL)viewDidAppearOnce;
- (void)setViewDidAppearOnce:(BOOL)arg0;
- (id)headAreaImageView;
- (void)setNeedTryShowSwitchBtnGuideAnimate:(BOOL)arg0;
- (BOOL)isTopBarLightWithActivity;
- (BOOL)needTryShowSwitchBtnGuideAnimate;
- (void)setSwitchContext:(id)arg0;
- (void)creatWidgetModelWithResponse:(id)arg0;
- (void)shouldPauseNearbyVideoWithID:(id)arg0 pause:(BOOL)arg1;
- (id)isSchemaInsertLiveUndeTake;
- (void)setHeadAreaImageView:(id)arg0;
- (id)switchContext;
- (void)publishEventNearbyQueryHalfScreenParam;
- (void)__didLivePlayAlreadyEnd:(id)arg0;
- (void)openHalfScreenDialog:(id)arg0;
- (void)updateSkylightFeedParamsWithParams:(id)arg0;
- (void)refreshNearbyFeed;
- (void)shouldShowSmallScreenWithRoomID:(id)arg0 customSchema:(id)arg1 scene:(long long)arg2;
- (BOOL)isLiveSmallWindowShowingAtNearby;
- (id)getLiveSmallWindowManger;
- (void)hideLiveSmallScreen;
- (void)setSubPageManager:(id)arg0;
- (id)subPageManager;
- (void)__handleDiamondGesture:(id)arg0;
- (void)setDiamondPanGestureRecognizer:(id)arg0;
- (id)diamondPanGestureRecognizer;
- (void)__updateDiamondGestureBeginState;
- (double)skylightOriginHeight;
- (id)diamondPanGestureGuideView;
- (void)__updateSubViewsWithPanGestureTranslationY:(double)arg0;
- (void)__updateSubviewsWhenPanGestureEnd;
- (void)__updateFeedUIBeautifyStyleWithTranslationY:(double)arg0;
- (void)setDiamondPanGestureGuideView:(id)arg0;
- (id)feedMaskView;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })__videoTransformWithTranslationY:(double)arg0 skylightHeight:(double)arg1;
- (id)sklightGestureGuideView;
- (void)__showDimaondGestureGuideIfNeeds;
- (void)setSklightGestureGuideView:(id)arg0;
- (void)setupDiamondPanGestureRecognizer;
- (void)resetDiamondPanGestureIfNeeds;
- (void)starDiamondPanGestureGuideIfNeeds;
- (void)removeDiamondPanGestureGuideIfNeeds;
- (void)insertDCardIntoNearbyFeed:(id)arg0 toIndex:(long long)arg1 exposedAwemes:(id)arg2 awemeCountInResponse:(long long)arg3 isPureLynx:(BOOL)arg4 respID:(id)arg5 complete:(id /* block */)arg6;
- (void)configListDataBind;
- (BOOL)isHadViewDidLoad;
- (void)setIsHadViewDidLoad:(BOOL)arg0;
- (void)__viewDidLoad;
- (void)dataControllerPreInit;
- (void)__addPureLiveNotification;
- (void)p_handleFeedContainerIndexChange:(id)arg0;
- (void)__tableViewCellWillDisplayWithNoti:(id)arg0;
- (void)__addFeedVideoPlayPeriodObserver;
- (void)setWillAppearOnce:(BOOL)arg0;
- (void)__showGuideIfNeed;
- (void)refreshSettingsOrOpenSkylightIfNeeded;
- (void)didSkyLightDiamondReady:(id)arg0;
- (BOOL)needTryShowGuideAnimate;
- (void)setNeedTryShowGuideAnimate:(BOOL)arg0;
- (void)showIconInfoPanel;
- (void)__handleDiamondGuideAnimationCompletionIfNeedsWithInterruptd:(BOOL)arg0 shouldPlayFeed:(BOOL)arg1;
- (void)p_trackLeaveHomepageWithLandingPage:(id)arg0;
- (void)setIsFeedInNearbyTab:(BOOL)arg0;
- (void)setPreviousReferString:(id)arg0;
- (void)__leaveNearbyWithTabChangeReferString:(id)arg0 videoIndex:(long long)arg1;
- (void)setEnterNearbyFromTabChange:(BOOL)arg0;
- (void)__configWidgetWithModel:(id)arg0;
- (void)configNavViewAlpha:(double)arg0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })arg1 shouldShowSide:(BOOL)arg2;
- (void)__updateCapsuleViewHidden;
- (void)__updateHasNoneAnimationSubviewsState;
- (void)showMoveGuideViewWhenDiamondRenderCompletedWithTriggerType:(long long)arg0;
- (void)tryShowSwitchBtnFirstGuide;
- (BOOL)isCurrentDiamondCache;
- (void)setIsClickCapsuleView:(BOOL)arg0;
- (void)__jumpToPOIDetailFromSkyLightAnchor;
- (void)setHasSetupUI:(BOOL)arg0;
- (void)setIsCurrentDiamondCache:(BOOL)arg0;
- (id)clientShowParamsWithAweme:(id)arg0;
- (void)__handleSkylightWithShowType:(unsigned long long)arg0 fromStatus:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)__updateBacgroundImageViewWithSettingResponse:(id)arg0;
- (id)__getSkylightShowParamsWithIsClickCapsule:(BOOL)arg0 isRefresh:(BOOL)arg1;
- (void)setSkylightOpenBySettingsRefresh:(BOOL)arg0;
- (void)__refreshSkylightFrame;
- (void)__updateHeadAreaBackgroundIfNeededWithSettingsResponse:(id)arg0;
- (void)__shouldPureLive;
- (BOOL)isSkyLightOpen;
- (void)__setLiveCellPureMode:(BOOL)arg0;
- (void)__showSkyLightWithShowtype:(unsigned long long)arg0 fromStatus:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)setShowSkylightByRefreshWhenNearbyAppear:(BOOL)arg0;
- (void)__changeXtabModelFullScreenStatus:(BOOL)arg0;
- (void)__showSkyLightWithStatus:(BOOL)arg0 fromStatus:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)skylightOpenBySettingsRefresh;
- (BOOL)isClickCapsuleView;
- (id)__getSkylightShowParamsWithIsClickCapsule:(BOOL)arg0;
- (void)__updateSkyLightShowWithStatus:(BOOL)arg0 fromStatus:(BOOL)arg1 animated:(BOOL)arg2 params:(id)arg3;
- (void)__openSkyLightFromStatus:(BOOL)arg0 animated:(BOOL)arg1 params:(id)arg2;
- (void)__closeSkyLightFromStatus:(BOOL)arg0 animated:(BOOL)arg1;
- (double)__skylightHeight;
- (void)setIsSkyLightAnimating:(BOOL)arg0;
- (void)__updateHasAnimationSubviewsDefaultConstraints;
- (void)__updateFeedUIBeautifyStyleWithStatus:(BOOL)arg0 animated:(BOOL)arg1;
- (void)__openSkylightWithPushAnimationWithCompletion:(id /* block */)arg0;
- (void)__startDiamondGuideAnimation;
- (void)__updateWidgetPositionIfNeededWithSkylightOpening:(BOOL)arg0;
- (void)setDiamondAniationGuideView:(id)arg0;
- (id)diamondAniationGuideView;
- (id)feedVeinView;
- (void)__closeSkylightWithCapsuleAnimationWithCompletion:(id /* block */)arg0;
- (void)__exchangeSkylightAndFeedViewIndex;
- (id)feedScaleView;
- (void)__scaleFeedWithAnimated:(BOOL)arg0;
- (void)__updateFeedTableViewControllerHasCovered;
- (id)aAWENearbyFullScreenViewControllerCommonAdapter;
- (BOOL)loadmoreNoMatchFilterRefreshLock;
- (void)setLoadmoreNoMatchFilterRefreshLock:(BOOL)arg0;
- (id)previousReferString;
- (void)__showPolLandingGuideWithLottiePath:(id)arg0;
- (BOOL)isMoveGuideShowed;
- (void)setIsMoveGuideShowed:(BOOL)arg0;
- (BOOL)isSkyLightAnimating;
- (void)setIsMoveGuideShowing:(BOOL)arg0;
- (void)showHalfScreenIfNeedWithHalfScreenModel:(id)arg0 diamondParams:(id)arg1;
- (BOOL)enterNearbyFromTabChange;
- (BOOL)willRefreshNearbyData;
- (void)setWillRefreshNearbyData:(BOOL)arg0;
- (BOOL)showSkylightByRefreshWhenNearbyAppear;
- (BOOL)hasSetupUI;
- (BOOL)isMoveGuideShowing;
- (id)currentCellPlayInteractionContext;
- (id /* block */)playInteractionContextHandle;
- (void)setPlayInteractionContextHandle:(id /* block */)arg0;
- (void)setCurrentCellPlayInteractionContext:(id)arg0;
- (id)currentFeedPlayInteractionContext;
- (void)setFeedScaleView:(id)arg0;
- (id)firstTableViewCell;
- (void)setFirstTableViewCell:(id)arg0;
- (BOOL)isFromNearby:(id)arg0;
- (BOOL)willAppearOnce;
- (void)dismissSkyLight;
- (void)setViewControllerScrollEnable:(BOOL)arg0;
- (BOOL)douyinCanShowSkyLightInNearby;
- (BOOL)douyinHtsCanShowSkyLightInNearby;
- (id)__scaleImage:(id)arg0 toScale:(float)arg1;
- (BOOL)__canShowSkyLightInNearby;
- (void)__clearFilterRefreshIfNeedWithOffset:(double)arg0;
- (void)xTabChannelDidFinishUpdate;
- (void)removeSkylightFeedParamsWithParamsKey:(id)arg0;
- (void)updateXTabLineView:(BOOL)arg0;
- (void)tryToCleanDCard:(id)arg0;
- (void)animateInsertContainerAwemeModel:(id)arg0 index:(long long)arg1 allowApendMax:(BOOL)arg2 insertType:(unsigned long long)arg3;
- (BOOL)isRightSlide;
- (void)setIsRightSlide:(BOOL)arg0;
- (id)feedNoMatchFilterRequestBinding;
- (void)setFeedNoMatchFilterRequestBinding:(id)arg0;
- (BOOL)isFeedInNearbyTab;
- (BOOL)didLaunchForUndertake;
- (void)setDidLaunchForUndertake:(BOOL)arg0;
- (void)setFeedVeinView:(id)arg0;
- (void)setFeedMaskView:(id)arg0;
- (id)displayString;
- (void)reload;
- (void)setIsScrolling:(BOOL)arg0;
- (void)setScrollEnabled:(BOOL)arg0;
- (void)setParent:(id)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (struct CGPoint { double x0; double x1; })contentOffset;
- (void).cxx_destruct;
- (void)setCapsuleView:(id)arg0;
- (id)parent;
- (id)backgroundImageView;
- (id)store;
- (BOOL)isScrolling;
- (void)stop;
- (void)viewWillDisappear:(BOOL)arg0;
- (BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
- (long long)preferredStatusBarStyle;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)setViewModel:(id)arg0;
- (id)delegate;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (id)capsuleView;
- (void)setWidgetViewController:(id)arg0;
- (void)applicationDidEnterBackground;
- (BOOL)isActive;
- (long long)refreshState;
- (id)viewModel;
- (BOOL)didAppear;
- (id)widgetViewController;
- (BOOL)prefersStatusBarHidden;
- (void)viewWillAppear:(BOOL)arg0;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)play;
- (void)pause;
- (void)viewDidLoad;
- (void)applicationWillTerminate;
- (id)currentInteractionController;
- (void)_appWillResignActive:(id)arg0;
- (void)setupUI;
- (void)setBackgroundImageView:(id)arg0;
- (void)_appDidBecomeActive:(id)arg0;
- (id)themeDelegate;
- (void)setThemeDelegate:(id)arg0;
- (BOOL)willAppear;
- (id)pageContext;
- (void)setPageContext:(id)arg0;
- (void)setWillAppear:(BOOL)arg0;

@end
