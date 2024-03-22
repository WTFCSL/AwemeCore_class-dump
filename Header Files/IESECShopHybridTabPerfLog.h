//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface IESECShopHybridTabPerfLog : NSObject {
    double _tabInitTime;
    double _selectionStartTime;
    double _selectionEndTime;
    NSMutableArray *_cpuMetrics;
    NSMutableArray *_fpsMetrics;
    long long _jsbCount;
    NSMutableArray *_JSBIntercept;
}

@property (retain, nonatomic) NSMutableArray *cpuMetrics;
@property (retain, nonatomic) NSMutableArray *fpsMetrics;
@property (nonatomic) long long jsbCount;
@property (retain, nonatomic) NSMutableArray *JSBIntercept;
@property (nonatomic) double tabInitTime;
@property (nonatomic) double selectionStartTime;
@property (nonatomic) double selectionEndTime;

- (id)fpsMetrics;
- (long long)jsbCount;
- (void)setJsbCount:(long long)arg0;
- (id)JSBIntercept;
- (double)getAvg:(id)arg0;
- (double)getTotal:(id)arg0;
- (void)addPreviewPerf:(double)arg0 cpuUsage:(double)arg1;
- (void)addPreviewJSBInvoke:(id)arg0 params:(id)arg1 intercepted:(BOOL)arg2 limitParamKey:(id)arg3 limitParamValue:(id)arg4;
- (id)previewCPUMetrics;
- (id)previewFPSMetrics;
- (id)previewJSBMetrics;
- (double)tabInitTime;
- (void)setTabInitTime:(double)arg0;
- (double)selectionStartTime;
- (void)setSelectionStartTime:(double)arg0;
- (double)selectionEndTime;
- (void)setSelectionEndTime:(double)arg0;
- (void)setFpsMetrics:(id)arg0;
- (void)setJSBIntercept:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (double)getMedian:(id)arg0;
- (void)setCpuMetrics:(id)arg0;
- (id)cpuMetrics;

@end