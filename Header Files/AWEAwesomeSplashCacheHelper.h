//
//     Generated by private class-dump
//

@class HMDThreadSafeArray, NSMutableDictionary, NSString, AWEStorage, NSMutableArray;
@protocol IESVideoPreloadProtocol;

@interface AWEAwesomeSplashCacheHelper : NSObject <AWEGokuPluginTargetProtocol> {
    BOOL _isProtectPreloaded;
    AWEStorage *_cacheStorage;
    NSMutableArray *_downloadingQueue;
    NSMutableArray *_cacheList;
    NSMutableDictionary *_videoCachedRecords;
    NSMutableDictionary *_splashCacheList;
    NSMutableArray *_cacheListIndex;
    HMDThreadSafeArray *_mmkvSplashIDs;
    NSMutableDictionary *_currentDLIndexDict;
    struct __CFRunLoopObserver { } *_runloopObserver;
    id<IESVideoPreloadProtocol> _preloader;
    NSMutableDictionary *_downloadModelDict;
}

@property (retain, nonatomic) NSMutableArray *downloadingQueue;
@property (retain, nonatomic) NSMutableArray *cacheList;
@property (retain, nonatomic) NSMutableDictionary *videoCachedRecords;
@property (retain, nonatomic) NSMutableDictionary *splashCacheList;
@property (retain, nonatomic) NSMutableArray *cacheListIndex;
@property (retain, nonatomic) HMDThreadSafeArray *mmkvSplashIDs;
@property (retain, nonatomic) NSMutableDictionary *currentDLIndexDict;
@property (nonatomic) struct __CFRunLoopObserver { } *runloopObserver;
@property (nonatomic) BOOL isProtectPreloaded;
@property (retain, nonatomic) id<IESVideoPreloadProtocol> preloader;
@property (retain, nonatomic) NSMutableDictionary *downloadModelDict;
@property (retain, nonatomic) AWEStorage *cacheStorage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)getMMKVWithID:(id)arg0;
- (void)setRunloopObserver:(struct __CFRunLoopObserver { } *)arg0;
- (struct __CFRunLoopObserver { } *)runloopObserver;
- (BOOL)isProtectPreloaded;
- (void)setIsProtectPreloaded:(BOOL)arg0;
- (void)preloadAllSplashData;
- (void)storeAwemeModel:(id)arg0 splashID:(id)arg1;
- (id)splashCacheList;
- (id)getMMKVAwemeModelForKey:(id)arg0;
- (id)cacheStorage;
- (id)cacheListIndex;
- (id)createIndexDictWith:(id)arg0;
- (void)storeMMKVAwemeModel:(id)arg0 forKey:(id)arg1;
- (void)removeMMKVAwemeModelForKey:(id)arg0;
- (id)videoCachedRecords;
- (BOOL)existInQueue:(id)arg0;
- (id)downloadingQueue;
- (id)getCacheVideoPathWithModel:(id)arg0;
- (unsigned long long)singleAwemePrefetchSize:(id)arg0;
- (void)prefetchAlbumSplashResource:(id)arg0;
- (BOOL)videoCacheExistsStrongCheckForModel:(id)arg0;
- (void)checkVideoCache:(id)arg0 prefetchSize:(unsigned long long)arg1;
- (void)prefetchVideoCache:(id)arg0 prefetchSize:(unsigned long long)arg1;
- (unsigned long long)fullPrefetchSize;
- (id)getURLKeyWithModel:(id)arg0;
- (BOOL)shouldPreloadOnTTPlayer:(id)arg0;
- (id)currentDLIndexDict;
- (void)deleteAwemeModelWithSplashID:(id)arg0;
- (void)enableAutoTrimForModel:(id)arg0;
- (void)removeVideoCacheForSplashID:(id)arg0;
- (void)removeMultiVideoCacheIfNeededWithModel:(id)arg0;
- (void)preloadSingleAweme:(id)arg0;
- (void)getAwemeForKey:(id)arg0 complete:(id /* block */)arg1;
- (void)startObserverIdlePreloadOpportunityIfNeeded;
- (id)getCommonParamsWithUrlString:(id)arg0;
- (BOOL)enableSameTaskOpt;
- (id)downloadModelDict;
- (id)getAwemeForKey:(id)arg0;
- (void)disableAutoTrimForModel:(id)arg0;
- (void)updateVideoCacheRecord:(id)arg0 splashID:(id)arg1;
- (BOOL)isMMKVEnable;
- (void)shouldTrackTimeCost:(BOOL)arg0 key:(id)arg1 isMMKV:(BOOL)arg2 startTmie:(double)arg3;
- (void)trackGetState:(BOOL)arg0 key:(id)arg1 isMMKV:(BOOL)arg2;
- (void)trackStoreStateWithKey:(id)arg0 isSuccess:(BOOL)arg1 isMMKV:(BOOL)arg2;
- (id)mmkvSplashIDs;
- (void)removeFromQueue:(id)arg0;
- (void)processSameDownloadTaskWithUrlKey:(id)arg0;
- (void)downloadSingleAlbumVideoWithModel:(id)arg0;
- (void)cacheHelpProcessAwesomeSplashModel:(id)arg0;
- (id)getStoreModelForKeyWithTimeout:(id)arg0 timeoutInterval:(long long)arg1 error:(id *)arg2;
- (id)getAwemeDicForKey:(id)arg0;
- (BOOL)videoCacheExistsFor:(id)arg0 videoPath:(id)arg1 urlKey:(id)arg2;
- (BOOL)shouldUseTTPlayer:(id)arg0;
- (void)clearCacheForAdvanceSetting;
- (id)getSplashCacheListIndex;
- (double)getPreloadAwemeCacheScale:(id)arg0;
- (void)setCacheStorage:(id)arg0;
- (void)setDownloadingQueue:(id)arg0;
- (void)setVideoCachedRecords:(id)arg0;
- (void)setSplashCacheList:(id)arg0;
- (void)setCacheListIndex:(id)arg0;
- (void)setMmkvSplashIDs:(id)arg0;
- (void)setCurrentDLIndexDict:(id)arg0;
- (void)setDownloadModelDict:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)moduleNames;
- (void)dealloc;
- (id)preloader;
- (void)setPreloader:(id)arg0;
- (id)cacheList;
- (void)setCacheList:(id)arg0;
- (void)freeCache;

@end
