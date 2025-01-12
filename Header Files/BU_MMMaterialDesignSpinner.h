//
//     Generated by private class-dump
//

@class CAMediaTimingFunction, CAShapeLayer;

@interface BU_MMMaterialDesignSpinner : UIView {
    BOOL _hidesWhenStopped;
    BOOL _isAnimating;
    CAShapeLayer *_progressLayer;
    CAMediaTimingFunction *_timingFunction;
    double _duration;
}

@property (readonly, nonatomic) CAShapeLayer *progressLayer;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) double lineWidth;
@property (nonatomic) BOOL hidesWhenStopped;
@property (retain, nonatomic) CAMediaTimingFunction *timingFunction;
@property (nonatomic) double duration;

- (void)resetAnimations;
- (void)stopAnimating;
- (void)startAnimating;
- (BOOL)isAnimating;
- (void)initialize;
- (void).cxx_destruct;
- (void)setTimingFunction:(id)arg0;
- (void)tintColorDidChange;
- (double)lineWidth;
- (void)setAnimating:(BOOL)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)timingFunction;
- (double)duration;
- (void)setLineWidth:(double)arg0;
- (id)initWithCoder:(id)arg0;
- (void)awakeFromNib;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setIsAnimating:(BOOL)arg0;
- (void)setDuration:(double)arg0;
- (void)setHidesWhenStopped:(BOOL)arg0;
- (BOOL)hidesWhenStopped;
- (void)updatePath;
- (id)progressLayer;

@end
