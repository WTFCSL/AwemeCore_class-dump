//
//     Generated by private class-dump
//

@class UIPanGestureRecognizer;
@protocol BDNovelTransitionProtocol, UIViewControllerContextTransitioning;

@interface BDNovelTransitionInteractionController : UIPercentDrivenInteractiveTransition {
    id<BDNovelTransitionProtocol> _transitionParamsDelegate;
    id<UIViewControllerContextTransitioning> _transitionContext;
    UIPanGestureRecognizer *_gestureRecognizer;
}

@property (weak, nonatomic) id<UIViewControllerContextTransitioning> transitionContext;
@property (readonly, nonatomic) UIPanGestureRecognizer *gestureRecognizer;
@property (weak, nonatomic) id<BDNovelTransitionProtocol> transitionParamsDelegate;

- (void)gestureRecognizeDidUpdate:(id)arg0;
- (double)percentForGesture:(id)arg0;
- (id)initWithPanGestureRecognizer:(id)arg0;
- (id)transitionParamsDelegate;
- (void)setTransitionParamsDelegate:(id)arg0;
- (void)setTransitionContext:(id)arg0;
- (id)transitionContext;
- (void).cxx_destruct;
- (id)gestureRecognizer;
- (void)startInteractiveTransition:(id)arg0;

@end