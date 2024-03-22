//
//     Generated by private class-dump
//

@class UIColor, NSString, CAShapeLayer, UIBezierPath;

@interface AWEUGPendantProgressView : UIView <AWEUGPendantProgressProtocol> {
    CAShapeLayer *backGroundLayer;
    CAShapeLayer *frontFillLayer;
    UIBezierPath *backGroundBezierPath;
    UIBezierPath *frontFillBezierPath;
    unsigned long long status;
    UIColor *bgColor;
    UIColor *_progressBackgroundColor;
    UIColor *_progressColor;
    double _progressValue;
    double progressWidth;
    NSString *progressBGColorS;
    double cornerRadius;
    unsigned long long progressType;
}

@property (readonly, nonatomic) unsigned long long status;
@property (retain, nonatomic) UIColor *progressColor;
@property (retain, nonatomic) UIColor *progressBackgroundColor;
@property (nonatomic) double progressWidth;
@property (nonatomic) double progressValue;
@property (copy, nonatomic) NSString *progressBGColorS;
@property (nonatomic) double cornerRadius;
@property (nonatomic) unsigned long long progressType;
@property (retain, nonatomic) UIColor *bgColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performUpdateFromState:(unsigned long long)arg0 toState:(unsigned long long)arg1 animated:(BOOL)arg2;
- (id)progressBGColorS;
- (void)setProgressBGColorS:(id)arg0;
- (void).cxx_destruct;
- (unsigned long long)status;
- (double)cornerRadius;
- (void)setProgressValue:(double)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (double)progressValue;
- (void)layoutSubviews;
- (void)setCornerRadius:(double)arg0;
- (id)progressColor;
- (void)setProgressColor:(id)arg0;
- (id)progressBackgroundColor;
- (void)setProgressBackgroundColor:(id)arg0;
- (void)setupUI;
- (unsigned long long)progressType;
- (void)setProgressType:(unsigned long long)arg0;
- (void)updateProgress:(double)arg0;
- (id)bgColor;
- (void)setBgColor:(id)arg0;
- (double)progressWidth;
- (void)setProgressWidth:(double)arg0;

@end