//
//     Generated by private class-dump
//

@interface IESLivePerfLevelJudger : NSObject {
    unsigned long long _operator;
    long long _fps;
    long long _state;
    double _cpuFreqScale;
    double _duration;
    unsigned long long _level;
    unsigned long long _fpsJudgeState;
    double _fpsPendingTime;
    long long _totalPendingFps;
    long long _totalPendingFpsCount;
    unsigned long long _thermalJudgeState;
    double _thermalPendingTime;
    long long _totalThermalCount;
    long long _totalThermalHitCount;
    unsigned long long _cpuFreqJudgeState;
    double _cpuFreqPendingTime;
    long long _totalPendingCpuFreq;
    long long _totalPendingCpuFreqCount;
}

@property (readonly, nonatomic) unsigned long long operator;
@property (readonly, nonatomic) long long fps;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) double cpuFreqScale;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) unsigned long long level;
@property (nonatomic) unsigned long long fpsJudgeState;
@property (nonatomic) double fpsPendingTime;
@property (nonatomic) long long totalPendingFps;
@property (nonatomic) long long totalPendingFpsCount;
@property (nonatomic) unsigned long long thermalJudgeState;
@property (nonatomic) double thermalPendingTime;
@property (nonatomic) long long totalThermalCount;
@property (nonatomic) long long totalThermalHitCount;
@property (nonatomic) unsigned long long cpuFreqJudgeState;
@property (nonatomic) double cpuFreqPendingTime;
@property (nonatomic) long long totalPendingCpuFreq;
@property (nonatomic) long long totalPendingCpuFreqCount;

- (double)cpuFreqScale;
- (unsigned long long)fpsJudgeState;
- (void)setFpsJudgeState:(unsigned long long)arg0;
- (void)setFpsPendingTime:(double)arg0;
- (long long)totalPendingFps;
- (void)setTotalPendingFps:(long long)arg0;
- (long long)totalPendingFpsCount;
- (void)setTotalPendingFpsCount:(long long)arg0;
- (double)fpsPendingTime;
- (unsigned long long)thermalJudgeState;
- (void)setThermalJudgeState:(unsigned long long)arg0;
- (void)setThermalPendingTime:(double)arg0;
- (long long)totalThermalCount;
- (void)setTotalThermalCount:(long long)arg0;
- (long long)totalThermalHitCount;
- (void)setTotalThermalHitCount:(long long)arg0;
- (double)thermalPendingTime;
- (unsigned long long)cpuFreqJudgeState;
- (void)setCpuFreqJudgeState:(unsigned long long)arg0;
- (void)setCpuFreqPendingTime:(double)arg0;
- (void)setTotalPendingCpuFreq:(long long)arg0;
- (void)setTotalPendingCpuFreqCount:(long long)arg0;
- (long long)totalPendingCpuFreq;
- (long long)totalPendingCpuFreqCount;
- (double)cpuFreqPendingTime;
- (id)initWithInfo:(id)arg0 level:(unsigned long long)arg1 lint:(BOOL)arg2;
- (void)judgeFps:(long long)arg0;
- (void)judgeThermalState:(long long)arg0;
- (void)judgeCpuFreqScale:(double)arg0;
- (unsigned long long)currentJudgeState;
- (BOOL)validate;
- (unsigned long long)operator;
- (unsigned long long)level;
- (long long)state;
- (double)duration;
- (long long)fps;
- (void)reset;

@end
