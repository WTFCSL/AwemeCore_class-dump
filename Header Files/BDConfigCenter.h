//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSDictionary, NSPointerArray, NSString;

@interface BDConfigCenter : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwlock;
    NSDictionary *_allConfigs;
    NSMutableDictionary *_memoryCache;
    NSPointerArray *_observers;
    NSString *_diskCachePath;
    NSString *_keyPathSeparator;
    NSMutableDictionary *_configsNetworkImpls;
}

@property (copy, nonatomic) id /* block */ mockImpl;
@property (copy) NSDictionary *allConfigs;
@property (retain, nonatomic) NSMutableDictionary *memoryCache;
@property (retain, nonatomic) NSPointerArray *observers;
@property (copy, nonatomic) NSString *diskCachePath;
@property (copy, nonatomic) NSString *keyPathSeparator;
@property (retain, nonatomic) NSMutableDictionary *configsNetworkImpls;

+ (id)defaultCenter;

- (void)setMockImpl:(id /* block */)arg0;
- (id)diskCachePath;
- (id)configsNetworkImpls;
- (void)updateConfigWithDomain:(id)arg0 configs:(id)arg1 increment:(BOOL)arg2;
- (id)allConfigs;
- (void)setAllConfigs:(id)arg0;
- (id)getConfigValueWithKeyPath:(id)arg0 fromConfigs:(id)arg1;
- (void)fetchConfigsWithDomain:(id)arg0;
- (void)updateConfigWithDomain:(id)arg0 configs:(id)arg1;
- (id)keyPathSeparator;
- (id)configsWithDomain:(id)arg0;
- (id)getConfigRemoteValueWithDomain:(id)arg0 keyPath:(id)arg1;
- (id /* block */)mockImpl;
- (id)addConfigObserverWithDomain:(id)arg0 keyPath:(id)arg1 handler:(id /* block */)arg2;
- (void)addConfigNetworkImplWithDomain:(id)arg0 networkImpl:(id /* block */)arg1;
- (void)fetchConfigs;
- (id)configMemoryCacheWithDomain:(id)arg0;
- (id)addConfigObserverWithKeyPath:(id)arg0 handler:(id /* block */)arg1;
- (void)setDiskCachePath:(id)arg0;
- (void)setKeyPathSeparator:(id)arg0;
- (void)setConfigsNetworkImpls:(id)arg0;
- (id)getConfigValueWithDomain:(id)arg0 keyPath:(id)arg1 defaultValue:(id)arg2 stable:(BOOL)arg3;
- (id)init;
- (void).cxx_destruct;
- (id)observers;
- (void)setObservers:(id)arg0;
- (id)memoryCache;
- (void)removeObserver:(id)arg0;
- (void)setMemoryCache:(id)arg0;

@end
