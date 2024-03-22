//
//     Generated by private class-dump
//

@class CAMediaTimingFunction;

@interface IESLIveDFSpringAnimationContext : IESLiveDFAnimationContext {
    BOOL _bounce;
    id _fromValue;
    id _toValue;
    long long _repeatCount;
    CAMediaTimingFunction *_timingFunction;
    double _damping;
    double _velocity;
}

@property (retain, nonatomic) id fromValue;
@property (retain, nonatomic) id toValue;
@property (nonatomic) long long repeatCount;
@property (retain) CAMediaTimingFunction *timingFunction;
@property (nonatomic) BOOL bounce;
@property (nonatomic) double damping;
@property (nonatomic) double velocity;

- (double)velocity;
- (long long)repeatCount;
- (void)setRepeatCount:(long long)arg0;
- (void).cxx_destruct;
- (void)setTimingFunction:(id)arg0;
- (void)setVelocity:(double)arg0;
- (void)setDamping:(double)arg0;
- (double)damping;
- (id)timingFunction;
- (BOOL)bounce;
- (id)fromValue;
- (void)setFromValue:(id)arg0;
- (id)toValue;
- (void)setToValue:(id)arg0;
- (void)setBounce:(BOOL)arg0;

@end
