//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_semaphore;

@interface BDPAppPagePrefetchManager : NSObject <BDPWarmBootMessage, BDPAppPreloadMessage> {
    NSMutableDictionary *_prefetcherDic;
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;
+ (void)tryDecodeAppConfigPrefetchURLsWithModel:(id)arg0 schema:(id)arg1 needPrefetch:(BOOL)arg2;
+ (void)appPreloadFinishedWithModel:(id)arg0 schema:(id)arg1 error:(id)arg2;
+ (id)sharedManager;

- (void)decodeWithConfigDict:(id)arg0 uniqueID:(id)arg1 version:(id)arg2 completion:(id /* block */)arg3;
- (void)releasePrefetcherWithUniqueID:(id)arg0;
- (void)delayCleanMemoryCacheWithUniqueID:(id)arg0;
- (void)decodeWithConfigData:(id)arg0 uniqueID:(id)arg1 version:(id)arg2;
- (void)decodeAndPrefetchPluginConfig:(id)arg0 schema:(id)arg1 uniqueID:(id)arg2;
- (void)cleanWarmCacheWithUniqueID:(id)arg0;
- (BOOL)prefetchWithCurrentSchema:(id)arg0 uniqueID:(id)arg1 prefetchFlag:(unsigned long long)arg2;
- (id)getCachedEntryPathWithUniqueID:(id)arg0;
- (BOOL)shouldUsePrefetchCacheWithParam:(id)arg0 uniqueID:(id)arg1 apiCallBackBlk:(id /* block */)arg2 requestCompletion:(id /* block */)arg3 error:(id *)arg4;
- (BOOL)isInnerApp:(id)arg0;
- (BOOL)isAllowPrefetchWithSchema:(id)arg0;
- (void)decodeAndPrefetchWithConfigDict:(id)arg0 schema:(id)arg1 uniqueID:(id)arg2 version:(id)arg3 prefetchFlag:(unsigned long long)arg4;
- (unsigned long long)hitCount:(id)arg0;
- (unsigned long long)cacheCount:(id)arg0;
- (id)init;
- (id)semaphore;
- (void).cxx_destruct;
- (void)setSemaphore:(id)arg0;

@end