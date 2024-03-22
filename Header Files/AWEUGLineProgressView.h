//
//     Generated by private class-dump
//

@class CAGradientLayer, NSArray, UIColor, UIBezierPath;

@interface AWEUGLineProgressView : UIView {
    UIBezierPath *backGroundPath;
    NSArray *_gradientColors;
    NSArray *_gradientStart;
    NSArray *_gradientEnd;
    NSArray *_gradinetLocation;
    UIColor *_progressColor;
    CAGradientLayer *_gradientLayer;
    NSArray *_colorsArr;
    double _progressValue;
}

@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) NSArray *colorsArr;
@property (nonatomic) double progressValue;
@property (copy, nonatomic) NSArray *gradientColors;
@property (copy, nonatomic) NSArray *gradientStart;
@property (copy, nonatomic) NSArray *gradientEnd;
@property (copy, nonatomic) NSArray *gradinetLocation;
@property (retain, nonatomic) UIColor *progressColor;

- (void)updateProgressValue:(double)arg0 totalValue:(double)arg1 animated:(BOOL)arg2;
- (id)gradientStart;
- (void)setGradientStart:(id)arg0;
- (id)gradientEnd;
- (void)setGradientEnd:(id)arg0;
- (id)hexColorFromString:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })progressViewRect;
- (void)setColorsArr:(id)arg0;
- (id)colorsArr;
- (void)setGradinetLocation:(id)arg0;
- (id)gradinetLocation;
- (id)gradientLayer;
- (void).cxx_destruct;
- (void)setProgressValue:(double)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)gradientColors;
- (double)progressValue;
- (void)layoutSubviews;
- (void)setGradientColors:(id)arg0;
- (id)progressColor;
- (void)setProgressColor:(id)arg0;
- (void)setGradientLayer:(id)arg0;
- (void)setProgress:(double)arg0 animated:(BOOL)arg1;

@end
