//
//     Generated by private class-dump
//

@class NSString, UIView, UIPanGestureRecognizer, BDNovelPresentationConfig;

@interface BDNovelPresentationController : UIPresentationController <BDNovelTransitionProtocol, UIViewControllerTransitioningDelegate> {
    BDNovelPresentationConfig *_config;
    UIPanGestureRecognizer *_gestureRecognizer;
    id /* block */ _didDismissBlock;
    UIView *_dimmingView;
    UIView *_presentationWrapperView;
}

@property (retain, nonatomic) UIView *dimmingView;
@property (retain, nonatomic) UIView *presentationWrapperView;
@property (retain, nonatomic) BDNovelPresentationConfig *config;
@property (weak, nonatomic) UIPanGestureRecognizer *gestureRecognizer;
@property (copy, nonatomic) id /* block */ didDismissBlock;
@property (readonly, nonatomic) double customTransitionValidTop;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id /* block */)didDismissBlock;
- (void)setDidDismissBlock:(id /* block */)arg0;
- (id)presentationWrapperView;
- (void)setPresentationWrapperView:(id)arg0;
- (id)createTransitionInteractionController;
- (double)customTransitionValidTop;
- (id)initWithPresentedViewController:(id)arg0 presentingViewController:(id)arg1 config:(id)arg2;
- (void)setGestureRecognizer:(id)arg0;
- (id)interactionControllerForDismissal:(id)arg0;
- (void)setConfig:(id)arg0;
- (id)initWithPresentedViewController:(id)arg0 presentingViewController:(id)arg1;
- (void)setDimmingView:(id)arg0;
- (void)containerViewWillLayoutSubviews;
- (void).cxx_destruct;
- (id)dimmingView;
- (void)presentationTransitionWillBegin;
- (id)gestureRecognizer;
- (id)config;
- (id)presentedView;
- (void)dismissalTransitionDidEnd:(BOOL)arg0;
- (void)dismissalTransitionWillBegin;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfPresentedViewInContainerView;
- (id)interactionControllerForPresentation:(id)arg0;
- (id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2;
- (id)animationControllerForDismissedController:(id)arg0;
- (void)dealloc;
- (id)presentationControllerForPresentedViewController:(id)arg0 presentingViewController:(id)arg1 sourceViewController:(id)arg2;
- (void)dimmingViewTapped:(id)arg0;

@end
