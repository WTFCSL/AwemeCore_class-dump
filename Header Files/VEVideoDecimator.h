//
//     Generated by private class-dump
//

@interface VEVideoDecimator : NSObject {
    BOOL _enableTemporalDecimation;
    double _overShootModifier;
    unsigned long long _dropCount;
    unsigned long long _keepCount;
    double _targetFrameRate;
    double _incomingFrameRate;
    double _maxFrameRate;
}

@property (nonatomic) double overShootModifier;
@property (nonatomic) unsigned long long dropCount;
@property (nonatomic) unsigned long long keepCount;
@property (nonatomic) double targetFrameRate;
@property (nonatomic) double incomingFrameRate;
@property (nonatomic) double maxFrameRate;
@property (nonatomic) BOOL enableTemporalDecimation;

- (void)setInputFrameRate:(double)arg0;
- (unsigned long long)dropCount;
- (void)setDropCount:(unsigned long long)arg0;
- (double)incomingFrameRate;
- (void)setTargetFrameRate:(double)arg0;
- (BOOL)dropFrame;
- (void)setOverShootModifier:(double)arg0;
- (void)setKeepCount:(unsigned long long)arg0;
- (void)setIncomingFrameRate:(double)arg0;
- (void)setEnableTemporalDecimation:(BOOL)arg0;
- (double)targetFrameRate;
- (BOOL)enableTemporalDecimation;
- (double)overShootModifier;
- (unsigned long long)keepCount;
- (void)enableTemporalDecimation:(BOOL)arg0;
- (id)init;
- (void)setMaxFrameRate:(double)arg0;
- (void)reset;
- (double)maxFrameRate;

@end
