//
//     Generated by private class-dump
//

@protocol BDXLynxOverlayLightViewDelegate <NSObject>

- (long long)getSign;
- (BOOL)forbidPanGesture;
- (BOOL)eventPassed;
- (void)requestClose:(id)arg0;
- (void)overlayTouched:(id)arg0 point:(struct CGPoint { double x0; double x1; })arg1 state:(long long)arg2 velocity:(struct CGPoint { double x0; double x1; })arg3;
- (id)overlayRootUI;
- (id)nestScrollView;

@end