//
//     Generated by private class-dump
//

@interface HMDCPUFreqInfo : NSObject {
    float _cpuFreqScale;
    long long _cpuFreqCurrent;
    long long _timeUsage;
    long long _cpuFreqStandard;
}

@property (nonatomic) long long cpuFreqCurrent;
@property (nonatomic) long long timeUsage;
@property (nonatomic) long long cpuFreqStandard;
@property (nonatomic) float cpuFreqScale;

- (long long)cpuFreqCurrent;
- (void)setCpuFreqCurrent:(long long)arg0;
- (long long)cpuFreqStandard;
- (void)setCpuFreqStandard:(long long)arg0;
- (float)cpuFreqScale;
- (void)setCpuFreqScale:(float)arg0;
- (long long)timeUsage;
- (void)setTimeUsage:(long long)arg0;

@end
