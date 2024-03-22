//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AWEPublishLocalImageManager : NSObject {
    double _maxCacheAge;
    unsigned long long _maxCacheSize;
    NSMutableDictionary *_cacheMetaInfo;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic) double maxCacheAge;
@property (nonatomic) unsigned long long maxCacheSize;
@property (retain, nonatomic) NSMutableDictionary *cacheMetaInfo;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedManager;

- (void)removeExpiredCache;
- (BOOL)removeAllCaches;
- (id)cachePathWithAwemeId:(id)arg0 uri:(id)arg1 isVideo:(BOOL)arg2;
- (BOOL)cacheAwemeWithId:(id)arg0 resources:(id)arg1;
- (id)cacheRootPath;
- (id)cacheMetaInfo;
- (id)cachePathWithAwemeId:(id)arg0;
- (BOOL)removeCacheWithAwemeId:(id)arg0;
- (unsigned long long)itemSizeAtPath:(id)arg0;
- (BOOL)cacheAwemeWithId:(id)arg0 uri:(id)arg1 filePath:(id)arg2;
- (void)removeCachesExceedConstraint;
- (id)fileCachePathWithAwemeId:(id)arg0 uri:(id)arg1 isVideo:(BOOL)arg2;
- (BOOL)removeCacheFileWithAwemeId:(id)arg0;
- (void)setCacheMetaInfo:(id)arg0;
- (id)init;
- (void)setMaxCacheAge:(double)arg0;
- (void).cxx_destruct;
- (double)maxCacheAge;
- (void)setup;
- (id)queue;
- (void)setQueue:(id)arg0;
- (unsigned long long)maxCacheSize;
- (void)setMaxCacheSize:(unsigned long long)arg0;

@end
