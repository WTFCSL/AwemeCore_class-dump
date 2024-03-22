//
//     Generated by private class-dump
//

@interface HMDUITrackerConfig : HMDModuleConfig {
    BOOL _ISASwizzleOptimization;
    long long _flushCount;
    double _flushInterval;
    long long _maxUploadCount;
    unsigned long long _recentAccessScenesLimit;
}

@property (nonatomic) long long flushCount;
@property (nonatomic) double flushInterval;
@property (nonatomic) long long maxUploadCount;
@property (nonatomic) unsigned long long recentAccessScenesLimit;
@property (nonatomic) BOOL ISASwizzleOptimization;

+ (id)hmd_attributeMapDictionary;
+ (id)configKey;

- (id)getModule;
- (void)setFlushInterval:(double)arg0;
- (long long)flushCount;
- (void)setFlushCount:(long long)arg0;
- (void)setMaxUploadCount:(long long)arg0;
- (long long)maxUploadCount;
- (unsigned long long)recentAccessScenesLimit;
- (void)setRecentAccessScenesLimit:(unsigned long long)arg0;
- (BOOL)ISASwizzleOptimization;
- (void)setISASwizzleOptimization:(BOOL)arg0;
- (double)flushInterval;

@end
