//
//     Generated by private class-dump
//

@class NSString;

@interface AWEGurdServiceImpl : NSObject <AWEGurdService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)clearAllCache;
- (void)clearAllCache:(BOOL)arg0;
- (unsigned long long)env;
- (id)gurdVersion;
- (BOOL)isGurdRequestEnable;
- (void)registerAccessKey:(id)arg0;
- (void)registerAccessKey:(id)arg0 SDKVersion:(id)arg1;
- (void)registerCustomParamKey:(id)arg0 getValueBlock:(id /* block */)arg1 forAccessKey:(id)arg2;
- (id)rootDirectoryForAccessKey:(id)arg0;
- (id)rootDirectoryForAccessKey:(id)arg0 channel:(id)arg1;
- (BOOL)hasCacheForPath:(id)arg0 accessKey:(id)arg1 channel:(id)arg2;
- (id)prefetchDataForPath:(id)arg0 accessKey:(id)arg1 channel:(id)arg2;
- (id)dataForPath:(id)arg0 accessKey:(id)arg1 channel:(id)arg2;
- (void)asyncGetDataForPath:(id)arg0 accessKey:(id)arg1 channel:(id)arg2 completion:(id /* block */)arg3;
- (unsigned long long)packageVersionForAccessKey:(id)arg0 channel:(id)arg1;
- (long long)cacheStatusForAccessKey:(id)arg0 channel:(id)arg1;
- (long long)fileTypeForAccessKey:(id)arg0 channel:(id)arg1;
- (id)lazyResourcesInfoWithAccesskey:(id)arg0 channel:(id)arg1;
- (void)enableGurdRequest;
- (void)syncResourcesIfNeeded;
- (BOOL)enqueueSyncResourcesTask:(id)arg0;
- (void)observeAccessKey:(id)arg0 channel:(id)arg1 downloadProgressBlock:(id /* block */)arg2;
- (void)removeObserverWithIdentity:(id)arg0;
- (void)cancelDownloadWithAccesskey:(id)arg0 channel:(id)arg1;
- (void)activeAllInternalPackagesWithBundleName:(id)arg0 completion:(id /* block */)arg1;
- (void)activeInternalPackageWithBundleName:(id)arg0 accessKey:(id)arg1 channel:(id)arg2 completion:(id /* block */)arg3;
- (id)internalRootDirectoryForAccessKey:(id)arg0 channel:(id)arg1;
- (void)setCacheConfiguration:(id)arg0 forAccessKey:(id)arg1;
- (void)clearCacheExceptWhitelist:(BOOL)arg0;
- (void)addCacheWhitelistWithAccessKey:(id)arg0 channels:(id)arg1;
- (long long)getClearCacheSize:(int)arg0;
- (void)clearExpiredCache:(int)arg0 cleanType:(int)arg1 completion:(id /* block */)arg2;
- (void)clearCacheForAccessKey:(id)arg0 channel:(id)arg1;
- (void)registerEventDelegate:(id)arg0;
- (void)setLowStorageThreshold:(int)arg0;
- (void)setEnableDownload:(BOOL)arg0;
- (BOOL)enableDownload;
- (void)addOnDemandResourceWithAccessKey:(id)arg0 groups:(id)arg1 channels:(id)arg2;
- (void)ondemandListEnable:(BOOL)arg0;
- (void)addRequestBlocklistGroupNames:(id)arg0 forAccessKey:(id)arg1;

@end
