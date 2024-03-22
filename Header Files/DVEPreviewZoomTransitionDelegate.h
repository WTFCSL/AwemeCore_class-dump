//
//     Generated by private class-dump
//

@class UIViewController, NSString, UIPercentDrivenInteractiveTransition, UIPanGestureRecognizer;
@protocol DVEPreviewTransitionContextProvider, UIViewControllerContextTransitioning;

@interface DVEPreviewZoomTransitionDelegate : NSObject <UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate, DVEPreviewTransitionDelegateProtocol> {
    BOOL isAnimating;
    UIViewController *outterViewController;
    UIViewController *innerViewController;
    id<UIViewControllerContextTransitioning> currentTransitioningContext;
    id<DVEPreviewTransitionContextProvider> contextProvider;
    UIPercentDrivenInteractiveTransition *_percentDrivenTransition;
    UIPanGestureRecognizer *_panGestureRecognizer;
    unsigned long long _triggerDirection;
}

@property (retain, nonatomic) UIPercentDrivenInteractiveTransition *percentDrivenTransition;
@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property (nonatomic) unsigned long long triggerDirection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) UIViewController *outterViewController;
@property (weak, nonatomic) UIViewController *innerViewController;
@property (nonatomic) BOOL isAnimating;
@property (weak, nonatomic) id<UIViewControllerContextTransitioning> currentTransitioningContext;
@property (retain, nonatomic) id<DVEPreviewTransitionContextProvider> contextProvider;

- (id)currentTransitioningContext;
- (unsigned long long)triggerDirection;
- (void)setCurrentTransitioningContext:(id)arg0;
- (id)outterViewController;
- (void)setTriggerDirection:(unsigned long long)arg0;
- (id)innerViewController;
- (void)setOutterViewController:(id)arg0;
- (void)setInnerViewController:(id)arg0;
- (double)p_progressForDirection:(unsigned long long)arg0 startLocation:(struct CGPoint { double x0; double x1; })arg1 currentLocation:(struct CGPoint { double x0; double x1; })arg2;
- (struct CGPoint { double x0; double x1; })p_vectorForDirection:(unsigned long long)arg0;
- (BOOL)p_zoomTransitionAllowedTrigger:(id)arg0;
- (unsigned long long)p_directionForPan:(id)arg0;
- (id)percentDrivenTransition;
- (void)setPercentDrivenTransition:(id)arg0;
- (BOOL)isAnimating;
- (id)interactionControllerForDismissal:(id)arg0;
- (void)setPanGestureRecognizer:(id)arg0;
- (id)panGestureRecognizer;
- (void).cxx_destruct;
- (id)interactionControllerForPresentation:(id)arg0;
- (id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (id)animationControllerForDismissedController:(id)arg0;
- (id)presentationControllerForPresentedViewController:(id)arg0 presentingViewController:(id)arg1 sourceViewController:(id)arg2;
- (void)setIsAnimating:(BOOL)arg0;
- (void)handlePanGesture:(id)arg0;
- (id)contextProvider;
- (void)setContextProvider:(id)arg0;

@end
