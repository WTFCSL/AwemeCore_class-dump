//
//     Generated by private class-dump
//

@class NSString, IESLiveGCDTimer, NSNumber, NSMutableArray;

@interface IESLivePrefSampleUtils : NSObject <IESLivePrefSampleUtilsService> {
    unsigned int _mainThread;
    struct IESLivePrefSampleUtilsConfig { long long x0; long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8; BOOL x9; BOOL x10; BOOL x11; } *_utilsConfig;
    NSNumber *_cpu_frequency;
    double _cpu_frequency_sample_time;
    NSNumber *_gpu_usage;
    double _gpu_usage_sample_time;
    NSMutableArray *_cpuInfos;
    NSMutableArray *_noStreamInfo;
    NSMutableArray *_memeryInfo;
    IESLiveGCDTimer *_memoryTimer;
    long long _currentThreadCount;
}

@property (nonatomic) struct IESLivePrefSampleUtilsConfig { long long x0; long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8; BOOL x9; BOOL x10; BOOL x11; } *utilsConfig;
@property (nonatomic) unsigned int mainThread;
@property (copy, nonatomic) NSNumber *cpu_frequency;
@property (nonatomic) double cpu_frequency_sample_time;
@property (copy, nonatomic) NSNumber *gpu_usage;
@property (nonatomic) double gpu_usage_sample_time;
@property (retain, nonatomic) NSMutableArray *cpuInfos;
@property (retain, nonatomic) NSMutableArray *noStreamInfo;
@property (retain, nonatomic) NSMutableArray *memeryInfo;
@property (retain, nonatomic) IESLiveGCDTimer *memoryTimer;
@property long long currentThreadCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstanced;

- (void)setMainThread:(unsigned int)arg0;
- (float)mainThreadCpuInfo;
- (id)getCPUFrequency;
- (id)getGpuUsageWithError:(id *)arg0;
- (void)collectPrefSampleCpuInfo:(id)arg0;
- (void)collectNoStreamInfo;
- (long long)getStreamPredictType;
- (void)resetNoStreamInfo;
- (unsigned long long)getLatestAvailabelMemoryWithDuration:(long long)arg0;
- (void)setCpuInfos:(id)arg0;
- (void)setMemeryInfo:(id)arg0;
- (void)setUtilsConfig:(struct IESLivePrefSampleUtilsConfig { long long x0; long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8; BOOL x9; BOOL x10; BOOL x11; } *)arg0;
- (struct IESLivePrefSampleUtilsConfig { long long x0; long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8; BOOL x9; BOOL x10; BOOL x11; } *)utilsConfig;
- (id)memeryInfo;
- (void)setMemoryTimer:(id)arg0;
- (id)cpu_frequency;
- (double)cpu_frequency_sample_time;
- (id)gpu_usage;
- (double)gpu_usage_sample_time;
- (id)cpuInfos;
- (BOOL)cpuFrequencyCacheAvaliable;
- (BOOL)cpuOverLoad;
- (void)setCpu_frequency_sample_time:(double)arg0;
- (void)setCpu_frequency:(id)arg0;
- (BOOL)gpuUsageCacheAvaliable;
- (void)setGpu_usage_sample_time:(double)arg0;
- (void)setGpu_usage:(id)arg0;
- (void)setCurrentThreadCount:(long long)arg0;
- (id)noStreamInfo;
- (long long)currentThreadCount;
- (void)setNoStreamInfo:(id)arg0;
- (id)memoryTimer;
- (void).cxx_destruct;
- (long long)threadCount;
- (void)dealloc;
- (void)setUp;
- (unsigned int)mainThread;

@end