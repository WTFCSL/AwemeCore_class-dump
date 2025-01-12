//
//     Generated by private class-dump
//

@protocol ACCGestureResponsibleStickerProtocol <ACCStickerProtocol>

@property (nonatomic) double currentScale;
@property (nonatomic) long long gestureActiveState;

- (long long)gestureActiveState;
- (BOOL)willGestureStart:(id)arg0;
- (struct CGPoint { double x0; double x1; })panGestureLocatedPoint:(id)arg0;
- (void)handlePanGesture:(id)arg0 withNewCenter:(struct CGPoint { double x0; double x1; })arg1;
- (void)endGesture:(id)arg0;
- (BOOL)supportGesture:(id)arg0;
- (void)shouldHiddenSelectedHintView:(BOOL)arg0;
- (void)setGestureActiveState:(long long)arg0;
- (double)currentScale;
- (void)setCurrentScale:(double)arg0;
- (void)handlePinchGesture:(id)arg0;
- (void)handleTapGesture:(id)arg0;
- (void)handleRotationGesture:(id)arg0;

@end
