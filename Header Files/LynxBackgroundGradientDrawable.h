//
//     Generated by private class-dump
//

@class CAReplicatorLayer, CAGradientLayer, LynxGradient;

@interface LynxBackgroundGradientDrawable : LynxBackgroundDrawable {
    LynxGradient *_gradient;
    CAReplicatorLayer *_horizontalRepeatLayer;
    CAReplicatorLayer *_verticalRepeatLayer;
    CAGradientLayer *_gradientLayer;
}

@property (retain, nonatomic) LynxGradient *gradient;
@property (retain, nonatomic) CAReplicatorLayer *horizontalRepeatLayer;
@property (retain, nonatomic) CAReplicatorLayer *verticalRepeatLayer;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;

- (void)onDraw:(struct CGContext { } *)arg0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1;
- (void)onPrepareGradientWithSize:(struct CGSize { double x0; double x1; })arg0;
- (void)handleBackgroundRepeat:(const struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)arg0 size:(const struct CGSize { double x0; double x1; } *)arg1 height:(double)arg2 width:(double)arg3 offsetX:(double)arg4 offsetY:(double)arg5;
- (void)prepareGradientWithBorderBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 andPaintBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1 andClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg2;
- (id)horizontalRepeatLayer;
- (void)setHorizontalRepeatLayer:(id)arg0;
- (id)verticalRepeatLayer;
- (void)setVerticalRepeatLayer:(id)arg0;
- (void)setGradient:(id)arg0;
- (id)gradientLayer;
- (void).cxx_destruct;
- (BOOL)isReady;
- (unsigned long long)type;
- (id)gradient;
- (void)setGradientLayer:(id)arg0;
- (BOOL)isGradient;

@end