//
//     Generated by private class-dump
//

@class NSArray;

@interface HMDWatchdogProtectConfig : HMDTrackerConfig {
    double _timeoutInterval;
    double _launchThreshold;
    NSArray *_typeList;
    NSArray *_dynamicProtect;
    NSArray *_dynamicProtectAnyThread;
}

@property (nonatomic) double timeoutInterval;
@property (nonatomic) double launchThreshold;
@property (retain, nonatomic) NSArray *typeList;
@property (retain, nonatomic) NSArray *dynamicProtect;
@property (retain, nonatomic) NSArray *dynamicProtectAnyThread;

+ (id)hmd_attributeMapDictionary;
+ (id)configKey;

- (double)launchThreshold;
- (id)getModule;
- (void)setLaunchThreshold:(double)arg0;
- (id)typeList;
- (void)setTypeList:(id)arg0;
- (id)dynamicProtect;
- (void)setDynamicProtect:(id)arg0;
- (id)dynamicProtectAnyThread;
- (void)setDynamicProtectAnyThread:(id)arg0;
- (void)setTimeoutInterval:(double)arg0;
- (void).cxx_destruct;
- (double)timeoutInterval;

@end