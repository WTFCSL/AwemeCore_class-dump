//
//     Generated by private class-dump
//

@class CAGradientLayer, UIColor, NSArray, UIView, CABasicAnimation;

@interface AWEGradientProgressView : UIView {
    UIColor *_backgroundProgressColor;
    NSArray *_colorArr;
    UIView *_backView;
    CAGradientLayer *_gradientLayer;
    CABasicAnimation *_basicAnimation;
    double _currentProgress;
}

@property (retain, nonatomic) UIView *backView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) CABasicAnimation *basicAnimation;
@property (nonatomic) double currentProgress;
@property (retain, nonatomic) UIColor *backgroundProgressColor;
@property (retain, nonatomic) NSArray *colorArr;

- (void)updateProgress:(double)arg0 withTime:(long long)arg1;
- (void)setBackgroundProgressColor:(id)arg0;
- (void)setColorArr:(id)arg0;
- (id)basicAnimation;
- (id)colorArr;
- (id)backgroundProgressColor;
- (void)setBasicAnimation:(id)arg0;
- (void)setBackView:(id)arg0;
- (id)gradientLayer;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)backView;
- (double)currentProgress;
- (void)setGradientLayer:(id)arg0;
- (void)setupView;
- (void)setCurrentProgress:(double)arg0;

@end