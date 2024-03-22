//
//     Generated by private class-dump
//

@class HMDConfigFetcher, NSString, HMDConfigStore;
@protocol HMDConfigFetchResource, HMDConfigDataProcess, HMDConfigHostProvider;

@interface HMDConfigManager : NSObject <HMDConfigDataProcessDelegate, HMDConfigDataProcessDataSource, HMDConfigHostProviderDataSource> {
    BOOL _enablePriorityInversionProtection;
    BOOL _shouldForceRefreshConfigOnce;
    HMDConfigStore *_store;
    id<HMDConfigFetchResource> _fetchResource;
    HMDConfigFetcher *_fetcher;
    id<HMDConfigDataProcess> _dataProcessor;
    id<HMDConfigHostProvider> _provider;
}

@property (retain, nonatomic) HMDConfigStore *store;
@property (retain, nonatomic) id<HMDConfigFetchResource> fetchResource;
@property (retain, nonatomic) HMDConfigFetcher *fetcher;
@property (retain, nonatomic) id<HMDConfigDataProcess> dataProcessor;
@property (retain, nonatomic) id<HMDConfigHostProvider> provider;
@property (nonatomic) BOOL enablePriorityInversionProtection;
@property (readonly) BOOL configFromDefaultDictionary;
@property (readonly) BOOL firstFetchingCompleted;
@property (nonatomic) BOOL shouldForceRefreshConfigOnce;
@property (readonly, copy, nonatomic) NSString *appID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultConfigurationDictionary;
+ (id)sharedInstance;

- (void)setShouldForceRefreshConfigOnce:(BOOL)arg0;
- (id)configPathWithAppID:(id)arg0;
- (void)setEnablePriorityInversionProtection:(BOOL)arg0;
- (void)setupAsyncWithDefaultInfo:(BOOL)arg0;
- (id)remoteConfigWithAppID:(id)arg0;
- (BOOL)configFromDefaultDictionary;
- (void)setUpdateInterval:(double)arg0 withAppID:(id)arg1;
- (void)asyncFetchRemoteConfig:(BOOL)arg0;
- (BOOL)enablePriorityInversionProtection;
- (void)dataProcessorFinishProcessResponseData:(id)arg0 configs:(id)arg1 updateAppIDs:(id)arg2;
- (void)setDataProcessor:(id)arg0;
- (id)dataProcessor;
- (BOOL)needForceRefreshSettings:(id)arg0;
- (id)mainConfig;
- (id)standardizeHost:(id)arg0;
- (void)startFetchSettings:(BOOL)arg0;
- (void)_maybeFetchSDKRemoteConfig:(id)arg0;
- (void)networkSchedule;
- (void)_asyncFetchRemoteConfigImmediately:(BOOL)arg0;
- (void)_dealResponseFinishWithConfigs:(id)arg0 updateAppIDs:(id)arg1;
- (BOOL)shouldForceRefreshConfigOnce;
- (id)fetchResource;
- (void)setFetchResource:(id)arg0;
- (void)addProvider:(id)arg0 forAppID:(id)arg1;
- (void)removeProvider:(void *)arg0 forAppID:(id)arg1;
- (BOOL)firstFetchingCompleted;
- (void)setProvider:(id)arg0;
- (id)init;
- (id)provider;
- (void).cxx_destruct;
- (id)store;
- (void)setStore:(id)arg0;
- (id)appID;
- (void)dealloc;
- (id)fetcher;
- (void)setFetcher:(id)arg0;

@end