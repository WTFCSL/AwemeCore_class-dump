//
//     Generated by private class-dump
//

@class NSArray;

@interface AWEGradientBorderView : UIView {
    double _borderWidth;
    NSArray *_colors;
}

@property (nonatomic) double borderWidth;
@property (retain, nonatomic) NSArray *colors;

- (double)borderWidth;
- (id)init;
- (void)setColors:(id)arg0;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setBorderWidth:(double)arg0;
- (id)colors;
- (void)layoutSubviews;

@end
