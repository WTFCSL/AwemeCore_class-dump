//
//     Generated by private class-dump
//

@class NSDictionary, AWEFeedMultiTabSegmentedControl, NSMutableArray, AWEFCPauseEntranceView, AWEListDataController, AWELeftSideBarManager, AWELuckyBagFeedEntranceView, AWEFeedMultiTabSegmentedViewUIConfig, AWEXTabContainerController, AWEPublishFeedEntranceView, AWEUILoadingView, AWEFeedChannelManager, AWEFeedTopBarContainer, UIButton, AWEFeedContainerViewControllerBubbleObject, UIViewController, AWELiveSquareBubbleGuideModel, AWEAwemeModel, AWECornerMaskUIImageView, AWEBubble, AWEFeedChannelEnterModel, AWELeftSideBarIMEntranceView, AWELeftExtensionEntranceView, UIView, AWELeftSideBarEntranceView, AWEPerfFPSScene, AWESearchBubbleEntranceView, AWEFeedContainerLandingStoreModel, NSString, AWEHPMessageForwardManager, UIImageView, AWESlidingViewController, AWEHPChannelPauseSearchEntranceTask, AWEFeedContainerContentView, AWELeftSideBarIMEntranceViewModel, UILabel, AWEDiscoverFeedEntranceView, AWEAnimatedButton, AWEFeedRootViewControllerAbilityProxy;
@protocol AWESlidingTabbarProtocol, AWEFeedTabItemViewControllerProtocol, AWEFeedSegmentedControlProtocol, AWENewNearbyViewControllerProtocol, AWEAwemeConcernLeftPanGuideProtocol, AWEIMLeftToRightGuideViewProtocol;

@interface AWEFeedContainerViewController : AWEShellViewController <AWERouterViewControllerProtocol, AWEUserMessage, HTSAccountMessage, AWEPublishTaskMessage, AWENearbyVcProtocol, AWEFeedSlidingScrollViewDelegate, AWEFeedSearchBarRecommendWordRefreshDelegate, AWEAwemeConcernFeedLeftPanGuideViewControllerDelegate, AWEXTabContainerControllerDelegate, DUXSheetDelegate, AFDLearningViewControllerDelegate, AWEFeedThemeManagerProtocol, DUXPopoverDelegate, AWEHPTopTabUIDelegate, AWEFeedChannelHookLifeCycleDelegate, UIGestureRecognizerDelegate, AWELeftSideBarEntranceViewDelegate, AWELeftSideBarIMEntranceViewDelegate, AWEFeedSegmentedControlDelegate, AWEMultiTabManagerDelegate, AWEHPCommonTabUIDelegate, AWEHPGetTopBarInformationProtocol, AWEFeedContainerViewControllerProtocol, AWESlidingViewControllerDelegate, AWERightSidebarSourceTransationContextProvider> {
    AWEDiscoverFeedEntranceView *_discoverEntranceView;
    BOOL _forbidHideStatusBar;
    BOOL _isAppear;
    BOOL _shouldIgnoreTrackingWhenSwitchToFeed;
    BOOL _isSliding;
    BOOL _xtabIsShowTopTabBar;
    BOOL _isFromConcernToFeedButton;
    BOOL _ifAllowNavbarAnimation;
    BOOL _willRewardLynxVCOpen;
    BOOL _processingLogin;
    BOOL _isWillAppear;
    BOOL _isWillDisappear;
    BOOL _isDidAppear;
    BOOL _isDidDisappear;
    BOOL _hasViewLayoutSubviews;
    BOOL _hasShowVideoRecoveryAlert;
    BOOL _hasConfiguredSlidingSelectedIndex;
    BOOL _navBarAnimated;
    BOOL _isFromClickBackIcon;
    BOOL _isFromClickScrollToHotImage;
    BOOL _bubbleViewIsInHot;
    BOOL _hasEnterBackground;
    BOOL _isFeedSelected;
    BOOL _isEnterSearchEntrance;
    BOOL _enableIMDynamicLibraryLoadOpt;
    BOOL _enableTopbarContainerOpt;
    AWEFeedChannelManager *_channelManager;
    AWEXTabContainerController *_xTabController;
    AWEFeedMultiTabSegmentedControl<AWEFeedSegmentedControlProtocol, AWESlidingTabbarProtocol> *_segmentControl;
    AWEFeedRootViewControllerAbilityProxy *_feedRootViewControllerAbilityProxy;
    NSDictionary *_insertRequestParams;
    long long _currentIndex;
    NSMutableArray *_orderedViewControllers;
    unsigned long long _launchIndex;
    long long _lastShowLongBarIndex;
    AWEFeedChannelEnterModel *_launchEnterModel;
    AWEFeedContainerContentView *_feedContentView;
    AWEFeedContainerViewControllerBubbleObject *_bubbleObject;
    UILabel *_refreshLabel;
    AWECornerMaskUIImageView *_cornerMaskViewFeedAutoPlay;
    UIImageView *_cornerMaskView;
    AWEUILoadingView *_loadingView;
    long long _statusBarStyle;
    AWEListDataController *_familiarDataController;
    long long _scrollIndex;
    UIViewController<AWEFeedTabItemViewControllerProtocol> *_pendingViewController;
    AWEBubble *_hotSpotGuideBubble;
    AWEFeedTopBarContainer *_topBarContainer;
    UIView *_topBarLeftDefaultEntrance;
    UIView *_topBarRightDefaultEntrance;
    UIView *_topBarRightChannelEntrance;
    AWEFeedMultiTabSegmentedViewUIConfig *_segmentConfig;
    AWEFCPauseEntranceView *_pauseEntranceView;
    AWEHPChannelPauseSearchEntranceTask *_pauseEntranceTask;
    AWEPublishFeedEntranceView *_publishEntranceView;
    AWELuckyBagFeedEntranceView *_luckyBagFeedEntranceView;
    AWELeftExtensionEntranceView *_leftExtensionPlusEntranceView;
    UIButton *_leftScanButton;
    AWELeftSideBarEntranceView *_leftSideBarEntranceView;
    AWELeftSideBarIMEntranceView *_imEntranceView;
    AWELeftSideBarIMEntranceViewModel *_imEntranceViewModel;
    UIViewController<AWEAwemeConcernLeftPanGuideProtocol> *_concernFeedLeftPanGuideController;
    id<AWEIMLeftToRightGuideViewProtocol> _feedRightPanGuideController;
    AWELiveSquareBubbleGuideModel *_liveGuideModel;
    UIView *_transparentLiveView;
    AWEPerfFPSScene *_fpsScene;
    NSDictionary *_fpsExtra;
    unsigned long long _slideDirection;
    id /* block */ _landingExitBlock;
    AWEFeedContainerLandingStoreModel *_landingStoreModel;
    NSDictionary *_refreshTypeToMethod;
    AWEAnimatedButton *_reportButton;
    NSString *_firstPublishedVideoId;
    AWESlidingViewController *_slidingViewController;
    UIViewController<AWENewNearbyViewControllerProtocol> *_nearbyViewController;
    UIViewController<AWEFeedTabItemViewControllerProtocol> *_hangoutViewController;
    AWELeftSideBarManager *_leftSideBarManager;
    UIViewController<AWEFeedTabItemViewControllerProtocol> *_familiarViewController;
    UIViewController<AWEFeedTabItemViewControllerProtocol> *_myConcernController;
    AWEHPMessageForwardManager *_messageFowardManager;
    id /* block */ _dismissBubbleBlock;
    NSMutableArray *_liveShowRecordArray;
    AWESearchBubbleEntranceView *_searchBubbleView;
}

@property (nonatomic) BOOL processingLogin;
@property (retain, nonatomic) AWEFeedContainerContentView *feedContentView;
@property (retain, nonatomic) AWEFeedContainerViewControllerBubbleObject *bubbleObject;
@property (retain, nonatomic) UILabel *refreshLabel;
@property (retain, nonatomic) AWECornerMaskUIImageView *cornerMaskViewFeedAutoPlay;
@property (retain, nonatomic) UIImageView *cornerMaskView;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (nonatomic) long long statusBarStyle;
@property (nonatomic) BOOL isWillAppear;
@property (nonatomic) BOOL isWillDisappear;
@property (nonatomic) BOOL isDidAppear;
@property (nonatomic) BOOL isDidDisappear;
@property (nonatomic) BOOL hasViewLayoutSubviews;
@property (retain, nonatomic) AWEListDataController *familiarDataController;
@property (nonatomic) long long currentIndex;
@property (nonatomic) long long scrollIndex;
@property (nonatomic) BOOL hasShowVideoRecoveryAlert;
@property (retain, nonatomic) UIViewController<AWEFeedTabItemViewControllerProtocol> *pendingViewController;
@property (nonatomic) BOOL hasConfiguredSlidingSelectedIndex;
@property (nonatomic) BOOL navBarAnimated;
@property (retain, nonatomic) AWEBubble *hotSpotGuideBubble;
@property (retain, nonatomic) AWEFeedTopBarContainer *topBarContainer;
@property (retain, nonatomic) UIView *topBarLeftDefaultEntrance;
@property (retain, nonatomic) UIView *topBarRightDefaultEntrance;
@property (retain, nonatomic) UIView *topBarRightChannelEntrance;
@property (retain, nonatomic) AWEFeedMultiTabSegmentedViewUIConfig *segmentConfig;
@property (retain, nonatomic) AWEFCPauseEntranceView *pauseEntranceView;
@property (retain, nonatomic) AWEHPChannelPauseSearchEntranceTask *pauseEntranceTask;
@property (retain, nonatomic) AWEDiscoverFeedEntranceView *discoverEntranceView;
@property (retain, nonatomic) AWEPublishFeedEntranceView *publishEntranceView;
@property (retain, nonatomic) AWELuckyBagFeedEntranceView *luckyBagFeedEntranceView;
@property (retain, nonatomic) AWELeftExtensionEntranceView *leftExtensionPlusEntranceView;
@property (retain, nonatomic) UIButton *leftScanButton;
@property (retain, nonatomic) AWELeftSideBarEntranceView *leftSideBarEntranceView;
@property (retain, nonatomic) AWELeftSideBarIMEntranceView *imEntranceView;
@property (retain, nonatomic) AWELeftSideBarIMEntranceViewModel *imEntranceViewModel;
@property (retain, nonatomic) UIViewController<AWEAwemeConcernLeftPanGuideProtocol> *concernFeedLeftPanGuideController;
@property (retain, nonatomic) id<AWEIMLeftToRightGuideViewProtocol> feedRightPanGuideController;
@property (retain, nonatomic) AWELiveSquareBubbleGuideModel *liveGuideModel;
@property (retain, nonatomic) UIView *transparentLiveView;
@property (nonatomic) BOOL isFromClickBackIcon;
@property (nonatomic) BOOL isFromClickScrollToHotImage;
@property (retain, nonatomic) AWEPerfFPSScene *fpsScene;
@property (copy, nonatomic) NSDictionary *fpsExtra;
@property (nonatomic) unsigned long long slideDirection;
@property (nonatomic) BOOL bubbleViewIsInHot;
@property (copy, nonatomic) id /* block */ landingExitBlock;
@property (nonatomic) BOOL hasEnterBackground;
@property (retain, nonatomic) AWEFeedContainerLandingStoreModel *landingStoreModel;
@property (nonatomic) BOOL isFeedSelected;
@property (copy, nonatomic) NSDictionary *refreshTypeToMethod;
@property (nonatomic) BOOL isEnterSearchEntrance;
@property (nonatomic) BOOL enableIMDynamicLibraryLoadOpt;
@property (nonatomic) BOOL enableTopbarContainerOpt;
@property (readonly, nonatomic) AWEFeedChannelManager *channelManager;
@property (retain, nonatomic) AWEAnimatedButton *reportButton;
@property (retain, nonatomic) NSString *firstPublishedVideoId;
@property (retain, nonatomic) AWESlidingViewController *slidingViewController;
@property (retain, nonatomic) UIViewController<AWENewNearbyViewControllerProtocol> *nearbyViewController;
@property (retain, nonatomic) UIViewController<AWEFeedTabItemViewControllerProtocol> *hangoutViewController;
@property (readonly, nonatomic) UIViewController<AWEFeedTabItemViewControllerProtocol> *currentViewController;
@property (retain, nonatomic) AWELeftSideBarManager *leftSideBarManager;
@property (retain, nonatomic) UIViewController<AWEFeedTabItemViewControllerProtocol> *familiarViewController;
@property (retain, nonatomic) UIViewController<AWEFeedTabItemViewControllerProtocol> *myConcernController;
@property (retain, nonatomic) AWEHPMessageForwardManager *messageFowardManager;
@property (copy, nonatomic) id /* block */ dismissBubbleBlock;
@property (retain, nonatomic) NSMutableArray *liveShowRecordArray;
@property (retain, nonatomic) AWESearchBubbleEntranceView *searchBubbleView;
@property (retain, nonatomic) AWEXTabContainerController *xTabController;
@property (retain, nonatomic) AWEFeedMultiTabSegmentedControl<AWEFeedSegmentedControlProtocol, AWESlidingTabbarProtocol> *segmentControl;
@property (retain, nonatomic) AWEFeedRootViewControllerAbilityProxy *feedRootViewControllerAbilityProxy;
@property (nonatomic) BOOL forbidHideStatusBar;
@property (retain, nonatomic) NSDictionary *insertRequestParams;
@property (readonly, weak, nonatomic) UIViewController<AWEFeedTabItemViewControllerProtocol> *currentFeedVC;
@property (retain, nonatomic) NSMutableArray *orderedViewControllers;
@property (nonatomic) unsigned long long launchIndex;
@property (nonatomic) long long lastShowLongBarIndex;
@property (nonatomic) BOOL isAppear;
@property (nonatomic) BOOL shouldIgnoreTrackingWhenSwitchToFeed;
@property (nonatomic) BOOL isSliding;
@property (nonatomic) BOOL xtabIsShowTopTabBar;
@property (nonatomic) BOOL isFromConcernToFeedButton;
@property (nonatomic) BOOL ifAllowNavbarAnimation;
@property (nonatomic) BOOL willRewardLynxVCOpen;
@property (retain, nonatomic) AWEFeedChannelEnterModel *launchEnterModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) AWEAwemeModel *currentAweme;

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEFeedModuleServiceDOUYINHTSAdaperClass;
+ (Class)aAWEFeedCampaginDOUYINAdapterClass;
+ (Class)aAWEFeedContainerViewControllerCommonAdapterClass;
+ (Class)aAWEFeedContainerViewControllerDOUYINLiteAdapterClass;
+ (Class)aAWEFeedContainerViewControllerDOUYINAdapterClass;
+ (Class)aAWECampaignStagePerceiveManagerAdapterClass;

- (id)referString;
- (void)transition_didPopDoneTransitionWithContext:(id)arg0;
- (void)didFinishLogin;
- (void)task:(id)arg0 willAppendWithInfo:(id)arg1;
- (void)willStartLogin;
- (void)didCancelLogin;
- (void)didLoginFailed;
- (void)didFinishLogout;
- (BOOL)configWithRouterParamDict:(id)arg0;
- (void)pauseWithAnimation;
- (void)setPureMode:(BOOL)arg0;
- (void)willSetPureModeBlock:(BOOL)arg0;
- (void)transition_didStartTransitionWithContext:(id)arg0;
- (id)transition_destinatedViewControllerForSlideDirection:(unsigned long long)arg0 gestureRecognizer:(id)arg1;
- (BOOL)currentTabIsTop;
- (BOOL)canRefresh;
- (void)setAccessoriesHidden:(BOOL)arg0;
- (void)seekPlayTimeWithItemID:(id)arg0;
- (id)currentAweme;
- (void)cancelRefresh;
- (void)dragWithProgress:(double)arg0;
- (void)dragCancellation;
- (void)transition_didCancelPercentDrivenTransitionWithContext:(id)arg0;
- (void)transition_didChangePercentDrivenTransitionWithContext:(id)arg0;
- (id)awesst_enterFrom;
- (unsigned long long)transition_destinatedType;
- (BOOL)transition_enableCustomActionForSlideDirection:(unsigned long long)arg0 gestureRecognizer:(id)arg1;
- (id)aAWEPadModuleAdapter;
- (BOOL)awesst_isVideoPlayViewController;
- (id)awesst_additionalTrackerParams;
- (void)transition_performCustomActionForSlideDirection:(unsigned long long)arg0 gestureRecognizer:(id)arg1;
- (BOOL)hasEnterBackground;
- (id)currentTabReferString;
- (id)getTabCenterPointWithTabId:(id)arg0;
- (BOOL)isAppear;
- (void)setIsAppear:(BOOL)arg0;
- (unsigned long long)slideDirection;
- (void)setSlideDirection:(unsigned long long)arg0;
- (id)firstPublishedVideoId;
- (void)setFirstPublishedVideoId:(id)arg0;
- (id)familiarDataController;
- (id)createControllerManager;
- (id)getFeedTabTitle;
- (void)hideYellowDotWhenEnterConcernTab;
- (void)switchToTab:(long long)arg0;
- (void)switchToTabAtIndex:(long long)arg0 WithXTabTabType:(long long)arg1 param:(id)arg2;
- (id)followRedDotTrackString;
- (long long)followRedDotCount;
- (unsigned long long)launchIndex;
- (void)concernTabDidShowTrackWhenRedDotDidShowWithIndex:(long long)arg0;
- (BOOL)hadShowConcernLeftPanGuide;
- (void)setAccessoriesAlpha:(double)arg0 animateDuration:(double)arg1;
- (BOOL)showSearchBubbleAwemeCaptionInfo:(id)arg0 aweme:(id)arg1;
- (void)hideSearchBubble;
- (void)checkNewCaptionMessage;
- (id)segmentViewForIndex:(long long)arg0;
- (BOOL)isInNearbyFeedTab;
- (id)getPositionWithTabId:(id)arg0;
- (BOOL)canLandingWithTabId:(id)arg0 params:(id)arg1;
- (void)landingTabWithTabId:(id)arg0 params:(id)arg1 completionBlock:(id /* block */)arg2 exitBlock:(id /* block */)arg3 storeLanding:(BOOL)arg4;
- (void)beginLandingTabWithTabId:(id)arg0 withParams:(id)arg1;
- (void)endLandingTabWithTabId:(id)arg0 withParams:(id)arg1;
- (void)setOrderedViewControllers:(id)arg0;
- (BOOL)forbidHideStatusBar;
- (void)setForbidHideStatusBar:(BOOL)arg0;
- (id)insertRequestParams;
- (void)setInsertRequestParams:(id)arg0;
- (BOOL)isFromConcernToFeedButton;
- (void)setIsFromConcernToFeedButton:(BOOL)arg0;
- (BOOL)willRewardLynxVCOpen;
- (void)setWillRewardLynxVCOpen:(BOOL)arg0;
- (BOOL)isFollowTabBubbleShowing;
- (id)showFavoriteFirstGuidePopoverIfNeed;
- (void)topBarScrollToIndex:(long long)arg0;
- (struct CGPoint { double x0; double x1; })calculateTabCenterWithIndex:(long long)arg0;
- (id)currentFeedVC;
- (BOOL)isSlideEnable;
- (void)updateContainerAccessoriesHidden:(BOOL)arg0;
- (id)currentVC;
- (void)setHasEnterBackground:(BOOL)arg0;
- (id)reportButton;
- (void)setReportButton:(id)arg0;
- (id)currentVideoInfo;
- (void)setRefreshLabel:(id)arg0;
- (id)refreshLabel;
- (void)onDiscoverButtonClicked:(id)arg0;
- (void)playIfActive;
- (void)tabBarWillUnSelectItemWithLeaveModel:(id)arg0;
- (void)tabBarWillSelectItemWithEnterModel:(id)arg0;
- (void)setLandingExitBlock:(id /* block */)arg0;
- (id /* block */)landingExitBlock;
- (BOOL)shouldTabBarBackgroundColorFill;
- (void)executeLandingExitBlockWithEnterFrom:(id)arg0 enterPageName:(id)arg1 hasEnterPageNotice:(BOOL)arg2 isLoginStateChanged:(BOOL)arg3;
- (void)_addNotifications;
- (void)setCornerMaskView:(id)arg0;
- (void)themeDidChange:(long long)arg0;
- (BOOL)isPinchedToPurePage;
- (void)refreshSlideUnconsumedVideos;
- (id)slidingViewController;
- (long long)numberOfControllers:(id)arg0;
- (id)slidingViewController:(id)arg0 viewControllerAtIndex:(long long)arg1;
- (void)slidingViewController:(id)arg0 willTransitionToViewController:(id)arg1;
- (void)slidingViewController:(id)arg0 willTransitionToViewController:(id)arg1 transitionType:(long long)arg2;
- (void)slidingViewController:(id)arg0 didFinishTransitionToIndex:(unsigned long long)arg1;
- (void)slidingViewController:(id)arg0 didFinishTransitionFromPreviousViewController:(id)arg1 currentViewController:(id)arg2;
- (void)slidingViewController:(id)arg0 didFinishTransitionFromPreviousIndex:(long long)arg1 currentIndex:(long long)arg2 transitionType:(long long)arg3;
- (void)slidingViewControllerDidScroll:(id)arg0;
- (void)slidingViewControllerDidFinishScrollAnimation;
- (void)setSlidingViewController:(id)arg0;
- (id)mainAppWindow;
- (void)_windowDidBecomeKeyNotification:(id)arg0;
- (void)_windowDidResignKeyNotification:(id)arg0;
- (void)_onAwemeDeleteNotification:(id)arg0;
- (id)feedContentView;
- (void)setFeedContentView:(id)arg0;
- (void)willLoginAtPlatform:(unsigned long long)arg0;
- (void)didFinishBind:(BOOL)arg0 platform:(unsigned long long)arg1 error:(id)arg2;
- (id)liveShowRecordArray;
- (void)setLiveShowRecordArray:(id)arg0;
- (BOOL)isSegmentItemViewFullyPresentWithIndex:(unsigned long long)arg0;
- (BOOL)canShowAdvancedYellowdot;
- (void)refreshFeed;
- (id)aAWEFeedModuleServiceDOUYINHTSAdaper;
- (void)updateEnterTrackerInfoWithRealEnterFrom:(id)arg0;
- (void)updateEnterTrackerInfoWithEnterFrom:(id)arg0 transitionType:(long long)arg1;
- (void)topTabScrollDidReachStableEnd;
- (double)interactionRightContainerHeight;
- (double)nextInteractionRightContainerHeight;
- (void)slidingViewControllerWillBeginDragging:(id)arg0;
- (void)slidingViewController:(id)arg0 willFinishTransitionFromPreviousIndex:(long long)arg1 currentIndex:(long long)arg2 transitionType:(long long)arg3;
- (void)slidingViewControllerDidScroll:(id)arg0 isFigureDragging:(BOOL)arg1;
- (void)slidingViewControllerDidFinishScrollAnimation:(id)arg0 currentIndex:(long long)arg1;
- (void)slidingViewControllerDidEndScroll:(id)arg0;
- (id)currentFeedViewController;
- (void)hideHotSpotGuideBubbleView;
- (void)setHotSpotGuideBubble:(id)arg0;
- (id)hotSpotGuideBubble;
- (void)showHotSpotGuideBubbleView;
- (void)didChangedLanguage;
- (id)feedTableViewController;
- (BOOL)isSliding;
- (void)setIsSliding:(BOOL)arg0;
- (void)dragBegin;
- (void)setFpsExtra:(id)arg0;
- (id)fpsScene;
- (void)setFpsScene:(id)arg0;
- (id)fpsExtra;
- (id)discoverEntranceView;
- (void)setDiscoverEntranceView:(id)arg0;
- (void)updatePauseEntranceViewLayout;
- (id)pauseEntranceView;
- (void)setPauseEntranceView:(id)arg0;
- (void)_removeNotifications;
- (BOOL)p_shouldPreventVideoPause;
- (void)setProcessingLogin:(BOOL)arg0;
- (BOOL)processingLogin;
- (void)_onAwemeVideoPlayGuideViewTouched:(id)arg0;
- (void)viewControllerTransitionNotification:(id)arg0;
- (BOOL)__shouldAutoPlayFromChildViewControllers;
- (void)addDiscoverEntranceView;
- (void)setLaunchEnterModel:(id)arg0;
- (void)tabBarDidSelectItemWithPrevisousPage:(id)arg0 isByTap:(BOOL)arg1;
- (void)moveToFeedContainer;
- (void)leaveFeedContainer;
- (BOOL)p_shouldPresentLightThemeInBottomBarWithChannel:(id)arg0;
- (BOOL)p_canChangeBottomBarThemeWithChannel:(id)arg0;
- (BOOL)awe_slidingScrollViewShouldScrollWithPan:(id)arg0;
- (BOOL)shouldIgnoreTrackingWhenSwitchToFeed;
- (void)setShouldIgnoreTrackingWhenSwitchToFeed:(BOOL)arg0;
- (void)didVideoStartPlay:(id)arg0;
- (void)didReceiveFeedTableViewControllerSyncPlayStateNotification:(id)arg0;
- (void)newAnchorCame:(id)arg0;
- (void)p_restoreFeedContainerPlayNotification:(id)arg0;
- (void)didU18VerificationMaskShow:(id)arg0;
- (void)didU18VerificationMaskDismiss:(id)arg0;
- (void)_scrollToIndex:(long long)arg0;
- (BOOL)p_shouldShowXTab;
- (void)awesomeSplashRemoved:(id)arg0;
- (void)recoveryVideoBackupIfNeed;
- (void)bizDowngradeDelayRecoveryVideoBackupIfNeed;
- (BOOL)isActiveForBackup;
- (BOOL)hasShowVideoRecoveryAlert;
- (void)setHasShowVideoRecoveryAlert:(BOOL)arg0;
- (void)trackEventAndService;
- (void)trackLocationServicesEnabled;
- (void)bizDowngradeAsyncReportBuryPointOfLoadMain;
- (void)updateNearByCommonDataWithContext:(id)arg0;
- (void)didFinishSwitchAccount;
- (void)generateSegmentControl:(BOOL)arg0;
- (void)followYellowDotRefactorHideYellowDotForConcernTab;
- (void)showCornerMaskView;
- (void)hideCornerMaskView;
- (id)cornerMaskImage;
- (void)setCornerMaskViewFeedAutoPlay:(id)arg0;
- (id)cornerMaskViewFeedAutoPlay;
- (void)genarateCornerMask;
- (id)genarateCornerLayerWithClipImage:(id)arg0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1;
- (void)channelManager:(id)arg0 reloadTabsWithAnimationCompletion:(id /* block */)arg1 reloadType:(id)arg2;
- (id)pauseEntranceTask;
- (id)getTopBarContext;
- (void)removeTopBarBubbleIfNeed;
- (double)tabShowPercentageWithChannel:(id)arg0;
- (id)leftSideBarManager;
- (BOOL)ifAllowNavbarAnimation;
- (void)setIfAllowNavbarAnimation:(BOOL)arg0;
- (void)bizDowngradeFirstNavbarAnimation;
- (void)holdStopPlayerWhenEnterBackground;
- (void)handleXTabSelectChange:(id)arg0;
- (void)handleNewCaptionMessage:(id)arg0;
- (void)handleLeftSideBarDidCloseMessage:(id)arg0;
- (id)topBarContainer;
- (void)setupSlidingViewControllerIndexChange;
- (void)_setupLeftSideBarManager;
- (void)_addRefreshLabel;
- (void)addNewVersionFeedbackView;
- (void)__initConcernLeftPanVC;
- (void)__initConcernRightPanVC;
- (id)p_getCurrentChannel;
- (BOOL)p_shouldPresentLightThemeInTopBarWithChannel:(id)arg0;
- (void)feedThemeDidChange;
- (id)aAWEFeedContainerViewControllerDOUYINAdapter;
- (id)aAWECampaignStagePerceiveManagerAdapter;
- (void)p_configVoiceOverElements;
- (id)xTabController;
- (id)landingStoreModel;
- (void)setLandingStoreModel:(id)arg0;
- (void)p_landingTabWithTabId:(id)arg0 params:(id)arg1 completionBlock:(id /* block */)arg2 exitBlock:(id /* block */)arg3 storeLanding:(BOOL)arg4;
- (BOOL)p_canChangeTopBarThemeWithChannel:(id)arg0;
- (void)setRefreshLabelToLightTheme:(BOOL)arg0;
- (void)setIsWillAppear:(BOOL)arg0;
- (void)setIsWillDisappear:(BOOL)arg0;
- (void)setIsDidAppear:(BOOL)arg0;
- (void)setIsDidDisappear:(BOOL)arg0;
- (void)tabBarBackgroundColorFill;
- (void)showAIPropTaskNotificationIfNeeded;
- (void)showNavbarAnimated:(BOOL)arg0;
- (BOOL)p_canShowBottomBarBackgroundImagesWithChannel:(id)arg0;
- (void)p_showBottomBarBackgroundImagesWithProgress:(double)arg0;
- (BOOL)p_channelShouldGreyModeWithChannel:(id)arg0;
- (id)imEntranceViewModel;
- (void)p_resumeChannelBubble;
- (void)p_resumeChannelRightEntrance;
- (float)getEntranceShowPercentageWithChannel:(id)arg0;
- (BOOL)isEnterSearchEntrance;
- (void)setIsEnterSearchEntrance:(BOOL)arg0;
- (void)p_tryHideBubbleFromContainerHide;
- (id)concernFeedLeftPanGuideController;
- (BOOL)hasLeftSideBar;
- (BOOL)awe_shouldRightPanToIMWithWidth:(double)arg0;
- (void)__responseToPercentDrivenRightPan:(long long)arg0 context:(id)arg1;
- (void)__responseToPercentDrivenLeftPan:(long long)arg0 context:(id)arg1;
- (id)feedRightPanGuideController;
- (void)setTopAccessoriesAlpha:(double)arg0;
- (id)refreshTypeToMethod;
- (double)styleAlphaWithDefault:(double)arg0;
- (void)updateDiscoverEntranceViewWithAlpha:(double)arg0;
- (void)p_setHideTopBarRightContentView:(BOOL)arg0;
- (void)currentViewControllerSetRefreshMethodWithType:(long long)arg0;
- (id)nearbyViewController;
- (void)refreshTrackWithModel:(id)arg0;
- (id)referStringForIndex:(long long)arg0;
- (void)didChangeScrollIndex;
- (BOOL)enableTopbarContainerOpt;
- (void)p_hideBadgeWithIndex:(long long)arg0;
- (void)p_showBadgeWithTask:(id)arg0 index:(long long)arg1;
- (long long)needDongradeBadgeWithIndex:(long long)arg0;
- (void)updateMultiTabPadding;
- (void)p_showBubbleWithChannel:(id)arg0 task:(id)arg1;
- (void)p_hideBubbleWithTask:(id)arg0 dismissType:(long long)arg1 completion:(id /* block */)arg2;
- (void)p_showPauseSearchEntranceWithTask:(id)arg0;
- (void)p_hidePauseEntranceWithTask:(id)arg0 completion:(id /* block */)arg1;
- (void)p_updateTopBarRightEntranceWithChannel:(id)arg0;
- (void)p_updateTopBarRightEntranceBadgeWithChannel:(id)arg0;
- (void)p_hideTopBarRightEntranceBadge;
- (void)p_changeAlphaWith:(double)arg0;
- (void)p_updateTopBarThemeStyleWithChannel:(id)arg0;
- (void)p_updateBottomBarThemeStyleWithChannel:(id)arg0;
- (void)reloadTabsWithAnimationCompletion:(id /* block */)arg0 reloadType:(id)arg1;
- (id)segmentConfig;
- (id)p_generateTopTabItemUIModels;
- (void)p_resumeAllChannelBadge;
- (id)setupOrderedViewControllers;
- (id)feedRootViewControllerAbilityProxy;
- (id)p_getTabCenterPointWithTabID:(id)arg0 withModel:(id)arg1;
- (id)bubbleObject;
- (id)searchBubbleView;
- (id)generateTopLeftDefaultEntranceView;
- (void)setupTopLeftDefaultEntranceView:(id)arg0;
- (void)setTopBarLeftDefaultEntrance:(id)arg0;
- (id)topBarLeftDefaultEntrance;
- (id)leftSideBarEntranceView;
- (id)imEntranceView;
- (void)setupTopLeftDefaultEntranceView;
- (id)leftExtensionPlusEntranceView;
- (id)leftScanButton;
- (void)_addPauseEntranceView;
- (void)_addDiscoverEntranceView;
- (void)_addSearchBubbleView;
- (void)_updateDiscoverEntranceViewFrame:(id)arg0;
- (id)publishEntranceView;
- (void)updatePublishEntranceViewFrame:(id)arg0;
- (void)onPublishButtonClicked:(id)arg0;
- (id)luckyBagFeedEntranceView;
- (void)updateLuckyBagEntranceViewFrame:(id)arg0;
- (id)setupDiscoverEntranceView;
- (id)aAWEFeedContainerViewControllerDOUYINLiteAdapter;
- (void)luckyBagFeedEntranceClicked:(id)arg0;
- (id)aAWEFeedContainerViewControllerCommonAdapter;
- (id)setupPublishEntranceView;
- (void)leftExtensionEntranceAction:(id)arg0;
- (void)leftScanButtonTapped:(id)arg0;
- (void)awe_hideSearchBubbleWithoutAnimationIfNeeded;
- (BOOL)shouldHandleTabbarHiddenWhenSetAccessoriesHidden;
- (void)updateDiscoverEntranceViewWithHidden:(BOOL)arg0;
- (BOOL)navBarAnimated;
- (void)setNavBarAnimated:(BOOL)arg0;
- (id)scrollHideBarVC;
- (long long)scrollIndex;
- (void)p_showDefaultTopBarRightEntrance;
- (BOOL)p_canShowChannelTopBarRightEntrance;
- (void)p_hideTopBarRightEntrance;
- (void)p_showChannelTopBarRightEntrance:(id)arg0 size:(struct CGSize { double x0; double x1; })arg1;
- (void)p_showChannelTopBarRightEntranceBadgeWithModel:(id)arg0 channel:(id)arg1;
- (void)setTopBarRightChannelEntrance:(id)arg0;
- (id)topBarRightDefaultEntrance;
- (BOOL)p_showRightSearchBubbleWithModel:(id)arg0 task:(id)arg1;
- (BOOL)p_showTopBarBubbleWithModelForRightEntrance:(id)arg0 task:(id)arg1;
- (void)p_showTopBarBubbleWithModel:(id)arg0 index:(long long)arg1 task:(id)arg2;
- (void)p_clearBubbleWithDismissPopover:(BOOL)arg0 dismissReason:(long long)arg1;
- (id)currentTabId;
- (long long)lastShowLongBarIndex;
- (void)setPauseEntranceTask:(id)arg0;
- (BOOL)p_showBubbleWithModel:(id)arg0 view:(id)arg1 point:(struct CGPoint { double x0; double x1; })arg2 task:(id)arg3;
- (BOOL)isDidAppear;
- (void)setBubbleObject:(id)arg0;
- (void)setConcernFeedLeftPanGuideController:(id)arg0;
- (void)setFeedRightPanGuideController:(id)arg0;
- (void)stopRefreshAnimation;
- (BOOL)hasShownCardNotification;
- (void)hideFeedTopBarWithTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })arg0 alpha:(double)arg1;
- (void)showFeedTopBar;
- (id)setupSlidingViewController;
- (void)setHasViewLayoutSubviews:(BOOL)arg0;
- (void)setRefreshLabelFrame;
- (void)scrollToIndex:(long long)arg0 ignoreWidth:(BOOL)arg1 launchLanding:(BOOL)arg2;
- (void)scrollToIndex:(long long)arg0 launchLanding:(BOOL)arg1;
- (void)_onSegmentControlScrollToIndex:(long long)arg0 fromUserInteraction:(BOOL)arg1 animated:(BOOL)arg2;
- (id)myConcernController;
- (void)hideNewVersionFeedbackViewToIndex:(long long)arg0;
- (id)setupSearchBubbleView;
- (void)_reloadViewControllers:(id)arg0;
- (void)handleFeedXTabControllerDidFinishSelectedTab:(id)arg0;
- (BOOL)canAutoPlayWithPresentedViewController;
- (BOOL)enableIMDynamicLibraryLoadOpt;
- (BOOL)isFromClickBackIcon;
- (void)setIsFromClickBackIcon:(BOOL)arg0;
- (BOOL)isFromClickScrollToHotImage;
- (void)setIsFromClickScrollToHotImage:(BOOL)arg0;
- (BOOL)isFeedSelected;
- (id)launchEnterModel;
- (void)reportXTabClickEvent:(id)arg0;
- (void)updateScrollIndex:(long long)arg0;
- (void)p_updateThemeInScrollView:(id)arg0;
- (void)p_new_updateThemeInScrollView:(id)arg0;
- (void)p_updateNearbyTabTitleAnimated:(BOOL)arg0 nearbyTitle:(id)arg1;
- (void)scrollMultiTabSegmentedControlToSelected;
- (void)scrollMultiTabSegmentedControlToRight;
- (double)getHorizonDistanceToTargetIndex:(unsigned long long)arg0;
- (void)switchToTab:(long long)arg0 isFromColdLauchPush:(BOOL)arg1;
- (void)coldLaunchLanding:(id)arg0;
- (void)switchToTabAtIndex:(long long)arg0 WithXTabTabType:(long long)arg1 param:(id)arg2 launchLanding:(BOOL)arg3 completion:(id /* block */)arg4;
- (BOOL)awe_showSearchBubbleText:(id)arg0 withLink:(id)arg1 enterMethod:(id)arg2 itemId:(id)arg3 authorId:(id)arg4 showStyle:(int)arg5 logPb:(id)arg6 iconUrl:(id)arg7;
- (void)awe_hideSearchBubble;
- (BOOL)hasViewLayoutSubviews;
- (id)getTopTabPositionWithTabId:(id)arg0;
- (BOOL)canLandingTopTabWithTabId:(id)arg0 params:(id)arg1;
- (BOOL)canLandingXTabWithTabId:(id)arg0 params:(id)arg1;
- (BOOL)canLandingLeftSideBarWithTabId:(id)arg0 params:(id)arg1;
- (id)currentChannelObject;
- (id)resetContentViewControllerIfNeedWithChannel:(id)arg0 withOriginalContentVC:(id)arg1;
- (long long)segmentControlInitialIndex;
- (void)setLaunchIndex:(unsigned long long)arg0;
- (void)addPublishEntranceView;
- (void)addLuckyBagFeedEntranceViewIfNeeded;
- (void)setSegmentControl:(id)arg0;
- (void)setupSegmentDoubleClick;
- (void)setupSegmentControlIndexChange;
- (void)setupSegmentControlRepeatedClick;
- (void)setupSegmentLongPress;
- (void)_scrollToIndex:(long long)arg0 ignoreWidth:(BOOL)arg1;
- (void)didClickedBubbleView;
- (void)bubbleCloseButtonDidClick;
- (void)jumpToSearchWithSearchWord:(id)arg0 ges:(id)arg1 fromCaption:(BOOL)arg2;
- (id)topBarRightChannelEntrance;
- (BOOL)currentTabIsFeed;
- (id /* block */)dismissBubbleBlock;
- (void)setDismissBubbleBlock:(id /* block */)arg0;
- (double)getMaxXInFeedContentView:(id)arg0;
- (void)ecommerceTrackEvent:(id)arg0 extraLog:(id)arg1;
- (void)jumpToSearchWithSearchWord:(id)arg0 ges:(id)arg1 fromCaption:(BOOL)arg2 isHalfScreen:(BOOL)arg3;
- (void)handleTrackInfoForEnterSearchRefreshPage;
- (void)removeBubble;
- (void)topBarContainerLongPress:(id)arg0;
- (void)updateEntranceViewFrame:(id)arg0 position:(long long)arg1;
- (void)showSearchCaptionMsgIfNeeded;
- (void)onHalfScreenDiscoverButtonClicked:(id)arg0;
- (void)cityHasChangedAndNeedRefresh:(BOOL)arg0 animated:(BOOL)arg1 nearbyTitle:(id)arg2;
- (void)contentOffsetChangedWithNewOffset:(struct CGPoint { double x0; double x1; })arg0 oldOffset:(struct CGPoint { double x0; double x1; })arg1 isUserTriggered:(BOOL)arg2;
- (BOOL)awe_shouldLeftPanToUserProfileWithWidth:(double)arg0;
- (BOOL)isLocatedInConcernFeed;
- (BOOL)isLocatedInRecommendFeed;
- (BOOL)isLocatedInSingleColumnFeed;
- (BOOL)isDisplayingSkyLightViewInConcernFeed;
- (BOOL)canLeftPanGuideShow;
- (void)xTabController:(id)arg0 didFinishSelectedTabFromPreviousModel:(id)arg1 currentModel:(id)arg2 index:(long long)arg3;
- (void)channelManager:(id)arg0 showBadgeWithChannel:(id)arg1 badgeTask:(id)arg2;
- (void)channelManager:(id)arg0 updateTopTabItemWithChannel:(id)arg1;
- (void)channelManager:(id)arg0 updateTopTabItemIndicatorIconHiddenWithChannel:(id)arg1;
- (void)channelManager:(id)arg0 updateTopTabItemIndicatorIconRotationWithChannel:(id)arg1;
- (void)channelManager:(id)arg0 updateTopBarThemeStyleWithChannel:(id)arg1;
- (void)channelManager:(id)arg0 updateBottomBarThemeStyleWithChannel:(id)arg1;
- (void)channelManager:(id)arg0 updateBottomBarBackgroundImagesWithChannel:(id)arg1;
- (void)channelManager:(id)arg0 showBubbleWithChannel:(id)arg1 task:(id)arg2;
- (void)channelManager:(id)arg0 hideBubbleWithChannel:(id)arg1 dismissType:(long long)arg2 task:(id)arg3 completion:(id /* block */)arg4;
- (void)channelManager:(id)arg0 showPauseEntranceWithChannel:(id)arg1 task:(id)arg2;
- (void)channelManager:(id)arg0 hidePauseEntranceWithChannel:(id)arg1 task:(id)arg2 completion:(id /* block */)arg3;
- (void)channelManager:(id)arg0 updateRightEntranceWithChannel:(id)arg1;
- (void)channelManager:(id)arg0 updateRightEntranceBadgeWithModel:(id)arg1 withChannel:(id)arg2;
- (void)channelManager:(id)arg0 hideRightEntranceBadgeWithChannel:(id)arg1;
- (void)channelManager:(id)arg0 hideCaptionEntranceWithChannel:(id)arg1;
- (void)channelManager:(id)arg0 changeAlphaWith:(double)arg1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })topContainerFrameWithChannelManager:(id)arg0;
- (void)channelManager:(id)arg0 updateGreyModeWithChannel:(id)arg1;
- (void)channelManager:(id)arg0 refreshWithModel:(id)arg1 completion:(id /* block */)arg2;
- (void)scrollToTabWithChannel:(id)arg0 animated:(BOOL)arg1;
- (struct CGPoint { double x0; double x1; })bottomCenterOfTabSegmentForChannel:(id)arg0;
- (struct CGPoint { double x0; double x1; })topCenterPointOfWindowWithChannel:(id)arg0 withChannelId:(id)arg1;
- (void)viewDidLoadForViewController:(id)arg0;
- (void)viewWillAppearForViewController:(id)arg0;
- (void)viewDidAppearForViewController:(id)arg0;
- (void)viewWillDisappearForViewController:(id)arg0;
- (void)viewDidDisappearForViewController:(id)arg0;
- (void)leftSideBarEntranceViewClick:(id)arg0;
- (void)leftSideBarEntranceView:(id)arg0 showPopViewWithTask:(id)arg1;
- (void)leftSideBarEntranceView:(id)arg0 showCaptionBubbleWithWithModel:(id)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3 clickContentBlock:(id /* block */)arg4 clickCloseButtonBlock:(id /* block */)arg5 autoDismissBlock:(id /* block */)arg6;
- (void)leftSideBarEntranceView:(id)arg0 hideCaptionBubbleWithAnimated:(BOOL)arg1 withReason:(long long)arg2 completion:(id /* block */)arg3;
- (BOOL)leftSideBarEntranceViewCanShowGuide:(id)arg0;
- (void)leftSideBarIMEntranceViewClick:(id)arg0;
- (void)leftSideBarImEntranceView:(id)arg0 showIMPopViewWithTask:(id)arg1;
- (void)feedSegmentedControlThemeDidChange:(BOOL)arg0;
- (id)feedSegmentedControlGetTabIdWithIndex:(long long)arg0;
- (BOOL)showEditPanelWithEnterMethod:(id)arg0;
- (BOOL)isLightThemeWithIndex:(long long)arg0;
- (void)feedTabSegementedControlScrollBackToSelected;
- (BOOL)feedTabIsSegmentItemViewFullyPresentWithIndex:(long long)arg0;
- (double)feedTabGetHorizonDistanceToTargetTab:(long long)arg0;
- (void)feedTabSwitchToTab:(long long)arg0;
- (long long)feedTabViewControllerCount;
- (void)channelManager:(id)arg0 removeChannel:(id)arg1 selectedChannel:(id)arg2;
- (void)setupCopyFeedDiscoverEntranceView:(id)arg0;
- (id)rsf_feedTableViewController;
- (void)transitionCommpletedIsPush:(BOOL)arg0 wasCancelled:(BOOL)arg1;
- (id)rsf_topbarSnapshotView;
- (void)rsf_transationPushingWithContext:(id)arg0 percentage:(double)arg1;
- (id)aAWEFeedCampaginDOUYINAdapter;
- (BOOL)shouldBeginVerticalPanGesture:(id)arg0;
- (void)animatedRefreshWithModel:(id)arg0 completion:(id /* block */)arg1;
- (void)backgroundPause;
- (void)hideNavbarAnimated:(BOOL)arg0;
- (void)setTopContainerHiddenOnRefreshForAnimation:(BOOL)arg0;
- (void)p_forceHidePauseEntrance;
- (double)alphaWithDefault:(double)arg0;
- (BOOL)xtabIsShowTopTabBar;
- (id)hangoutViewController;
- (void)_addCornerMaskView;
- (void)_onAwemePostExitNotification:(id)arg0;
- (void)_onAwemeMarkDislikeCanWithdrawNotification:(id)arg0;
- (void)_appLaunchGuideViewDidDisppear:(id)arg0;
- (void)_splashViewDidDisappear:(id)arg0;
- (void)switchToTab:(unsigned long long)arg0 withNeedSlidingVCAnimation:(BOOL)arg1 params:(id)arg2;
- (double)p_getTopBarEntranceHorizontalOffset;
- (BOOL)shouldTransitionDestinatedViewControllerForSlideDirection;
- (BOOL)isLandingFeed;
- (void)traceEnterHomepageXtabWithPreviousPage:(id)arg0 enterMethod:(id)arg1 extraParam:(id)arg2;
- (void)setXTabController:(id)arg0;
- (void)setFeedRootViewControllerAbilityProxy:(id)arg0;
- (void)setLastShowLongBarIndex:(long long)arg0;
- (void)setXtabIsShowTopTabBar:(BOOL)arg0;
- (BOOL)isWillAppear;
- (BOOL)isWillDisappear;
- (BOOL)isDidDisappear;
- (void)setFamiliarDataController:(id)arg0;
- (void)setScrollIndex:(long long)arg0;
- (id)pendingViewController;
- (void)setPendingViewController:(id)arg0;
- (BOOL)hasConfiguredSlidingSelectedIndex;
- (void)setHasConfiguredSlidingSelectedIndex:(BOOL)arg0;
- (void)setTopBarContainer:(id)arg0;
- (void)setTopBarRightDefaultEntrance:(id)arg0;
- (void)setSegmentConfig:(id)arg0;
- (void)setPublishEntranceView:(id)arg0;
- (void)setLuckyBagFeedEntranceView:(id)arg0;
- (void)setLeftExtensionPlusEntranceView:(id)arg0;
- (void)setLeftScanButton:(id)arg0;
- (void)setLeftSideBarEntranceView:(id)arg0;
- (void)setImEntranceView:(id)arg0;
- (void)setImEntranceViewModel:(id)arg0;
- (id)liveGuideModel;
- (void)setLiveGuideModel:(id)arg0;
- (id)transparentLiveView;
- (void)setTransparentLiveView:(id)arg0;
- (BOOL)bubbleViewIsInHot;
- (void)setBubbleViewIsInHot:(BOOL)arg0;
- (void)setIsFeedSelected:(BOOL)arg0;
- (void)setRefreshTypeToMethod:(id)arg0;
- (void)setEnableIMDynamicLibraryLoadOpt:(BOOL)arg0;
- (void)setEnableTopbarContainerOpt:(BOOL)arg0;
- (void)setNearbyViewController:(id)arg0;
- (void)setHangoutViewController:(id)arg0;
- (void)setLeftSideBarManager:(id)arg0;
- (id)familiarViewController;
- (void)setFamiliarViewController:(id)arg0;
- (void)setMyConcernController:(id)arg0;
- (id)messageFowardManager;
- (void)setMessageFowardManager:(id)arg0;
- (void)setSearchBubbleView:(id)arg0;
- (void)stopRefreshing;
- (void)setScrollEnabled:(BOOL)arg0;
- (id)init;
- (long long)statusBarStyle;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (long long)currentIndex;
- (void)setStatusBarStyle:(long long)arg0;
- (long long)currentStatusBarStyle;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })arg0 withTransitionCoordinator:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg0;
- (id)createContext;
- (long long)preferredStatusBarStyle;
- (void)setCurrentIndex:(long long)arg0;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)beginRefreshing;
- (id)debugDescription;
- (id)channelManager;
- (BOOL)isActive;
- (void)viewWillAppear:(BOOL)arg0;
- (void)dealloc;
- (void)play;
- (void)pause;
- (void)viewDidLoad;
- (void)_appDidEnterBackground:(id)arg0;
- (id)segmentControl;
- (void)_appWillResignActive:(id)arg0;
- (void)setSlideEnabled:(BOOL)arg0;
- (void)setupUI;
- (id)currentViewController;
- (void)_appDidBecomeActive:(id)arg0;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (void)_appWillEnterForeground:(id)arg0;
- (id)cornerMaskView;
- (id)orderedViewControllers;

@end
