//
//     Generated by private class-dump
//

@class TTVideoEngineMetricBattery, NSMutableDictionary;

@interface TTVideoEngineBatteryMonitor : NSObject {
    BOOL _isStart;
    TTVideoEngineMetricBattery *_metricInfoBattery;
    NSMutableDictionary *_reportMetric;
}

@property (retain, nonatomic) TTVideoEngineMetricBattery *metricInfoBattery;
@property (nonatomic) BOOL isStart;
@property (retain, nonatomic) NSMutableDictionary *reportMetric;

- (void)addNotification;
- (void)removeNotification;
- (id)getDiagnoseReport;
- (void)setMetricInfoBattery:(id)arg0;
- (id)metricInfoBattery;
- (void)thermalChange;
- (void)batteryStateChange;
- (double)getCurCriticalTime;
- (double)getCurSeriousTime;
- (int)diagnoseThermal;
- (int)diagnoseBattery;
- (id)reportMetric;
- (void)setReportMetric:(id)arg0;
- (BOOL)isStart;
- (void).cxx_destruct;
- (void)stop;
- (void)setIsStart:(BOOL)arg0;
- (void)start;
- (void)dealloc;

@end
