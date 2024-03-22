//
//     Generated by private class-dump
//

@protocol AWELandscapeTransitionOuterContextProvider <NSObject>

- (id)landscapeTransitionContext;

@optional

- (id)screenCastControlView;
- (void)updateScreenCastViewLayout:(id)arg0;
- (void)willEnterLandscape;
- (void)didEnterLandscapeWithToContext:(id)arg0;
- (void)willExitLandscapeWithModel:(id)arg0 modelList:(id)arg1;
- (void)didExitLandscapeWithFromContext:(id)arg0;
- (double)landscapeAnimationDuration;
- (double)playerControllerMoveUpOffsetWithModel:(id)arg0;
- (id)videoPlayerContainerView;
- (long long)preferVideoScaleMode;
- (BOOL)shouldUpdatePlayerWithDifferentModel:(id)arg0;
- (BOOL)needScreenCastViewFillClipContainer;
- (BOOL)useBlackMaskViewWithModel:(id)arg0;
- (BOOL)useBlackMaskViewForFocusView;

@end