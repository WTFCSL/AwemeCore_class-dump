//
//     Generated by private class-dump
//

@interface HMDCPUMonitorConfig : HMDMonitorConfig {
    BOOL _enableThreadCPU;
}

@property (nonatomic) BOOL enableThreadCPU;

+ (id)hmd_attributeMapDictionary;
+ (void)awe_energy_optimize_hook;
+ (id)configKey;

- (BOOL)canStart;
- (id)getModule;
- (BOOL)enableThreadCPU;
- (void)setEnableThreadCPU:(BOOL)arg0;
- (BOOL)awe_energy_optimize_canStart;

@end
