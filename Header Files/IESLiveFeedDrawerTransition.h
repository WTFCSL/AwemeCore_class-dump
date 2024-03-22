//
//     Generated by private class-dump
//

@class NSString, IESLiveFeedDrawerTransitionConfig, UIPercentDrivenInteractiveTransition, UIPanGestureRecognizer;

@interface IESLiveFeedDrawerTransition : NSObject <UIGestureRecognizerDelegate, IESLiveFeedDrawerAnimatorProtocol> {
    id /* block */ _cancelAction;
    id /* block */ _beginAction;
    id /* block */ _completeAction;
    UIPanGestureRecognizer *_hideGesture;
    UIPercentDrivenInteractiveTransition *_animator;
    id /* block */ _hideGestureShouldBegin;
    id /* block */ _hideGestureAction;
    IESLiveFeedDrawerTransitionConfig *_config;
}

@property (retain, nonatomic) UIPanGestureRecognizer *hideGesture;
@property (retain, nonatomic) UIPercentDrivenInteractiveTransition *animator;
@property (copy, nonatomic) id /* block */ hideGestureShouldBegin;
@property (copy, nonatomic) id /* block */ hideGestureAction;
@property (retain, nonatomic) IESLiveFeedDrawerTransitionConfig *config;
@property (copy, nonatomic) id /* block */ cancelAction;
@property (copy, nonatomic) id /* block */ beginAction;
@property (copy, nonatomic) id /* block */ completeAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)gestureChanged:(id)arg0 isDismiss:(BOOL)arg1;
- (BOOL)gestureShouldBegin:(id)arg0 isHide:(BOOL)arg1;
- (void)setBeginAction:(id /* block */)arg0;
- (void)addHideGestureForView:(id)arg0 shouldBegin:(id /* block */)arg1 action:(id /* block */)arg2;
- (void)setCompleteAction:(id /* block */)arg0;
- (void)createHideGestureWithShouldBegin:(id /* block */)arg0 action:(id /* block */)arg1;
- (void)addHideGestureForView:(id)arg0;
- (id)hideGesture;
- (void)hideGestureActions:(id)arg0;
- (void)setHideGesture:(id)arg0;
- (void)setHideGestureShouldBegin:(id /* block */)arg0;
- (void)setHideGestureAction:(id /* block */)arg0;
- (id /* block */)hideGestureShouldBegin;
- (BOOL)enableHidePanGesture:(id)arg0 withOtherPanGesture:(id)arg1;
- (id /* block */)hideGestureAction;
- (void)trackGestureBegin:(BOOL)arg0;
- (BOOL)isCompleteVelocity:(struct CGPoint { double x0; double x1; })arg0 isDismiss:(BOOL)arg1;
- (id /* block */)completeAction;
- (void)trackGestureEnd:(BOOL)arg0;
- (id)animator;
- (id)interactionControllerForDismissal:(id)arg0;
- (void)setConfig:(id)arg0;
- (void)setCancelAction:(id /* block */)arg0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1;
- (id)config;
- (BOOL)gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1;
- (id)interactionControllerForPresentation:(id)arg0;
- (id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (id /* block */)cancelAction;
- (id)animationControllerForDismissedController:(id)arg0;
- (void)setAnimator:(id)arg0;
- (id /* block */)beginAction;

@end