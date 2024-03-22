//
//     Generated by private class-dump
//

@class UIColor;

@interface IESECPopoverTailView : UIView {
    UIColor *_tailColor;
    long long _direction;
}

@property (nonatomic) long long direction;
@property (retain, nonatomic) UIColor *tailColor;

- (id)popoverSharpBezierPathWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)tailColor;
- (void)setTailColor:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (long long)direction;
- (void)setDirection:(long long)arg0;

@end
