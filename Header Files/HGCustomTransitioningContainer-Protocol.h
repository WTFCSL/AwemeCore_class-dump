//
//     Generated by private class-dump
//

@protocol HGContainerAnimatedTransitioning;

@protocol HGCustomTransitioningContainer <HGContainerInteractiveTransitioningObserve>

@property (weak, nonatomic) id<HGContainerAnimatedTransitioning> containerTransitioningDelegate;
@property (readonly, nonatomic) long long containerTransitionState;

- (long long)containerTransitionState;
- (id)containerTransitioningDelegate;
- (void)setContainerTransitioningDelegate:(id)arg0;

@end
