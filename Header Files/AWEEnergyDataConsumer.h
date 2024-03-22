//
//     Generated by private class-dump
//

@class NSDictionary, NSMutableDictionary;

@interface AWEEnergyDataConsumer : NSObject {
    double _launchCPU;
    double _periodCPUSum;
    long long _periodCPUCount;
    double _periodGPUSum;
    long long _periodGPUCount;
    double _lastEnergyConsumeAvgTime;
    double _energyConsumeSumTime;
    double _energyConsumeCount;
    NSDictionary *_lastGPUDistributionMap;
    NSMutableDictionary *_GPUDistributionMap;
}

@property (nonatomic) double launchCPU;
@property (nonatomic) double periodCPUSum;
@property (nonatomic) long long periodCPUCount;
@property (nonatomic) double periodGPUSum;
@property (nonatomic) long long periodGPUCount;
@property (nonatomic) double lastEnergyConsumeAvgTime;
@property (nonatomic) double energyConsumeSumTime;
@property (nonatomic) double energyConsumeCount;
@property (retain, nonatomic) NSDictionary *lastGPUDistributionMap;
@property (retain, nonatomic) NSMutableDictionary *GPUDistributionMap;

+ (id)shared;

- (void)clearPeriodXPUData;
- (double)getPeriodCPUAverageData;
- (double)getPeriodGPUAverageData;
- (void)receiveNewEnergyConsumeTimeData:(double)arg0;
- (void)judgeCPUBackToNormal:(double)arg0 processorCount:(unsigned long long)arg1;
- (void)recordAverageData:(double)arg0 gpu:(double)arg1;
- (void)recordLifeCycleAverageData:(double)arg0 gpu:(double)arg1;
- (double)energyConsumeSumTime;
- (void)setEnergyConsumeSumTime:(double)arg0;
- (double)energyConsumeCount;
- (void)setEnergyConsumeCount:(double)arg0;
- (double)launchCPU;
- (void)setLaunchCPU:(double)arg0;
- (void)notifyCPUDidFallback;
- (double)periodCPUSum;
- (void)setPeriodCPUSum:(double)arg0;
- (long long)periodCPUCount;
- (void)setPeriodCPUCount:(long long)arg0;
- (double)periodGPUSum;
- (void)setPeriodGPUSum:(double)arg0;
- (long long)periodGPUCount;
- (void)setPeriodGPUCount:(long long)arg0;
- (id)GPUDistributionMap;
- (double)lastEnergyConsumeAvgTime;
- (id)lastGPUDistributionMap;
- (void)receiveNewXPUData:(double)arg0 gpu:(double)arg1 processorCount:(unsigned long long)arg2;
- (double)getLastConsumeTimeData;
- (id)getLifeCycleGPUMapData;
- (void)setLastEnergyConsumeAvgTime:(double)arg0;
- (void)setLastGPUDistributionMap:(id)arg0;
- (void)setGPUDistributionMap:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end