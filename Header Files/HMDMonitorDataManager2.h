//
//     Generated by private class-dump
//

@class NSString, HMDTTMonitorUserInfo, HMDConfigManager, HMDHeimdallrConfig;

@interface HMDMonitorDataManager2 : NSObject <HMDNetworkProvider> {
    struct atomic_flag { _Atomic BOOL _Value; } _needCacheFlag;
    BOOL _needCache;
    HMDConfigManager *_configManager;
    HMDTTMonitorUserInfo *_injectedInfo;
    NSString *_appID;
    id /* block */ _stopCacheBlock;
    void *_configProviderPtr;
}

@property (retain) HMDConfigManager *configManager;
@property (nonatomic) BOOL needCache;
@property (copy, nonatomic) NSString *appID;
@property (nonatomic) void *configProviderPtr;
@property (readonly, nonatomic) HMDHeimdallrConfig *config;
@property (retain, nonatomic) HMDTTMonitorUserInfo *injectedInfo;
@property (copy, nonatomic) id /* block */ stopCacheBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateConfig:(id)arg0;
- (id)initMonitorWithAppID:(id)arg0 injectedInfo:(id)arg1;
- (BOOL)needCache;
- (void)configDidUpdate:(id)arg0;
- (id)reportHeaderParams;
- (id)reportCommonParams;
- (BOOL)enableBackgroundUpload;
- (void)setNeedCache:(BOOL)arg0;
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
- (id)appID;
- (id)configManager;
- (void)dealloc;
- (void)setConfigManager:(id)arg0;

@end