//
//     Generated by private class-dump
//

@class BDPRuntimeAppWorker, NSMutableDictionary, NSRecursiveLock, NSArray, NSString, BDPVConsoleWebView;

@interface BDPPrefetchWorkerCenter : NSObject <BDPAppPreloadMessage> {
    BOOL _enableWorkerPrefetch;
    BOOL _enablePrefetchRequest;
    BOOL _enablePrefetchImage;
    BOOL _enablePreloadWorkerRuntime;
    BOOL _workerActivated;
    NSRecursiveLock *_lock;
    NSMutableDictionary *_prefetcherDic;
    BDPRuntimeAppWorker *_worker;
    NSMutableDictionary *_unusedPrelaunchJS;
    BDPVConsoleWebView *_vconsoleWebview;
    NSArray *_prefetchRequestDisableList;
    NSArray *_prefetchImageDisableList;
    unsigned long long _workerReuseCount;
}

@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) BDPRuntimeAppWorker *worker;
@property (retain, nonatomic) NSMutableDictionary *unusedPrelaunchJS;
@property (weak, nonatomic) BDPVConsoleWebView *vconsoleWebview;
@property (nonatomic) BOOL enableWorkerPrefetch;
@property (nonatomic) BOOL enablePrefetchRequest;
@property (nonatomic) BOOL enablePrefetchImage;
@property (nonatomic) BOOL enablePreloadWorkerRuntime;
@property (retain, nonatomic) NSArray *prefetchRequestDisableList;
@property (retain, nonatomic) NSArray *prefetchImageDisableList;
@property (nonatomic) BOOL workerActivated;
@property (nonatomic) unsigned long long workerReuseCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;
+ (BOOL)isPrefetch:(id)arg0;
+ (BOOL)enableWorkerPrefetch:(id)arg0;
+ (void)appPreloadFinishedWithModel:(id)arg0 schema:(id)arg1 error:(id)arg2;
+ (BOOL)enableWorkerPrefetch;
+ (void)preloadPrelaunchFileForUniqueID:(id)arg0 reader:(id)arg1 completion:(id /* block */)arg2 shouldEvalPrelaunch:(BOOL)arg3 versionCode:(long long)arg4;
+ (BOOL)prefetchWithCurrentSchema:(id)arg0 backupPath:(id)arg1 uniqueID:(id)arg2;
+ (id)getImagePrefetchStat:(id)arg0;
+ (id)hitPrefetch:(id)arg0 uniqueID:(id)arg1;
+ (id)getRequestPrefetchStat:(id)arg0;
+ (BOOL)enablePrefetchRequest:(id)arg0;
+ (void)subscribeHandler:(id)arg0 pageID:(long long)arg1 dest:(unsigned long long)arg2 data:(id)arg3 completion:(id /* block */)arg4 uniqueID:(id)arg5;
+ (void)updatePrefetchCacheWithKey:(id)arg0 uniqueID:(id)arg1 data:(id)arg2 response:(id)arg3 error:(id)arg4;
+ (BOOL)shouldUsePrefetchCacheWithKey:(id)arg0 uniqueID:(id)arg1 apiCallBackBlk:(id /* block */)arg2 requestCompletion:(id /* block */)arg3 error:(id *)arg4;
+ (BOOL)enablePrefetchImage:(id)arg0;
+ (void)prefetchImageWithRequest:(id)arg0 uniqueID:(id)arg1;
+ (void)releasePrefetchWorker;
+ (void)preloadPrelaunchFileForUniqueID:(id)arg0 data:(id)arg1 backupPath:(id)arg2 completion:(id /* block */)arg3 shouldEvalPrelaunch:(BOOL)arg4 versionCode:(long long)arg5;
+ (void)preparePrefetchWorker;
+ (void)releasePrefetchCacheWithUniqueID:(id)arg0;
+ (void)setVConsoleWebView:(id)arg0;
+ (id)sharedInstance;

- (void)reciveMemoryWarningNotification:(id)arg0;
- (BOOL)enableWorkerPrefetch;
- (void)preloadPrelaunchFileForUniqueID:(id)arg0 reader:(id)arg1 completion:(id /* block */)arg2 shouldEvalPrelaunch:(BOOL)arg3 versionCode:(long long)arg4;
- (BOOL)prefetchWithCurrentSchema:(id)arg0 backupPath:(id)arg1 uniqueID:(id)arg2;
- (id)getRequestPrefetchStat:(id)arg0;
- (BOOL)enablePrefetchRequest:(id)arg0;
- (void)subscribeHandler:(id)arg0 pageID:(long long)arg1 dest:(unsigned long long)arg2 data:(id)arg3 completion:(id /* block */)arg4 uniqueID:(id)arg5;
- (void)updatePrefetchCacheWithKey:(id)arg0 uniqueID:(id)arg1 data:(id)arg2 response:(id)arg3 error:(id)arg4;
- (BOOL)shouldUsePrefetchCacheWithKey:(id)arg0 uniqueID:(id)arg1 apiCallBackBlk:(id /* block */)arg2 requestCompletion:(id /* block */)arg3 error:(id *)arg4;
- (BOOL)enablePrefetchImage:(id)arg0;
- (void)setUnusedPrelaunchJS:(id)arg0;
- (void)setEnableWorkerPrefetch:(BOOL)arg0;
- (void)setEnablePrefetchRequest:(BOOL)arg0;
- (void)setPrefetchRequestDisableList:(id)arg0;
- (void)setEnablePrefetchImage:(BOOL)arg0;
- (void)setPrefetchImageDisableList:(id)arg0;
- (void)setEnablePreloadWorkerRuntime:(BOOL)arg0;
- (void)setWorkerActivated:(BOOL)arg0;
- (void)setWorkerReuseCount:(unsigned long long)arg0;
- (void)mergeConfigFromSettings;
- (void)releasePrefetchWorker;
- (id)vconsoleWebview;
- (BOOL)enablePreloadWorkerRuntime;
- (void)lazyInitWorkRuntime;
- (void)updatePrelaunchScriptCache:(id)arg0 uniqueID:(id)arg1 versionCode:(long long)arg2 backupPath:(id)arg3 completion:(id /* block */)arg4;
- (id)unusedPrelaunchJS;
- (void)preloadPrelaunchFileForUniqueID:(id)arg0 data:(id)arg1 backupPath:(id)arg2 completion:(id /* block */)arg3 shouldEvalPrelaunch:(BOOL)arg4 versionCode:(long long)arg5;
- (unsigned long long)workerReuseCount;
- (void)evalWithCache:(id)arg0 cachedBackupPath:(id)arg1 schema:(id)arg2 script:(id)arg3 timeStart:(double)arg4 uniqueID:(id)arg5;
- (void)preparePrefetchWorker;
- (void)releasePrefetchCacheWithUniqueID:(id)arg0;
- (void)setVConsoleWebView:(id)arg0;
- (void)setVconsoleWebview:(id)arg0;
- (void)removeVConsoleWebView;
- (BOOL)enablePrefetchRequest;
- (BOOL)enablePrefetchImage;
- (id)prefetchRequestDisableList;
- (id)prefetchImageDisableList;
- (BOOL)workerActivated;
- (id)init;
- (void).cxx_destruct;
- (id)lock;
- (void)dealloc;
- (void)addObserver;
- (void)setLock:(id)arg0;
- (id)worker;
- (void)setWorker:(id)arg0;

@end
