//
//     Generated by private class-dump
//

@class NSObject, NSString, CSJAdFileCacheConfig;
@protocol OS_dispatch_queue;

@interface CSJAdFileCache : NSObject {
    CSJAdFileCacheConfig *_cacheConfig;
    NSObject<OS_dispatch_queue> *_ioQueue;
    NSString *_currentCacheParentDir;
}

@property (retain, nonatomic) CSJAdFileCacheConfig *cacheConfig;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ioQueue;
@property (copy, nonatomic) NSString *currentCacheParentDir;

+ (id)parentDirectoryName;
+ (void)setupParentDirectoryName:(id)arg0;

- (void)clearAllCache;
- (void)setCacheConfig:(id)arg0;
- (id)_prx_currentCacheParentDir;
- (void)setCurrentCacheParentDir:(id)arg0;
- (id)currentCacheParentDir;
- (void)_prx_updateModifyDateWithKey:(id)arg0;
- (void)_prx_LRU_clear;
- (id)_prx_arraySortedByModifyDateASC;
- (void)_prx_LRU_clear_useFileCount;
- (void)_prx_LRU_clear_useSize;
- (id)_prx_cacheParentDir;
- (void)_prx_createIfNeedWithDirectoryFullPath:(id)arg0;
- (id)initWithCacheConfig:(id)arg0;
- (id)cacheConfig;
- (void)setData:(id)arg0 withKey:(id)arg1;
- (void)existWithKey:(id)arg0 completionBlock:(id /* block */)arg1;
- (void)dataWithKey:(id)arg0 completionBlock:(id /* block */)arg1;
- (void).cxx_destruct;
- (id)ioQueue;
- (void)setIoQueue:(id)arg0;
- (void)_logWithFormat:(id)arg0;

@end
