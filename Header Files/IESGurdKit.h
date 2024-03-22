//
//     Generated by private class-dump
//

@class NSDictionary, NSString, NSMutableDictionary;
@protocol IESGurdNetworkDelegate, IESGurdAppLogDelegate;

@interface IESGurdKit : NSObject {
    BOOL _autoRequestEnable;
    BOOL _isUnitTest;
    NSMutableDictionary *_onDemandExperimentList;
    NSMutableDictionary *_ondemandList;
    NSMutableDictionary *_lowStorageWhiteList;
    NSMutableDictionary *_sensitiveStorageBlockList;
    NSString *_appId;
    NSString *_appVersion;
    NSString *_deviceID;
    id /* block */ _getDeviceID;
    NSString *_domain;
    NSString *_schema;
    long long _env;
    id<IESGurdNetworkDelegate> _networkDelegate;
    id<IESGurdAppLogDelegate> _appLogDelegate;
    id /* block */ _requestHeaderFieldBlock;
    NSMutableDictionary *_lockChannels;
}

@property (class, nonatomic, getter=isSettingsEnable) BOOL settingsEnable;
@property (class, nonatomic, getter=isThrottleEnabled) BOOL throttleEnabled;
@property (class, nonatomic, getter=isRetryEnabled) BOOL retryEnabled;
@property (class, nonatomic, getter=isPollingEnabled) BOOL pollingEnabled;
@property (class, nonatomic) BOOL enableDownload;
@property (class, nonatomic) BOOL enableMetadataIndexLog;
@property (class, nonatomic) BOOL enableEncrypt;
@property (class, nonatomic) BOOL enableOnDemand;
@property (class, nonatomic) BOOL blockUpdateByRequestBlocklist;
@property (class, nonatomic) long long monitorFlushCount;
@property (class, nonatomic) BOOL clearExpiredCacheEnabled;
@property (class, copy, nonatomic) NSDictionary *expiredTargetGroups;
@property (class, copy, nonatomic) NSDictionary *expiredTargetChannels;
@property (class, nonatomic) int ondemandExperimentType;
@property (class, nonatomic) BOOL ondemandListEnable;
@property (class, nonatomic) int lowStorageThreshold;
@property (class, nonatomic) int sensitiveStorageThreshold;
@property (class, nonatomic) long long env;
@property (class) BOOL enable;
@property (class, copy, nonatomic) NSString *deviceID;
@property (class, readonly, copy, nonatomic) NSString *appId;
@property (class, readonly, copy, nonatomic) NSString *appVersion;
@property (class, readonly, copy, nonatomic) NSDictionary *clientCommonParams;
@property (class, copy, nonatomic) id /* block */ getDeviceID;
@property (class, copy, nonatomic) NSString *platformDomain;
@property (class, nonatomic, getter=isEventTraceEnabled) BOOL eventTraceEnabled;
@property (class, retain, nonatomic) id<IESGurdNetworkDelegate> networkDelegate;
@property (class, retain, nonatomic) id<IESGurdAppLogDelegate> appLogDelegate;
@property (class, copy, nonatomic) NSDictionary *prefetchChannels;
@property (class, nonatomic) BOOL enableTLBRequest;

@property (retain, nonatomic) NSMutableDictionary *onDemandExperimentList;
@property (retain, nonatomic) NSMutableDictionary *ondemandList;
@property (retain, nonatomic) NSMutableDictionary *lowStorageWhiteList;
@property (retain, nonatomic) NSMutableDictionary *sensitiveStorageBlockList;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSString *deviceID;
@property (copy, nonatomic) id /* block */ getDeviceID;
@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) long long env;
@property (retain, nonatomic) id<IESGurdNetworkDelegate> networkDelegate;
@property (retain, nonatomic) id<IESGurdAppLogDelegate> appLogDelegate;
@property (copy, nonatomic) id /* block */ requestHeaderFieldBlock;
@property (retain, nonatomic) NSMutableDictionary *lockChannels;
@property (nonatomic) BOOL autoRequestEnable;
@property (nonatomic) BOOL isUnitTest;

+ (long long)env;
+ (void)registerAccessKey:(id)arg0;
+ (void)registerAccessKey:(id)arg0 SDKVersion:(id)arg1;
+ (BOOL)hasCacheForPath:(id)arg0 accessKey:(id)arg1 channel:(id)arg2;
+ (id)prefetchDataForPath:(id)arg0 accessKey:(id)arg1 channel:(id)arg2;
+ (id)dataForPath:(id)arg0 accessKey:(id)arg1 channel:(id)arg2;
+ (void)asyncGetDataForPath:(id)arg0 accessKey:(id)arg1 channel:(id)arg2 completion:(id /* block */)arg3;
+ (unsigned long long)packageVersionForAccessKey:(id)arg0 channel:(id)arg1;
+ (long long)cacheStatusForAccessKey:(id)arg0 channel:(id)arg1;
+ (long long)fileTypeForAccessKey:(id)arg0 channel:(id)arg1;
+ (id)lazyResourcesInfoWithAccesskey:(id)arg0 channel:(id)arg1;
+ (void)removeObserverWithIdentity:(id)arg0;
+ (void)cancelDownloadWithAccesskey:(id)arg0 channel:(id)arg1;
+ (void)activeAllInternalPackagesWithBundleName:(id)arg0 completion:(id /* block */)arg1;
+ (void)activeInternalPackageWithBundleName:(id)arg0 accessKey:(id)arg1 channel:(id)arg2 completion:(id /* block */)arg3;
+ (id)internalRootDirectoryForAccessKey:(id)arg0 channel:(id)arg1;
+ (void)setCacheConfiguration:(id)arg0 forAccessKey:(id)arg1;
+ (void)clearCacheExceptWhitelist:(BOOL)arg0;
+ (void)addCacheWhitelistWithAccessKey:(id)arg0 channels:(id)arg1;
+ (long long)getClearCacheSize:(int)arg0;
+ (void)clearExpiredCache:(int)arg0 cleanType:(int)arg1 completion:(id /* block */)arg2;
+ (void)clearCacheForAccessKey:(id)arg0 channel:(id)arg1;
+ (void)registerEventDelegate:(id)arg0;
+ (void)setLowStorageThreshold:(int)arg0;
+ (void)setEnableDownload:(BOOL)arg0;
+ (BOOL)enableDownload;
+ (void)addRequestBlocklistGroupNames:(id)arg0 forAccessKey:(id)arg1;
+ (void)fetchSettings;
+ (void)syncResourcesWithParamsBlock:(id /* block */)arg0 completion:(id /* block */)arg1;
+ (void)setupWithAppId:(id)arg0 appVersion:(id)arg1 cacheRootDirectory:(id)arg2;
+ (id)rootDirForAccessKey:(id)arg0 channel:(id)arg1;
+ (void)addCustomParamsForAccessKey:(id)arg0 customParams:(id)arg1;
+ (id)cacheRootDir;
+ (void)loadResourceForAccessKey:(id)arg0 channel:(id)arg1 path:(id)arg2 completion:(id /* block */)arg3;
+ (BOOL)isSettingsEnable;
+ (void)setEnv:(long long)arg0;
+ (id)activeChannelsForAccessKey:(id)arg0;
+ (void)setRequestHeaderFieldBlock:(id /* block */)arg0;
+ (BOOL)enableEncrypt;
+ (void)setEnableEncrypt:(BOOL)arg0;
+ (long long)monitorFlushCount;
+ (void)setMonitorFlushCount:(long long)arg0;
+ (void)clearCache:(BOOL)arg0;
+ (void)setBlockUpdateByRequestBlocklist:(BOOL)arg0;
+ (void)setEnableOnDemand:(BOOL)arg0;
+ (void)setEnableTLBRequest:(BOOL)arg0;
+ (void)setExpiredTargetGroups:(id)arg0;
+ (void)setExpiredTargetChannels:(id)arg0;
+ (void)addRequestBlocklistChannels:(id)arg0 forAccessKey:(id)arg1;
+ (void)setOndemandExperimentType:(int)arg0;
+ (void)addOnDemandExperimentList:(id)arg0 channels:(id)arg1;
+ (void)setSensitiveStorageThreshold:(int)arg0;
+ (void)addSensitiveStorageBlockList:(id)arg0 groups:(id)arg1 channels:(id)arg2;
+ (void)addLowStorageWhiteList:(id)arg0 groups:(id)arg1 channels:(id)arg2;
+ (void)setRetryEnabled:(BOOL)arg0;
+ (void)setClearExpiredCacheEnabled:(BOOL)arg0;
+ (void)addGurdLogDelegate:(id)arg0;
+ (id)platformDomain;
+ (void)setGetDeviceID:(id /* block */)arg0;
+ (void)setPlatformDomain:(id)arg0;
+ (void)setPrefetchChannels:(id)arg0;
+ (id)progressObjectForIdentity:(id)arg0;
+ (id)rootDirForAccessKey:(id)arg0;
+ (void)observeDownloadProgressWithAccessKey:(id)arg0 channel:(id)arg1 progressBlock:(id /* block */)arg2;
+ (void)addOnDemandList:(id)arg0 groups:(id)arg1 channels:(id)arg2;
+ (void)setOndemandListEnable:(BOOL)arg0;
+ (void)enqueueSyncResourcesTaskWithParamsBlock:(id /* block */)arg0 completion:(id /* block */)arg1;
+ (void)registerAccessKey:(id)arg0 channels:(id)arg1;
+ (id)settingsResponse;
+ (id)prefetchChannels;
+ (void)syncResourcesWithAccessKey:(id)arg0 channels:(id)arg1 completion:(id /* block */)arg2;
+ (void)syncResourcesWithAccessKey:(id)arg0 channels:(id)arg1 resourceVersion:(id)arg2 completion:(id /* block */)arg3;
+ (id)offlineDataForPath:(id)arg0 accessKey:(id)arg1 channel:(id)arg2;
+ (id)allRegisterModels;
+ (void)applyInactivePackageForAccessKey:(id)arg0 channel:(id)arg1 completion:(id /* block */)arg2;
+ (void)lockChannel:(id)arg0 channel:(id)arg1;
+ (BOOL)isBlocklistChannel:(id)arg0 channel:(id)arg1;
+ (void)unlockChannel:(id)arg0 channel:(id)arg1;
+ (void)unregiserEventDelegate:(id)arg0;
+ (BOOL)isThrottleEnabled;
+ (BOOL)enableOnDemand;
+ (void)setAppLogDelegate:(id)arg0;
+ (id)appLogDelegate;
+ (void)requestWithTLBProbeResult;
+ (void)loadResourceWithParamsBlock:(id /* block */)arg0 completion:(id /* block */)arg1;
+ (id)dataForPath:(id)arg0 accessKey:(id)arg1 channel:(id)arg2 options:(unsigned long long)arg3;
+ (void)cleanSettingsCache;
+ (void)cleanBlacklistCache;
+ (long long)getClearCacheSizeWithAccesskey:(id)arg0 expireAge:(int)arg1;
+ (void)addChannelsWhitelist:(id)arg0 forAccessKey:(id)arg1;
+ (void)setEnableWhenReview:(BOOL)arg0;
+ (id)clientCommonParams;
+ (BOOL)enableTLBRequest;
+ (long long)setupTimestamp;
+ (void)removeGurdLogDelegate:(id)arg0;
+ (BOOL)isChannelLocked:(id)arg0 channel:(id)arg1;
+ (void)applyInactivePackages:(id /* block */)arg0;
+ (void)downloadResourcesWithAccessKey:(id)arg0 channels:(id)arg1 completion:(id /* block */)arg2;
+ (void)downloadResourcesWithParamsBlock:(id /* block */)arg0 completion:(id /* block */)arg1;
+ (void)syncResourcesWithAccessKey:(id)arg0 channel:(id)arg1 version:(unsigned long long)arg2 completion:(id /* block */)arg3;
+ (void)clearCacheExceptWhitelist;
+ (void)clearExpiredCacheWithAccesskey:(id)arg0 expireAge:(int)arg1 cleanType:(int)arg2 completion:(id /* block */)arg3;
+ (id)getPackageExtra:(id)arg0 channel:(id)arg1;
+ (BOOL)isPollingEnabled;
+ (void)setPollingEnabled:(BOOL)arg0;
+ (void)setThrottleEnabled:(BOOL)arg0;
+ (BOOL)blockUpdateByRequestBlocklist;
+ (BOOL)checkNeedUpdateByStorage:(id)arg0 group:(id)arg1 channel:(id)arg2;
+ (BOOL)clearExpiredCacheEnabled;
+ (void)clearInternalPackageForAccessKey:(id)arg0 channel:(id)arg1;
+ (void)setSettingsEnable:(BOOL)arg0;
+ (BOOL)isRetryEnabled;
+ (BOOL)enableMetadataIndexLog;
+ (void)setEnableMetadataIndexLog:(BOOL)arg0;
+ (id)expiredTargetGroups;
+ (id)expiredTargetChannels;
+ (void)syncResourcesWithAccessKey:(id)arg0 channels:(id)arg1 resourceVersion:(id)arg2 forceSync:(BOOL)arg3 completion:(id /* block */)arg4;
+ (void)activeAllInternalPackagesWithBundleName:(id)arg0 completion:(id /* block */)arg1 curThreadCallback:(BOOL)arg2;
+ (void)activeInternalPackageWithBundleName:(id)arg0 shouldActiveBlock:(id /* block */)arg1 completion:(id /* block */)arg2 curThreadCallback:(BOOL)arg3;
+ (BOOL)preparePackageDirectoryWithAccessKey:(id)arg0 channel:(id)arg1;
+ (void)unzipInternalPackageWithMetaInfo:(id)arg0 completion:(id /* block */)arg1;
+ (void)copyInternalPackageWithMetaInfo:(id)arg0 completion:(id /* block */)arg1;
+ (void)activeAllInternalPackagesInMainBundleWithCompletion:(id /* block */)arg0;
+ (void)activeAllInternalPackagesInMainBundleWithCompletion:(id /* block */)arg0 curThreadCallback:(BOOL)arg1;
+ (void)activeInternalPackageInMainBundleWithAccessKey:(id)arg0 channel:(id)arg1 completion:(id /* block */)arg2;
+ (int)ondemandExperimentType;
+ (BOOL)ondemandListEnable;
+ (int)getOnDemandExperimentType:(id)arg0 channel:(id)arg1;
+ (id)getOnDemandExperimentChannels:(id)arg0;
+ (BOOL)checkOnDemandList:(id)arg0 group:(id)arg1 channel:(id)arg2;
+ (void)removeRequestBlocklistGroupNames:(id)arg0 forAccessKey:(id)arg1;
+ (void)removeRequestBlocklistChannels:(id)arg0 forAccessKey:(id)arg1;
+ (id)settingsResponseDictionary;
+ (int)sensitiveStorageThreshold;
+ (BOOL)enable;
+ (void)setAppId:(id)arg0;
+ (id)sharedInstance;
+ (void)setDeviceID:(id)arg0;
+ (id)deviceID;
+ (void)clearCache;
+ (id)appVersion;
+ (void)setEnable:(BOOL)arg0;
+ (id)appId;
+ (int)lowStorageThreshold;
+ (BOOL)didSetup;
+ (id)networkDelegate;
+ (void)setNetworkDelegate:(id)arg0;
+ (id /* block */)getDeviceID;

- (long long)env;
- (void)setEnv:(long long)arg0;
- (void)setRequestHeaderFieldBlock:(id /* block */)arg0;
- (id /* block */)requestHeaderFieldBlock;
- (void)setGetDeviceID:(id /* block */)arg0;
- (void)setAutoRequestEnable:(BOOL)arg0;
- (void)setLockChannels:(id)arg0;
- (void)setLowStorageWhiteList:(id)arg0;
- (void)setSensitiveStorageBlockList:(id)arg0;
- (void)setOnDemandExperimentList:(id)arg0;
- (void)setOndemandList:(id)arg0;
- (void)setAppLogDelegate:(id)arg0;
- (id)appLogDelegate;
- (id)lockChannels;
- (id)onDemandExperimentList;
- (id)ondemandList;
- (id)lowStorageWhiteList;
- (id)sensitiveStorageBlockList;
- (BOOL)autoRequestEnable;
- (BOOL)isUnitTest;
- (void)setIsUnitTest:(BOOL)arg0;
- (void)setSchema:(id)arg0;
- (void)setAppId:(id)arg0;
- (void)setDeviceID:(id)arg0;
- (void)setAppVersion:(id)arg0;
- (void).cxx_destruct;
- (id)deviceID;
- (id)appVersion;
- (id)domain;
- (id)appId;
- (id)schema;
- (void)setDomain:(id)arg0;
- (id)networkDelegate;
- (void)setNetworkDelegate:(id)arg0;
- (id /* block */)getDeviceID;

@end