//
//     Generated by private class-dump
//

@interface AFDRecentlyRemovedRecommendDataController : AWEListDataController {
    BOOL _hasMore;
    long long _cursor;
}

@property (nonatomic) long long cursor;
@property (nonatomic) BOOL hasMore;

+ (void)clearRecentlyRemovedUsers:(id /* block */)arg0;

- (void)loadMoreWithCompletion:(id /* block */)arg0;
- (void)initFetchWithCompletion:(id /* block */)arg0;
- (id)URLForNetworkService;
- (long long)cursor;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (id)params;
- (void)setCursor:(long long)arg0;
- (void)refreshWithCompletion:(id /* block */)arg0;

@end
