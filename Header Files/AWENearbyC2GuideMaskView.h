//
//     Generated by private class-dump
//

@class UITapGestureRecognizer, NSTimer, CALayer;

@interface AWENearbyC2GuideMaskView : UIView {
    long long _autoDismissTime;
    double _radius;
    UITapGestureRecognizer *_tap;
    NSTimer *_autoHideTimer;
    id /* block */ _dismissBlk;
    CALayer *_shapeLayer;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _highLightRect;
}

@property (retain, nonatomic) UITapGestureRecognizer *tap;
@property (retain, nonatomic) NSTimer *autoHideTimer;
@property (copy, nonatomic) id /* block */ dismissBlk;
@property (retain, nonatomic) CALayer *shapeLayer;
@property (nonatomic) long long autoDismissTime;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } highLightRect;
@property (nonatomic) double radius;

- (long long)autoDismissTime;
- (void)setAutoDismissTime:(long long)arg0;
- (void)startAutoHideIfNeeded;
- (void)setHighLightRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })highLightRect;
- (void)showWithBlk:(id /* block */)arg0 dismissBlk:(id /* block */)arg1;
- (void)updateHighLightRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setDismissBlk:(id /* block */)arg0;
- (id /* block */)dismissBlk;
- (void)dismiss;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (double)radius;
- (id)shapeLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setRadius:(double)arg0;
- (void)setShapeLayer:(id)arg0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (id)tap;
- (void)setTap:(id)arg0;
- (id)autoHideTimer;
- (void)setAutoHideTimer:(id)arg0;

@end
