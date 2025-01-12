//
//     Generated by private class-dump
//

@class TTVideoEngineMetricDisk, TTVideoEngineMetricGPU, TTVideoEngineMetricFlow, TTVideoEngineMetricCPU, TTVideoEngineMetricMemory;

@interface TTVideoEngineMetricInfo : NSObject {
    TTVideoEngineMetricCPU *_metricInfoCPU;
    TTVideoEngineMetricMemory *_metricInfoMemory;
    TTVideoEngineMetricFlow *_metricInfoFlow;
    TTVideoEngineMetricGPU *_metricInfoGPU;
    TTVideoEngineMetricDisk *_metricInfoDisk;
}

@property (retain, nonatomic) TTVideoEngineMetricCPU *metricInfoCPU;
@property (retain, nonatomic) TTVideoEngineMetricMemory *metricInfoMemory;
@property (retain, nonatomic) TTVideoEngineMetricFlow *metricInfoFlow;
@property (retain, nonatomic) TTVideoEngineMetricGPU *metricInfoGPU;
@property (retain, nonatomic) TTVideoEngineMetricDisk *metricInfoDisk;

- (id)metricInfoCPU;
- (void)setMetricInfoCPU:(id)arg0;
- (id)metricInfoMemory;
- (void)setMetricInfoMemory:(id)arg0;
- (id)metricInfoFlow;
- (void)setMetricInfoFlow:(id)arg0;
- (id)metricInfoGPU;
- (void)setMetricInfoGPU:(id)arg0;
- (id)metricInfoDisk;
- (void)setMetricInfoDisk:(id)arg0;
- (void).cxx_destruct;

@end
