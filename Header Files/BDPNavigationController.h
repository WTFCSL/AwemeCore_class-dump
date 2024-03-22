//
//     Generated by private class-dump
//

@class BDPDirectionPanGestureRecognizer, NSString, BDPUniqueID, BDPMultiDelegateProxy;
@protocol BDPNavigationRouteProtocol, BDPNavigationControllerGestureRecognizeBreaker;

@interface BDPNavigationController : UINavigationController <UINavigationControllerDelegate, UIGestureRecognizerDelegate> {
    BDPUniqueID *_uniqueID;
    id<BDPNavigationRouteProtocol> _navigationRouteDelegate;
    BDPDirectionPanGestureRecognizer *_swipeBackGestureRecognizer;
    BDPMultiDelegateProxy<BDPNavigationControllerGestureRecognizeBreaker> *_gestureBreakDelegates;
}

@property (retain, nonatomic) BDPDirectionPanGestureRecognizer *swipeBackGestureRecognizer;
@property (retain, nonatomic) BDPMultiDelegateProxy<BDPNavigationControllerGestureRecognizeBreaker> *gestureBreakDelegates;
@property (copy, nonatomic) BDPUniqueID *uniqueID;
@property (weak, nonatomic) id<BDPNavigationRouteProtocol> navigationRouteDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupObserver;
- (BOOL)aweDisableFullscreenPopTransition;
- (id)gestureBreakDelegates;
- (void)setGestureBreakDelegates:(id)arg0;
- (void)refreshOrientation;
- (void)onWindowHiddenNotify:(id)arg0;
- (void)interactionGesturePopViewController:(id)arg0 willShowViewController:(id)arg1;
- (id)navigationRouteDelegate;
- (void)setNavigationRouteDelegate:(id)arg0;
- (id)swipeBackGestureRecognizer;
- (void)setupSwipeBackGestureRecognizer;
- (void)setSwipeBackGestureRecognizer:(id)arg0;
- (BOOL)shouldAutorotate;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)pushViewController:(id)arg0 animated:(BOOL)arg1;
- (id)uniqueID;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)prefersHomeIndicatorAutoHidden;
- (void)setUniqueID:(id)arg0;
- (BOOL)gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1;
- (long long)preferredStatusBarUpdateAnimation;
- (void)navigationController:(id)arg0 didShowViewController:(id)arg1 animated:(BOOL)arg2;
- (long long)preferredStatusBarStyle;
- (BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (void)navigationController:(id)arg0 willShowViewController:(id)arg1 animated:(BOOL)arg2;
- (id)initWithRootViewController:(id)arg0;
- (id)popViewControllerAnimated:(BOOL)arg0;
- (BOOL)prefersStatusBarHidden;
- (void)viewWillAppear:(BOOL)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)dismissViewControllerAnimated:(BOOL)arg0 completion:(id /* block */)arg1;
- (id)popToRootViewControllerAnimated:(BOOL)arg0;
- (id)popToViewController:(id)arg0 animated:(BOOL)arg1;

@end