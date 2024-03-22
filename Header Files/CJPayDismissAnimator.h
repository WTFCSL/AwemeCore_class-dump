//
//     Generated by private class-dump
//

@class NSString, CJPayNavigationController, UIView;
@protocol UIViewControllerContextTransitioning;

@interface CJPayDismissAnimator : UIPercentDrivenInteractiveTransition <UIViewControllerAnimatedTransitioning> {
    BOOL _isInteractive;
    CJPayNavigationController *_naviViewController;
    id<UIViewControllerContextTransitioning> _transitionContext;
    UIView *_interactiveMaskView;
}

@property (weak, nonatomic) id<UIViewControllerContextTransitioning> transitionContext;
@property (weak, nonatomic) UIView *interactiveMaskView;
@property (nonatomic) BOOL isInteractive;
@property (weak, nonatomic) CJPayNavigationController *naviViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)p_isSingleHalfPageCJPayNavi:(id)arg0;
- (void)p_finishTransitionWithContext:(id)arg0;
- (void)p_dismissNaviController:(id)arg0 withShareViews:(id)arg1 transition:(id)arg2 completion:(id /* block */)arg3;
- (void)p_dismissHalfVCNewAnimationWithTransitionContext:(id)arg0 shareViews:(id)arg1 fromVC:(id)arg2 toVC:(id)arg3 completion:(id /* block */)arg4;
- (void)p_dismissHalfVCWithTransitionContext:(id)arg0 shareViews:(id)arg1 fromVC:(id)arg2 toVC:(id)arg3 completion:(id /* block */)arg4;
- (void)p_dismissViewController:(id)arg0 shareViews:(id)arg1 isShowMask:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)p_forceDismissHalfVC:(id)arg0 maskContainerView:(id)arg1 completion:(id /* block */)arg2;
- (id)p_needExitVCWithCJPayNavigationController:(id)arg0;
- (void)p_dismissNaviWithOneViewController:(id)arg0 shareViews:(id)arg1 transition:(id)arg2 completion:(id /* block */)arg3;
- (void)p_dismissNaviWithMultiViewController:(id)arg0 shareViews:(id)arg1 transition:(id)arg2 completion:(id /* block */)arg3;
- (id)naviViewController;
- (void)setInteractiveMaskView:(id)arg0;
- (id)interactiveMaskView;
- (void)setNaviViewController:(id)arg0;
- (void)updateInteractiveTransition:(double)arg0;
- (void)cancelInteractiveTransition;
- (double)transitionDuration:(id)arg0;
- (void)animateTransition:(id)arg0;
- (void)finishInteractiveTransition;
- (void)setTransitionContext:(id)arg0;
- (id)transitionContext;
- (void).cxx_destruct;
- (void)handleGesture:(id)arg0;
- (BOOL)isInteractive;
- (void)startInteractiveTransition:(id)arg0;
- (void)setIsInteractive:(BOOL)arg0;
- (void)p_animateTransition:(id)arg0;

@end