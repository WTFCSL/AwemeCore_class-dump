//
//     Generated by private class-dump
//

@class NSLock, NSString, NSArray, NSMutableDictionary, NSDictionary, NSCondition, NSObject, TTDnsOuterService;
@protocol OS_dispatch_queue;

@interface TTNetworkManagerChromium : TTNetworkManager {
    void *coldStartObserver_;
    struct NetDetectObserver { void /* function */ **x0; } *netDetectObserver_;
    struct TTDnsResolveObserver { void /* function */ **x0; } *ttDnsResolveObserver_;
    struct TTRequestInfoObserver { void /* function */ **x0; } *requestInfoObserver_;
    struct ConnectionTypeObserver { void /* function */ **x0; } *connectionTypeObserver_;
    struct NQEObserver { void /* function */ **x0; id /* block */ x1; } *nqeObserver_;
    struct PacketLossRateObserver { void /* function */ **x0; id /* block */ x1; } *packetLossRateObserver_;
    struct TTNetworkQualityLevelObserver { void /* function */ **x0; id /* block */ x1; } *nqlObserver_;
    struct MultiNetworkStateObserver { void /* function */ **x0; } *multiNetworkStateObserver_;
    BOOL _httpDNSEnabled;
    BOOL _sGlobalCompressDisabled;
    BOOL _isWebviewImageCheck;
    BOOL _enableFixCustomizedCookie;
    BOOL _enableFixHttpCacheRemove;
    BOOL _enable_verbose_log;
    BOOL _engineStarted;
    BOOL _ttnetBoeEnabled;
    NSString *_userIdc;
    NSString *_userRegion;
    NSString *_regionSource;
    NSString *_clinetIP;
    NSArray *_publicIPv4List;
    NSArray *_publicIPv6List;
    NSString *_shareCookieDomainNameList;
    NSString *_componentVersion;
    NSString *_hostResolverRules;
    NSString *_defaultUserAgent;
    NSDictionary *_concurrentRequestConfig;
    TTDnsOuterService *_ttnetDnsOuterService;
    id /* block */ _monitorblock;
    id /* block */ _getDomainblock;
    id /* block */ _tncHeadersBlock;
    id /* block */ _tncQueriesBlock;
    id /* block */ _frontierUrlsCallbackblock;
    long long _currentImpl;
    id /* block */ _nqeV2block;
    NSArray *_imageCheckDomainList;
    NSArray *_imageCheckBypassDomainList;
    NSArray *_commonParamsL0Level;
    NSMutableDictionary *_taskMap;
    NSObject<OS_dispatch_queue> *_dispatch_queue;
    NSObject<OS_dispatch_queue> *_concurrent_dispatch_queue;
    NSObject<OS_dispatch_queue> *_callback_dispatch_queue;
    NSObject<OS_dispatch_queue> *_serial_callback_dispatch_queue;
    NSLock *_taskIdLock;
    unsigned long long _nextTaskId;
    NSCondition *_engineStartedCondition;
    NSString *_ttnetProxyConfig;
}

@property (retain, nonatomic) NSMutableDictionary *taskMap;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatch_queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *concurrent_dispatch_queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callback_dispatch_queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serial_callback_dispatch_queue;
@property (nonatomic) BOOL enable_verbose_log;
@property (copy, nonatomic) NSString *userIdc;
@property (copy, nonatomic) NSString *userRegion;
@property (copy, nonatomic) NSString *regionSource;
@property (copy, nonatomic) NSString *clientIP;
@property (copy, nonatomic) NSString *componentVersion;
@property (retain) NSLock *taskIdLock;
@property (nonatomic) unsigned long long nextTaskId;
@property BOOL engineStarted;
@property (retain) NSCondition *engineStartedCondition;
@property (copy) NSString *ttnetProxyConfig;
@property BOOL ttnetBoeEnabled;
@property (copy, nonatomic) NSString *defaultUserAgent;
@property (copy) NSString *shareCookieDomainNameList;
@property (retain) NSArray *publicIPv4List;
@property (retain) NSArray *publicIPv6List;
@property (copy) NSDictionary *concurrentRequestConfig;
@property (retain, nonatomic) TTDnsOuterService *ttnetDnsOuterService;
@property (copy, nonatomic) id /* block */ monitorblock;
@property (copy, nonatomic) id /* block */ getDomainblock;
@property (copy, nonatomic) id /* block */ tncHeadersBlock;
@property (copy, nonatomic) id /* block */ tncQueriesBlock;
@property (copy, nonatomic) id /* block */ frontierUrlsCallbackblock;
@property (nonatomic) BOOL httpDNSEnabled;
@property (nonatomic) long long currentImpl;
@property (copy, nonatomic) id /* block */ nqeV2block;
@property BOOL sGlobalCompressDisabled;
@property BOOL isWebviewImageCheck;
@property (copy) NSArray *imageCheckDomainList;
@property (copy) NSArray *imageCheckBypassDomainList;
@property (copy) NSArray *commonParamsL0Level;
@property BOOL enableFixCustomizedCookie;
@property BOOL enableFixHttpCacheRemove;

+ (void)clearHttpCache;
+ (void)recoverCustomizedCookieIfNeeded:(BOOL)arg0 originalHeader:(id)arg1 fromRequest:(id)arg2;
+ (BOOL)isCheckingDomain:(id)arg0 checkDomainList:(id)arg1 bypassDoaminList:(id)arg2;
+ (void)setImageCheckFinishBlockAndQueue:(id /* block */ *)arg0 sendDataSerialQueue:(id *)arg1;
+ (id)dataWithInputStream:(id)arg0;
+ (id)shareInstance;
+ (id)applicationDocumentsDirectory;

- (id)downloadTaskWithRequest:(id)arg0 parameters:(id)arg1 headerField:(id)arg2 needCommonParams:(BOOL)arg3 progress:(id *)arg4 destination:(id)arg5 completionHandler:(id /* block */)arg6;
- (id)requestForJSONWithURL:(id)arg0 params:(id)arg1 method:(id)arg2 needCommonParams:(BOOL)arg3 callback:(id /* block */)arg4;
- (long long)getEffectiveConnectionType;
- (void)preconnectUrl:(id)arg0;
- (id)requestForJSONWithURL:(id)arg0 params:(id)arg1 method:(id)arg2 needCommonParams:(BOOL)arg3 requestSerializer:(Class)arg4 responseSerializer:(Class)arg5 autoResume:(BOOL)arg6 callback:(id /* block */)arg7;
- (id)requestForBinaryWithResponse:(id)arg0 params:(id)arg1 method:(id)arg2 needCommonParams:(BOOL)arg3 headerField:(id)arg4 enableHttpCache:(BOOL)arg5 requestSerializer:(Class)arg6 responseSerializer:(Class)arg7 progress:(id *)arg8 callback:(id /* block */)arg9;
- (id)requestForChunkedBinaryWithURL:(id)arg0 params:(id)arg1 method:(id)arg2 needCommonParams:(BOOL)arg3 headerField:(id)arg4 enableHttpCache:(BOOL)arg5 requestSerializer:(Class)arg6 responseSerializer:(Class)arg7 autoResume:(BOOL)arg8 headerCallback:(id /* block */)arg9 dataCallback:(id /* block */)arg10 callback:(id /* block */)arg11;
- (id)requestForJSONWithResponse:(id)arg0 params:(id)arg1 method:(id)arg2 needCommonParams:(BOOL)arg3 headerField:(id)arg4 requestSerializer:(Class)arg5 responseSerializer:(Class)arg6 autoResume:(BOOL)arg7 verifyRequest:(BOOL)arg8 isCustomizedCookie:(BOOL)arg9 callback:(id /* block */)arg10;
- (id)uploadWithResponse:(id)arg0 parameters:(id)arg1 headerField:(id)arg2 constructingBodyWithBlock:(id /* block */)arg3 progress:(id *)arg4 needcommonParams:(BOOL)arg5 requestSerializer:(Class)arg6 responseSerializer:(Class)arg7 autoResume:(BOOL)arg8 callback:(id /* block */)arg9;
- (id)requestForRangeMediaResource:(id)arg0 params:(id)arg1 method:(id)arg2 offset:(long long)arg3 requestedLength:(long long)arg4 needCommonParams:(BOOL)arg5 headerField:(id)arg6 enableHttpCache:(BOOL)arg7 requestSerializer:(Class)arg8 responseSerializer:(Class)arg9 autoResume:(BOOL)arg10 onHeaderReceivedCallback:(id /* block */)arg11 onDataReadCallback:(id /* block */)arg12 onRequestFinishCallback:(id /* block */)arg13;
- (id)requestForBinaryWithResponse:(id)arg0 params:(id)arg1 method:(id)arg2 needCommonParams:(BOOL)arg3 headerField:(id)arg4 enableHttpCache:(BOOL)arg5 requestSerializer:(Class)arg6 responseSerializer:(Class)arg7 progress:(id *)arg8 callback:(id /* block */)arg9 callbackInMainThread:(BOOL)arg10;
- (id)requestForJSONWithResponse:(id)arg0 params:(id)arg1 method:(id)arg2 needCommonParams:(BOOL)arg3 callback:(id /* block */)arg4;
- (id)requestForJSONWithResponse:(id)arg0 params:(id)arg1 method:(id)arg2 needCommonParams:(BOOL)arg3 headerField:(id)arg4 requestSerializer:(Class)arg5 responseSerializer:(Class)arg6 autoResume:(BOOL)arg7 callback:(id /* block */)arg8;
- (id)uploadWithURL:(id)arg0 headerField:(id)arg1 parameters:(id)arg2 constructingBodyWithBlock:(id /* block */)arg3 progress:(id *)arg4 needcommonParams:(BOOL)arg5 callback:(id /* block */)arg6;
- (id)requestForBinaryWithResponse:(id)arg0 params:(id)arg1 method:(id)arg2 needCommonParams:(BOOL)arg3 callback:(id /* block */)arg4;
- (id)requestForBinaryWithResponse:(id)arg0 params:(id)arg1 method:(id)arg2 needCommonParams:(BOOL)arg3 headerField:(id)arg4 enableHttpCache:(BOOL)arg5 autoResume:(BOOL)arg6 requestSerializer:(Class)arg7 responseSerializer:(Class)arg8 progress:(id *)arg9 callback:(id /* block */)arg10 callbackInMainThread:(BOOL)arg11;
- (id)requestForWebview:(id)arg0 autoResume:(BOOL)arg1 enableHttpCache:(BOOL)arg2 headerCallback:(id /* block */)arg3 dataCallback:(id /* block */)arg4 callbackWithResponse:(id /* block */)arg5 redirectCallback:(id /* block */)arg6;
- (id)uploadRawDataWithResponse:(id)arg0 method:(id)arg1 headerField:(id)arg2 bodyField:(id)arg3 progress:(id *)arg4 requestSerializer:(Class)arg5 responseSerializer:(Class)arg6 autoResume:(BOOL)arg7 callback:(id /* block */)arg8 timeout:(double)arg9;
- (id)requestForChunkedBinaryWithResponse:(id)arg0 params:(id)arg1 method:(id)arg2 needCommonParams:(BOOL)arg3 headerField:(id)arg4 enableHttpCache:(BOOL)arg5 requestSerializer:(Class)arg6 responseSerializer:(Class)arg7 autoResume:(BOOL)arg8 headerCallback:(id /* block */)arg9 dataCallback:(id /* block */)arg10 callbackWithResponse:(id /* block */)arg11;
- (id)defaultUserAgent;
- (id)requestForJSONWithResponse:(id)arg0 params:(id)arg1 method:(id)arg2 needCommonParams:(BOOL)arg3 requestSerializer:(Class)arg4 responseSerializer:(Class)arg5 autoResume:(BOOL)arg6 callback:(id /* block */)arg7;
- (id)requestForBinaryWithStreamTask:(id)arg0 params:(id)arg1 constructingBodyWithBlock:(id /* block */)arg2 method:(id)arg3 needCommonParams:(BOOL)arg4 headerField:(id)arg5 enableHttpCache:(BOOL)arg6 autoResume:(BOOL)arg7 dispatch_queue:(id)arg8;
- (id)requestForBinaryWithResponse:(id)arg0 params:(id)arg1 method:(id)arg2 needCommonParams:(BOOL)arg3 headerField:(id)arg4 enableHttpCache:(BOOL)arg5 autoResume:(BOOL)arg6 isCustomizedCookie:(BOOL)arg7 requestSerializer:(Class)arg8 responseSerializer:(Class)arg9 progress:(id *)arg10 callback:(id /* block */)arg11 callbackInMainThread:(BOOL)arg12;
- (id)requestForJSONWithResponse:(id)arg0 params:(id)arg1 method:(id)arg2 needCommonParams:(BOOL)arg3 headerField:(id)arg4 requestSerializer:(Class)arg5 responseSerializer:(Class)arg6 autoResume:(BOOL)arg7 verifyRequest:(BOOL)arg8 isCustomizedCookie:(BOOL)arg9 callback:(id /* block */)arg10 callbackInMainThread:(BOOL)arg11;
- (void)setBoeProxyEnabled:(BOOL)arg0;
- (id)downloadTaskWithRequest:(id)arg0 parameters:(id)arg1 headerField:(id)arg2 needCommonParams:(BOOL)arg3 requestSerializer:(Class)arg4 progress:(id *)arg5 destination:(id)arg6 autoResume:(BOOL)arg7 completionHandler:(id /* block */)arg8;
- (id)uploadRawFileWithResponseByRange:(id)arg0 method:(id)arg1 headerField:(id)arg2 filePath:(id)arg3 offset:(unsigned long long)arg4 length:(unsigned long long)arg5 progress:(id *)arg6 requestSerializer:(Class)arg7 responseSerializer:(Class)arg8 autoResume:(BOOL)arg9 callback:(id /* block */)arg10 timeout:(double)arg11;
- (id)requestForChunkedBinaryWithResponse:(id)arg0 params:(id)arg1 method:(id)arg2 needCommonParams:(BOOL)arg3 headerField:(id)arg4 enableHttpCache:(BOOL)arg5 requestSerializer:(Class)arg6 responseSerializer:(Class)arg7 autoResume:(BOOL)arg8 isCustomizedCookie:(BOOL)arg9 headerCallback:(id /* block */)arg10 dataCallback:(id /* block */)arg11 callbackWithResponse:(id /* block */)arg12 redirectCallback:(id /* block */)arg13;
- (id)uploadWithResponse:(id)arg0 parameters:(id)arg1 headerField:(id)arg2 constructingBodyWithBlock:(id /* block */)arg3 progress:(id *)arg4 needcommonParams:(BOOL)arg5 requestSerializer:(Class)arg6 responseSerializer:(Class)arg7 autoResume:(BOOL)arg8 callback:(id /* block */)arg9 timeout:(double)arg10;
- (id)defaultUserAgentString;
- (id)downloadTaskWithRequest:(id)arg0 parameters:(id)arg1 headerField:(id)arg2 needCommonParams:(BOOL)arg3 progress:(id *)arg4 destination:(id)arg5 autoResume:(BOOL)arg6 completionHandler:(id /* block */)arg7;
- (id)buildJSONHttpTask:(id)arg0 params:(id)arg1 method:(id)arg2 needCommonParams:(BOOL)arg3 headerField:(id)arg4 requestSerializer:(Class)arg5 responseSerializer:(Class)arg6 autoResume:(BOOL)arg7 verifyRequest:(BOOL)arg8 isCustomizedCookie:(BOOL)arg9 callback:(id /* block */)arg10 callbackWithResponse:(id /* block */)arg11 dispatch_queue:(id)arg12;
- (id)buildBinaryHttpTask:(id)arg0 params:(id)arg1 method:(id)arg2 needCommonParams:(BOOL)arg3 headerField:(id)arg4 enableHttpCache:(BOOL)arg5 requestSerializer:(Class)arg6 responseSerializer:(Class)arg7 autoResume:(BOOL)arg8 isCustomizedCookie:(BOOL)arg9 headerCallback:(id /* block */)arg10 dataCallback:(id /* block */)arg11 callback:(id /* block */)arg12 callbackWithResponse:(id /* block */)arg13 redirectCallback:(id /* block */)arg14 progress:(id *)arg15 dispatch_queue:(id)arg16;
- (id)synchronizedRequstForURL:(id)arg0 method:(id)arg1 headerField:(id)arg2 jsonObjParams:(id)arg3 needCommonParams:(BOOL)arg4 needResponse:(BOOL)arg5;
- (id)requestForBinaryWithURL:(id)arg0 params:(id)arg1 method:(id)arg2 needCommonParams:(BOOL)arg3 requestSerializer:(Class)arg4 responseSerializer:(Class)arg5 autoResume:(BOOL)arg6 callback:(id /* block */)arg7;
- (id)uploadWithURL:(id)arg0 parameters:(id)arg1 constructingBodyWithBlock:(id /* block */)arg2 progress:(id *)arg3 needcommonParams:(BOOL)arg4 callback:(id /* block */)arg5;
- (id)requestModel:(id)arg0 requestSerializer:(Class)arg1 responseSerializer:(Class)arg2 autoResume:(BOOL)arg3 callback:(id /* block */)arg4;
- (id)uploadWithURL:(id)arg0 parameters:(id)arg1 headerField:(id)arg2 constructingBodyWithBlock:(id /* block */)arg3 progress:(id *)arg4 needcommonParams:(BOOL)arg5 requestSerializer:(Class)arg6 responseSerializer:(Class)arg7 autoResume:(BOOL)arg8 callback:(id /* block */)arg9;
- (id)requestModel:(id)arg0 callback:(id /* block */)arg1;
- (id)getNetworkQuality;
- (id)downloadTaskBySlice:(id)arg0 parameters:(id)arg1 headerField:(id)arg2 needCommonParams:(BOOL)arg3 requestSerializer:(Class)arg4 progressCallback:(id /* block */)arg5 destination:(id)arg6 autoResume:(BOOL)arg7 completionHandler:(id /* block */)arg8;
- (id)commonParamsL0Level;
- (id)serial_callback_dispatch_queue;
- (unsigned long long)nextTaskId;
- (void)addTaskWithId_:(unsigned long long)arg0 task:(id)arg1;
- (void)removeTaskWithId_:(unsigned long long)arg0;
- (id)ttUrlDispatchWithUrl:(id)arg0;
- (id)buildWebviewHttpTask:(id)arg0 mainDocURL:(id)arg1 autoResume:(BOOL)arg2 enableHttpCache:(BOOL)arg3 headerCallback:(id /* block */)arg4 dataCallback:(id /* block */)arg5 callbackWithResponse:(id /* block */)arg6 redirectCallback:(id /* block */)arg7;
- (void)setCurrentImpl:(long long)arg0;
- (long long)currentImpl;
- (BOOL)sGlobalCompressDisabled;
- (id)concurrent_dispatch_queue;
- (void)setConcurrent_dispatch_queue:(id)arg0;
- (BOOL)ensureEngineStarted;
- (void *)getEngine;
- (void)clearHttpCache;
- (void)setHttpDNSEnabled:(BOOL)arg0;
- (BOOL)httpDNSEnabled;
- (void)setMonitorblock:(id /* block */)arg0;
- (id /* block */)monitorblock;
- (void)setGetDomainblock:(id /* block */)arg0;
- (id /* block */)getDomainblock;
- (void)setTncHeadersBlock:(id /* block */)arg0;
- (id /* block */)tncHeadersBlock;
- (void)setTncQueriesBlock:(id /* block */)arg0;
- (id /* block */)tncQueriesBlock;
- (void)setFrontierUrlsCallbackblock:(id /* block */)arg0;
- (id /* block */)frontierUrlsCallbackblock;
- (void)setNqeV2block:(id /* block */)arg0;
- (id /* block */)nqeV2block;
- (void)asyncSetPriorityRealtimeAudio:(int)arg0 computation:(int)arg1 constraint:(int)arg2;
- (void)asyncRestoreFromRealtimeAudio;
- (void)setPureChannelForJSONResponseSerializer:(BOOL)arg0;
- (id)hostResolverRulesForTesting;
- (void)setHostResolverRulesForTesting:(id)arg0;
- (id)publicIPv4List;
- (id)publicIPv6List;
- (id)userIdc;
- (id)userRegion;
- (id)regionSource;
- (id)shareCookieDomainNameList;
- (void)setDispatch_queue:(id)arg0;
- (void)setCallback_dispatch_queue:(id)arg0;
- (void)setSerial_callback_dispatch_queue:(id)arg0;
- (void)setTaskIdLock:(id)arg0;
- (void)setNextTaskId:(unsigned long long)arg0;
- (void)setEngineStarted:(BOOL)arg0;
- (void)setEngineStartedCondition:(id)arg0;
- (void)setTtnetDnsOuterService:(id)arg0;
- (void)setIsWebviewImageCheck:(BOOL)arg0;
- (void)setEnableFixCustomizedCookie:(BOOL)arg0;
- (void)setEnableFixHttpCacheRemove:(BOOL)arg0;
- (void)applicationDidEnterBackground_:(id)arg0;
- (void)applicationWillTerminate_:(id)arg0;
- (void)setSGlobalCompressDisabled:(BOOL)arg0;
- (void)setUserIdc:(id)arg0;
- (void)setUserRegion:(id)arg0;
- (void)setRegionSource:(id)arg0;
- (id)taskIdLock;
- (void)startInMainThread_;
- (BOOL)enable_verbose_log;
- (id)engineStartedCondition;
- (id)ttnetProxyConfig;
- (BOOL)ttnetBoeEnabled;
- (id)pickCommonParams:(id)arg0;
- (BOOL)engineStarted;
- (id)requestModel:(id)arg0 requestSerializer:(Class)arg1 responseSerializer:(Class)arg2 autoResume:(BOOL)arg3 callback:(id /* block */)arg4 callbackInMainThread:(BOOL)arg5;
- (id)callback_dispatch_queue;
- (id)requestModel:(id)arg0 requestSerializer:(Class)arg1 responseSerializer:(Class)arg2 autoResume:(BOOL)arg3 callback:(id /* block */)arg4 callbackWithResponse:(id /* block */)arg5 dispatch_queue:(id)arg6;
- (id)needCommonParams:(BOOL)arg0 requestURL:(id)arg1;
- (BOOL)apiHttpInterceptor:(id)arg0;
- (BOOL)handleBDTuringCallback:(id)arg0 response:(id)arg1 redirectCallback:(id /* block */)arg2 headerCallback:(id /* block */)arg3 dataCallback:(id /* block */)arg4 deserializingAndCallbackBlock:(id /* block */)arg5;
- (BOOL)handleResponsePreProcessing_:(id)arg0 data:(id)arg1 error:(id)arg2 request:(id)arg3 preprocessor:(id)arg4 headerCallback:(id /* block */)arg5 dataCallback:(id /* block */)arg6 completedCallback:(id /* block */)arg7;
- (id)requestForJSONWithURL_:(id)arg0 params:(id)arg1 method:(id)arg2 needCommonParams:(BOOL)arg3 headerField:(id)arg4 requestSerializer:(Class)arg5 responseSerializer:(Class)arg6 autoResume:(BOOL)arg7 verifyRequest:(BOOL)arg8 isCustomizedCookie:(BOOL)arg9 callback:(id /* block */)arg10 callbackWithResponse:(id /* block */)arg11 dispatch_queue:(id)arg12;
- (id)concurrentRequestConfig;
- (id)requestForBinaryWithURL_:(id)arg0 params:(id)arg1 method:(id)arg2 needCommonParams:(BOOL)arg3 headerField:(id)arg4 enableHttpCache:(BOOL)arg5 requestSerializer:(Class)arg6 responseSerializer:(Class)arg7 autoResume:(BOOL)arg8 isCustomizedCookie:(BOOL)arg9 headerCallback:(id /* block */)arg10 dataCallback:(id /* block */)arg11 callback:(id /* block */)arg12 callbackWithResponse:(id /* block */)arg13 redirectCallback:(id /* block */)arg14 progress:(id *)arg15 dispatch_queue:(id)arg16;
- (id)requestForWebview:(id)arg0 autoResume:(BOOL)arg1 enableHttpCache:(BOOL)arg2 headerCallback:(id /* block */)arg3 dataCallback:(id /* block */)arg4 callbackWithResponse:(id /* block */)arg5;
- (id)requestForWebviewCommon:(id)arg0 mainDocURL:(id)arg1 autoResume:(BOOL)arg2 enableHttpCache:(BOOL)arg3 headerCallback:(id /* block */)arg4 dataCallback:(id /* block */)arg5 callbackWithResponse:(id /* block */)arg6 redirectCallback:(id /* block */)arg7;
- (id)generateTTHttpRequest:(id)arg0 needCommonParams:(BOOL)arg1;
- (BOOL)isWebviewImageCheck;
- (id)imageCheckDomainList;
- (id)imageCheckBypassDomainList;
- (void)setCallbackPointAndStep:(long long)arg0 callbackPoint:(long long *)arg1 callbackDelta:(long long *)arg2;
- (void)callbackToClientAIForImageCheck:(id)arg0 request:(id)arg1 mainDocURL:(id)arg2 recvLenth:(long long)arg3 contentLength:(long long)arg4 imageData:(id)arg5 imageCheckSerialQueue:(id)arg6 imageCheckFinishBlock:(id /* block */)arg7 mallocError:(BOOL)arg8;
- (void)callbackToClientAIWithExceptionCaught:(id)arg0 request:(id)arg1 mainDocURL:(id)arg2 recvLenth:(long long)arg3 contentLength:(long long)arg4 imageData:(id)arg5 imageCheckSerialQueue:(id)arg6 imageCheckFinishBlock:(id /* block */)arg7 mallocError:(BOOL *)arg8;
- (id)uploadWithCommon:(id)arg0 parameters:(id)arg1 headerField:(id)arg2 constructingBodyWithBlock:(id /* block */)arg3 progress:(id *)arg4 needcommonParams:(BOOL)arg5 requestSerializer:(Class)arg6 useJsonResponseSerializer:(BOOL)arg7 jsonResponseSerializer:(Class)arg8 binaryResponseSerializer:(Class)arg9 autoResume:(BOOL)arg10 callback:(id /* block */)arg11 callbackWithResponse:(id /* block */)arg12 timeout:(double)arg13;
- (id)uploadRawDataWithResponse:(id)arg0 method:(id)arg1 headerField:(id)arg2 bodyField:(id)arg3 progress:(id *)arg4 requestSerializer:(Class)arg5 responseSerializer:(Class)arg6 autoResume:(BOOL)arg7 callback:(id /* block */)arg8 timeout:(double)arg9 callbackQueue:(id)arg10;
- (id)uploadRawInCommon:(id)arg0 method:(id)arg1 headerField:(id)arg2 bodyField:(id)arg3 filePath:(id)arg4 offset:(unsigned long long)arg5 length:(unsigned long long)arg6 progress:(id *)arg7 requestSerializer:(Class)arg8 responseSerializer:(Class)arg9 autoResume:(BOOL)arg10 callback:(id /* block */)arg11 timeout:(double)arg12 callbackQueue:(id)arg13;
- (id)synchronizedRequstForURL:(id)arg0 method:(id)arg1 headerField:(id)arg2 jsonObjParams:(id)arg3 needCommonParams:(BOOL)arg4 needResponse:(BOOL)arg5 needEncrypt:(BOOL)arg6;
- (id)synchronizedRequstForURL:(id)arg0 method:(id)arg1 headerField:(id)arg2 jsonObjParams:(id)arg3 needCommonParams:(BOOL)arg4 needResponse:(BOOL)arg5 needEncrypt:(BOOL)arg6 needContentEncodingAfterEncrypt:(BOOL)arg7;
- (id)synchronizedRequstForURL:(id)arg0 method:(id)arg1 headerField:(id)arg2 jsonObjParams:(id)arg3 needCommonParams:(BOOL)arg4 requestSerializer:(Class)arg5 needResponse:(BOOL)arg6 needEncrypt:(BOOL)arg7 needContentEncodingAfterEncrypt:(BOOL)arg8;
- (id)downloadTaskByAppendIfNeed:(id)arg0 parameters:(id)arg1 headerField:(id)arg2 needCommonParams:(BOOL)arg3 requestSerializer:(Class)arg4 isAppend:(BOOL)arg5 progressCallback:(id /* block */)arg6 progress:(id *)arg7 destination:(id)arg8 autoResume:(BOOL)arg9 completionHandler:(id /* block */)arg10;
- (void)handleVerificationRetry:(id)arg0 addRequestHeaders:(id)arg1 turingCallbackDuration:(double)arg2 redirectCallback:(id /* block */)arg3 headerCallback:(id /* block */)arg4 dataCallback:(id /* block */)arg5 completedCallback:(id /* block */)arg6;
- (void)setEnable_verbose_log:(BOOL)arg0;
- (void)setTtnetProxyConfig:(id)arg0;
- (void)setTtnetBoeEnabled:(BOOL)arg0;
- (BOOL)enableFixHttpCacheRemove;
- (long long)getBaseCacheDirSize;
- (long long)getHttpDiskCacheSize;
- (id)generateRangeHeaderField:(long long)arg0 requestedLength:(long long)arg1 headerField:(id)arg2;
- (id)requestForBinaryWithStreamTask:(id)arg0 params:(id)arg1 constructingBodyWithBlock:(id /* block */)arg2 method:(id)arg3 needCommonParams:(BOOL)arg4 requestSerializer:(Class)arg5 headerField:(id)arg6 enableHttpCache:(BOOL)arg7 autoResume:(BOOL)arg8 dispatch_queue:(id)arg9;
- (id)ttDnsResolveWithHost:(id)arg0 sdkId:(int)arg1 controlHeaders:(id)arg2;
- (id)ttnetDnsOuterService;
- (void)preconnectUrl:(id)arg0 controlHeaders:(id)arg1;
- (void)triggerGetDomain:(BOOL)arg0;
- (BOOL)enableFixCustomizedCookie;
- (void)setUserIdcInternal:(id)arg0;
- (void)setUserRegionInternal:(id)arg0;
- (void)setRegionSourceInternal:(id)arg0;
- (void)setClientIPInternal:(id)arg0;
- (BOOL)hasTaskIdInMap:(unsigned long long)arg0;
- (id)requestModel:(id)arg0 callback:(id /* block */)arg1 callbackInMainThread:(BOOL)arg2;
- (id)requestModelWithResponse:(id)arg0 requestSerializer:(Class)arg1 responseSerializer:(Class)arg2 autoResume:(BOOL)arg3 callback:(id /* block */)arg4;
- (id)requestModel:(id)arg0 requestSerializer:(Class)arg1 responseSerializer:(Class)arg2 autoResume:(BOOL)arg3 callback:(id /* block */)arg4 callbackQueue:(id)arg5;
- (id)requestForJSONWithURL:(id)arg0 params:(id)arg1 method:(id)arg2 needCommonParams:(BOOL)arg3 callback:(id /* block */)arg4 callbackInMainThread:(BOOL)arg5;
- (id)requestForJSONWithResponse:(id)arg0 params:(id)arg1 method:(id)arg2 needCommonParams:(BOOL)arg3 headerField:(id)arg4 requestSerializer:(Class)arg5 responseSerializer:(Class)arg6 autoResume:(BOOL)arg7 verifyRequest:(BOOL)arg8 isCustomizedCookie:(BOOL)arg9 callback:(id /* block */)arg10 callbackQueue:(id)arg11;
- (id)requestForBinaryWithURL:(id)arg0 params:(id)arg1 method:(id)arg2 needCommonParams:(BOOL)arg3 callback:(id /* block */)arg4;
- (id)requestForBinaryWithResponse:(id)arg0 params:(id)arg1 method:(id)arg2 needCommonParams:(BOOL)arg3 headerField:(id)arg4 enableHttpCache:(BOOL)arg5 autoResume:(BOOL)arg6 requestSerializer:(Class)arg7 responseSerializer:(Class)arg8 progress:(id *)arg9 callback:(id /* block */)arg10 callbackQueue:(id)arg11;
- (id)requestForBinaryWithResponse:(id)arg0 params:(id)arg1 method:(id)arg2 needCommonParams:(BOOL)arg3 requestSerializer:(Class)arg4 responseSerializer:(Class)arg5 autoResume:(BOOL)arg6 callback:(id /* block */)arg7;
- (id)requestForChunkedBinaryWithResponse:(id)arg0 params:(id)arg1 method:(id)arg2 needCommonParams:(BOOL)arg3 headerField:(id)arg4 enableHttpCache:(BOOL)arg5 requestSerializer:(Class)arg6 responseSerializer:(Class)arg7 autoResume:(BOOL)arg8 headerCallback:(id /* block */)arg9 dataCallback:(id /* block */)arg10 callbackWithResponse:(id /* block */)arg11 redirectCallback:(id /* block */)arg12;
- (id)requestForWebview:(id)arg0 enableHttpCache:(BOOL)arg1 headerCallback:(id /* block */)arg2 dataCallback:(id /* block */)arg3 callbackWithResponse:(id /* block */)arg4;
- (id)requestForWebview:(id)arg0 mainDocURL:(id)arg1 autoResume:(BOOL)arg2 enableHttpCache:(BOOL)arg3 headerCallback:(id /* block */)arg4 dataCallback:(id /* block */)arg5 callbackWithResponse:(id /* block */)arg6 redirectCallback:(id /* block */)arg7;
- (id)uploadRawFileWithResponse:(id)arg0 method:(id)arg1 headerField:(id)arg2 filePath:(id)arg3 progress:(id *)arg4 requestSerializer:(Class)arg5 responseSerializer:(Class)arg6 autoResume:(BOOL)arg7 callback:(id /* block */)arg8 timeout:(double)arg9;
- (id)synchronizedRequstForURL:(id)arg0 method:(id)arg1 headerField:(id)arg2 jsonObjParams:(id)arg3 needCommonParams:(BOOL)arg4 needEncrypt:(BOOL)arg5;
- (id)synchronizedRequstForURL:(id)arg0 method:(id)arg1 headerField:(id)arg2 jsonObjParams:(id)arg3 needCommonParams:(BOOL)arg4;
- (void)enableVerboseLog;
- (void)doRouteSelection;
- (void)setHttpDiskCacheSize:(int)arg0;
- (void)addReferrerScheme:(id)arg0;
- (void)changeNetworkThreadPriority:(double)arg0;
- (id)getNetworkQualityV2;
- (id)getPacketLossMetrics:(long long)arg0;
- (void)setNetworkQualityObserverBlock:(id /* block */)arg0;
- (void)setPacketLossObserverBlock:(id /* block */)arg0;
- (id)requestForRangeMediaResourceWithResponse:(id)arg0 params:(id)arg1 method:(id)arg2 offset:(long long)arg3 requestedLength:(long long)arg4 needCommonParams:(BOOL)arg5 headerField:(id)arg6 enableHttpCache:(BOOL)arg7 requestSerializer:(Class)arg8 responseSerializer:(Class)arg9 autoResume:(BOOL)arg10 onHeaderReceivedCallback:(id /* block */)arg11 onDataReadCallback:(id /* block */)arg12 onRequestFinishCallback:(id /* block */)arg13;
- (id)requestForBinaryWithStreamTask:(id)arg0 params:(id)arg1 method:(id)arg2 needCommonParams:(BOOL)arg3 headerField:(id)arg4 enableHttpCache:(BOOL)arg5 autoResume:(BOOL)arg6 dispatch_queue:(id)arg7;
- (void)tryStartNetDetect:(id)arg0 timeout:(long long)arg1 actions:(long long)arg2;
- (id)ttDnsResolveWithHost:(id)arg0 sdkId:(int)arg1;
- (void)triggerGetDomainForTesting;
- (void)addClientOpaqueDataAfterInit:(id)arg0;
- (void)clearClientOpaqueData;
- (void)removeClientOpaqueData:(id)arg0;
- (void)notifySwitchToMultiNetwork:(BOOL)arg0;
- (void)setZstdFuncAddr:(void *)arg0 decompressStreamAddr:(void *)arg1 freeDctxAddr:(void *)arg2 isErrorAddr:(void *)arg3 createDDictAddr:(void *)arg4 dctxRefDDictAddr:(void *)arg5 freeDDictAddr:(void *)arg6 dctxResetAddr:(void *)arg7;
- (void)triggerSwitchingToCellular;
- (BOOL)enableTTBizHttpDns:(BOOL)arg0 domain:(id)arg1 authId:(id)arg2 authKey:(id)arg3 tempKey:(BOOL)arg4 tempKeyTimestamp:(id)arg5;
- (id)filterUrlWithCommonParams:(id)arg0;
- (id)removeL0CommonParams:(id)arg0;
- (id)syncGetDispatchedURL:(id)arg0 needCommonParams:(BOOL)arg1 needFilterHeaders:(BOOL)arg2;
- (void)changeAppSecurityLevel:(int)arg0;
- (void)setPublicIPv4List:(id)arg0;
- (void)setPublicIPv6List:(id)arg0;
- (void)setShareCookieDomainNameList:(id)arg0;
- (void)setConcurrentRequestConfig:(id)arg0;
- (void)setImageCheckDomainList:(id)arg0;
- (void)setImageCheckBypassDomainList:(id)arg0;
- (void)setCommonParamsL0Level:(id)arg0;
- (id)perf_requestForJSONWithURL_:(id)arg0 params:(id)arg1 method:(id)arg2 needCommonParams:(BOOL)arg3 headerField:(id)arg4 requestSerializer:(Class)arg5 responseSerializer:(Class)arg6 autoResume:(BOOL)arg7 verifyRequest:(BOOL)arg8 isCustomizedCookie:(BOOL)arg9 callback:(id /* block */)arg10 callbackWithResponse:(id /* block */)arg11 dispatch_queue:(id)arg12;
- (void)setProxy:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)setTaskMap:(id)arg0;
- (id)taskMap;
- (id)componentVersion;
- (void)setComponentVersion:(id)arg0;
- (id)dispatch_queue;
- (void)setDefaultUserAgent:(id)arg0;
- (id)clientIP;
- (void)setClientIP:(id)arg0;

@end
