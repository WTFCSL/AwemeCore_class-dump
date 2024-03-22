//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface AWEECShareMemoryCacheManager : NSObject {
    NSMutableDictionary *_cacheDic;
}

@property (retain, nonatomic) NSMutableDictionary *cacheDic;

+ (id)shared;

- (id)cacheDic;
- (id)buideCacheWithScene:(id)arg0;
- (id)buildCacheItemWithScene:(id)arg0 key:(id)arg1 value:(id)arg2;
- (id)getShareCacheItemWithScene:(id)arg0 key:(id)arg1;
- (void)setShareCacheWithScene:(id)arg0 key:(id)arg1 value:(id)arg2;
- (id)getShareCacheWithScene:(id)arg0;
- (BOOL)hitCacheWithScene:(id)arg0 key:(id)arg1;
- (void)setCacheDic:(id)arg0;
- (void).cxx_destruct;

@end