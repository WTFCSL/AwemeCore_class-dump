//
//     Generated by private class-dump
//

@class NSArray;

@interface BDUGLuckyPreCongfig : BDUGLuckyJSONModel {
    long long _preloadFeedDelay;
    NSArray *_preloadPages;
    NSArray *_prefetchPages;
}

@property (nonatomic) long long preloadFeedDelay;
@property (copy, nonatomic) NSArray *preloadPages;
@property (copy, nonatomic) NSArray *prefetchPages;

+ (id)modelCustomPropertyMapper;

- (long long)preloadFeedDelay;
- (id)prefetchPages;
- (id)preloadPages;
- (void)setPreloadFeedDelay:(long long)arg0;
- (void)setPreloadPages:(id)arg0;
- (void)setPrefetchPages:(id)arg0;
- (void).cxx_destruct;

@end
