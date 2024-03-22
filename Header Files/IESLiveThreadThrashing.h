//
//     Generated by private class-dump
//

@class NSString, NSDateFormatter, NSTimer, NSDictionary, IESLiveThreadInfoSampling, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface IESLiveThreadThrashing : NSObject <IESLiveStabilityThrashing> {
    float _sumUsage;
    long long metricsStrategy;
    long long _preCPUUsage;
    NSTimer *_watchtimer;
    NSDictionary *_threadInfo;
    NSDateFormatter *_dateFormatter;
    IESLiveThreadInfoSampling *_threadSampling;
    NSDictionary *_thresholdDictionary;
    NSMutableDictionary *_heaviestsampling;
    NSMutableDictionary *_laodavgSampling;
    NSObject<OS_dispatch_queue> *_samplingQueue;
    long long _thresholdCount;
    long long _thresholdUsage;
    long long _thresholdThrashing;
    long long _triggerCount;
    double _startBackgroundInterval;
}

@property (nonatomic) long long preCPUUsage;
@property (retain, nonatomic) NSTimer *watchtimer;
@property (retain, nonatomic) NSDictionary *threadInfo;
@property (retain, nonatomic) NSDateFormatter *dateFormatter;
@property (retain, nonatomic) IESLiveThreadInfoSampling *threadSampling;
@property (retain, nonatomic) NSDictionary *thresholdDictionary;
@property (retain, nonatomic) NSMutableDictionary *heaviestsampling;
@property (retain, nonatomic) NSMutableDictionary *laodavgSampling;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *samplingQueue;
@property (nonatomic) long long thresholdCount;
@property (nonatomic) long long thresholdUsage;
@property (nonatomic) long long thresholdThrashing;
@property (nonatomic) long long triggerCount;
@property (nonatomic) float sumUsage;
@property (nonatomic) double startBackgroundInterval;
@property (nonatomic) long long metricsStrategy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)thrashing;

- (long long)metricsStrategy;
- (void)setMetricsStrategy:(long long)arg0;
- (void)samplingWithPrologue:(id /* block */)arg0 sampling:(id /* block */)arg1 epilog:(id /* block */)arg2;
- (id)configrue;
- (void)setSamplingQueue:(id)arg0;
- (id)samplingQueue;
- (void)setWatchtimer:(id)arg0;
- (id)watchtimer;
- (void)loadSetting;
- (void)initThreadSampling;
- (void)initAppNotification;
- (void)setSumUsage:(float)arg0;
- (void)setThresholdDictionary:(id)arg0;
- (id)thresholdDictionary;
- (void)setThresholdCount:(long long)arg0;
- (void)setThresholdUsage:(long long)arg0;
- (void)setThresholdThrashing:(long long)arg0;
- (void)setThreadSampling:(id)arg0;
- (id)threadSampling;
- (void)setLaodavgSampling:(id)arg0;
- (void)setHeaviestsampling:(id)arg0;
- (void)setStartBackgroundInterval:(double)arg0;
- (double)startBackgroundInterval;
- (id)startThreadSampling;
- (id)reSamplingThreadInfo:(id)arg0;
- (long long)preCPUUsage;
- (void)setPreCPUUsage:(long long)arg0;
- (void)calculateThreadLoadAVG:(id)arg0;
- (id)buildThreadBasicMetrics;
- (long long)thresholdThrashing;
- (long long)thresholdUsage;
- (id)heaviestsampling;
- (id)laodavgSampling;
- (float)sumUsage;
- (id)threadInfo;
- (void)setThreadInfo:(id)arg0;
- (int)period;
- (id)init;
- (void)setTriggerCount:(long long)arg0;
- (void)didEnterBackground;
- (void).cxx_destruct;
- (void)setDateFormatter:(id)arg0;
- (id)dateFormatter;
- (void)stopWatching;
- (long long)triggerCount;
- (long long)thresholdCount;

@end
