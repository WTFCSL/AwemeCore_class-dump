//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface AWESpecialCardCacheItem : NSObject {
    NSMutableArray *_cacheModels;
    long long _maxCount;
}

@property (retain, nonatomic) NSMutableArray *cacheModels;
@property (nonatomic) long long maxCount;

- (long long)cacheCount;
- (id)cacheModelForAweme:(id)arg0;
- (id)cacheModels;
- (void)addCacheModel:(id)arg0;
- (BOOL)containsCacheModelForAweme:(id)arg0;
- (void)removeCacheModelForAweme:(id)arg0;
- (void)setCacheModels:(id)arg0;
- (void)removeAll;
- (id)init;
- (void).cxx_destruct;
- (void)setMaxCount:(long long)arg0;
- (long long)maxCount;

@end
