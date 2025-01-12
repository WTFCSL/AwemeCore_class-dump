//
//     Generated by private class-dump
//

@protocol AWEModernFullscreenTransitionOuterContextProvider

- (void)modernTransitionUpdateOffset:(long long)arg0 isScrolled:(BOOL)arg1;
- (id)modernTransitionContext;

@optional

- (id)liveTransitionContext;
- (BOOL)shouldModernTransitionUpdatePlayerControllerWithFromContext:(id)arg0;
- (BOOL)shouldModernTransitionUpdatePlayerControllerWithFromContext:(id)arg0;
- (void)modernTransitionDidCompleteWithOffset:(long long)arg0;
- (void)modernTransitionDidCompleteWithOffset:(long long)arg0;
- (BOOL)shouldModernTransitionUpdatePlayerControllerWithToContext:(id)arg0;
- (BOOL)shouldModernTransitionUpdatePlayerControllerWithToContext:(id)arg0;
- (BOOL)shouldUpdatePlayerWhenModelDifferent:(id)arg0;
- (BOOL)shouldUpdatePlayerWhenModelDifferent:(id)arg0;
- (BOOL)disableVideoInteractMask;
- (struct CGSize { double x0; double x1; })preferMediaSize;
- (BOOL)disableSyncReferString;
- (BOOL)shouldLayoutBeforeGenerateFeedSnapshotImageView;
- (BOOL)updateScaleModeBeforeAnimation;
- (void)modernMagnifyTransitionDidCompleteWithToContext:(id)arg0;
- (void)modernMagnifyTransitionDidCompleteWithToContext:(id)arg0;
- (long long)modernUpdateOffsetDiffWithItem:(id)arg0 initialIndex:(long long)arg1 originOffset:(long long)arg2;
- (long long)modernUpdateOffsetDiffWithItem:(id)arg0 initialIndex:(long long)arg1 originOffset:(long long)arg2;
- (void)startMagnifyTransition;
- (void)endShrinkTransition;
- (BOOL)delayInteraction;
- (BOOL)shouldSetMask;
- (long long)preferScaleMode;

@end
