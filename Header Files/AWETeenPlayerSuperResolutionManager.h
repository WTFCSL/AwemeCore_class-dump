//
//     Generated by private class-dump
//

@class NSArray;

@interface AWETeenPlayerSuperResolutionManager : NSObject {
    BOOL _enableSuperResolution;
    long long _minFpsThreshold;
    long long _minBatteryThreshold;
    long long _percentFor540;
    NSArray *_enableDevices;
    long long _superResolutionCount;
    long long _unSuperResolutionCount;
}

@property (nonatomic) BOOL enableSuperResolution;
@property (nonatomic) long long minFpsThreshold;
@property (nonatomic) long long minBatteryThreshold;
@property (nonatomic) long long percentFor540;
@property (retain, nonatomic) NSArray *enableDevices;
@property (nonatomic) long long superResolutionCount;
@property (nonatomic) long long unSuperResolutionCount;

+ (id)sharedInstance;

- (void)setEnableSuperResolution:(BOOL)arg0;
- (BOOL)enableSuperResolution;
- (void)configSuperResolutionWithVC:(id)arg0;
- (void)setMinFpsThreshold:(long long)arg0;
- (void)setMinBatteryThreshold:(long long)arg0;
- (void)setPercentFor540:(long long)arg0;
- (void)setEnableDevices:(id)arg0;
- (long long)minFpsThreshold;
- (long long)minBatteryThreshold;
- (long long)percentFor540;
- (id)enableDevices;
- (BOOL)isAvailabeDevice:(id)arg0;
- (BOOL)isDashWithModel:(id)arg0;
- (BOOL)isDynamicLinkWithVC:(id)arg0;
- (BOOL)check540PWithVC:(id)arg0;
- (BOOL)checkPercentWithVC:(id)arg0;
- (long long)superResolutionCount;
- (void)setSuperResolutionCount:(long long)arg0;
- (long long)unSuperResolutionCount;
- (void)setUnSuperResolutionCount:(long long)arg0;
- (BOOL)isLowBattery;
- (id)init;
- (void).cxx_destruct;
- (void)setupData;

@end
