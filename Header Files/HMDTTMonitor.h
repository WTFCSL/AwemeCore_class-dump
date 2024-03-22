//
//     Generated by private class-dump
//

@class NSString, NSObject, HMDMonitorDataManager;
@protocol OS_dispatch_queue, HMDTTMonitorTracker, HMDTTMonitorInterceptor;

@interface HMDTTMonitor : NSObject <HMDMonitorServiceProtocol, HMDTTMonitorServiceProtocol> {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSString *_appID;
    id<HMDTTMonitorTracker> _tracker;
    HMDMonitorDataManager *_dataManager;
    id<HMDTTMonitorInterceptor> _interceptorChain;
}

@property (readonly, nonatomic) HMDMonitorDataManager *dataManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (copy, nonatomic) NSString *appID;
@property (retain, nonatomic) id<HMDTTMonitorTracker> tracker;
@property (retain, nonatomic) HMDMonitorDataManager *dataManager;
@property (retain, nonatomic) id<HMDTTMonitorInterceptor> interceptorChain;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)trackService:(id)arg0 metrics:(id)arg1 dimension:(id)arg2 extra:(id)arg3 syncWrite:(BOOL)arg4;
+ (void)uploadCodeCoverageFile:(id)arg0 scene:(id)arg1 commonParams:(id)arg2 callback:(id /* block */)arg3;
+ (void)trackService:(id)arg0 metrics:(id)arg1 dimension:(id)arg2 extra:(id)arg3;
+ (void)setFrequenceDetectParam:(id)arg0;
+ (id)heimdallrTTMonitor;
+ (void)setLogModifyBlock:(id /* block */)arg0;
+ (id)getFrequenceDetectParam;
+ (void)setMonitorTagVerifyBlock:(id /* block */)arg0;
+ (void)setMonitorTag:(long long)arg0;
+ (id)globalSyncQueue;
+ (void)setUseShareQueueStrategy:(BOOL)arg0;
+ (void)initialize;
+ (id)defaultManager;

- (void)hmdTrackService:(id)arg0 status:(long long)arg1 extra:(id)arg2;
- (void)hmdTrackService:(id)arg0 metric:(id)arg1 category:(id)arg2 extra:(id)arg3;
- (id)initMonitorWithAppID:(id)arg0 injectedInfo:(id)arg1;
- (void)hmdTrackData:(id)arg0 logTypeStr:(id)arg1;
- (void)hmdUploadImmediatelyTrackService:(id)arg0 metric:(id)arg1 category:(id)arg2 extra:(id)arg3;
- (void)hookTTMonitorInterfaceIfNeeded:(id)arg0;
- (BOOL)logTypeEnabled:(id)arg0;
- (BOOL)serviceTypeEnabled:(id)arg0;
- (void)cleanupNotUploadAndReportedPerformanceData;
- (void)trackAppLogWithTag:(id)arg0 label:(id)arg1 extraValue:(id)arg2;
- (void)trackAppLogWithTag:(id)arg0 label:(id)arg1;
- (void)setdDefaultSampleEnabled:(BOOL)arg0 forLogType:(id)arg1;
- (void)setdDefaultSampleEnabled:(BOOL)arg0 forServiceName:(id)arg1;
- (void)setupInterceptorChain;
- (void)setInterceptorChain:(id)arg0;
- (void)hmdTrackService:(id)arg0 metric:(id)arg1 category:(id)arg2 extra:(id)arg3 storeType:(unsigned long long)arg4;
- (void)modifyByUserBlockWithLogType:(id)arg0 serviceName:(id)arg1 data:(id *)arg2 needAbandoned:(BOOL *)arg3;
- (id)interceptorChain;
- (void)hmdTrackData:(id)arg0 logTypeStr:(id)arg1 storeType:(unsigned long long)arg2;
- (void)event:(id)arg0 label:(id)arg1 count:(unsigned long long)arg2 needAggregate:(BOOL)arg3;
- (void)hmdTrackService:(id)arg0 metric:(id)arg1 category:(id)arg2 extra:(id)arg3 syncWrite:(BOOL)arg4;
- (void)hmdUploadImmediatelyIfNeedTrackService:(id)arg0 metric:(id)arg1 category:(id)arg2 extra:(id)arg3;
- (BOOL)needUploadWithlogTypeStr:(id)arg0 serviceName:(id)arg1;
- (void)configTTLiveEventIgnoreLogType:(BOOL)arg0;
- (void)hmdUploadImmediatelyIfNeedTrackData:(id)arg0 logTypeStr:(id)arg1;
- (void)hmdUploadImmediatelyTrackData:(id)arg0 logTypeStr:(id)arg1;
- (void)event:(id)arg0 label:(id)arg1 needAggregate:(BOOL)arg2;
- (void)event:(id)arg0 label:(id)arg1 duration:(float)arg2 needAggregate:(BOOL)arg3;
- (void)hmdTrackService:(id)arg0 value:(id)arg1 extra:(id)arg2;
- (void)hmdTrackService:(id)arg0 attributes:(id)arg1;
- (void)hmdTrackData:(id)arg0 type:(long long)arg1;
- (id)dataManager;
- (id)tracker;
- (void)setTracker:(id)arg0;
- (void)setAppID:(id)arg0;
- (void).cxx_destruct;
- (void)setSerialQueue:(id)arg0;
- (id)serialQueue;
- (void)setDataManager:(id)arg0;
- (id)appID;
- (BOOL)configurationAvailable;

@end
