//
//     Generated by private class-dump
//

@interface PuzzleDeviceStatsInfo : NSObject {
    double _cpuUsage;
    double _memoryRest;
    double _temperature;
}

@property (nonatomic) double cpuUsage;
@property (nonatomic) double memoryRest;
@property (nonatomic) double temperature;

- (double)memoryRest;
- (void)setMemoryRest:(double)arg0;
- (void)setTemperature:(double)arg0;
- (double)temperature;
- (void)setCpuUsage:(double)arg0;
- (double)cpuUsage;

@end
