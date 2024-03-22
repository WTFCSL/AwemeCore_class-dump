//
//     Generated by private class-dump
//

@class UIViewController, NSString, NSArray, AWETabBar, AWERootNavigationController;
@protocol AWETabBarControllerDelegate, AWETabBarControllerDataSource;

@interface AWETabBarController : UITabBarController <AWETabBarControllerUIControlDelegate, UITabBarControllerDelegate, AWERootNavigationControllerDelegate, AWETabBarButtonDelegate, AWETabBarDelegate> {
    BOOL _navigationTransitionFlag;
    BOOL _navigationPopTransitionFlag;
    BOOL _visible;
    NSArray *_viewControllers;
    NSArray *_buttons;
    struct __CFRunLoopObserver { } *_runLoopObserver;
    AWERootNavigationController *_rootNavVC;
    UIViewController *_placeholderVC;
    AWETabBar *_awe_tabBar;
    id<AWETabBarControllerDelegate> _awe_bizDelegate;
    id<AWETabBarControllerDataSource> _awe_bizDataSource;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSArray *buttons;
@property (nonatomic) struct __CFRunLoopObserver { } *runLoopObserver;
@property (retain, nonatomic) AWERootNavigationController *rootNavVC;
@property (retain, nonatomic) UIViewController *placeholderVC;
@property (retain, nonatomic) AWETabBar *awe_tabBar;
@property (retain, nonatomic) id<AWETabBarControllerDelegate> awe_bizDelegate;
@property (retain, nonatomic) id<AWETabBarControllerDataSource> awe_bizDataSource;
@property (readonly, nonatomic) BOOL visible;
@property (nonatomic) BOOL navigationTransitionFlag;
@property (nonatomic) BOOL navigationPopTransitionFlag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)fixiOS12TransitionLayout;
+ (Class)aAWEPadTabBarControllerAdapterClass;
+ (void)initialize;
+ (id)tabBarController;

- (void)popoverDidDisappear:(id)arg0;
- (id)homePageContext;
- (long long)compareTabPositionWithFirstTab:(id)arg0 secondTab:(id)arg1;
- (void)canLandingTabWithTabId:(id)arg0 params:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)landingTabWithTabId:(id)arg0 params:(id)arg1 completionBlock:(id /* block */)arg2 exitBlock:(id /* block */)arg3;
- (id)getTabCenterPointWithTabId:(id)arg0;
- (void)updateSelectedItemType:(long long)arg0;
- (void)setTabBarBackgroundColorFill:(BOOL)arg0 animated:(BOOL)arg1;
- (void)switchToLightModeWithProgress:(double)arg0;
- (void)switchToLightModeWithProgress:(double)arg0 force:(BOOL)arg1;
- (id)applyUIControlTaskWithBizID:(id)arg0;
- (id)getPositionWithTabId:(id)arg0;
- (void)setNavigationTransitionFlag:(BOOL)arg0;
- (void)setNavigationPopTransitionFlag:(BOOL)arg0;
- (void)navigationController:(id)arg0 didPushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)navigationController:(id)arg0 didSetViewControllers:(id)arg1 animated:(BOOL)arg2;
- (void)tabBar:(id)arg0 didSetHidden:(BOOL)arg1;
- (void)tabBar:(id)arg0 didSetAlpha:(double)arg1;
- (void)tabBar:(id)arg0 didSetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1;
- (void)tabBarButtonDidTouchUpInside:(id)arg0;
- (BOOL)tabBarButtonCanHandleDoubleClick:(id)arg0;
- (void)tabBarButtonHandleDoubleClick:(id)arg0;
- (BOOL)tabBarButtonCanHandleLongPress:(id)arg0;
- (void)tabBarButtonHandleLongPress:(id)arg0;
- (void)startRunLoopObserver;
- (void)setPlaceholderVC:(id)arg0;
- (id)placeholderVC;
- (id)rootNavigationControllerWithViewController:(id)arg0;
- (void)setRootNavVC:(id)arg0;
- (id)rootNavVC;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })desireFrame;
- (id)aAWEPadTabBarControllerAdapter;
- (void)tabbarControllerDidChangedFrame;
- (id)awe_bizDelegate;
- (id)awe_tabBar;
- (id)awe_bizDataSource;
- (void)dismissViewControllerBeforeTabbarControllerReload;
- (BOOL)navigationTransitionFlag;
- (BOOL)navigationPopTransitionFlag;
- (void)reloadTabBarItemsOnly;
- (void)reloadWithAnimated:(BOOL)arg0;
- (void)showSeparatorLine:(BOOL)arg0;
- (void)updateSeparatorLineColor:(id)arg0;
- (void)setAwe_tabBar:(id)arg0;
- (void)setAwe_bizDelegate:(id)arg0;
- (void)setAwe_bizDataSource:(id)arg0;
- (void)showBackgroundImagesWithProgress:(double)arg0;
- (void)showBubbleWithChannel:(id)arg0 task:(id)arg1;
- (void)hideBubbleWithChannel:(id)arg0 completion:(id /* block */)arg1;
- (void)showActionPopoverWithChannel:(id)arg0 actions:(id)arg1 preferDarkTheme:(BOOL)arg2 completion:(id /* block */)arg3 clickCallback:(id /* block */)arg4 dismissCallback:(id /* block */)arg5;
- (void)removeBubbleIfNeedWithAnimated:(BOOL)arg0;
- (void)updateSelectedItemType:(long long)arg0 options:(id)arg1;
- (void)didThemeChanged:(BOOL)arg0;
- (void)uiControlTaskDidUpdate:(id)arg0;
- (void)pushUIControlTask:(id)arg0;
- (void)popUIControlTask:(id)arg0;
- (long long)selectedItemTypeForLightModeFlags;
- (BOOL)shouldShowLightMode;
- (void)updateLightModeWithProgress:(double)arg0 fromStack:(BOOL)arg1;
- (void)updateTabBarButtonStatusesWithSelectedButton:(id)arg0 forbidRefresh:(BOOL)arg1;
- (void)updateTabBarButton:(id)arg0 status:(long long)arg1;
- (double)selectedItemTypeShouldShowLightModeProgress;
- (void)popToRootViewAndUpdateSelectedItemType:(long long)arg0 landingParams:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)actionPopover;
- (id)actionPopoverItemConfig;
- (id)bubbleTask;
- (id)getHomePageBubbleModelWithItemConfigBubbleModel:(id)arg0;
- (BOOL)isLightMode;
- (void)setBubbleTask:(id)arg0;
- (void)setActionPopover:(id)arg0;
- (void)setActionPopoverItemConfig:(id)arg0;
- (id)uiTaskStack;
- (void)refreshUIAfterTaskStackChange;
- (void)setTabBarBackgroundColorFill:(BOOL)arg0 animated:(BOOL)arg1 fromStack:(BOOL)arg2;
- (BOOL)selectedItemTypeShouldShouldTabBarBackgroundColorFill;
- (void)setIsLightMode:(BOOL)arg0;
- (void)p_updateCurrentRootController:(id)arg0;
- (void)setUiTaskStack:(id)arg0;
- (void)updateTabBarButtonStatusesWithSelectedButton:(id)arg0;
- (void)updateLightModeAfterSelectedTypeChange;
- (id)selectedItemConfig;
- (id)viewControllers;
- (void)setViewControllers:(id)arg0;
- (BOOL)visible;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (id)transitionHandler;
- (void)setSelectedIndex:(unsigned long long)arg0;
- (void)setButtons:(id)arg0;
- (id)buttons;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)viewDidDisappear:(BOOL)arg0;
- (struct __CFRunLoopObserver { } *)runLoopObserver;
- (void)setTransitionHandler:(id)arg0;
- (void)viewWillAppear:(BOOL)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (id)tabBarController:(id)arg0 animationControllerForTransitionFromViewController:(id)arg1 toViewController:(id)arg2;
- (id)bubble;
- (void)setBubble:(id)arg0;
- (void)motionBegan:(long long)arg0 withEvent:(id)arg1;
- (void)setRunLoopObserver:(struct __CFRunLoopObserver { } *)arg0;

@end