//
//     Generated by private class-dump
//

@class NSString;
@protocol UIViewControllerContextTransitioning;

@interface CAKBouncePresentAnimationController : NSObject <UIViewControllerAnimatedTransitioning> {
    double _animationDuration;
    id<UIViewControllerContextTransitioning> _transitionContext;
}

@property (retain, nonatomic) id<UIViewControllerContextTransitioning> transitionContext;
@property (nonatomic) double animationDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)transitionDuration:(id)arg0;
- (void)animateTransition:(id)arg0;
- (id)init;
- (void)setTransitionContext:(id)arg0;
- (id)transitionContext;
- (void).cxx_destruct;
- (double)animationDuration;
- (void)setAnimationDuration:(double)arg0;

@end
