//
//     Generated by private class-dump
//

@class NSString, NSMutableSet, NSDictionary;

@interface IESEffectConfig : NSObject {
    BOOL _enableAutoCleanCache;
    BOOL _enableDiskCacheCleanOptimize;
    BOOL _downloadOnlineEnviromentModel;
    BOOL _enableInsertFrontDownloadEffect;
    BOOL _enableEffectAlgorithmAsyncDownload;
    NSString *_deviceIdentifier;
    NSString *_osVersion;
    NSString *_appID;
    NSString *_businessID;
    NSString *_bundleIdentifier;
    NSString *_appName;
    NSString *_appVersion;
    NSString *_effectSDKVersion;
    NSString *_channel;
    NSString *_domain;
    NSString *_region;
    NSString *_rootDirectory;
    id /* block */ _networkParametersBlock;
    NSString *_effectSDKResourceBundlePath;
    unsigned long long _effectManifestQuota;
    unsigned long long _effectsDirectoryQuota;
    unsigned long long _algorithmsDirectoryQuota;
    unsigned long long _tmpDirectoryQuota;
    unsigned long long _backgroundCacheCleanIntervalDays;
    unsigned long long _effectCacheReservedThreshold;
    NSDictionary *_commonParameters;
    NSString *_fetchURLFromOIDDomain;
    long long _downloadPauseFileThreshold;
    NSMutableSet *_ignoreBuiltinModelNameList;
}

@property (retain, nonatomic) NSMutableSet *ignoreBuiltinModelNameList;
@property (copy, nonatomic) NSString *deviceIdentifier;
@property (copy, nonatomic) NSString *osVersion;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *businessID;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSString *effectSDKVersion;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSString *region;
@property (copy, nonatomic) NSString *rootDirectory;
@property (copy, nonatomic) id /* block */ networkParametersBlock;
@property (nonatomic) BOOL enableAutoCleanCache;
@property (copy, nonatomic) NSString *effectSDKResourceBundlePath;
@property (readonly, copy, nonatomic) NSDictionary *effectSDKResourceBundleConfig;
@property (readonly, nonatomic) NSString *effectManifestPath;
@property (nonatomic) unsigned long long effectManifestQuota;
@property (readonly, nonatomic) NSString *effectsDirectory;
@property (nonatomic) unsigned long long effectsDirectoryQuota;
@property (readonly, nonatomic) NSString *algorithmsDirectory;
@property (nonatomic) unsigned long long algorithmsDirectoryQuota;
@property (readonly, nonatomic) NSString *tmpDirectory;
@property (nonatomic) unsigned long long tmpDirectoryQuota;
@property (nonatomic) BOOL enableDiskCacheCleanOptimize;
@property (nonatomic) unsigned long long backgroundCacheCleanIntervalDays;
@property (nonatomic) unsigned long long effectCacheReservedThreshold;
@property (readonly, nonatomic) NSDictionary *commonParameters;
@property (nonatomic) BOOL downloadOnlineEnviromentModel;
@property (nonatomic) BOOL enableInsertFrontDownloadEffect;
@property (nonatomic) BOOL enableEffectAlgorithmAsyncDownload;
@property (copy, nonatomic) NSString *fetchURLFromOIDDomain;
@property (nonatomic) long long downloadPauseFileThreshold;

+ (id)devicePlatform;
+ (void)setDevicePlatform:(id)arg0;

- (id)effectSDKVersion;
- (void)setRootDirectory:(id)arg0;
- (id)commonParameters;
- (void)setEffectSDKVersion:(id)arg0;
- (id)algorithmsDirectory;
- (id)effectsDirectory;
- (id /* block */)networkParametersBlock;
- (id)effectSDKResourceBundlePath;
- (unsigned long long)backgroundCacheCleanIntervalDays;
- (id)ignoreBuiltinModelNameList;
- (id)effectManifestPath;
- (id)commonParametersWithURLString:(id)arg0;
- (id)effectSDKResourceBundleConfig;
- (BOOL)checkLastCleanTimeHasExpired;
- (void)updateLastCleanTime;
- (void)updateIgnoreBuiltinModelNameList:(id)arg0;
- (BOOL)shouldBuiltinModelNameBeIgnored:(id)arg0;
- (void)setNetworkParametersBlock:(id /* block */)arg0;
- (BOOL)enableAutoCleanCache;
- (void)setEnableAutoCleanCache:(BOOL)arg0;
- (void)setEffectSDKResourceBundlePath:(id)arg0;
- (unsigned long long)effectManifestQuota;
- (void)setEffectManifestQuota:(unsigned long long)arg0;
- (unsigned long long)effectsDirectoryQuota;
- (void)setEffectsDirectoryQuota:(unsigned long long)arg0;
- (unsigned long long)algorithmsDirectoryQuota;
- (void)setAlgorithmsDirectoryQuota:(unsigned long long)arg0;
- (unsigned long long)tmpDirectoryQuota;
- (void)setTmpDirectoryQuota:(unsigned long long)arg0;
- (BOOL)enableDiskCacheCleanOptimize;
- (void)setEnableDiskCacheCleanOptimize:(BOOL)arg0;
- (void)setBackgroundCacheCleanIntervalDays:(unsigned long long)arg0;
- (unsigned long long)effectCacheReservedThreshold;
- (void)setEffectCacheReservedThreshold:(unsigned long long)arg0;
- (BOOL)downloadOnlineEnviromentModel;
- (void)setDownloadOnlineEnviromentModel:(BOOL)arg0;
- (BOOL)enableInsertFrontDownloadEffect;
- (void)setEnableInsertFrontDownloadEffect:(BOOL)arg0;
- (BOOL)enableEffectAlgorithmAsyncDownload;
- (void)setEnableEffectAlgorithmAsyncDownload:(BOOL)arg0;
- (id)fetchURLFromOIDDomain;
- (void)setFetchURLFromOIDDomain:(id)arg0;
- (long long)downloadPauseFileThreshold;
- (void)setDownloadPauseFileThreshold:(long long)arg0;
- (void)setIgnoreBuiltinModelNameList:(id)arg0;
- (void)setAppName:(id)arg0;
- (id)appName;
- (id)tmpDirectory;
- (id)region;
- (id)channel;
- (id)init;
- (void)setAppID:(id)arg0;
- (void)setRegion:(id)arg0;
- (id)osVersion;
- (void)setAppVersion:(id)arg0;
- (void).cxx_destruct;
- (void)setChannel:(id)arg0;
- (id)bundleIdentifier;
- (void)setDeviceIdentifier:(id)arg0;
- (void)setBundleIdentifier:(id)arg0;
- (id)appVersion;
- (id)rootDirectory;
- (id)domain;
- (id)appID;
- (id)businessID;
- (void)setBusinessID:(id)arg0;
- (void)setOsVersion:(id)arg0;
- (id)deviceIdentifier;
- (void)setDomain:(id)arg0;

@end