//
//     Generated by private class-dump
//

@class HMDRecordStore, NSString, NSTimer, HMDTTMonitorUserInfo, HMDConfigManager, HMDPerformanceReporter, HMDHeimdallrConfig;

@interface HMDMonitorDataManager : NSObject <HMDNetworkProvider> {
    struct atomic_flag { _Atomic BOOL _Value; } _needCacheFlag;
    BOOL _needCache;
    BOOL _isUploading;
    HMDRecordStore *_store;
    HMDPerformanceReporter *_reporter;
    HMDConfigManager *_configManager;
    HMDTTMonitorUserInfo *_injectedInfo;
    NSString *_appID;
    id /* block */ _stopCacheBlock;
    NSTimer *_flushTimer;
    void *_configProviderPtr;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain) HMDPerformanceReporter *reporter;
@property (retain) HMDConfigManager *configManager;
@property (retain, nonatomic) NSTimer *flushTimer;
@property (nonatomic) BOOL isUploading;
@property (nonatomic) BOOL needCache;
@property (copy, nonatomic) NSString *appID;
@property (nonatomic) void *configProviderPtr;
@property (readonly, nonatomic) HMDHeimdallrConfig *config;
@property (retain, nonatomic) HMDRecordStore *store;
@property (retain, nonatomic) HMDTTMonitorUserInfo *injectedInfo;
@property (copy, nonatomic) id /* block */ stopCacheBlock;

- (void)updateConfig:(id)arg0;
- (id)initMonitorWithAppID:(id)arg0 injectedInfo:(id)arg1;
- (BOOL)needCache;
- (void)configDidUpdate:(id)arg0;
- (void)performanceReportSuccessed:(id)arg0;
- (id)reportHeaderParams;
- (id)reportCommonParams;
- (BOOL)enableBackgroundUpload;
- (void)setIsUploading:(BOOL)arg0;
- (void)setNeedCache:(BOOL)arg0;
- (void)syncReporterIfAvailable;
- (void)setInjectedInfo:(id)arg0;
- (void)syncConfigManagerIfAvailable;
- (BOOL)ifNeedCacheRecords;
- (void *)configProviderPtr;
- (id /* block */)stopCacheBlock;
- (void)setConfigProviderPtr:(void *)arg0;
- (void)setStopCacheBlock:(id /* block */)arg0;
- (id)injectedInfo;
- (BOOL)isMainAppMonitor;
- (void)setAppID:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (id)reporter;
- (id)store;
- (void)setStore:(id)arg0;
- (id)appID;
- (void)setReporter:(id)arg0;
- (id)configManager;
- (void)dealloc;
- (id)flushTimer;
- (BOOL)isUploading;
- (void)setFlushTimer:(id)arg0;
- (void)setConfigManager:(id)arg0;

@end
