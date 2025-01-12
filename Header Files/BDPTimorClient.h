//
//     Generated by private class-dump
//

@class BDPRuntimeGlobalConfiguration, BDPI18NConfiguration, BDPAppearanceConfiguration;

@interface BDPTimorClient : NSObject

@property (readonly, nonatomic) BDPAppearanceConfiguration *appearanceConfiguration;
@property (readonly, nonatomic) BDPRuntimeGlobalConfiguration *runtimeGlobalConfiguration;
@property (readonly, nonatomic) BDPI18NConfiguration *I18NConfiguration;

+ (void)bootstrapLoad;
+ (void)clearDiskWithCompletion:(id /* block */)arg0 isAuto:(BOOL)arg1;
+ (void)clearDiskExtremelyWithCompletion:(id /* block */)arg0;
+ (long long)calculateCleanCacheSizeWithTriggerType:(long long)arg0 cleanLevel:(long long)arg1;
+ (void)notifyHostEventDidChangeWithName:(id)arg0 data:(id)arg1;
+ (void)notifyHostEventDidChangeWithWithAppID:(id)arg0 eventName:(id)arg1 data:(id)arg2;
+ (void)addTimorEventListener:(id)arg0 subscribeEvent:(id)arg1;
+ (void)removeTimorEventListener:(id)arg0;
+ (void)calculateSizeWithCompletion:(id /* block */)arg0;
+ (BOOL)localLibVersionSupportNativeGame;
+ (BOOL)autoUpdateDataAfterClientInit;
+ (id)urlsOnDiskPaths;
+ (id)sharedClient;

- (void)prepareTimorWithCaller:(id)arg0;
- (id)containerControllerWithURL:(id)arg0;
- (void)clearAllWarmBootCache;
- (void)clearAllUserCache;
- (void)preloadAppsWithInfos:(id)arg0;
- (BOOL)openWithURL:(id)arg0 openStyle:(long long)arg1;
- (void)updateSettingsWithSyncData:(id)arg0;
- (BOOL)clearWarmBootCacheOfAppID:(id)arg0;
- (id)runtimeGlobalConfiguration;
- (void)updateRelativeDataIfNeed;
- (void)prepareTimor;
- (id)appearanceConfiguration;
- (void)preloadAppWithInfo:(id)arg0;
- (BOOL)openWithLaunchParam:(id)arg0;
- (id)I18NConfiguration;
- (void)clearAllWarmBootCacheWithType:(long long)arg0;
- (void)releasePreloadResourceWhenReceiveHostMemoryNotificationWithMemoryLevel:(long long)arg0;
- (void)updateServerConfiguration;
- (BOOL)clearWarmBootCacheOfAppID:(id)arg0 versionType:(id)arg1;
- (void)prepareAppContainer;
- (BOOL)clearWarmBootCacheOfSchemaURL:(id)arg0;
- (void)registerCompletionHandlerForAppPreload:(id /* block */)arg0;
- (id)usageRecordWithParameters:(id)arg0 update:(id /* block */)arg1;
- (void)removeUsageRecordApp:(id)arg0 completion:(id /* block */)arg1;
- (id)usageRecordWithUpdate:(id /* block */)arg0;
- (void)updateRelativeData;
- (BOOL)openWithURL:(id)arg0;

@end
