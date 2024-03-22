//
//     Generated by private class-dump
//

@class IESECStoreFilterDiffableModel, NSString, IESECShopContext, IESECShopStateDiffableModel, NSDictionary, NSMutableArray, IESECShopRecommendTitleObject, IESECShopMultiRecommendGoodsDiffableModel, IESECShopMultiSearchGoodsDiffableModel;

@interface IESECStoreSearchDataController : IESECListDataController {
    BOOL _recommendUsingSearch;
    BOOL _shouldRecommend;
    BOOL _searchFromSug;
    NSString *_searchWord;
    NSString *_searchID;
    NSDictionary *_logPassback;
    IESECShopContext *_context;
    unsigned long long _layoutType;
    IESECStoreFilterDiffableModel *_storeFilterDiffableModel;
    IESECShopMultiSearchGoodsDiffableModel *_searchGoodsDiffableModel;
    IESECShopStateDiffableModel *_stateDiffableModel;
    IESECShopRecommendTitleObject *_recommendTitleDiffableModel;
    IESECShopMultiRecommendGoodsDiffableModel *_recommendGoodsDiffableModel;
    unsigned long long _searchSource;
    long long _searchCursor;
    NSMutableArray *_searchGoods;
    NSString *_filterProductIds;
    long long _recommendCursor;
    NSMutableArray *_recommendGoods;
}

@property (nonatomic) long long searchCursor;
@property (retain, nonatomic) NSMutableArray *searchGoods;
@property (retain, nonatomic) NSString *filterProductIds;
@property (nonatomic) long long recommendCursor;
@property (retain, nonatomic) NSMutableArray *recommendGoods;
@property (copy, nonatomic) NSDictionary *logPassback;
@property (copy, nonatomic) NSString *searchWord;
@property (copy, nonatomic) NSString *searchID;
@property (retain, nonatomic) IESECShopContext *context;
@property (nonatomic) BOOL shouldRecommend;
@property (nonatomic) unsigned long long layoutType;
@property (retain, nonatomic) IESECStoreFilterDiffableModel *storeFilterDiffableModel;
@property (retain, nonatomic) IESECShopMultiSearchGoodsDiffableModel *searchGoodsDiffableModel;
@property (retain, nonatomic) IESECShopStateDiffableModel *stateDiffableModel;
@property (retain, nonatomic) IESECShopRecommendTitleObject *recommendTitleDiffableModel;
@property (retain, nonatomic) IESECShopMultiRecommendGoodsDiffableModel *recommendGoodsDiffableModel;
@property (nonatomic) BOOL searchFromSug;
@property (nonatomic) unsigned long long searchSource;

+ (void)fetchGoodsListWithAPIURL:(id)arg0 Parameters:(id)arg1 Completion:(id /* block */)arg2;

- (void)loadMoreWithCompletion:(id /* block */)arg0;
- (void)initFetchWithCompletion:(id /* block */)arg0;
- (id)logPassback;
- (void)setLogPassback:(id)arg0;
- (long long)recommendCursor;
- (long long)searchCursor;
- (void)setRecommendCursor:(long long)arg0;
- (void)setSearchCursor:(long long)arg0;
- (id)searchWord;
- (void)setSearchWord:(id)arg0;
- (id)storeFilterDiffableModel;
- (id)recommendTitleDiffableModel;
- (id)stateDiffableModel;
- (void)setStoreFilterDiffableModel:(id)arg0;
- (void)setStateDiffableModel:(id)arg0;
- (void)setRecommendTitleDiffableModel:(id)arg0;
- (id)searchGoods;
- (id)recommendGoods;
- (void)setShouldRecommend:(BOOL)arg0;
- (BOOL)shouldRecommend;
- (void)setFilterProductIds:(id)arg0;
- (id)searchGoodsDiffableModel;
- (id)recommendGoodsDiffableModel;
- (void)requestNextPageForSearchWithCompletion:(id /* block */)arg0;
- (void)requestNextPageForRecommendWithCompletion:(id /* block */)arg0;
- (id)searchSourceDescription;
- (id)filterProductIds;
- (id)getFilterSortBy;
- (void)setSearchGoodsDiffableModel:(id)arg0;
- (void)setRecommendGoodsDiffableModel:(id)arg0;
- (BOOL)searchFromSug;
- (void)setSearchFromSug:(BOOL)arg0;
- (void)setSearchGoods:(id)arg0;
- (void)setRecommendGoods:(id)arg0;
- (unsigned long long)layoutType;
- (void)setLayoutType:(unsigned long long)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)context;
- (void)reset;
- (void)refreshWithCompletion:(id /* block */)arg0;
- (unsigned long long)searchSource;
- (void)setSearchSource:(unsigned long long)arg0;
- (id)searchID;
- (void)setSearchID:(id)arg0;

@end