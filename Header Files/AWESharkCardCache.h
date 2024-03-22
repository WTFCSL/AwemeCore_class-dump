//
//     Generated by private class-dump
//

@class NSString, YYMemoryCache;

@interface AWESharkCardCache : NSObject {
    YYMemoryCache *_cache;
    NSString *_scene;
}

@property (retain, nonatomic) YYMemoryCache *cache;
@property (copy, nonatomic) NSString *scene;

- (id)cardCacheForUrl:(id)arg0 cardType:(id)arg1;
- (void)setCardCache:(id)arg0 url:(id)arg1 cardType:(id)arg2;
- (id)__cacheKeyWithUrl:(id)arg0 cardType:(id)arg1;
- (BOOL)hasCardCacheForUrl:(id)arg0 cardType:(id)arg1;
- (id)initWithScene:(id)arg0;
- (void)setCache:(id)arg0;
- (id)cache;
- (void)setScene:(id)arg0;
- (void).cxx_destruct;
- (id)scene;

@end