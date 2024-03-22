//
//     Generated by private class-dump
//

@class AWEListDataController, NSArray, NSString, NSMutableSet, UIView, AWETeenExtraParamModel, UIViewController;
@protocol AWETeenHomepageRootViewControllerProtocol, AWETeenHomepageContentViewControllerProtocol, AWETeenFeedChannelControllerProxyProtocol;

@interface AWETeenHomepageChannelContainerViewController : UIViewController <AWEDigitalWellbeingMessage, AWETeenHomepageContentViewControllerProtocol> {
    id<AWETeenFeedChannelControllerProxyProtocol> _controllerProxy;
    NSArray *_controllers;
    UIViewController<AWETeenHomepageContentViewControllerProtocol> *_selectedViewController;
    UIView *_containerView;
    UIViewController<AWETeenHomepageContentViewControllerProtocol> *_lastSwitchForChannelChangedController;
    NSMutableSet *_needRefreshVCs;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) NSArray *controllers;
@property (retain, nonatomic) UIViewController<AWETeenHomepageContentViewControllerProtocol> *selectedViewController;
@property (retain, nonatomic) UIViewController<AWETeenHomepageContentViewControllerProtocol> *lastSwitchForChannelChangedController;
@property (retain, nonatomic) NSMutableSet *needRefreshVCs;
@property (readonly, nonatomic) long long vcType;
@property (readonly, nonatomic) AWEListDataController *dataController;
@property (weak, nonatomic) id<AWETeenHomepageRootViewControllerProtocol> rootVC;
@property (readonly, nonatomic) AWETeenExtraParamModel *extraParam;
@property (nonatomic) BOOL scrollEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<AWETeenFeedChannelControllerProxyProtocol> controllerProxy;

- (void)transition_didPopDoneTransitionWithContext:(id)arg0;
- (id)transition_destinatedViewControllerForSlideDirection:(unsigned long long)arg0 gestureRecognizer:(id)arg1;
- (BOOL)currentTabIsTop;
- (BOOL)canRefresh;
- (void)onAwemeDeleted:(id)arg0 isDislike:(BOOL)arg1;
- (unsigned long long)transition_destinatedType;
- (BOOL)transition_enableCustomActionForSlideDirection:(unsigned long long)arg0 gestureRecognizer:(id)arg1;
- (void)setRootVC:(id)arg0;
- (id)rootVC;
- (void)p_setupUI;
- (id)extraParam;
- (void)refreshWithAnimated:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)playIfActive;
- (void)teenModeDidChange:(BOOL)arg0 isLogout:(BOOL)arg1;
- (BOOL)bottomBarFillBackground;
- (id)controllerProxy;
- (id)currentVideoModel;
- (void)setControllerProxy:(id)arg0;
- (long long)vcType;
- (unsigned long long)bottomTabThemeType;
- (void)triggerSearchAction;
- (void)trackHomepageTabChangeWithEnterFrom:(id)arg0 enterMethod:(id)arg1;
- (unsigned long long)currentTopTabBarTheme;
- (BOOL)supportInterestChannel:(id)arg0;
- (void)p_updateBottomTabThemeWithChannel:(id)arg0;
- (void)setNeedsRefreshUsingBlock:(id /* block */)arg0;
- (void)switchToNextWithCompletion:(id /* block */)arg0;
- (void)didChangedToChannel:(id)arg0 refreshBlock:(id /* block */)arg1;
- (void)p_setupInitialVC;
- (id)needRefreshVCs;
- (id)lastSwitchForChannelChangedController;
- (void)setLastSwitchForChannelChangedController:(id)arg0;
- (void)p_switchTo:(id)arg0 animated:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)p_addContentViewController:(id)arg0 needsLayout:(BOOL)arg1;
- (void)p_removeContentViewController:(id)arg0;
- (void)p_refreshIfNeeded;
- (void)switchToVCType:(long long)arg0 completion:(id /* block */)arg1;
- (void)setNeedRefreshVCs:(id)arg0;
- (id)controllers;
- (void)setScrollEnabled:(BOOL)arg0;
- (BOOL)scrollEnabled;
- (void).cxx_destruct;
- (long long)currentIndex;
- (void)setSelectedViewController:(id)arg0;
- (void)stop;
- (void)setContainerView:(id)arg0;
- (id)containerView;
- (void)dealloc;
- (BOOL)play;
- (void)pause;
- (void)viewDidLoad;
- (id)selectedViewController;
- (id)dataController;
- (void)setControllers:(id)arg0;
- (id)initWithControllers:(id)arg0;

@end
