//
//     Generated by private class-dump
//

@interface LOTAnimatedSwitch : LOTAnimatedControl {
    double _onStartProgress;
    double _onEndProgress;
    double _offStartProgress;
    double _offEndProgress;
    struct CGPoint { double x; double y; } _touchTrackingStart;
    BOOL _on;
    BOOL _suppressToggle;
    BOOL _toggleToState;
    BOOL _interactiveGesture;
}

@property (nonatomic, getter=isOn) BOOL on;
@property (nonatomic) BOOL interactiveGesture;

+ (id)switchNamed:(id)arg0 inBundle:(id)arg1;
+ (id)switchNamed:(id)arg0;

- (void)setAnimationComp:(id)arg0;
- (void)_toggleAndSendActions;
- (void)setProgressRangeForOnState:(double)arg0 toProgress:(double)arg1;
- (void)setProgressRangeForOffState:(double)arg0 toProgress:(double)arg1;
- (BOOL)interactiveGesture;
- (void)setInteractiveGesture:(BOOL)arg0;
- (void)setOn:(BOOL)arg0;
- (BOOL)isOn;
- (BOOL)continueTrackingWithTouch:(id)arg0 withEvent:(id)arg1;
- (BOOL)beginTrackingWithTouch:(id)arg0 withEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg0 withEvent:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setOn:(BOOL)arg0 animated:(BOOL)arg1;
- (id)accessibilityValue;
- (void)_toggle;

@end
