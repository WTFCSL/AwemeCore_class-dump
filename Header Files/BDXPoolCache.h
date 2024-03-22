//
//     Generated by private class-dump
//

@class NSString, NSMapTable, NSMutableSet;
@protocol NSCacheDelegate;

@interface BDXPoolCache : NSCache <NSCacheDelegate> {
    NSMapTable *_cachedRecord;
    id<NSCacheDelegate> _realDelegate;
    NSString *_removeCacheReason;
    NSMutableSet *_didClearedKeys;
}

@property (retain, nonatomic) NSMapTable *cachedRecord;
@property (weak, nonatomic) id<NSCacheDelegate> realDelegate;
@property (copy) NSString *removeCacheReason;
@property (retain, nonatomic) NSMutableSet *didClearedKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)didClearedKeys;
- (void)setRemoveCacheReason:(id)arg0;
- (id)removeCacheReason;
- (void)setDidClearedKeys:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setObject:(id)arg0 forKey:(id)arg1;
- (id)allKeys;
- (void)removeObjectForKey:(id)arg0;
- (id)delegate;
- (void)cache:(id)arg0 willEvictObject:(id)arg1;
- (void)setDelegate:(id)arg0;
- (void)removeAllObjects;
- (void)setObject:(id)arg0 forKey:(id)arg1 cost:(unsigned long long)arg2;
- (id)cachedRecord;
- (void)setCachedRecord:(id)arg0;
- (void)setRealDelegate:(id)arg0;
- (id)realDelegate;

@end