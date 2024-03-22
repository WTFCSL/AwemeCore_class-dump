//
//     Generated by private class-dump
//

@interface AWENetworkOfflineCache : NSObject

+ (void)removeAllCaches;
+ (id)liteCache;
+ (void)saveJSONResponse:(id)arg0 forCacheKey:(id)arg1;
+ (void)fetchCachedJSONResponseForKey:(id)arg0 maxAge:(double)arg1 completion:(id /* block */)arg2;
+ (void)setMemoryLimit:(unsigned long long)arg0 diskLimit:(unsigned long long)arg1;
+ (id)cacheQueue;
+ (id)mainCache;

@end