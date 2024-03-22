//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSArray;

@interface AVMDLDataLoaderConfigure : NSObject {
    BOOL _isEnableLocalDNSThreadOptimize;
    BOOL _isEnableDNSNoLockNotify;
    BOOL _isEnableReqWaitNetReachable;
    BOOL _isEnableNetworkChangeNotify;
    BOOL _isEnableMaxCacheAgeForAllDir;
    BOOL _isEnableCellularUp;
    BOOL _isEnableLoaderLogExtractUrls;
    BOOL _isEnableUnLimitHttpHeader;
    BOOL _isEnableHls;
    BOOL _nonBlockRangeMode;
    BOOL _isEnableMDL2;
    BOOL _ignoreTextSpeedTest;
    BOOL _isEnableOptimizeRange;
    BOOL _isEnableUseGroupId;
    BOOL _m3uTsKeyUseAbsoluteUrl;
    long long _maxCacheSize;
    long long _openTimeOut;
    long long _rwTimeOut;
    long long _tryCount;
    long long _preloadParallelNum;
    long long _isEnableExternDNS;
    long long _isEnableSoccketReuse;
    long long _socketIdleTimeout;
    long long _checksumLevel;
    long long _maxCacheAge;
    NSString *_cachDirectory;
    long long _isEnableLazyBufferpool;
    long long _ringBufferSize;
    long long _isEnableAuth;
    NSString *_downloadDir;
    NSString *_mdlExtensionOpts;
    NSString *_n80Config;
    long long _writeFileNotifyIntervalMS;
    long long _forbidByPassCookie;
    long long _enablePreconnect;
    long long _preconnectNum;
    long long _testSpeedVersion;
    long long _isEnableLoaderPreempt;
    long long _nextDownloadThreshold;
    long long _accessCheckLevel;
    long long _isEnableSessionReuse;
    long long _maxTlsVersion;
    long long _sessionTimeout;
    long long _maxIPV4Count;
    long long _maxIPV6Count;
    long long _isEnableNewBufferpool;
    long long _newBufferpoolBlockSize;
    long long _newBufferpoolResidentSize;
    long long _newBufferpoolGrowBlockCount;
    long long _isEnableAlog;
    long long _isEnableCacheReqRange;
    long long _isEnablePlayLog;
    long long _isAllowTryTheLastUrl;
    long long _isEnableFileExtendBuffer;
    long long _isEnableIOManager;
    long long _isEnableNetScheduler;
    long long _isNetSchedulerBlockAllNetErr;
    long long _netSchedulerBlockErrCount;
    long long _netSchedulerBlockDuration;
    long long _netSchedulerBlockHostErrIpCount;
    long long _connectPoolStragetyValue;
    long long _maxAliveHostNum;
    long long _maxSocketReuseCount;
    long long _fileExtendSizeKB;
    long long _isEnableFixCancelPreload;
    long long _isEnableEarlyData;
    NSString *_socketTrainingCenterConfigStr;
    NSString *_netSchedulerConfigStr;
    NSString *_dynamicPreconnectConfigStr;
    NSString *_temporaryOptStr;
    NSString *_fileBufferOptStr;
    NSString *_customUA;
    NSString *_vendorTestId;
    NSString *_vendorGroupId;
    NSDictionary *_cacheDirMaxCacheSize;
    long long _mUseNewSpeedTestForSingle;
    long long _socketRecvBufferSize;
    long long _maxFileMemCacheSize;
    long long _maxFileMemCacheNum;
    long long _loadMonitorTimeInternal;
    long long _loadMonitorMinAllowLoadSize;
    long long _loaderType;
    NSString *_appInfo;
    long long _isEnableUseOriginalUrl;
    long long _maxLoaderLogNum;
    long long _threadStackSizeLevel;
    long long _enableThreadPoolCheckIdle;
    long long _threadPoolIdleTTLSecond;
    long long _threadPoolMinCount;
    long long _nonBlockRnageMaxSizeKB;
    long long _enableFileMutexOptimize;
    long long _skipCdnUrlBeforeExpireSec;
    long long _preloadTraceIdRecordMaxCnt;
    long long _getCookieTokenLevel;
    long long _enableStorageModule;
    NSString *_stoStrategyConfig;
    long long _isEnablePcdnAuto;
    long long _isCloseLocalServer;
    long long _sessionCacheIntervalMs;
    long long _fileManagerIntervalMs;
    NSArray *_protectCacheDirsAvoidClean;
    NSString *_precisePreloadConfigStr;
}

@property (nonatomic) long long maxCacheSize;
@property (nonatomic) long long openTimeOut;
@property (nonatomic) long long rwTimeOut;
@property (nonatomic) long long tryCount;
@property (nonatomic) long long preloadParallelNum;
@property (nonatomic) long long isEnableExternDNS;
@property (nonatomic) long long isEnableSoccketReuse;
@property (nonatomic) long long socketIdleTimeout;
@property (nonatomic) long long checksumLevel;
@property (nonatomic) long long maxCacheAge;
@property (copy, nonatomic) NSString *cachDirectory;
@property (nonatomic) long long isEnableLazyBufferpool;
@property (nonatomic) long long ringBufferSize;
@property (nonatomic) long long isEnableAuth;
@property (copy, nonatomic) NSString *downloadDir;
@property (copy, nonatomic) NSString *mdlExtensionOpts;
@property (copy, nonatomic) NSString *n80Config;
@property (nonatomic) long long writeFileNotifyIntervalMS;
@property (nonatomic) long long forbidByPassCookie;
@property (nonatomic) long long enablePreconnect;
@property (nonatomic) long long preconnectNum;
@property (nonatomic) long long testSpeedVersion;
@property (nonatomic) long long isEnableLoaderPreempt;
@property (nonatomic) long long nextDownloadThreshold;
@property (nonatomic) long long accessCheckLevel;
@property (nonatomic) long long isEnableSessionReuse;
@property (nonatomic) long long maxTlsVersion;
@property (nonatomic) long long sessionTimeout;
@property (nonatomic) long long maxIPV4Count;
@property (nonatomic) long long maxIPV6Count;
@property (nonatomic) long long isEnableNewBufferpool;
@property (nonatomic) long long newBufferpoolBlockSize;
@property (nonatomic) long long newBufferpoolResidentSize;
@property (nonatomic) long long newBufferpoolGrowBlockCount;
@property (nonatomic) long long isEnableAlog;
@property (nonatomic) long long isEnableCacheReqRange;
@property (nonatomic) long long isEnablePlayLog;
@property (nonatomic) long long isAllowTryTheLastUrl;
@property (nonatomic) long long isEnableFileExtendBuffer;
@property (nonatomic) long long isEnableIOManager;
@property (nonatomic) long long isEnableNetScheduler;
@property (nonatomic) long long isNetSchedulerBlockAllNetErr;
@property (nonatomic) long long netSchedulerBlockErrCount;
@property (nonatomic) long long netSchedulerBlockDuration;
@property (nonatomic) long long netSchedulerBlockHostErrIpCount;
@property (nonatomic) BOOL isEnableLocalDNSThreadOptimize;
@property (nonatomic) long long connectPoolStragetyValue;
@property (nonatomic) long long maxAliveHostNum;
@property (nonatomic) long long maxSocketReuseCount;
@property (nonatomic) long long fileExtendSizeKB;
@property (nonatomic) long long isEnableFixCancelPreload;
@property (nonatomic) BOOL isEnableDNSNoLockNotify;
@property (nonatomic) long long isEnableEarlyData;
@property (copy, nonatomic) NSString *socketTrainingCenterConfigStr;
@property (copy, nonatomic) NSString *netSchedulerConfigStr;
@property (copy, nonatomic) NSString *dynamicPreconnectConfigStr;
@property (copy, nonatomic) NSString *temporaryOptStr;
@property (copy, nonatomic) NSString *fileBufferOptStr;
@property (copy, nonatomic) NSString *customUA;
@property (copy, nonatomic) NSString *vendorTestId;
@property (copy, nonatomic) NSString *vendorGroupId;
@property (copy, nonatomic) NSDictionary *cacheDirMaxCacheSize;
@property (nonatomic) long long mUseNewSpeedTestForSingle;
@property (nonatomic) long long socketRecvBufferSize;
@property (nonatomic) BOOL isEnableReqWaitNetReachable;
@property (nonatomic) BOOL isEnableNetworkChangeNotify;
@property (nonatomic) BOOL isEnableMaxCacheAgeForAllDir;
@property (nonatomic) long long maxFileMemCacheSize;
@property (nonatomic) long long maxFileMemCacheNum;
@property (nonatomic) BOOL isEnableCellularUp;
@property (nonatomic) long long loadMonitorTimeInternal;
@property (nonatomic) long long loadMonitorMinAllowLoadSize;
@property (nonatomic) long long loaderType;
@property (copy, nonatomic) NSString *appInfo;
@property (nonatomic) long long isEnableUseOriginalUrl;
@property (nonatomic) BOOL isEnableLoaderLogExtractUrls;
@property (nonatomic) long long maxLoaderLogNum;
@property (nonatomic) long long threadStackSizeLevel;
@property (nonatomic) BOOL isEnableUnLimitHttpHeader;
@property (nonatomic) long long enableThreadPoolCheckIdle;
@property (nonatomic) long long threadPoolIdleTTLSecond;
@property (nonatomic) long long threadPoolMinCount;
@property (nonatomic) BOOL isEnableHls;
@property (nonatomic) BOOL nonBlockRangeMode;
@property (nonatomic) long long nonBlockRnageMaxSizeKB;
@property (nonatomic) long long enableFileMutexOptimize;
@property (nonatomic) BOOL isEnableMDL2;
@property (nonatomic) long long skipCdnUrlBeforeExpireSec;
@property (nonatomic) long long preloadTraceIdRecordMaxCnt;
@property (nonatomic) BOOL ignoreTextSpeedTest;
@property (nonatomic) BOOL isEnableOptimizeRange;
@property (nonatomic) long long getCookieTokenLevel;
@property (nonatomic) BOOL isEnableUseGroupId;
@property (nonatomic) long long enableStorageModule;
@property (copy, nonatomic) NSString *stoStrategyConfig;
@property (nonatomic) long long isEnablePcdnAuto;
@property (nonatomic) long long isCloseLocalServer;
@property (nonatomic) long long sessionCacheIntervalMs;
@property (nonatomic) long long fileManagerIntervalMs;
@property (copy, nonatomic) NSArray *protectCacheDirsAvoidClean;
@property (copy, nonatomic) NSString *precisePreloadConfigStr;
@property (nonatomic) BOOL m3uTsKeyUseAbsoluteUrl;

+ (id)defaultConfigure;

- (id)cachDirectory;
- (void)setCachDirectory:(id)arg0;
- (void)setCustomUA:(id)arg0;
- (void)setPreloadParallelNum:(long long)arg0;
- (void)setSocketTrainingCenterConfigStr:(id)arg0;
- (void)setNetSchedulerConfigStr:(id)arg0;
- (id)cacheDirListStr;
- (id)protectCacheDirsStr;
- (long long)openTimeOut;
- (void)setOpenTimeOut:(long long)arg0;
- (long long)rwTimeOut;
- (void)setRwTimeOut:(long long)arg0;
- (long long)preloadParallelNum;
- (long long)isEnableExternDNS;
- (void)setIsEnableExternDNS:(long long)arg0;
- (long long)isEnableSoccketReuse;
- (void)setIsEnableSoccketReuse:(long long)arg0;
- (long long)socketIdleTimeout;
- (void)setSocketIdleTimeout:(long long)arg0;
- (long long)checksumLevel;
- (void)setChecksumLevel:(long long)arg0;
- (long long)isEnableLazyBufferpool;
- (void)setIsEnableLazyBufferpool:(long long)arg0;
- (void)setRingBufferSize:(long long)arg0;
- (long long)isEnableAuth;
- (void)setIsEnableAuth:(long long)arg0;
- (id)downloadDir;
- (void)setDownloadDir:(id)arg0;
- (id)mdlExtensionOpts;
- (void)setMdlExtensionOpts:(id)arg0;
- (id)n80Config;
- (void)setN80Config:(id)arg0;
- (long long)writeFileNotifyIntervalMS;
- (void)setWriteFileNotifyIntervalMS:(long long)arg0;
- (long long)forbidByPassCookie;
- (void)setForbidByPassCookie:(long long)arg0;
- (long long)enablePreconnect;
- (void)setEnablePreconnect:(long long)arg0;
- (long long)preconnectNum;
- (void)setPreconnectNum:(long long)arg0;
- (long long)testSpeedVersion;
- (void)setTestSpeedVersion:(long long)arg0;
- (long long)isEnableLoaderPreempt;
- (void)setIsEnableLoaderPreempt:(long long)arg0;
- (long long)nextDownloadThreshold;
- (void)setNextDownloadThreshold:(long long)arg0;
- (long long)accessCheckLevel;
- (void)setAccessCheckLevel:(long long)arg0;
- (long long)isEnableSessionReuse;
- (void)setIsEnableSessionReuse:(long long)arg0;
- (long long)maxTlsVersion;
- (void)setMaxTlsVersion:(long long)arg0;
- (long long)maxIPV4Count;
- (void)setMaxIPV4Count:(long long)arg0;
- (long long)maxIPV6Count;
- (void)setMaxIPV6Count:(long long)arg0;
- (long long)isEnableNewBufferpool;
- (void)setIsEnableNewBufferpool:(long long)arg0;
- (long long)newBufferpoolBlockSize;
- (void)setNewBufferpoolBlockSize:(long long)arg0;
- (long long)newBufferpoolResidentSize;
- (void)setNewBufferpoolResidentSize:(long long)arg0;
- (long long)newBufferpoolGrowBlockCount;
- (void)setNewBufferpoolGrowBlockCount:(long long)arg0;
- (long long)isEnableAlog;
- (void)setIsEnableAlog:(long long)arg0;
- (long long)isEnableCacheReqRange;
- (void)setIsEnableCacheReqRange:(long long)arg0;
- (long long)isEnablePlayLog;
- (void)setIsEnablePlayLog:(long long)arg0;
- (long long)isAllowTryTheLastUrl;
- (void)setIsAllowTryTheLastUrl:(long long)arg0;
- (long long)isEnableFileExtendBuffer;
- (void)setIsEnableFileExtendBuffer:(long long)arg0;
- (long long)isEnableIOManager;
- (void)setIsEnableIOManager:(long long)arg0;
- (long long)isEnableNetScheduler;
- (void)setIsEnableNetScheduler:(long long)arg0;
- (long long)isNetSchedulerBlockAllNetErr;
- (void)setIsNetSchedulerBlockAllNetErr:(long long)arg0;
- (long long)netSchedulerBlockErrCount;
- (void)setNetSchedulerBlockErrCount:(long long)arg0;
- (long long)netSchedulerBlockDuration;
- (void)setNetSchedulerBlockDuration:(long long)arg0;
- (long long)netSchedulerBlockHostErrIpCount;
- (void)setNetSchedulerBlockHostErrIpCount:(long long)arg0;
- (BOOL)isEnableLocalDNSThreadOptimize;
- (void)setIsEnableLocalDNSThreadOptimize:(BOOL)arg0;
- (long long)connectPoolStragetyValue;
- (void)setConnectPoolStragetyValue:(long long)arg0;
- (long long)maxAliveHostNum;
- (void)setMaxAliveHostNum:(long long)arg0;
- (long long)maxSocketReuseCount;
- (void)setMaxSocketReuseCount:(long long)arg0;
- (long long)fileExtendSizeKB;
- (void)setFileExtendSizeKB:(long long)arg0;
- (long long)isEnableFixCancelPreload;
- (void)setIsEnableFixCancelPreload:(long long)arg0;
- (BOOL)isEnableDNSNoLockNotify;
- (void)setIsEnableDNSNoLockNotify:(BOOL)arg0;
- (long long)isEnableEarlyData;
- (void)setIsEnableEarlyData:(long long)arg0;
- (id)socketTrainingCenterConfigStr;
- (id)netSchedulerConfigStr;
- (id)dynamicPreconnectConfigStr;
- (void)setDynamicPreconnectConfigStr:(id)arg0;
- (id)temporaryOptStr;
- (void)setTemporaryOptStr:(id)arg0;
- (id)fileBufferOptStr;
- (void)setFileBufferOptStr:(id)arg0;
- (id)customUA;
- (id)vendorTestId;
- (void)setVendorTestId:(id)arg0;
- (id)vendorGroupId;
- (void)setVendorGroupId:(id)arg0;
- (id)cacheDirMaxCacheSize;
- (void)setCacheDirMaxCacheSize:(id)arg0;
- (long long)mUseNewSpeedTestForSingle;
- (void)setMUseNewSpeedTestForSingle:(long long)arg0;
- (long long)socketRecvBufferSize;
- (void)setSocketRecvBufferSize:(long long)arg0;
- (BOOL)isEnableReqWaitNetReachable;
- (void)setIsEnableReqWaitNetReachable:(BOOL)arg0;
- (BOOL)isEnableNetworkChangeNotify;
- (void)setIsEnableNetworkChangeNotify:(BOOL)arg0;
- (BOOL)isEnableMaxCacheAgeForAllDir;
- (void)setIsEnableMaxCacheAgeForAllDir:(BOOL)arg0;
- (long long)maxFileMemCacheSize;
- (void)setMaxFileMemCacheSize:(long long)arg0;
- (long long)maxFileMemCacheNum;
- (void)setMaxFileMemCacheNum:(long long)arg0;
- (BOOL)isEnableCellularUp;
- (void)setIsEnableCellularUp:(BOOL)arg0;
- (long long)loadMonitorTimeInternal;
- (void)setLoadMonitorTimeInternal:(long long)arg0;
- (long long)loadMonitorMinAllowLoadSize;
- (void)setLoadMonitorMinAllowLoadSize:(long long)arg0;
- (long long)loaderType;
- (void)setLoaderType:(long long)arg0;
- (long long)isEnableUseOriginalUrl;
- (void)setIsEnableUseOriginalUrl:(long long)arg0;
- (BOOL)isEnableLoaderLogExtractUrls;
- (void)setIsEnableLoaderLogExtractUrls:(BOOL)arg0;
- (long long)maxLoaderLogNum;
- (void)setMaxLoaderLogNum:(long long)arg0;
- (long long)threadStackSizeLevel;
- (void)setThreadStackSizeLevel:(long long)arg0;
- (BOOL)isEnableUnLimitHttpHeader;
- (void)setIsEnableUnLimitHttpHeader:(BOOL)arg0;
- (long long)enableThreadPoolCheckIdle;
- (void)setEnableThreadPoolCheckIdle:(long long)arg0;
- (long long)threadPoolIdleTTLSecond;
- (void)setThreadPoolIdleTTLSecond:(long long)arg0;
- (long long)threadPoolMinCount;
- (void)setThreadPoolMinCount:(long long)arg0;
- (BOOL)isEnableHls;
- (void)setIsEnableHls:(BOOL)arg0;
- (BOOL)nonBlockRangeMode;
- (void)setNonBlockRangeMode:(BOOL)arg0;
- (long long)nonBlockRnageMaxSizeKB;
- (void)setNonBlockRnageMaxSizeKB:(long long)arg0;
- (long long)enableFileMutexOptimize;
- (void)setEnableFileMutexOptimize:(long long)arg0;
- (BOOL)isEnableMDL2;
- (void)setIsEnableMDL2:(BOOL)arg0;
- (long long)skipCdnUrlBeforeExpireSec;
- (void)setSkipCdnUrlBeforeExpireSec:(long long)arg0;
- (long long)preloadTraceIdRecordMaxCnt;
- (void)setPreloadTraceIdRecordMaxCnt:(long long)arg0;
- (BOOL)ignoreTextSpeedTest;
- (void)setIgnoreTextSpeedTest:(BOOL)arg0;
- (BOOL)isEnableOptimizeRange;
- (void)setIsEnableOptimizeRange:(BOOL)arg0;
- (long long)getCookieTokenLevel;
- (void)setGetCookieTokenLevel:(long long)arg0;
- (BOOL)isEnableUseGroupId;
- (void)setIsEnableUseGroupId:(BOOL)arg0;
- (long long)enableStorageModule;
- (void)setEnableStorageModule:(long long)arg0;
- (id)stoStrategyConfig;
- (void)setStoStrategyConfig:(id)arg0;
- (long long)isEnablePcdnAuto;
- (void)setIsEnablePcdnAuto:(long long)arg0;
- (long long)isCloseLocalServer;
- (void)setIsCloseLocalServer:(long long)arg0;
- (long long)sessionCacheIntervalMs;
- (void)setSessionCacheIntervalMs:(long long)arg0;
- (long long)fileManagerIntervalMs;
- (void)setFileManagerIntervalMs:(long long)arg0;
- (id)protectCacheDirsAvoidClean;
- (void)setProtectCacheDirsAvoidClean:(id)arg0;
- (id)precisePreloadConfigStr;
- (void)setPrecisePreloadConfigStr:(id)arg0;
- (BOOL)m3uTsKeyUseAbsoluteUrl;
- (void)setM3uTsKeyUseAbsoluteUrl:(BOOL)arg0;
- (void)setMaxCacheAge:(long long)arg0;
- (void).cxx_destruct;
- (long long)maxCacheAge;
- (id)appInfo;
- (long long)tryCount;
- (void)setTryCount:(long long)arg0;
- (void)setAppInfo:(id)arg0;
- (long long)maxCacheSize;
- (void)setMaxCacheSize:(long long)arg0;
- (long long)ringBufferSize;
- (long long)sessionTimeout;
- (void)setSessionTimeout:(long long)arg0;

@end