//
//     Generated by private class-dump
//

@class UIScreenEdgePanGestureRecognizer, NSString, NSArray, BDPNavigatingAnimation, BDPMultiDelegateProxy, UIPanGestureRecognizer, NSMutableArray, BDPTimorLaunchParam, NSNumber;
@protocol BDPNavigationControllerGestureRecognizeBreaker;

@interface BDPRootNavigationController : UINavigationController <UIGestureRecognizerDelegate, UINavigationControllerDelegate> {
    BOOL _inIniting;
    BDPNavigatingAnimation *_animation;
    BDPTimorLaunchParam *_launchParam;
    BDPMultiDelegateProxy<BDPNavigationControllerGestureRecognizeBreaker> *_gestureBreakDelegates;
    NSNumber *_forceDismiss;
    NSArray *_allGames;
    UIScreenEdgePanGestureRecognizer *_popGesture;
    long long _originStatusBarStyle;
    UIPanGestureRecognizer *_panGesture;
    NSMutableArray *_unfoldConflictGestures;
}

@property (copy, nonatomic) NSArray *allGames;
@property (retain, nonatomic) UIScreenEdgePanGestureRecognizer *popGesture;
@property (retain, nonatomic) BDPMultiDelegateProxy<BDPNavigationControllerGestureRecognizeBreaker> *gestureBreakDelegates;
@property (nonatomic) long long originStatusBarStyle;
@property (retain, nonatomic) BDPNavigatingAnimation *animation;
@property (retain, nonatomic) BDPTimorLaunchParam *launchParam;
@property (readonly, copy, nonatomic) NSArray *allApps;
@property (retain, nonatomic) NSNumber *forceDismiss;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)awe_shouldBypassPresentationHook;
- (unsigned long long)acc_stuioTag;
- (unsigned long long)acc_stuioTag;
- (void)setLaunchParam:(id)arg0;
- (id)launchParam;
- (id)popGesture;
- (void)edgePanGesture:(id)arg0;
- (void)setPopGesture:(id)arg0;
- (id)gestureBreakDelegates;
- (void)setGestureBreakDelegates:(id)arg0;
- (void)updateStatusBarStyle:(BOOL)arg0;
- (void)updateStatusBarHidden:(BOOL)arg0;
- (void)setOriginStatusBarStyle:(long long)arg0;
- (long long)originStatusBarStyle;
- (id)forceDismiss;
- (void)setForceDismiss:(id)arg0;
- (void)popGestureChanged:(id)arg0;
- (id)allGames;
- (void)setAllGames:(id)arg0;
- (id)initWithRootViewController:(id)arg0 launchParam:(id)arg1;
- (id)allApps;
- (BOOL)shouldAutorotate;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)pushViewController:(id)arg0 animated:(BOOL)arg1;
- (id)animation;
- (void)setAnimation:(id)arg0;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)prefersHomeIndicatorAutoHidden;
- (BOOL)gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1;
- (long long)preferredStatusBarUpdateAnimation;
- (id)navigationController:(id)arg0 interactionControllerForAnimationController:(id)arg1;
- (void)navigationController:(id)arg0 didShowViewController:(id)arg1 animated:(BOOL)arg2;
- (long long)preferredStatusBarStyle;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (void)navigationController:(id)arg0 willShowViewController:(id)arg1 animated:(BOOL)arg2;
- (id)popViewControllerAnimated:(BOOL)arg0;
- (BOOL)prefersStatusBarHidden;
- (void)setDelegate:(id)arg0;
- (void)viewDidLoad;
- (id)navigationController:(id)arg0 animationControllerForOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3;
- (void)dismissViewControllerAnimated:(BOOL)arg0 completion:(id /* block */)arg1;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg0;
- (void)setTransitioningDelegate:(id)arg0;

@end
