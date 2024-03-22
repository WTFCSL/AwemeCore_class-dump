//
//     Generated by private class-dump
//

@class UIColor, NSArray, IESECLinearGradientLayer, CAShapeLayer, UIBezierPath;

@interface IESECBorderView : UIView {
    UIColor *_borderColor;
    unsigned long long _style;
    double _cornerRadius;
    double _borderWidth;
    id /* block */ _gradientBlock;
    NSArray *_colors;
    NSArray *_locations;
    IESECLinearGradientLayer *_gradientLayer;
    CAShapeLayer *_maskLayer;
    UIBezierPath *_borderPath;
    double _borderOffset;
    struct CGPoint { double x; double y; } _startPoint;
    struct CGPoint { double x; double y; } _endPoint;
}

@property (copy, nonatomic) NSArray *colors;
@property (copy, nonatomic) NSArray *locations;
@property (nonatomic) struct CGPoint { double x; double y; } startPoint;
@property (nonatomic) struct CGPoint { double x; double y; } endPoint;
@property (retain, nonatomic) IESECLinearGradientLayer *gradientLayer;
@property (retain, nonatomic) CAShapeLayer *maskLayer;
@property (retain, nonatomic) UIBezierPath *borderPath;
@property (nonatomic) double borderOffset;
@property (nonatomic) unsigned long long style;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) UIColor *borderColor;
@property (copy, nonatomic) id /* block */ gradientBlock;

- (void)setupSublayers;
- (id /* block */)gradientBlock;
- (void)updateGradientLayer;
- (void)setGradientBlock:(id /* block */)arg0;
- (unsigned long long)style;
- (double)borderWidth;
- (void)setStartPoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)setLocations:(id)arg0;
- (id)gradientLayer;
- (void)setColors:(id)arg0;
- (void).cxx_destruct;
- (id)initWithStyle:(unsigned long long)arg0;
- (void)setEndPoint:(struct CGPoint { double x0; double x1; })arg0;
- (id)borderColor;
- (struct CGPoint { double x0; double x1; })endPoint;
- (void)setBorderColor:(id)arg0;
- (double)cornerRadius;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setBorderWidth:(double)arg0;
- (id)colors;
- (id)locations;
- (struct CGPoint { double x0; double x1; })startPoint;
- (void)layoutSubviews;
- (void)setCornerRadius:(double)arg0;
- (void)setStyle:(unsigned long long)arg0;
- (id)maskLayer;
- (void)setGradientLayer:(id)arg0;
- (void)setMaskLayer:(id)arg0;
- (double)borderOffset;
- (id)borderPath;
- (void)setBorderPath:(id)arg0;
- (void)updateBorderPath;
- (void)setBorderOffset:(double)arg0;

@end
