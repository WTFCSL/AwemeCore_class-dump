//
//     Generated by private class-dump
//

@interface AWELifeCardHotView : UIView {
    id /* block */ _hotTouchHandler;
    struct CGPoint { double x; double y; } _currentPoint;
    struct CGPoint { double x; double y; } _curPending2Point;
    struct CGPoint { double x; double y; } _tempPoint;
}

@property (nonatomic) struct CGPoint { double x; double y; } currentPoint;
@property (nonatomic) struct CGPoint { double x; double y; } curPending2Point;
@property (nonatomic) struct CGPoint { double x; double y; } tempPoint;
@property (copy, nonatomic) id /* block */ hotTouchHandler;

+ (id)convertNumberStringFromFloat:(double)arg0;

- (void)setHotTouchHandler:(id /* block */)arg0;
- (void)setTempPoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)antiQuickHandel;
- (struct CGPoint { double x0; double x1; })tempPoint;
- (id /* block */)hotTouchHandler;
- (void)setCurPending2Point:(struct CGPoint { double x0; double x1; })arg0;
- (id)_float1:(double)arg0 byDividingBy:(double)arg1;
- (id)notRounding:(float)arg0 afterPoint:(int)arg1;
- (struct CGPoint { double x0; double x1; })curPending2Point;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (void).cxx_destruct;
- (void)setCurrentPoint:(struct CGPoint { double x0; double x1; })arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)layoutSubviews;
- (struct CGPoint { double x0; double x1; })currentPoint;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;

@end