//
//     Generated by private class-dump
//

@class UIColor, NSArray, CADisplayLink, CAShapeLayer;

@interface IESLiveAvatarRotatingCircleView : UIView {
    BOOL _animating;
    UIColor *_circleColor;
    NSArray *_dashPattern;
    double _angle;
    double _radian;
    double _arcPeriod;
    double _realArcPeriod;
    double _circlePeriod;
    CAShapeLayer *_dashCircle;
    CAShapeLayer *_solidArc;
    CADisplayLink *_displayLink;
    double _lastTimestamp;
    double _timeOffsetCircle;
    double _timeOffsetArc;
}

@property (nonatomic) double angle;
@property (nonatomic) double radian;
@property (nonatomic) double arcPeriod;
@property (nonatomic) double realArcPeriod;
@property (nonatomic) double circlePeriod;
@property (retain, nonatomic) CAShapeLayer *dashCircle;
@property (retain, nonatomic) CAShapeLayer *solidArc;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) double lastTimestamp;
@property (nonatomic) double timeOffsetCircle;
@property (nonatomic) double timeOffsetArc;
@property (nonatomic, getter=isAnimating) BOOL animating;
@property (retain, nonatomic) UIColor *circleColor;
@property (copy, nonatomic) NSArray *dashPattern;

- (void)setCircleColor:(id)arg0;
- (id)circleColor;
- (void)setRadian:(double)arg0;
- (double)radian;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 angle:(double)arg1 arcPeriod:(double)arg2 circlePeriod:(double)arg3;
- (double)radTime:(double)arg0;
- (id)dashCircle;
- (id)solidArc;
- (void)startOrStop:(BOOL)arg0;
- (double)arcPeriod;
- (void)setTimeOffsetArc:(double)arg0;
- (void)setTimeOffsetCircle:(double)arg0;
- (double)timeOffsetArc;
- (double)realArcPeriod;
- (double)timeOffsetCircle;
- (double)circlePeriod;
- (id)arcPath;
- (id)circlePath;
- (id)arcWithStartAngle:(double)arg0 endAngle:(double)arg1;
- (BOOL)isSamePointWithFirst:(double)arg0 second:(double)arg1;
- (void)setArcPeriod:(double)arg0;
- (void)setRealArcPeriod:(double)arg0;
- (void)setCirclePeriod:(double)arg0;
- (void)setDashCircle:(id)arg0;
- (void)setSolidArc:(id)arg0;
- (void)stopAnimating;
- (void)startAnimating;
- (BOOL)isAnimating;
- (void)handleDisplayLink:(id)arg0;
- (void)setDisplayLink:(id)arg0;
- (void).cxx_destruct;
- (void)setAnimating:(BOOL)arg0;
- (void)setLastTimestamp:(double)arg0;
- (double)lastTimestamp;
- (id)displayLink;
- (double)angle;
- (void)setAngle:(double)arg0;
- (double)normalize:(double)arg0;
- (id)dashPattern;
- (void)setDashPattern:(id)arg0;

@end
