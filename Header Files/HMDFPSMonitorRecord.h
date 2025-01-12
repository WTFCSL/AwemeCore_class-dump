//
//     Generated by private class-dump
//

@class NSDictionary;

@interface HMDFPSMonitorRecord : HMDMonitorRecord {
    BOOL _sceneInSwitch;
    BOOL _isScrolling;
    BOOL _isLowPowerMode;
    double _fps;
    NSDictionary *_fpsExtralValue;
    unsigned long long _refreshRate;
}

@property (nonatomic) double fps;
@property (nonatomic) BOOL sceneInSwitch;
@property (nonatomic) BOOL isScrolling;
@property (nonatomic) BOOL isLowPowerMode;
@property (retain, nonatomic) NSDictionary *fpsExtralValue;
@property (nonatomic) unsigned long long refreshRate;

+ (id)aggregateDataWithRecords:(id)arg0;
+ (unsigned long long)cleanupWeight;

- (void)setSceneInSwitch:(BOOL)arg0;
- (void)setIsLowPowerMode:(BOOL)arg0;
- (void)setFpsExtralValue:(id)arg0;
- (id)fpsExtralValue;
- (BOOL)sceneInSwitch;
- (void)setIsScrolling:(BOOL)arg0;
- (unsigned long long)refreshRate;
- (void).cxx_destruct;
- (double)value;
- (BOOL)isScrolling;
- (double)fps;
- (void)setRefreshRate:(unsigned long long)arg0;
- (void)setFps:(double)arg0;
- (BOOL)isLowPowerMode;
- (id)reportDictionary;

@end
