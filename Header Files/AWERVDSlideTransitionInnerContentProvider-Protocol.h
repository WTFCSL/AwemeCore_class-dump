//
//     Generated by private class-dump
//

@protocol AWERVDSlideTransitionInnerContentProvider <NSObject>

- (id)rvdTransitionContext;
- (void)rvdTransitionDidUpdatePlayerController;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rvdSlideTransitionVideoPlayerEnterFrame;
- (unsigned long long)rvdInteractiveSectionSlideDownTransitionAllowedTriggerDirection;
- (id)rvdSlideTransitionVCSnapShotContainerScrollView;
- (id)rvdSlideTransitionVCSnapShotBottomInteractView;
- (BOOL)rvdSlideTransitionIsPlayBeforeOut;
- (BOOL)rvdSlideTransitionIsStopBeforeOut;
- (unsigned long long)rvdSlideTransitionTriggerDirection;
- (void)rvdSlideTransitionWillStartTransition;
- (void)rvdSlideTransitionDidTranstionCompletion:(BOOL)arg0 currentPlayTime:(double)arg1;

@optional

- (BOOL)rvdChangeUnfollowStatus;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rvdSlideTransitionPreferEndFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (BOOL)rvdSlideTransitionCanSyncDiffAwemeModelToFeed;
- (BOOL)rvdSlideTransitionCanChangeAlpha;
- (void)rvdSlideTransitionWithIsAutoPause:(BOOL)arg0;

@end
