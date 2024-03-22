//
//     Generated by private class-dump
//

@class IESCacheDictionaryRef;

@interface IESAppContextConfig : NSObject {
    BOOL _diOptEnable;
    BOOL _diCacheEnable;
    BOOL _diGlobalEnable;
    IESCacheDictionaryRef *_caches;
    IESCacheDictionaryRef *_protocolNameCaches;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _cache_rw_lock;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _pro_rw_lock;
}

@property (nonatomic) BOOL diOptEnable;
@property (nonatomic) BOOL diCacheEnable;
@property (retain, nonatomic) IESCacheDictionaryRef *caches;
@property (retain, nonatomic) IESCacheDictionaryRef *protocolNameCaches;
@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } cache_rw_lock;
@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } pro_rw_lock;
@property (readonly, nonatomic) BOOL diGlobalEnable;

+ (id)config;

- (id)protocolNameCaches;
- (id)itemWithProtocol:(id)arg0 appContext:(id)arg1;
- (id)stringNameWithProtocol:(id)arg0;
- (BOOL)diOptEnable;
- (void)setDiOptEnable:(BOOL)arg0;
- (BOOL)diCacheEnable;
- (void)setDiCacheEnable:(BOOL)arg0;
- (BOOL)diGlobalEnable;
- (void)setCaches:(id)arg0;
- (void)setProtocolNameCaches:(id)arg0;
- (struct _opaque_pthread_rwlock_t { long long x0; char x1[192]; })cache_rw_lock;
- (void)setCache_rw_lock:(struct _opaque_pthread_rwlock_t { long long x0; char x1[192]; })arg0;
- (struct _opaque_pthread_rwlock_t { long long x0; char x1[192]; })pro_rw_lock;
- (void)setPro_rw_lock:(struct _opaque_pthread_rwlock_t { long long x0; char x1[192]; })arg0;
- (id)init;
- (void).cxx_destruct;
- (id)caches;

@end