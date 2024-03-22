//
//     Generated by private class-dump
//

@class NSArray;
@protocol BDUGLuckyIosShakeConfig;

@interface BDUGLuckyIosConfig : BDUGLuckyJSONModel {
    BOOL _forceOpenWifi;
    double _oneDetectingTime;
    double _accelerometerUpdateInterval;
    NSArray<BDUGLuckyIosShakeConfig> *_shakeConfig;
}

@property (nonatomic) double oneDetectingTime;
@property (nonatomic) double accelerometerUpdateInterval;
@property (nonatomic) BOOL forceOpenWifi;
@property (copy, nonatomic) NSArray<BDUGLuckyIosShakeConfig> *shakeConfig;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (id)shakeConfig;
- (double)oneDetectingTime;
- (void)setOneDetectingTime:(double)arg0;
- (BOOL)forceOpenWifi;
- (void)setForceOpenWifi:(BOOL)arg0;
- (void)setShakeConfig:(id)arg0;
- (void).cxx_destruct;
- (double)accelerometerUpdateInterval;
- (void)setAccelerometerUpdateInterval:(double)arg0;

@end