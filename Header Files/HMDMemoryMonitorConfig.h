//
//     Generated by private class-dump
//

@interface HMDMemoryMonitorConfig : HMDMonitorConfig {
    BOOL _enableNotify;
    unsigned long long _notifyMinInterval;
    double _highWaterPercentage;
}

@property (nonatomic) BOOL enableNotify;
@property (nonatomic) unsigned long long notifyMinInterval;
@property (nonatomic) double highWaterPercentage;

+ (id)hmd_attributeMapDictionary;
+ (void)awe_energy_optimize_hook;
+ (id)configKey;

- (BOOL)canStart;
- (id)getModule;
- (BOOL)enableNotify;
- (void)setEnableNotify:(BOOL)arg0;
- (unsigned long long)notifyMinInterval;
- (void)setNotifyMinInterval:(unsigned long long)arg0;
- (double)highWaterPercentage;
- (void)setHighWaterPercentage:(double)arg0;
- (BOOL)awe_energy_optimize_canStart;

@end