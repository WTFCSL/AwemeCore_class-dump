//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, NSDictionary, IESLiveGCDTimer, IESLiveTraceAPI, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, IESLiveMessageUplinkService, IESLiveAppInfo;

@interface IESLiveTraceService : NSObject <IESLiveTraceService> {
    BOOL _isTraceEnable;
    id /* block */ _uploadCompletion;
    long long _routeServiceId;
    long long _routeMethodId;
    long long _uploadStrategy;
    long long _maxBatchSize;
    double _maxCacheTime;
    NSDictionary *_blockSettingKeyList;
    NSMutableDictionary *_blockServerKeyList;
    long long _maxServerKeyBlockTime;
    IESLiveGCDTimer *_timeoutCheckTimer;
    long long _uploadByHTTP;
    long long _maxSingleByte;
    long long _maxBatchByte;
    NSObject<OS_dispatch_queue> *_eventProcessQueue;
    NSMutableArray *_eventCache;
    double _lastUploadTime;
    IESLiveGCDTimer *_uploadCheckTimer;
    id<IESLiveMessageUplinkService> _uplinkService;
    IESLiveTraceAPI *_traceAPI;
    NSMutableArray *_eventDicCache;
    long long _totalCachedBytes;
    id<IESLiveAppInfo> _appInfo;
}

@property (nonatomic) long long routeServiceId;
@property (nonatomic) long long routeMethodId;
@property (nonatomic) BOOL isTraceEnable;
@property (nonatomic) long long uploadStrategy;
@property (nonatomic) long long maxBatchSize;
@property (nonatomic) double maxCacheTime;
@property (retain, nonatomic) NSDictionary *blockSettingKeyList;
@property (retain, nonatomic) NSMutableDictionary *blockServerKeyList;
@property (nonatomic) long long maxServerKeyBlockTime;
@property (retain, nonatomic) IESLiveGCDTimer *timeoutCheckTimer;
@property (nonatomic) long long uploadByHTTP;
@property (nonatomic) long long maxSingleByte;
@property (nonatomic) long long maxBatchByte;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *eventProcessQueue;
@property (retain, nonatomic) NSMutableArray *eventCache;
@property (nonatomic) double lastUploadTime;
@property (retain, nonatomic) IESLiveGCDTimer *uploadCheckTimer;
@property (retain, nonatomic) id<IESLiveMessageUplinkService> uplinkService;
@property (retain, nonatomic) IESLiveTraceAPI *traceAPI;
@property (retain, nonatomic) NSMutableArray *eventDicCache;
@property (nonatomic) long long totalCachedBytes;
@property (retain, nonatomic) id<IESLiveAppInfo> appInfo;
@property (copy, nonatomic) id /* block */ uploadCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setMaxCacheTime:(double)arg0;
- (double)maxCacheTime;
- (id /* block */)uploadCompletion;
- (void)setUploadCompletion:(id /* block */)arg0;
- (void)setLastUploadTime:(double)arg0;
- (double)lastUploadTime;
- (void)uploadEvents:(id)arg0;
- (void)setUplinkService:(id)arg0;
- (id)uplinkService;
- (long long)routeServiceId;
- (void)setRouteServiceId:(long long)arg0;
- (void)traceWith:(id)arg0;
- (void)onFrontierReceivingMessage:(id)arg0;
- (void)stopTimeoutCheckTimer;
- (void)setupUploadConfig;
- (void)startUploadCheckTimer;
- (void)startTimeoutCheckTimer;
- (void)setIsTraceEnable:(BOOL)arg0;
- (void)setUploadStrategy:(long long)arg0;
- (void)setBlockSettingKeyList:(id)arg0;
- (void)setBlockServerKeyList:(id)arg0;
- (void)setMaxServerKeyBlockTime:(long long)arg0;
- (void)setUploadByHTTP:(long long)arg0;
- (long long)uploadByHTTP;
- (void)setMaxBatchByte:(long long)arg0;
- (void)setMaxSingleByte:(long long)arg0;
- (BOOL)isValidMessageForTrace:(id)arg0;
- (id)blockServerKeyList;
- (BOOL)isTraceEnable;
- (BOOL)isFilterBySettingKeyList:(id)arg0;
- (BOOL)isFilterByServerKeyList:(id)arg0;
- (void)uploadEventByHTTP:(id)arg0;
- (void)uploadEventByFrontier:(id)arg0;
- (void)runOnEventProcessSerialQueue:(id /* block */)arg0;
- (long long)uploadStrategy;
- (void)realUploadEventData:(id)arg0;
- (void)doUploadCheck;
- (long long)maxSingleByte;
- (long long)totalCachedBytes;
- (void)setTotalCachedBytes:(long long)arg0;
- (id)eventDicCache;
- (id)traceAPI;
- (id)eventProcessQueue;
- (id)blockSettingKeyList;
- (BOOL)isFilterBySettingKeyRate:(id)arg0;
- (id)uploadCheckTimer;
- (void)setUploadCheckTimer:(id)arg0;
- (void)stopUploadCheckTimer;
- (long long)maxBatchByte;
- (void)batchUploadEventData:(id)arg0;
- (id)timeoutCheckTimer;
- (void)setTimeoutCheckTimer:(id)arg0;
- (void)doTimeoutCheck;
- (long long)maxServerKeyBlockTime;
- (long long)routeMethodId;
- (void)setRouteMethodId:(long long)arg0;
- (void)setEventProcessQueue:(id)arg0;
- (void)setTraceAPI:(id)arg0;
- (void)setEventDicCache:(id)arg0;
- (id)init;
- (long long)maxBatchSize;
- (void).cxx_destruct;
- (void)setMaxBatchSize:(long long)arg0;
- (void)dealloc;
- (id)appInfo;
- (void)setAppInfo:(id)arg0;
- (id)eventCache;
- (void)setEventCache:(id)arg0;

@end
