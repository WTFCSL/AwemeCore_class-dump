//
//     Generated by private class-dump
//

@class NSString, UIViewController, UIView;

@interface AWEPanelBaseTransitionController : UIPercentDrivenInteractiveTransition <UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning> {
    BOOL _presenting;
    BOOL _shouldFadeInWhenPresenting;
    BOOL _shouldFadeOutWhenDismissing;
    UIView *_containerView;
    UIViewController *_presentedViewController;
    UIViewController *_presentingViewController;
    double _presentationTransitionDuration;
    double _dismissalTransitionDuration;
}

@property (class, readonly, nonatomic) Class presentationControllerClass;

@property (nonatomic, getter=isPresenting) BOOL presenting;
@property (weak, nonatomic) UIView *containerView;
@property (weak, nonatomic) UIViewController *presentedViewController;
@property (weak, nonatomic) UIViewController *presentingViewController;
@property (nonatomic) double presentationTransitionDuration;
@property (nonatomic) double dismissalTransitionDuration;
@property (nonatomic) BOOL shouldFadeInWhenPresenting;
@property (nonatomic) BOOL shouldFadeOutWhenDismissing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)presentationControllerClass;

- (void)animatePresentationTransition:(id)arg0;
- (void)animateDismissalTransition:(id)arg0;
- (void)setDismissalTransitionDuration:(double)arg0;
- (void)setPresentationTransitionDuration:(double)arg0;
- (double)presentationTransitionDuration;
- (double)dismissalTransitionDuration;
- (void)setShouldFadeInWhenPresenting:(BOOL)arg0;
- (void)setShouldFadeOutWhenDismissing:(BOOL)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })initialFrameForPresentedViewController:(id)arg0 transitionContext:(id)arg1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })finalFrameForPresentedViewController:(id)arg0 transitionContext:(id)arg1;
- (BOOL)shouldFadeInWhenPresenting;
- (BOOL)shouldFadeOutWhenDismissing;
- (id)presentingViewController;
- (double)transitionDuration:(id)arg0;
- (void)animateTransition:(id)arg0;
- (BOOL)isPresenting;
- (void).cxx_destruct;
- (BOOL)isIpad;
- (id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2;
- (void)setContainerView:(id)arg0;
- (id)containerView;
- (void)setPresentingViewController:(id)arg0;
- (id)animationControllerForDismissedController:(id)arg0;
- (void)setPresenting:(BOOL)arg0;
- (id)presentationControllerForPresentedViewController:(id)arg0 presentingViewController:(id)arg1 sourceViewController:(id)arg2;
- (id)presentedViewController;
- (void)setPresentedViewController:(id)arg0;
- (unsigned long long)transitionAnimationOptions:(id)arg0;

@end