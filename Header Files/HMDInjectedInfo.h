//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSArray, NSString, NSDictionary, NSDate, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface HMDInjectedInfo : NSObject <HMDNetworkProvider> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _commonParamsMutex;
    NSMutableDictionary *_commonParamsStore;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } didRWLock;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } iidRWLock;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } uidRWLock;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } ignoreTimeRWLock;
    BOOL _ignorePIPESignalCrash;
    BOOL _useTTNetUploadCrash;
    BOOL _useURLSessionUpload;
    BOOL _useDebugLogLevel;
    BOOL _stopWriteToDiskWhenUnhit;
    BOOL _ttMonitorSampleOptEnable;
    NSString *_allUploadHost;
    NSString *_deviceID;
    NSString *_installID;
    NSString *_userID;
    NSDate *_ignorePerformanceDataTime;
    NSString *_appID;
    NSString *_appName;
    NSString *_channel;
    NSString *_userName;
    NSString *_email;
    NSString *_sessionID;
    id /* block */ _transformBlock;
    id /* block */ _commonParamsBlock;
    unsigned long long _monitorFlushCount;
    NSString *_appGroupID;
    NSDictionary *_customContext;
    id /* block */ _networkParamsBlock;
    NSDictionary *_customHeader;
    NSString *_crashUploadHost;
    NSString *_exceptionUploadHost;
    NSString *_userExceptionUploadHost;
    NSString *_performanceUploadHost;
    NSString *_fileUploadHost;
    NSArray *_configHostArray;
    NSString *_business;
    NSDictionary *_filters;
    NSArray *_defaultSetupModules;
    id /* block */ _dynamicDID;
    id /* block */ _dynamicIID;
    id /* block */ _dynamicUID;
    id /* block */ _exceptionStopUpload;
    id /* block */ _crashStopUpload;
    id /* block */ _fileStopUpload;
    NSString *_scopedDeviceID;
    NSString *_scopedUserID;
    id /* block */ _carrierMessageBlock;
    NSString *_buildInfo;
    NSObject<OS_dispatch_queue> *_customDataQueue;
    unsigned long long _performanceLocalMaxStoreSize;
    unsigned long long _traceLocalMaxStoreSize;
}

@property (nonatomic) BOOL enableLegacyDBOptimize;
@property (nonatomic) unsigned long long performanceLocalMaxStoreSize;
@property (nonatomic) unsigned long long traceLocalMaxStoreSize;
@property (nonatomic) BOOL allowedURLRegularOptEnabled;
@property (nonatomic) BOOL notProductHTTPRecordUnHitEnabled;
@property (retain, nonatomic) NSNumber *disableNetworkRequest;
@property (nonatomic) BOOL ttmonitorCodingProtocolOptEnabled;
@property (nonatomic) BOOL ttMonitorSampleOptEnable;
@property (readonly, copy, nonatomic) NSArray *configFetchHosts;
@property (readonly, copy, nonatomic) NSArray *crashUploadHosts;
@property (readonly, copy, nonatomic) NSArray *exceptionUploadHosts;
@property (readonly, copy, nonatomic) NSArray *userExceptionUploadHosts;
@property (readonly, copy, nonatomic) NSArray *performanceUploadHosts;
@property (readonly, copy, nonatomic) NSArray *fileUploadHosts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy) NSDictionary *customContext;
@property (copy) NSDictionary *filters;
@property (copy) NSDictionary *customHeader;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *customDataQueue;
@property (nonatomic) BOOL ttMonitorSampleOptEnable;
@property (nonatomic) unsigned long long performanceLocalMaxStoreSize;
@property (nonatomic) unsigned long long traceLocalMaxStoreSize;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *channel;
@property (copy) NSString *deviceID;
@property (copy) NSString *installID;
@property (copy) NSString *userID;
@property (copy) NSString *userName;
@property (copy) NSString *email;
@property (copy) NSString *sessionID;
@property (copy) id /* block */ transformBlock;
@property (copy) NSDictionary *commonParams;
@property (copy) id /* block */ commonParamsBlock;
@property (nonatomic) BOOL ignorePIPESignalCrash;
@property (nonatomic) unsigned long long monitorFlushCount;
@property (copy, nonatomic) NSString *appGroupID;
@property (copy) id /* block */ networkParamsBlock;
@property (copy, nonatomic) NSString *crashUploadHost;
@property (copy, nonatomic) NSString *exceptionUploadHost;
@property (copy, nonatomic) NSString *userExceptionUploadHost;
@property (copy, nonatomic) NSString *performanceUploadHost;
@property (copy, nonatomic) NSString *fileUploadHost;
@property (copy, nonatomic) NSArray *configHostArray;
@property (copy, nonatomic) NSString *allUploadHost;
@property (retain, nonatomic) NSDate *ignorePerformanceDataTime;
@property (nonatomic) BOOL useTTNetUploadCrash;
@property (nonatomic) BOOL useURLSessionUpload;
@property (copy) NSString *business;
@property (copy, nonatomic) NSArray *defaultSetupModules;
@property (copy) id /* block */ dynamicDID;
@property (copy) id /* block */ dynamicIID;
@property (copy) id /* block */ dynamicUID;
@property (copy, nonatomic) id /* block */ exceptionStopUpload;
@property (copy, nonatomic) id /* block */ crashStopUpload;
@property (copy, nonatomic) id /* block */ fileStopUpload;
@property (readonly, nonatomic) BOOL canUploadException;
@property (readonly, nonatomic) BOOL canUploadCrash;
@property (readonly, nonatomic) BOOL canUploadFile;
@property (nonatomic) BOOL useDebugLogLevel;
@property (copy) NSString *scopedDeviceID;
@property (copy) NSString *scopedUserID;
@property (copy, nonatomic) id /* block */ carrierMessageBlock;
@property (nonatomic) BOOL stopWriteToDiskWhenUnhit;
@property (copy, nonatomic) NSString *buildInfo;

+ (void)tokamak_install;
+ (id)allocWithZone:(struct _NSZone { } *)arg0;
+ (id)defaultInfo;

- (void)setCustomContextValue:(id)arg0 forKey:(id)arg1;
- (void)setCustomFilterValue:(id)arg0 forKey:(id)arg1;
- (void)setCommonParams:(id)arg0;
- (id)commonParams;
- (id /* block */)commonParamsBlock;
- (void)setCommonParamsBlock:(id /* block */)arg0;
- (id)ssAppID;
- (id)getCurrentChannel;
- (void)setInstallID:(id)arg0;
- (void)removeCustomContextKey:(id)arg0;
- (void)removeCustomFilterKey:(id)arg0;
- (BOOL)canUploadFile;
- (id)alogUploadCommonParams;
- (BOOL)canUploadCrash;
- (BOOL)canUploadException;
- (id)fileUploadHost;
- (id)disableNetworkRequest;
- (id)exceptionUploadHost;
- (BOOL)useURLSessionUpload;
- (BOOL)stopWriteToDiskWhenUnhit;
- (unsigned long long)traceLocalMaxStoreSize;
- (unsigned long long)performanceLocalMaxStoreSize;
- (id)performanceUploadHost;
- (double)getIgnorePerformanceDataTimeInterval;
- (BOOL)enableLegacyDBOptimize;
- (id)userExceptionUploadHost;
- (id)allUploadHost;
- (id)defaultSetupModules;
- (id)appGroupID;
- (BOOL)useTTNetUploadCrash;
- (id)scopedDeviceID;
- (id)scopedUserID;
- (void)confUniqueKeyForData:(id)arg0 timestamp:(long long)arg1 eventType:(id)arg2;
- (id /* block */)crashStopUpload;
- (BOOL)ignorePIPESignalCrash;
- (id)crashUploadHosts;
- (void)setAppGroupID:(id)arg0;
- (void)setEnableLegacyDBOptimize:(BOOL)arg0;
- (BOOL)allowedURLRegularOptEnabled;
- (BOOL)notProductHTTPRecordUnHitEnabled;
- (void)setAllowedURLRegularOptEnabled:(BOOL)arg0;
- (void)setNotProductHTTPRecordUnHitEnabled:(BOOL)arg0;
- (void)setDisableNetworkRequest:(id)arg0;
- (BOOL)ttmonitorCodingProtocolOptEnabled;
- (void)setTtmonitorCodingProtocolOptEnabled:(BOOL)arg0;
- (id)p_uploadHosts:(id)arg0;
- (id)configFetchHosts;
- (id)exceptionUploadHosts;
- (id)userExceptionUploadHosts;
- (id)performanceUploadHosts;
- (id)fileUploadHosts;
- (void)confUniqueKeyForData:(id)arg0 timestamp:(long long)arg1 eventType:(id)arg2 appID:(id)arg3;
- (void)addBytestFilterIfNeed;
- (id)defaultAppName;
- (id)getTTNetParamsIfAvailable;
- (id)customDataQueue;
- (void)setCustomContext:(id)arg0;
- (id /* block */)dynamicDID;
- (id /* block */)dynamicIID;
- (id /* block */)dynamicUID;
- (id)ignorePerformanceDataTime;
- (id /* block */)exceptionStopUpload;
- (id /* block */)fileStopUpload;
- (void)setAllUploadHost:(id)arg0;
- (void)setCustomHeaderValue:(id)arg0 forKey:(id)arg1;
- (void)removeCustomHeaderKey:(id)arg0;
- (void)setIgnorePerformanceDataTime:(id)arg0;
- (void)setUseURLSessionUpload:(BOOL)arg0;
- (void)addHitVid:(id)arg0;
- (void)setIgnorePIPESignalCrash:(BOOL)arg0;
- (unsigned long long)monitorFlushCount;
- (void)setMonitorFlushCount:(unsigned long long)arg0;
- (id /* block */)networkParamsBlock;
- (void)setNetworkParamsBlock:(id /* block */)arg0;
- (id)crashUploadHost;
- (void)setCrashUploadHost:(id)arg0;
- (void)setExceptionUploadHost:(id)arg0;
- (void)setUserExceptionUploadHost:(id)arg0;
- (void)setPerformanceUploadHost:(id)arg0;
- (void)setFileUploadHost:(id)arg0;
- (id)configHostArray;
- (void)setConfigHostArray:(id)arg0;
- (void)setUseTTNetUploadCrash:(BOOL)arg0;
- (void)setDefaultSetupModules:(id)arg0;
- (void)setDynamicDID:(id /* block */)arg0;
- (void)setDynamicIID:(id /* block */)arg0;
- (void)setDynamicUID:(id /* block */)arg0;
- (void)setExceptionStopUpload:(id /* block */)arg0;
- (void)setCrashStopUpload:(id /* block */)arg0;
- (void)setFileStopUpload:(id /* block */)arg0;
- (BOOL)useDebugLogLevel;
- (void)setUseDebugLogLevel:(BOOL)arg0;
- (void)setScopedDeviceID:(id)arg0;
- (void)setScopedUserID:(id)arg0;
- (id /* block */)carrierMessageBlock;
- (void)setCarrierMessageBlock:(id /* block */)arg0;
- (void)setStopWriteToDiskWhenUnhit:(BOOL)arg0;
- (void)setCustomDataQueue:(id)arg0;
- (BOOL)ttMonitorSampleOptEnable;
- (void)setTtMonitorSampleOptEnable:(BOOL)arg0;
- (void)setPerformanceLocalMaxStoreSize:(unsigned long long)arg0;
- (void)setTraceLocalMaxStoreSize:(unsigned long long)arg0;
- (id)reportHeaderParams;
- (id)reportCommonParams;
- (BOOL)enableBackgroundUpload;
- (void)tokamak_setCustomFilterValue:(id)arg0 forKey:(id)arg1;
- (void)tokamak_removeCustomFilterKey:(id)arg0;
- (void)setAppName:(id)arg0;
- (id)appName;
- (id)userID;
- (id)channel;
- (id)init;
- (void)setAppID:(id)arg0;
- (id)userName;
- (void)setDeviceID:(id)arg0;
- (void)setFilters:(id)arg0;
- (void).cxx_destruct;
- (void)setSessionID:(id)arg0;
- (id)filters;
- (id)deviceID;
- (void)setChannel:(id)arg0;
- (id)sessionID;
- (void)setUserID:(id)arg0;
- (void)setUserName:(id)arg0;
- (id)customHeader;
- (id)installID;
- (id)appID;
- (id)email;
- (void)setEmail:(id)arg0;
- (id)business;
- (void)setBusiness:(id)arg0;
- (void)setCustomHeader:(id)arg0;
- (id /* block */)transformBlock;
- (void)setTransformBlock:(id /* block */)arg0;
- (id)customContext;
- (id)buildInfo;
- (void)setBuildInfo:(id)arg0;

@end