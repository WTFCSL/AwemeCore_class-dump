//
//     Generated by private class-dump
//

@class IESLiveGameOpenPlatformDebugPerfTestModel;

@interface IESLiveGameOpenPlatformDebugPerfMonitorViewModel : NSObject {
    int _collectCount;
    int _collectPeriod;
    int _refreshCount;
    int _refreshPeriod;
    int _appRealFpsSum;
    double _startInterval;
    double _lowRealFpsCount;
    double _cpuUsageSum;
    double _gpuUsageSum;
    double _memoryUsageSum;
    double _stutterSum;
    long long _thermalStateMax;
    double _stutterDurationPerPeriod;
    IESLiveGameOpenPlatformDebugPerfTestModel *_testModel;
}

@property (nonatomic) int collectCount;
@property (nonatomic) int collectPeriod;
@property (nonatomic) int refreshCount;
@property (nonatomic) int refreshPeriod;
@property (nonatomic) double lowRealFpsCount;
@property (nonatomic) double cpuUsageSum;
@property (nonatomic) double gpuUsageSum;
@property (nonatomic) double memoryUsageSum;
@property (nonatomic) double stutterSum;
@property (nonatomic) int appRealFpsSum;
@property (nonatomic) long long thermalStateMax;
@property (nonatomic) double stutterDurationPerPeriod;
@property (retain, nonatomic) IESLiveGameOpenPlatformDebugPerfTestModel *testModel;
@property (nonatomic) double startInterval;

- (int)collectCount;
- (void)setCollectCount:(int)arg0;
- (void)setStartInterval:(double)arg0;
- (double)startInterval;
- (void)updateWithRawData:(id)arg0 callback:(id /* block */)arg1;
- (id)uploadTestModel;
- (double)stutterDurationPerPeriod;
- (void)setStutterDurationPerPeriod:(double)arg0;
- (long long)thermalStateMax;
- (void)setThermalStateMax:(long long)arg0;
- (id)testModel;
- (double)lowRealFpsCount;
- (void)setLowRealFpsCount:(double)arg0;
- (double)cpuUsageSum;
- (void)setCpuUsageSum:(double)arg0;
- (double)gpuUsageSum;
- (void)setGpuUsageSum:(double)arg0;
- (double)memoryUsageSum;
- (void)setMemoryUsageSum:(double)arg0;
- (double)stutterSum;
- (void)setStutterSum:(double)arg0;
- (int)appRealFpsSum;
- (void)setAppRealFpsSum:(int)arg0;
- (int)collectPeriod;
- (void)setTestModel:(id)arg0;
- (void)setCollectPeriod:(int)arg0;
- (id)init;
- (void).cxx_destruct;
- (int)refreshPeriod;
- (void)setRefreshPeriod:(int)arg0;
- (int)refreshCount;
- (void)setRefreshCount:(int)arg0;

@end