//
//     Generated by private class-dump
//

@class NSOperationQueue, NSMutableDictionary, NSString;

@interface IESLiveAudioCache : NSObject <IESLiveAudioCacheProvider> {
    double _defaultTimeout;
    NSOperationQueue *_diskOperationQueue;
    NSMutableDictionary *_cacheDictionary;
}

@property (retain, nonatomic) NSOperationQueue *diskOperationQueue;
@property (retain, nonatomic) NSMutableDictionary *cacheDictionary;
@property (nonatomic) double defaultTimeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCacheDictionary:(id)arg0;
- (void)saveCacheDictionary;
- (void)performDiskWriteOperation:(id)arg0;
- (void)deleteDataAtPath:(id)arg0;
- (id)cacheDir;
- (BOOL)hasCacheForKey:(id)arg0;
- (void)setDefaultTimeout:(double)arg0;
- (void)copyFilePath:(id)arg0 asKey:(id)arg1 withTimeout:(double)arg2;
- (void)removeCacheWithTimeout;
- (void)copyFilePath:(id)arg0 asKey:(id)arg1;
- (id)diskOperationQueue;
- (void)setDiskOperationQueue:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)clearCache;
- (void)removeItemFromCache:(id)arg0;
- (id)filePathForKey:(id)arg0;
- (void)saveAfterDelay;
- (double)defaultTimeout;
- (id)cacheDictionary;

@end