//
//     Generated by private class-dump
//

@class NSDictionary, NSMutableDictionary;

@interface IESLiveThreadInfoSampling : NSObject {
    float _cpuusage;
    long long _topbasic;
    NSDictionary *_backtrace;
    NSMutableDictionary *_threadSamplingInfo;
    unsigned long long _mainthreadid;
}

@property (retain, nonatomic) NSMutableDictionary *threadSamplingInfo;
@property (nonatomic) float cpuusage;
@property (nonatomic) unsigned long long mainthreadid;
@property (nonatomic) long long topbasic;
@property (retain, nonatomic) NSDictionary *backtrace;

- (void)setTopbasic:(long long)arg0;
- (id)cpuUsageWithThreadName;
- (void)setThreadSamplingInfo:(id)arg0;
- (void)setMainthreadid:(unsigned long long)arg0;
- (void)samplingThreadInfoWithName:(BOOL)arg0;
- (float)cpuusage;
- (id)threadSamplingInfo;
- (void)setCpuusage:(float)arg0;
- (void)samplingHeaviest:(unsigned int)arg0 usage:(float)arg1 threadid:(unsigned long long)arg2;
- (long long)topbasic;
- (void)samplingSpecifyBackTrace:(unsigned int)arg0;
- (unsigned long long)mainthreadid;
- (float)userCPUUsage;
- (id)init;
- (id)backtrace;
- (void)setBacktrace:(id)arg0;

@end