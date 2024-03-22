//
//     Generated by private class-dump
//

@class GXLRUCache, NSMutableDictionary;

@interface AWEPOINetworkPrefetcher : NSObject {
    GXLRUCache *_cache;
    NSMutableDictionary *_networkCompletions;
    NSMutableDictionary *_networkImpls;
    NSMutableDictionary *_trackParamsMap;
    NSMutableDictionary *_prefetchModelMap;
}

@property (retain, nonatomic) GXLRUCache *cache;
@property (retain, nonatomic) NSMutableDictionary *networkCompletions;
@property (retain, nonatomic) NSMutableDictionary *networkImpls;
@property (retain, nonatomic) NSMutableDictionary *trackParamsMap;
@property (retain, nonatomic) NSMutableDictionary *prefetchModelMap;

+ (id)sharedInstance;

- (void)clearTrackParamsWithKey:(id)arg0;
- (id)trackParamsForKey:(id)arg0;
- (void)clearCacheDataWithKey:(id)arg0;
- (BOOL)isRequestOnAirWithKey:(id)arg0;
- (void)subscribeKey:(id)arg0 block:(id /* block */)arg1;
- (id)cacheDataWithKey:(id)arg0;
- (id)prefetchModelWithKey:(id)arg0;
- (void)updateTrackParamsWithParamKey:(id)arg0 paramValue:(id)arg1 forKey:(id)arg2;
- (void)setNetworkCompletions:(id)arg0;
- (void)setNetworkImpls:(id)arg0;
- (void)setTrackParamsMap:(id)arg0;
- (void)setPrefetchModelMap:(id)arg0;
- (id)prefetchModelMap;
- (id)networkImpls;
- (void)didChunkFinishAndHasSubscriberWithKey:(id)arg0 data:(id)arg1 isFinished:(BOOL)arg2;
- (void)didRequestFinishWithKey:(id)arg0 cacheData:(id)arg1 trackData:(id)arg2;
- (id)networkCompletions;
- (id)trackParamsMap;
- (id)prefetchWithSchema:(id)arg0 networkImpl:(id)arg1 configuration:(Class)arg2 strategy:(id)arg3 prefetchModel:(id)arg4;
- (id)prefetchChunkModeWithSchema:(id)arg0 networkImpl:(id)arg1 configuration:(Class)arg2 strategy:(id)arg3 prefetchModel:(id)arg4 completion:(id /* block */)arg5;
- (void)setCache:(id)arg0;
- (id)cache;
- (id)init;
- (void).cxx_destruct;

@end