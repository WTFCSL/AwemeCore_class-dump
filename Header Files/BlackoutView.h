//
//     Generated by private class-dump
//

@class UIColor, NSArray;

@interface BlackoutView : UIView {
    UIColor *_fillColor;
    NSArray *_framesToCutOut;
}

@property (retain, nonatomic) UIColor *fillColor;
@property (retain, nonatomic) NSArray *framesToCutOut;

- (id)framesToCutOut;
- (void)setFramesToCutOut:(id)arg0;
- (void)setFillColor:(id)arg0;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)fillColor;

@end
