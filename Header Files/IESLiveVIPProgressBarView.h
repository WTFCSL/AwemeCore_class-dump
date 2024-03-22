//
//     Generated by private class-dump
//

@class UIColor, CAGradientLayer, UIView;

@interface IESLiveVIPProgressBarView : UIView {
    double _progress;
    UIColor *_progressColor;
    UIColor *_progerssBackgroundColor;
    UIColor *_progerssStokeBackgroundColor;
    double _progerStokeWidth;
    double _borderRadius;
    UIView *_borderView;
    CAGradientLayer *_gradient;
}

@property (retain, nonatomic) UIView *borderView;
@property (retain, nonatomic) CAGradientLayer *gradient;
@property (nonatomic) double progress;
@property (retain, nonatomic) UIColor *progressColor;
@property (retain, nonatomic) UIColor *progerssBackgroundColor;
@property (retain, nonatomic) UIColor *progerssStokeBackgroundColor;
@property (nonatomic) double progerStokeWidth;
@property (nonatomic) double borderRadius;

- (void)setProgerssColor:(id)arg0;
- (void)setProgerssBackgroundColor:(id)arg0;
- (id)progerssBackgroundColor;
- (void)setProgerssStokeBackgroundColor:(id)arg0;
- (void)setProgerStokeWidth:(double)arg0;
- (double)progerStokeWidth;
- (id)progerssStokeBackgroundColor;
- (void)setGradient:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)gradient;
- (double)progress;
- (void)setProgress:(double)arg0;
- (id)progressColor;
- (void)setProgressColor:(id)arg0;
- (void)setupUI;
- (id)borderView;
- (void)setBorderView:(id)arg0;
- (double)borderRadius;
- (void)setBorderRadius:(double)arg0;

@end
