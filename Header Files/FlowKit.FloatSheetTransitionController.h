//
//     Generated by private class-dump
//

@interface FlowKit.FloatSheetTransitionController : NSObject <UIGestureRecognizerDelegate, UIViewControllerAnimatedTransitioning> {
    void /* unknown type, empty encoding */ dismissOnBackgroundTap;
    void /* unknown type, empty encoding */ prefersGrabEnabled;
    void /* unknown type, empty encoding */ prefersGrabberVisible;
    void /* unknown type, empty encoding */ preferredCornerRadius;
    void /* unknown type, empty encoding */ prefersEdgeScrollingEnabled;
    void /* unknown type, empty encoding */ prefersContentSizeChangeWhenScrolling;
    void /* unknown type, empty encoding */ shouldDimBackground;
    void /* unknown type, empty encoding */ shouldPassThroughBackgroundTouch;
    void /* unknown type, empty encoding */ customDimingBackgroundColor;
    void /* unknown type, empty encoding */ backgroundColor;
    void /* unknown type, empty encoding */ detents;
    void /* unknown type, empty encoding */ selectedDetentIndex;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ lifecycleDelegate;
    void /* unknown type, empty encoding */ shouldTriggerLayoutAfterSizeChange;
    void /* unknown type, empty encoding */ transitionController;
    void /* unknown type, empty encoding */ dismissalTapGesture;
    void /* unknown type, empty encoding */ grabberPanGesture;
    void /* unknown type, empty encoding */ sortedDetents;
    void /* unknown type, empty encoding */ presentedViewController;
    void /* unknown type, empty encoding */ presentingViewController;
    void /* unknown type, empty encoding */ presentedView;
    void /* unknown type, empty encoding */ containerView;
    void /* unknown type, empty encoding */ dimmingView;
    void /* unknown type, empty encoding */ sheetContainer;
    void /* unknown type, empty encoding */ grabber;
    void /* unknown type, empty encoding */ beginLocationY;
    void /* unknown type, empty encoding */ scrollingOnEdgeState;
    void /* unknown type, empty encoding */ dismissalReason;
    void /* unknown type, empty encoding */ initialVerticalScrollIndicatorVisible;
}

- (void)handleScrollViewPan:(id)arg0;
- (void)handleDismissalTap:(id)arg0;
- (void)handleGrabberPan:(id)arg0;
- (BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1;
- (void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(void *)arg3;
- (double)transitionDuration:(id)arg0;
- (void)animateTransition:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
