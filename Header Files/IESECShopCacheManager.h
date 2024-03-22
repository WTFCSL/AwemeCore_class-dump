//
//     Generated by private class-dump
//

@class NSObject;
@protocol HTSKVStore, OS_dispatch_queue;

@interface IESECShopCacheManager : NSObject {
    id<HTSKVStore> _kvStore;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (retain) id<HTSKVStore> kvStore;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;

+ (id)sharedInstance;

- (id)objectOfClass:(Class)arg0 forKey:(id)arg1;
- (void)setObject:(id)arg0 forKey:(id)arg1 duration:(double)arg2;
- (void)cleanExpiredDataIfNeed;
- (id)kvStore;
- (void)setKvStore:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setObject:(id)arg0 forKey:(id)arg1;
- (void)setSerialQueue:(id)arg0;
- (id)serialQueue;
- (id)allKeys;
- (void)removeObjectForKey:(id)arg0;

@end