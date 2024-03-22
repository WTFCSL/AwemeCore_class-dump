//
//     Generated by private class-dump
//

@class NSOperationQueue, NSMutableDictionary;

@interface BDADiskCache : NSObject {
    BOOL _stopGarbageCollection;
    NSMutableDictionary *_cacheDictionary;
    NSOperationQueue *_operationQueue;
    double _defaultTimeoutInterval;
}

@property (retain) NSMutableDictionary *cacheDictionary;
@property (retain) NSOperationQueue *operationQueue;
@property double defaultTimeoutInterval;

+ (BOOL)hasCacheSize;
+ (void)reCalculateCacheSize;
+ (BOOL)isVideoCacheExistWithVideoId:(id)arg0;
+ (id)cachePath4VideoWithVideoId:(id)arg0;
+ (void)initialize;
+ (float)cacheSize;
+ (id)sharedCache;

- (void)setCacheDictionary:(id)arg0;
- (void)saveCacheDictionary;
- (void)setData:(id)arg0 forMD5Key:(id)arg1 withTimeoutInterval:(double)arg2;
- (void)performDiskWriteOperation:(id)arg0;
- (void)addCacheDictObj:(id)arg0 key:(id)arg1;
- (void)removeCacheDictItemForKey:(id)arg0;
- (void)deleteDataByKeyArrayAndSavePathDictionary:(id)arg0;
- (void)removeItemFromCache:(id)arg0 updateSize:(BOOL)arg1;
- (void)deleteDataAtPath:(id)arg0;
- (BOOL)isCacheExistWithMD5Key:(id)arg0;
- (BOOL)quickCheckIsCacheExist:(id)arg0;
- (id)fileCachePathIfExist:(id)arg0;
- (BOOL)isCacheExist:(id)arg0;
- (id)dataForUrl:(id)arg0;
- (void)setData:(id)arg0 forImageInfosModel:(id)arg1;
- (void)setData:(id)arg0 forKey:(id)arg1 withTimeoutInterval:(double)arg2;
- (void)setData:(id)arg0 forImageInfosModel:(id)arg1 withTimeoutInterval:(double)arg2;
- (void)startGarbageCollection;
- (void)enterBackgroundClear;
- (void)removeCacheForUrl:(id)arg0;
- (void)setData:(id)arg0 forVideoId:(id)arg1;
- (BOOL)quickCheckIsImageInfosModelExist:(id)arg0;
- (id)imageInfoModelCachePathIfExist:(id)arg0;
- (BOOL)isImageInfosModelCacheExist:(id)arg0;
- (BOOL)isImageCacheExist:(id)arg0;
- (id)dataForURLAndHeaders:(id)arg0;
- (id)dataForImageInfosModel:(id)arg0;
- (void)stopGarbageCollection;
- (id)init;
- (void)setOperationQueue:(id)arg0;
- (void)setData:(id)arg0 forKey:(id)arg1;
- (void).cxx_destruct;
- (void)clearCache;
- (id)operationQueue;
- (void)writeData:(id)arg0 toPath:(id)arg1;
- (id)cachePath;
- (void)dealloc;
- (void)setDefaultTimeoutInterval:(double)arg0;
- (double)defaultTimeoutInterval;
- (void)saveAfterDelay;
- (id)cacheDictionary;

@end