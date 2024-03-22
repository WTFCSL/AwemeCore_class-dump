//
//     Generated by private class-dump
//

@class TTVideoEngineKVStorage, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface TTVideoEngineModelCache : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    NSObject<OS_dispatch_queue> *_trashQueue;
    NSMutableArray *_caches;
    long long _maxMemoryCount;
    long long _maxCount;
    TTVideoEngineKVStorage *_diskStorage;
}

@property (retain, nonatomic) NSMutableArray *caches;
@property (nonatomic) long long maxMemoryCount;
@property (nonatomic) long long maxCount;
@property (retain, nonatomic) TTVideoEngineKVStorage *diskStorage;

+ (id)shareCache;

- (void)setMaxMemoryCount:(long long)arg0;
- (void)setCaches:(id)arg0;
- (void)_applicationDidReceiveMemoryWarningNotification:(id)arg0;
- (id)_removeMemoryCacheIfExit:(id)arg0;
- (void)_insertItemInMemoryCache:(id)arg0 data:(id)arg1;
- (void)saveItemToDisk:(id)arg0 forKey:(id)arg1;
- (void)_exect:(id /* block */)arg0;
- (void)removeItemFromDiskForKey:(id)arg0;
- (void)getItemFromDiskForKey:(id)arg0 withBlock:(id /* block */)arg1;
- (void)clearAllMemoryItems;
- (void)addItem:(id)arg0 forKey:(id)arg1;
- (void)getItemForKey:(id)arg0 withBlock:(id /* block */)arg1;
- (long long)maxMemoryCount;
- (void)setDiskStorage:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)clearAllItems;
- (id)diskStorage;
- (void)setMaxCount:(long long)arg0;
- (id)caches;
- (void)dealloc;
- (long long)maxCount;
- (void)removeItemForKey:(id)arg0;

@end
