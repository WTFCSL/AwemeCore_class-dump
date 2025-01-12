//
//     Generated by private class-dump
//

@class CMMotionManager;

@interface CSJTwistMotionManager : NSObject {
    CMMotionManager *_motionManager;
    long long _methodType;
    double _updateInterval;
    double _angularSensitivity;
    double _accelerationSensitivity;
    double _resetWhenOverflow;
    double _deltaAngleX;
    double _deltaAngleY;
    double _deltaAngleZ;
}

@property (retain, nonatomic) CMMotionManager *motionManager;
@property (nonatomic) long long methodType;
@property (nonatomic) double updateInterval;
@property (nonatomic) double angularSensitivity;
@property (nonatomic) double accelerationSensitivity;
@property (nonatomic) double resetWhenOverflow;
@property (nonatomic) double deltaAngleX;
@property (nonatomic) double deltaAngleY;
@property (nonatomic) double deltaAngleZ;

- (BOOL)motionManagerAvailable;
- (BOOL)startObserverWithThreshold:(long long)arg0 methodType:(long long)arg1 updateInterval:(double)arg2 repeat:(BOOL)arg3 updatesWithHandler:(id /* block */)arg4;
- (void)setMethodType:(long long)arg0;
- (void)p_gyroMethodWithThreshold:(long long)arg0 repeat:(BOOL)arg1 handler:(id /* block */)arg2;
- (void)p_lanJunMethodWithThreshold:(long long)arg0 repeat:(BOOL)arg1 handler:(id /* block */)arg2;
- (void)p_douYinMethodWithThreshold:(long long)arg0 repeat:(BOOL)arg1 handler:(id /* block */)arg2;
- (long long)methodType;
- (void)setDeltaAngleX:(double)arg0;
- (void)setDeltaAngleY:(double)arg0;
- (void)setDeltaAngleZ:(double)arg0;
- (double)deltaAngleX;
- (double)deltaAngleY;
- (double)deltaAngleZ;
- (BOOL)p_isAchieveAngleWithAngleX:(double)arg0 angleY:(double)arg1 angleZ:(double)arg2 threshold:(double)arg3;
- (double)angularSensitivity;
- (double)accelerationSensitivity;
- (double)resetWhenOverflow;
- (void)setAngularSensitivity:(double)arg0;
- (void)setAccelerationSensitivity:(double)arg0;
- (void)setResetWhenOverflow:(double)arg0;
- (void)setUpdateInterval:(double)arg0;
- (id)init;
- (double)updateInterval;
- (void).cxx_destruct;
- (void)stopMotionUpdates;
- (id)motionManager;
- (void)setMotionManager:(id)arg0;

@end
