//
//     Generated by private class-dump
//

@class UIColor;

@interface AFDBubbleSharpView : UIView {
    double _sharpHeight;
    double _sharpWidth;
    unsigned long long _position;
    UIColor *_bubbleColor;
    struct CGPoint { double x; double y; } _controlPoint1;
    struct CGPoint { double x; double y; } _controlPoint2;
    struct CGPoint { double x; double y; } _controlPoint3;
    struct CGPoint { double x; double y; } _controlPoint4;
}

@property (nonatomic) double sharpHeight;
@property (nonatomic) double sharpWidth;
@property (nonatomic) unsigned long long position;
@property (retain, nonatomic) UIColor *bubbleColor;
@property (nonatomic) struct CGPoint { double x; double y; } controlPoint1;
@property (nonatomic) struct CGPoint { double x; double y; } controlPoint2;
@property (nonatomic) struct CGPoint { double x; double y; } controlPoint3;
@property (nonatomic) struct CGPoint { double x; double y; } controlPoint4;

- (void)awe_themeDidChange:(long long)arg0;
- (void)setControlPoint1:(struct CGPoint { double x0; double x1; })arg0;
- (void)setControlPoint2:(struct CGPoint { double x0; double x1; })arg0;
- (id)bubbleSharpBezierPathWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 position:(unsigned long long)arg1;
- (double)sharpWidth;
- (double)sharpHeight;
- (struct CGPoint { double x0; double x1; })controlPoint3;
- (struct CGPoint { double x0; double x1; })controlPoint4;
- (void)setSharpHeight:(double)arg0;
- (void)setSharpWidth:(double)arg0;
- (void)setControlPoint3:(struct CGPoint { double x0; double x1; })arg0;
- (void)setControlPoint4:(struct CGPoint { double x0; double x1; })arg0;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (unsigned long long)position;
- (void)setPosition:(unsigned long long)arg0;
- (struct CGPoint { double x0; double x1; })controlPoint1;
- (struct CGPoint { double x0; double x1; })controlPoint2;
- (void)setBubbleColor:(id)arg0;
- (id)bubbleColor;

@end