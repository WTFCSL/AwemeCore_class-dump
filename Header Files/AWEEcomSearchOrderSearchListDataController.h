//
//     Generated by private class-dump
//

@class NSDictionary, NSNumber;

@interface AWEEcomSearchOrderSearchListDataController : AWEListDataController {
    long long _initialIndex;
    NSDictionary *_loadMoreInfo;
    NSNumber *_loadMoreCursor;
}

@property (retain, nonatomic) NSDictionary *loadMoreInfo;
@property (retain, nonatomic) NSNumber *loadMoreCursor;
@property (nonatomic) long long initialIndex;

- (void)loadMoreWithCompletion:(id /* block */)arg0;
- (void)initFetchWithCompletion:(id /* block */)arg0;
- (id)loadMoreInfo;
- (void)setLoadMoreInfo:(id)arg0;
- (void)setLoadMoreCursor:(id)arg0;
- (id)loadMoreCursor;
- (void)loadMoreInSelfWithCompletion:(id /* block */)arg0 isLoadmore:(BOOL)arg1;
- (id)initWithLoadMoreInfo:(id)arg0;
- (void).cxx_destruct;
- (void)refreshWithCompletion:(id /* block */)arg0;
- (long long)initialIndex;
- (void)setInitialIndex:(long long)arg0;

@end