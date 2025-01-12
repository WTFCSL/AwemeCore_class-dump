//
//     Generated by private class-dump
//

@class NSArray;

@interface AWEArrayDataController : AWEBaseDataController {
    BOOL _refreshHasMore;
    BOOL _loadmoreHasMore;
    BOOL _isRequestOnAir;
    BOOL _isFiltDuplicate;
    NSArray *_dataSource;
}

@property (retain) NSArray *dataSource;
@property BOOL refreshHasMore;
@property BOOL loadmoreHasMore;
@property BOOL isRequestOnAir;
@property BOOL isFiltDuplicate;

- (void)setLoadmoreHasMore:(BOOL)arg0;
- (BOOL)loadmoreHasMore;
- (void)loadMoreWithCompletion:(id /* block */)arg0;
- (void)initFetchWithCompletion:(id /* block */)arg0;
- (BOOL)isRequestOnAir;
- (void)setRefreshHasMore:(BOOL)arg0;
- (BOOL)refreshHasMore;
- (void)setIsRequestOnAir:(BOOL)arg0;
- (void)fetchForCacheWithCompletion:(id /* block */)arg0;
- (void)addDatas:(id)arg0;
- (void)insertData:(id)arg0 atIndex:(unsigned long long)arg1;
- (BOOL)isFiltDuplicate;
- (void)setIsFiltDuplicate:(BOOL)arg0;
- (void)setDataSource:(id)arg0;
- (id)init;
- (id)dataSource;
- (void).cxx_destruct;
- (void)refreshWithCompletion:(id /* block */)arg0;

@end
