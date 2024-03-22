//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface TTAdSplashCache : NSObject {
    NSMutableDictionary *_cacheDictionary;
    NSMutableDictionary *_topViewCacheDictionary;
    double _defaultTimeoutInterval;
    NSObject<OS_dispatch_queue> *_ioQueue;
}

@property (retain, nonatomic) NSMutableDictionary *cacheDictionary;
@property (retain, nonatomic) NSMutableDictionary *topViewCacheDictionary;
@property (nonatomic) double defaultTimeoutInterval;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ioQueue;

+ (BOOL)hasCacheSize;
+ (void)reCalculateCacheSize;
+ (BOOL)isVideoCacheExistWithVideoId:(id)arg0;
+ (id)cachePath4VideoWithVideoId:(id)arg0;
+ (BOOL)isRealTimeVideoCacheExistWithVideoId:(id)arg0;
+ (void)initialize;
+ (float)cacheSize;
+ (id)sharedCache;

- (void)setCacheDictionary:(id)arg0;
- (void)saveCacheDictionary;
- (void)setData:(id)arg0 forMD5Key:(id)arg1 withTimeoutInterval:(double)arg2;
- (void)addCacheDictObj:(id)arg0 key:(id)arg1;
- (void)removeCacheDictItemForKey:(id)arg0;
- (void)removeItemFromCache:(id)arg0 updateSize:(BOOL)arg1;
- (void)deleteDataAtPath:(id)arg0;
- (BOOL)isCacheExistWithMD5Key:(id)arg0;
- (id)fileCachePathIfExist:(id)arg0;
- (BOOL)isCacheExist:(id)arg0;
- (id)dataForUrl:(id)arg0;
- (id)imageInfoModelCachePathIfExist:(id)arg0;
- (id)filePathIfExist:(id)arg0 type:(long long)arg1;
- (id)dataForKey:(id)arg0 type:(long long)arg1;
- (BOOL)isCacheExist:(id)arg0 type:(long long)arg1;
- (void)updateResourceExpiresWithKey:(id)arg0 expires:(double)arg1 type:(long long)arg2;
- (void)setData:(id)arg0 forKey:(id)arg1 expires:(double)arg2 type:(long long)arg3;
- (void)clearResourceRegularly;
- (id)realTimeDataForUrl:(id)arg0;
- (id)preloadKeyForSplashAdId:(id)arg0;
- (void)setPreloadVideoInfo:(id)arg0 forSplashAdId:(id)arg1 withTimeoutInterval:(double)arg2;
- (void)initTopViewCacheDict;
- (id)getRealKeyWithKey:(id)arg0 type:(long long)arg1;
- (void)addTopViewCacheDictObj:(id)arg0 key:(id)arg1;
- (id)preloadVideoInfoForSplashAdId:(id)arg0;
- (BOOL)clearTopViewResource;
- (id)topViewCacheDictionary;
- (void)removeTopViewCacheDictItemForKey:(id)arg0;
- (void)removeCacheWithFileName:(id)arg0;
- (void)setData:(id)arg0 forKey:(id)arg1 expires:(double)arg2;
- (void)setData:(id)arg0 forVideoId:(id)arg1 expires:(double)arg2;
- (void)clearResource;
- (void)deletePreloadKeyForSplashAdid:(id)arg0;
- (unsigned long long)getDiskCount;
- (void)calculateSizeWithCompletionBlock:(id /* block */)arg0;
- (void)setTopViewCacheDictionary:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)clearCache;
- (void)writeData:(id)arg0 toPath:(id)arg1;
- (id)cachePath;
- (void)dealloc;
- (void)setDefaultTimeoutInterval:(double)arg0;
- (double)defaultTimeoutInterval;
- (void)saveAfterDelay;
- (unsigned long long)getSize;
- (id)ioQueue;
- (void)setIoQueue:(id)arg0;
- (id)cacheDictionary;

@end