//
//     Generated by private class-dump
//

@class HunterCacheConfig, YYMemoryCache;

@interface HunterCachePool : NSObject {
    HunterCacheConfig *_config;
    YYMemoryCache *_cache;
}

@property (retain, nonatomic) HunterCacheConfig *config;
@property (retain, nonatomic) YYMemoryCache *cache;

- (void)save:(id)arg0 containerView:(id)arg1;
- (id)identifierWithSchema:(id)arg0;
- (void)setCache:(id)arg0;
- (BOOL)enable;
- (id)cache;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (void)clearAll;
- (id)config;
- (id)initWithConfig:(id)arg0;
- (void)clear:(id)arg0;
- (id)fetch:(id)arg0;
- (void)dealloc;
- (void)didReceiveMemoryWarning:(id)arg0;

@end
