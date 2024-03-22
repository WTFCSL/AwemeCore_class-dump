//
//     Generated by private class-dump
//

@class NSString, AWELeftSideBarManager, AWEFeedChannelManager, AWEBizTabBarFeedItemConfigAbilityProxy, UIPanGestureRecognizer, MPVolumeView, AWEFeedChannelEnterModel, AWEFeedContainerViewController;
@protocol AWEFeedRefreshAnimationProtocol;

@interface AWEFeedRootViewController : AWEShellViewController <AWEPreLoginProtocol, AWERouterViewControllerProtocol, POPAnimationDelegate, UIGestureRecognizerDelegate, AWEUserMessage, AWEViewControllerRefreshable, AWEPadUITrackerProtocol, AWEBasicModeMessage, AWEAwesomeSplashManagerMessage, AWELiveRoomPopOuterProtocol, AWEPadRVDSourceTransitionContextProvider, AWEFeedRootViewControllerAbilityCallProtocol, AWEIMLeftToRightPresentInnerContextProvider, AWEIMLeftToRightPushInnerContextProvider, AWEIMRightToLeftDismissNonInteractedInnerContextProvider, AWEIMRightToLeftPopNonInteractedOuterContextProvider, AWERightSidebarSourceTransationContextProvider, AWEHPTabBarGestureProtocol, AWEReferenceTrackable, AWEFeedRootViewController, AWEFeedRootViewControllerProtocol, AWETabBarItemViewControllerProtocol, AWEHPTopViewControllerProtocol> {
    BOOL _verticalPanActive;
    BOOL _tapticEngineTapped;
    BOOL _skylightButtonTapped;
    BOOL _isFirstAppear;
    BOOL _isViewDidAppear;
    BOOL _needsSetPureMode;
    BOOL _needsRefreshOnViewDidAppear;
    BOOL _canLandingToFamiliarTabByNoAwesomeSplash;
    BOOL _statusBarHidden;
    BOOL _isStudioSplashShowing;
    BOOL _isAwesomeSplashShowing;
    BOOL _shouldShowAwesomeSplash;
    BOOL _isLandscapeTransitioning;
    AWEFeedContainerViewController *_contentViewController;
    id<AWEFeedRefreshAnimationProtocol> _refreshAnimation;
    AWEBizTabBarFeedItemConfigAbilityProxy *_bizTabBarItemConfigAbilityProxy;
    AWEFeedChannelEnterModel *_launchEnterModel;
    UIPanGestureRecognizer *_verticalPan;
    unsigned long long _verticalPanType;
    long long _refreshState;
    id /* block */ _delayResetAudioSessionBlock;
    MPVolumeView *_volumeView;
    AWELeftSideBarManager *_leftSideBarManager;
    NSString *_lastRefreshUserID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEFeedContainerViewController *contentViewController;
@property (readonly, nonatomic) AWEFeedChannelManager *channelManager;
@property (retain, nonatomic) UIPanGestureRecognizer *verticalPan;
@property (nonatomic) BOOL verticalPanActive;
@property (nonatomic) BOOL tapticEngineTapped;
@property (nonatomic) unsigned long long verticalPanType;
@property (nonatomic) BOOL skylightButtonTapped;
@property (nonatomic) long long refreshState;
@property (nonatomic) BOOL isFirstAppear;
@property (nonatomic) BOOL isViewDidAppear;
@property (nonatomic) BOOL needsSetPureMode;
@property (nonatomic) BOOL needsRefreshOnViewDidAppear;
@property (copy, nonatomic) id /* block */ delayResetAudioSessionBlock;
@property (retain, nonatomic) MPVolumeView *volumeView;
@property (nonatomic) BOOL canLandingToFamiliarTabByNoAwesomeSplash;
@property (nonatomic) BOOL statusBarHidden;
@property (nonatomic) BOOL isStudioSplashShowing;
@property (nonatomic) BOOL isAwesomeSplashShowing;
@property (nonatomic) BOOL shouldShowAwesomeSplash;
@property (nonatomic) BOOL isLandscapeTransitioning;
@property (retain, nonatomic) AWELeftSideBarManager *leftSideBarManager;
@property (copy, nonatomic) NSString *lastRefreshUserID;
@property (retain, nonatomic) id<AWEFeedRefreshAnimationProtocol> refreshAnimation;
@property (retain, nonatomic) AWEBizTabBarFeedItemConfigAbilityProxy *bizTabBarItemConfigAbilityProxy;
@property (retain, nonatomic) AWEFeedChannelEnterModel *launchEnterModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *awe_padUITrackerPageEnterFrom;
@property (nonatomic) BOOL awe_padUITrackerIgnoreStayTime;
@property (nonatomic) BOOL verticalPanEnabled;

+ (Class)aAWEPadModuleAdapterClass;
+ (void)_aweLazyRegisterLoad;

- (id)referString;
- (void)transition_didPopDoneTransitionWithContext:(id)arg0;
- (void)didFinishLogin;
- (void)didFinishLogout;
- (BOOL)configWithRouterParamDict:(id)arg0;
- (void)pauseWithAnimation;
- (BOOL)awe_shouldAutorotate;
- (unsigned long long)awe_supportedInterfaceOrientations;
- (void)setPureMode:(BOOL)arg0;
- (id)enterFrom;
- (void)transition_didStartTransitionWithContext:(id)arg0;
- (id)transition_destinatedViewControllerForSlideDirection:(unsigned long long)arg0 gestureRecognizer:(id)arg1;
- (BOOL)isCommentPanelShowing;
- (void)transition_didCancelPercentDrivenTransitionWithContext:(id)arg0;
- (void)transition_didChangePercentDrivenTransitionWithContext:(id)arg0;
- (id)awesst_enterFrom;
- (unsigned long long)transition_destinatedType;
- (BOOL)transition_enableCustomActionForSlideDirection:(unsigned long long)arg0 gestureRecognizer:(id)arg1;
- (id)aAWEPadModuleAdapter;
- (void)awe_padUISetEnterLandscapeStateIfNeed;
- (void)awe_padUITrackLandscapeStayTimeIfNeed;
- (BOOL)awesst_isVideoPlayViewController;
- (id)awesst_additionalTrackerParams;
- (void)transition_performCustomActionForSlideDirection:(unsigned long long)arg0 gestureRecognizer:(id)arg1;
- (id)currentTabReferString;
- (void)landingTabWithTabId:(id)arg0 params:(id)arg1 completionBlock:(id /* block */)arg2 exitBlock:(id /* block */)arg3;
- (id)getTabCenterPointWithTabId:(id)arg0;
- (BOOL)needsSetPureMode;
- (void)setNeedsSetPureMode:(BOOL)arg0;
- (BOOL)isViewDidAppear;
- (BOOL)shouldShowAwesomeSplash;
- (BOOL)isAwesomeSplashShowing;
- (id)createControllerManager;
- (id)getPositionWithTabId:(id)arg0;
- (BOOL)canLandingWithTabId:(id)arg0 params:(id)arg1;
- (void)beginLandingTabWithTabId:(id)arg0 withParams:(id)arg1;
- (void)endLandingTabWithTabId:(id)arg0 withParams:(id)arg1;
- (void)refreshWithType:(long long)arg0 completion:(id /* block */)arg1;
- (void)disableRefreshGesture:(BOOL)arg0;
- (BOOL)isDuringShakeAD;
- (BOOL)willRefresh;
- (BOOL)verticalPanEnabled;
- (void)setVerticalPanEnabled:(BOOL)arg0;
- (void)setIsFirstAppear:(BOOL)arg0;
- (void)refreshWithModel:(id)arg0 completion:(id /* block */)arg1;
- (void)setVolumeView:(id)arg0;
- (void)pop_animationDidStop:(id)arg0 finished:(BOOL)arg1;
- (id)refreshAnimation;
- (void)setRefreshState:(long long)arg0;
- (unsigned long long)directionForPan:(id)arg0;
- (id)verticalPan;
- (void)setVerticalPanType:(unsigned long long)arg0;
- (unsigned long long)verticalPanType;
- (void)setRefreshAnimation:(id)arg0;
- (void)setVerticalPan:(id)arg0;
- (void)tabBarWillUnSelectItemWithLeaveModel:(id)arg0;
- (void)basicModeDidChange:(BOOL)arg0;
- (id)awe_padUITrackerPageEnterFrom;
- (BOOL)awe_padUITrackerIgnoreStayTime;
- (BOOL)ifStoryViewIsOpen;
- (void)setIsViewDidAppear:(BOOL)arg0;
- (void)setTapticEngineTapped:(BOOL)arg0;
- (BOOL)tapticEngineTapped;
- (void)dragToEndConfirmRefresh:(struct CGPoint { double x0; double x1; })arg0;
- (void)dragCancelRefreshing;
- (id)p_UGNotifyCurrScene;
- (BOOL)handleTabBarDidLongPress;
- (BOOL)handleTabBarDidDoubleClick;
- (BOOL)handleTabBarDidSingleClick;
- (void)setLaunchEnterModel:(id)arg0;
- (void)setBizTabBarItemConfigAbilityProxy:(id)arg0;
- (id)bizTabBarItemConfigAbilityProxy;
- (id)leftSideBarManager;
- (long long)getRefreshState;
- (void)stopRefreshAnimation;
- (id)launchEnterModel;
- (void)forceCancelRefreshRequest;
- (id)rsf_feedTableViewController;
- (void)transitionCommpletedIsPush:(BOOL)arg0 wasCancelled:(BOOL)arg1;
- (id)rsf_topbarSnapshotView;
- (void)rsf_transationPushingWithContext:(id)arg0 percentage:(double)arg1;
- (void)setLeftSideBarManager:(id)arg0;
- (void)noAwesomeSplash;
- (void)setLastRefreshUserID:(id)arg0;
- (void)generateContentViewController;
- (void)createRefreshAnimationView;
- (void)handlePostAdsActionIfNeeded;
- (void)handelCarrierService;
- (BOOL)canLandingToFamiliarTabByNoAwesomeSplash;
- (void)setCanLandingToFamiliarTabByNoAwesomeSplash:(BOOL)arg0;
- (void)p_resetToPlayBack;
- (void)p_resetAudioSessionCategory;
- (id /* block */)delayResetAudioSessionBlock;
- (void)setDelayResetAudioSessionBlock:(id /* block */)arg0;
- (BOOL)isStudioSplashShowing;
- (void)setIsStudioSplashShowing:(BOOL)arg0;
- (void)setShouldShowAwesomeSplash:(BOOL)arg0;
- (void)setIsLandscapeTransitioning:(BOOL)arg0;
- (BOOL)isLandscapeTransitioning;
- (id)lastRefreshUserID;
- (void)p_refreshWithModel:(id)arg0 completion:(id /* block */)arg1;
- (BOOL)canRefreshSlideUnconsumedVideos:(long long)arg0;
- (void)refreshSlideUnconsumedVideosWithCompletion:(id /* block */)arg0;
- (void)cancelRefreshing;
- (void)p_delayResetAudioSessionCategory;
- (void)clearStackControllers;
- (BOOL)pullRefreshEnable:(id)arg0;
- (void)setVerticalPanActive:(BOOL)arg0;
- (BOOL)enableRightPanWithContext:(id)arg0;
- (id)volumeSider;
- (BOOL)hasTopLeftLiveEntrance;
- (void)feedContainerViewController:(id)arg0 showBackgroundImagesWithProgress:(double)arg1;
- (id)getHPTopViewController;
- (void)setSystemVolume:(float)arg0;
- (BOOL)verticalPanActive;
- (BOOL)skylightButtonTapped;
- (void)setSkylightButtonTapped:(BOOL)arg0;
- (BOOL)needsRefreshOnViewDidAppear;
- (void)setNeedsRefreshOnViewDidAppear:(BOOL)arg0;
- (void)setIsAwesomeSplashShowing:(BOOL)arg0;
- (BOOL)isPreLoginScene;
- (BOOL)statusBarHidden;
- (void)setStatusBarHidden:(BOOL)arg0;
- (id)init;
- (id)contentViewController;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setContentViewController:(id)arg0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })arg0 withTransitionCoordinator:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg0;
- (BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
- (id)createContext;
- (long long)preferredStatusBarStyle;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (id)channelManager;
- (long long)refreshState;
- (BOOL)prefersStatusBarHidden;
- (void)viewWillAppear:(BOOL)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (BOOL)isRefreshing;
- (BOOL)refreshWithCompletion:(id /* block */)arg0;
- (BOOL)isFirstAppear;
- (void)handlePanGesture:(id)arg0;
- (id)volumeView;

@end