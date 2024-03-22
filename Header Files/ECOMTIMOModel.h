//
//     Generated by private class-dump
//

@class NSString;

@interface ECOMTIMOModel : MTLModel <ECOMTIMOModelProtocol> {
    BOOL _isInvalided;
    BOOL _hasInited;
}

@property BOOL hasInited;
@property (nonatomic) BOOL isInvalided;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)clearAllCache;
+ (unsigned long long)cacheCount;
+ (id)createCache;
+ (id)cachedInstanceWithIdentifier:(id)arg0;
+ (void)clearCacheWithIdentifier:(id)arg0;
+ (id)sharedHashMapLock;
+ (void)removeCachedInstanceWithIdentifier:(id)arg0;
+ (void)initialize;
+ (id)db;
+ (id)sharedCache;
+ (id)sharedOperationQueue;
+ (id)sharedMapTable;

- (void)setHasInited:(BOOL)arg0;
- (BOOL)hasInited;
- (BOOL)isInvalided;
- (void)setIsInvalided:(BOOL)arg0;
- (id)noCacheInstance;
- (id)initWithIdentifier:(id)arg0;
- (id)copyWithZone:(struct _NSZone { } *)arg0;

@end
