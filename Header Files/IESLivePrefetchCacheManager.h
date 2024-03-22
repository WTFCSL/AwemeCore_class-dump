//
//     Generated by private class-dump
//

@class NSString;
@protocol HTSKVStore;

@interface IESLivePrefetchCacheManager : NSObject <IESPrefetchCacheStorageProtocol> {
    id<HTSKVStore> _kvStoreManager;
}

@property (retain, nonatomic) id<HTSKVStore> kvStoreManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)fetchObjectForKey:(id)arg0;
- (id)fetchAllKeys;
- (id)kvStoreManager;
- (void)setKvStoreManager:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)removeObjectForKey:(id)arg0;
- (void)saveObject:(id)arg0 forKey:(id)arg1;

@end
