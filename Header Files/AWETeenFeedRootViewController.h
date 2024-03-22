//
//     Generated by private class-dump
//

@class UILabel, AWETeenUmbrellaPopoverSheetView, NSDictionary, DUXTeenPopover, AWETeenFeedPendant, UIViewController, AWETeenFeedChannelManager, UIButton, UIView, AWETeenFeedSegmentedControl, NSString, AWETeenInterestChannelPanel, AWETeenInterestChannelPopoverManager, AWESlidingViewController, NSArray, AWETeenUmbrellaButton, LOTAnimationView, AWEBizTabBarTeenFeedItemConfigAbilityProxy, UIPanGestureRecognizer;
@protocol AWETeenHomepageContentViewControllerProtocol, AWEFeedRefreshAnimationProtocol;

@interface AWETeenFeedRootViewController : UIViewController <UIGestureRecognizerDelegate, AWEViewControllerRefreshable, AWEUserMessage, AWESlidingViewControllerDelegate, AWETeenSubscribeMessage, AWEDigitalWellbeingMessage, AWETeenLandscapeInteractionMessage, AWETeenInterestChannelMessage, AWETeenUmbrellaButtonMessage, AWEAlertProtocol, AWEPadUITrackerProtocol, AWETeenSegmentedControlProtocol, DUXPopoverDelegate, AWETeenFeedPendantMessage, AWETeenEntrancePathOptimizeMessage, AWETeenHomepageRootViewControllerProtocol> {
    BOOL _isAppear;
    BOOL _isSliding;
    BOOL _ageDidChanged;
    BOOL _preferWeightDidChanged;
    BOOL _needRefreshYelloDot;
    BOOL _hasShowSearchGuid;
    BOOL _ignoreVideoControllerPlaybackStatusWhenDisappear;
    BOOL _isDescriptionExpandScrollable;
    NSString *_enterFrom;
    NSString *_enterMethod;
    AWEBizTabBarTeenFeedItemConfigAbilityProxy *_bizTabBarItemConfigAbilityProxy;
    UIViewController<AWETeenHomepageContentViewControllerProtocol> *_currentViewController;
    AWETeenFeedChannelManager *_channelManager;
    long long _refreshState;
    id<AWEFeedRefreshAnimationProtocol> _refreshAnimation;
    UILabel *_refreshLabel;
    UIPanGestureRecognizer *_verticalPan;
    unsigned long long _verticalPanType;
    UIView *_tabBarContainer;
    AWETeenUmbrellaButton *_umbrellaButton;
    UIButton *_searchButton;
    AWETeenFeedSegmentedControl *_slidingTabView;
    AWESlidingViewController *_slidingViewController;
    NSArray *_tabViewControllers;
    NSArray *_subTabVCTypeList;
    LOTAnimationView *_searchAnimView;
    long long _defaultVCType;
    NSDictionary *_pushParams;
    AWETeenInterestChannelPanel *_interestChannelPanel;
    long long _statusBarStyle;
    AWETeenInterestChannelPopoverManager *_channelPopoverManager;
    AWETeenUmbrellaPopoverSheetView *_umbrellaPopover;
    DUXTeenPopover *_originalUmbrellaPopover;
    AWETeenFeedPendant *_pendant;
}

@property (retain, nonatomic) AWETeenFeedChannelManager *channelManager;
@property (nonatomic) BOOL isAppear;
@property (nonatomic) long long refreshState;
@property (retain, nonatomic) id<AWEFeedRefreshAnimationProtocol> refreshAnimation;
@property (retain, nonatomic) UILabel *refreshLabel;
@property (retain, nonatomic) UIPanGestureRecognizer *verticalPan;
@property (nonatomic) unsigned long long verticalPanType;
@property (retain, nonatomic) UIView *tabBarContainer;
@property (retain, nonatomic) AWETeenUmbrellaButton *umbrellaButton;
@property (retain, nonatomic) UIButton *searchButton;
@property (retain, nonatomic) AWETeenFeedSegmentedControl *slidingTabView;
@property (retain, nonatomic) AWESlidingViewController *slidingViewController;
@property (copy, nonatomic) NSArray *tabViewControllers;
@property (copy, nonatomic) NSArray *subTabVCTypeList;
@property (nonatomic) BOOL isSliding;
@property (nonatomic) BOOL ageDidChanged;
@property (nonatomic) BOOL preferWeightDidChanged;
@property (nonatomic) BOOL needRefreshYelloDot;
@property (nonatomic) BOOL hasShowSearchGuid;
@property (retain, nonatomic) LOTAnimationView *searchAnimView;
@property (nonatomic) long long defaultVCType;
@property (copy, nonatomic) NSDictionary *pushParams;
@property (retain, nonatomic) AWETeenInterestChannelPanel *interestChannelPanel;
@property (nonatomic) long long statusBarStyle;
@property (retain, nonatomic) AWETeenInterestChannelPopoverManager *channelPopoverManager;
@property (retain, nonatomic) AWETeenUmbrellaPopoverSheetView *umbrellaPopover;
@property (retain, nonatomic) DUXTeenPopover *originalUmbrellaPopover;
@property (nonatomic) BOOL ignoreVideoControllerPlaybackStatusWhenDisappear;
@property (nonatomic) BOOL isDescriptionExpandScrollable;
@property (retain, nonatomic) AWETeenFeedPendant *pendant;
@property (retain, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) AWEBizTabBarTeenFeedItemConfigAbilityProxy *bizTabBarItemConfigAbilityProxy;
@property (retain, nonatomic) UIViewController<AWETeenHomepageContentViewControllerProtocol> *currentViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *awe_padUITrackerPageEnterFrom;
@property (nonatomic) BOOL awe_padUITrackerIgnoreStayTime;

+ (Class)aAWEPadModuleAdapterClass;

- (void)didFinishLogin;
- (void)willStartLogin;
- (void)didFinishLogout;
- (void)setEnterFrom:(id)arg0;
- (void)setEnterMethod:(id)arg0;
- (BOOL)configWithRouterParamDict:(id)arg0;
- (BOOL)awe_shouldAutorotate;
- (unsigned long long)awe_supportedInterfaceOrientations;
- (void)showWithCloseCallback:(id /* block */)arg0;
- (void)popoverDidDisappear:(id)arg0;
- (id)enterMethod;
- (id)enterFrom;
- (id)transition_destinatedViewControllerForSlideDirection:(unsigned long long)arg0 gestureRecognizer:(id)arg1;
- (void)dragWithProgress:(double)arg0;
- (void)dragCancellation;
- (unsigned long long)transition_destinatedType;
- (BOOL)transition_enableCustomActionForSlideDirection:(unsigned long long)arg0 gestureRecognizer:(id)arg1;
- (id)aAWEPadModuleAdapter;
- (BOOL)isAppear;
- (void)setIsAppear:(BOOL)arg0;
- (void)refreshWithType:(long long)arg0 completion:(id /* block */)arg1;
- (void)p_setupUI;
- (void)p_addNotifications;
- (BOOL)p_isActive;
- (void)p_addPanGes;
- (void)p_setupContainerVC;
- (void)p_setupTabBar;
- (void)p_addRefreshLabel;
- (id)tabBarContainer;
- (void)setRefreshLabel:(id)arg0;
- (id)refreshLabel;
- (id)refreshAnimation;
- (void)setRefreshState:(long long)arg0;
- (void)p_appWillResignActive:(id)arg0;
- (void)p_appDidBecomeActive:(id)arg0;
- (void)p_windowDidBecomeKeyNotification:(id)arg0;
- (id)p_mainAppWindow;
- (void)p_windowDidResignKeyNotification:(id)arg0;
- (unsigned long long)directionForPan:(id)arg0;
- (id)verticalPan;
- (void)setVerticalPanType:(unsigned long long)arg0;
- (unsigned long long)verticalPanType;
- (void)tabBarItemViewControllerDidDoubleTap;
- (void)setRefreshAnimation:(id)arg0;
- (void)setVerticalPan:(id)arg0;
- (void)setTabBarContainer:(id)arg0;
- (void)teenModeDidChange:(BOOL)arg0 isLogout:(BOOL)arg1;
- (void)teenPersonalRecommendSwitchChanged:(BOOL)arg0;
- (id)awe_padUITrackerPageEnterFrom;
- (id)slidingViewController;
- (long long)numberOfControllers:(id)arg0;
- (id)slidingViewController:(id)arg0 viewControllerAtIndex:(long long)arg1;
- (void)slidingViewController:(id)arg0 willTransitionToViewController:(id)arg1 transitionType:(long long)arg2;
- (void)slidingViewController:(id)arg0 didFinishTransitionToIndex:(unsigned long long)arg1;
- (void)slidingViewController:(id)arg0 didFinishTransitionFromPreviousViewController:(id)arg1 currentViewController:(id)arg2;
- (void)slidingViewController:(id)arg0 didFinishTransitionFromPreviousIndex:(long long)arg1 currentIndex:(long long)arg2 transitionType:(long long)arg3;
- (void)setSlidingViewController:(id)arg0;
- (void)slidingViewControllerDidScroll:(id)arg0 isFigureDragging:(BOOL)arg1;
- (void)hidePanel;
- (BOOL)isSliding;
- (void)setIsSliding:(BOOL)arg0;
- (void)p_onAwemeDeleteNotification:(id)arg0;
- (void)setBizTabBarItemConfigAbilityProxy:(id)arg0;
- (id)bizTabBarItemConfigAbilityProxy;
- (id)pendant;
- (void)setPendant:(id)arg0;
- (void)p_didThemeChanged;
- (id)slidingTabView;
- (void)setSlidingTabView:(id)arg0;
- (void)transferToChannelWithChannelModel:(id)arg0;
- (void)showChannelSwitchPopover;
- (void)dismissChannelSwitchPopover;
- (void)showPanelGuide;
- (void)changeTabBarTheme:(BOOL)arg0;
- (void)refreshChannelPanel;
- (void)showChannelSwitch;
- (void)repeatedlyClickBottomTab;
- (void)expandUmbrellaPanelForSkipAgeSelection;
- (void)showUmbrellaButtonGuide;
- (void)didSelectAgeScope:(unsigned long long)arg0;
- (void)didUpdateSubscribeStatus:(long long)arg0 secUserID:(id)arg1;
- (void)setIgnoreVideoControllerPlaybackStatusWhenDisappear:(BOOL)arg0;
- (id)tabViewControllers;
- (void)setTabViewControllers:(id)arg0;
- (void)slideToHotTab;
- (void)removePendant;
- (void)showPendantWithImage:(id)arg0;
- (void)p_fetchSubscribeYellowDot;
- (void)p_refreshHotFeedIfNeeded;
- (void)p_showDoubleColumnBottomTabSwitchIconIfNeeded;
- (void)updateTopTabBarTheme;
- (void)p_updateBottomTabThemeWithChannel:(id)arg0;
- (void)p_dismissSearchAnim;
- (void)hideUmbrellaPopover;
- (void)setDefaultVCType:(long long)arg0;
- (long long)p_defaultSubTabIndex;
- (long long)defaultVCType;
- (void)p_refreshWithType:(long long)arg0 completion:(id /* block */)arg1;
- (void)setPushParams:(id)arg0;
- (id)umbrellaButton;
- (id)interestChannelPanel;
- (void)updateTopTabBarThemeWithTheme:(unsigned long long)arg0;
- (id)subTabVCTypeList;
- (id)pushParams;
- (id)searchAnimView;
- (void)p_updateSubscribeYellowDot:(BOOL)arg0;
- (BOOL)hasShowSearchGuid;
- (BOOL)ageDidChanged;
- (void)setAgeDidChanged:(BOOL)arg0;
- (BOOL)preferWeightDidChanged;
- (void)setPreferWeightDidChanged:(BOOL)arg0;
- (BOOL)p_enableDoubleColumn;
- (void)p_userAgeDidChanged;
- (void)p_preferWeightsDidChanged;
- (void)p_descriptionExpandScrollable:(id)arg0;
- (void)setIsDescriptionExpandScrollable:(BOOL)arg0;
- (double)p_getRealProgressWithLeftVC:(id)arg0 rightVC:(id)arg1 withProgress:(double)arg2;
- (unsigned long long)p_hotFeedTabIndex;
- (void)p_showSearchAnim;
- (void)setSearchAnimView:(id)arg0;
- (void)setHasShowSearchGuid:(BOOL)arg0;
- (void)slideToHotFeedTab;
- (id)channelPopoverManager;
- (void)p_expandUmbrellaPanelWithReason:(unsigned long long)arg0;
- (BOOL)p_shouldShowNewUmbrella;
- (void)showOriginalUmbrellaPopover;
- (id)umbrellaPopover;
- (void)setUmbrellaPopover:(id)arg0;
- (id)originalUmbrellaPopover;
- (void)setOriginalUmbrellaPopover:(id)arg0;
- (void)p_searchStatusDidChanged;
- (id)createSingleRecommendVC;
- (id)createDoubleRecommendVC;
- (id)createSubscribeVC;
- (id)p_createSubTabItems:(BOOL)arg0;
- (void)p_didClickSearchButton;
- (BOOL)needRefreshYelloDot;
- (void)setNeedRefreshYelloDot:(BOOL)arg0;
- (BOOL)isDescriptionExpandScrollable;
- (void)p_startTeenQualityRefresh;
- (void)p_didClickSearchGuideLottie;
- (BOOL)canShowChannelSwitch;
- (void)hideHeaderView:(BOOL)arg0 animated:(BOOL)arg1;
- (void)switchHomepageContentVCType:(long long)arg0;
- (void)setDefaultVCType:(long long)arg0 insertParams:(id)arg1;
- (void)insertRequestParams:(id)arg0;
- (void)setUmbrellaButton:(id)arg0;
- (void)setSubTabVCTypeList:(id)arg0;
- (void)setInterestChannelPanel:(id)arg0;
- (void)setChannelPopoverManager:(id)arg0;
- (BOOL)ignoreVideoControllerPlaybackStatusWhenDisappear;
- (id)init;
- (long long)statusBarStyle;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg0;
- (void)setChannelManager:(id)arg0;
- (void).cxx_destruct;
- (void)setSearchButton:(id)arg0;
- (void)setStatusBarStyle:(long long)arg0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })arg0 withTransitionCoordinator:(id)arg1;
- (double)topPadding;
- (void)viewWillDisappear:(BOOL)arg0;
- (id)searchButton;
- (BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
- (long long)preferredStatusBarStyle;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (id)channelManager;
- (long long)refreshState;
- (void)viewWillAppear:(BOOL)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(void *)arg3;
- (BOOL)refreshWithCompletion:(id /* block */)arg0;
- (void)setCurrentViewController:(id)arg0;
- (id)currentViewController;
- (void)handlePanGesture:(id)arg0;

@end