//
//     Generated by private class-dump
//

@class GXLRUCache;

@interface GXCache : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutex;
    GXLRUCache *_gxCache;
}

@property (retain, nonatomic) GXLRUCache *gxCache;

- (id)gxCache;
- (id)initWithCacheCount:(unsigned long long)arg0;
- (void)setGxCache:(id)arg0;
- (id)arrayForKey:(id)arg0;
- (id)init;
- (id)dictionaryForKey:(id)arg0;
- (void).cxx_destruct;
- (void)setObject:(id)arg0 forKey:(id)arg1;
- (id)allKeys;
- (void)removeObjectForKey:(id)arg0;
- (id)objectForKey:(id)arg0;
- (void)dealloc;
- (void)removeAllObjects;

@end
