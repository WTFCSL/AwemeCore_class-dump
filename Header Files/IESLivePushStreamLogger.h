//
//     Generated by private class-dump
//

@class NSString, NSArray, HTSLiveStatsApi, NSObject;
@protocol IESLiveFullLinkMonitor, IESLiveNetworkQualityInfoService, OS_dispatch_queue;

@interface IESLivePushStreamLogger : NSObject {
    unsigned long long _contentType;
    HTSLiveStatsApi *_statsApi;
    id<IESLiveFullLinkMonitor> _fullLinkMonitor;
    double _lastUpdateTimestamp;
    NSString *_service;
    NSArray *_predicateList;
    id<IESLiveNetworkQualityInfoService> _networkQualityInfoService;
    struct IESLivePushStreamLoggerConfig { BOOL x0; BOOL x1; } *_loggerConfigRef;
    double _gpuSampleTime;
    double _cpuFreqSampleTime;
    NSObject<OS_dispatch_queue> *_loggerQueue;
}

@property (retain, nonatomic) HTSLiveStatsApi *statsApi;
@property (retain, nonatomic) id<IESLiveFullLinkMonitor> fullLinkMonitor;
@property (nonatomic) double lastUpdateTimestamp;
@property (retain, nonatomic) NSString *service;
@property (copy, nonatomic) NSArray *predicateList;
@property (retain, nonatomic) id<IESLiveNetworkQualityInfoService> networkQualityInfoService;
@property (nonatomic) struct IESLivePushStreamLoggerConfig { BOOL x0; BOOL x1; } *loggerConfigRef;
@property (nonatomic) double gpuSampleTime;
@property (nonatomic) double cpuFreqSampleTime;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *loggerQueue;
@property (nonatomic) unsigned long long contentType;

- (id)attachingDIContext;
- (id)fullLinkMonitor;
- (void)setFullLinkMonitor:(id)arg0;
- (id)networkQualityInfoService;
- (void)setNetworkQualityInfoService:(id)arg0;
- (void)logWithDict:(id)arg0;
- (id)commonDeviceInfo;
- (id)currentAppStateInfo;
- (void)cloudRenderLogReportWithDict:(id)arg0 logType:(id)arg1;
- (void)setStatsApi:(id)arg0;
- (id)statsApi;
- (double)cpuFreqSampleTime;
- (void)setCpuFreqSampleTime:(double)arg0;
- (void)setLoggerConfigRef:(struct IESLivePushStreamLoggerConfig { BOOL x0; BOOL x1; } *)arg0;
- (id)addlogExtraInfo:(id)arg0;
- (struct IESLivePushStreamLoggerConfig { BOOL x0; BOOL x1; } *)loggerConfigRef;
- (void)reportToFulllinkMonitor:(id)arg0;
- (void)updateReportConfigIfNeeded;
- (id)predicateList;
- (void)setPredicateList:(id)arg0;
- (double)gpuSampleTime;
- (void)setGpuSampleTime:(double)arg0;
- (void)setContentType:(unsigned long long)arg0;
- (unsigned long long)contentType;
- (id)init;
- (void).cxx_destruct;
- (void)setService:(id)arg0;
- (void)setup;
- (void)dealloc;
- (id)service;
- (void)setLastUpdateTimestamp:(double)arg0;
- (double)lastUpdateTimestamp;
- (id)loggerQueue;
- (void)setLoggerQueue:(id)arg0;

@end