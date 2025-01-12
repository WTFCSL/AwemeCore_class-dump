//
//     Generated by private class-dump
//

@class NSUUID, IESECShopRecommendFeedDiffableModel, IESECShopContext, IESECShopRecommendTitleObject, NSDictionary, IESECShopMultiGoodsDiffableModel, NSMapTable, NSMutableDictionary, IESECShopFilterDiffableModel, NSMutableArray, IESECShopRecommendMallObject, NSString, IESECStoreFilterDiffableModel, IESECShopCartsInfoModel, IESECTracker, IESECShopProductsPromotionalFilterState, NSNumber, IESECShopGoodsObjectDiffableModel, NSMutableSet, IESECShopStateDiffableModel;

@interface IESECShopGoodsDataController : IESECListDataController {
    NSUUID *_cancelledTaskID;
    NSUUID *_currentTaskID;
    NSMapTable *_actiavtedTaskMap;
    NSMutableSet *_activatedTaskIDs;
    NSMutableArray *_recommendFeedData;
    NSMutableDictionary *_nextPageParamsMap;
    long long _skuIdx;
    BOOL _hasMoreRecommendFeedData;
    BOOL _clickedFilter;
    IESECShopContext *_shopContext;
    IESECTracker *_tracker;
    long long _currentPage;
    NSString *_materialId;
    NSString *_searchWord;
    NSString *_paramsFromFE;
    NSDictionary *_passThroughAPIFromFE;
    NSString *_nextPageParams;
    IESECShopFilterDiffableModel *_shopFilterDiffableModel;
    IESECStoreFilterDiffableModel *_storeFilterDiffableModel;
    IESECShopMultiGoodsDiffableModel *_goodsDiffableModel;
    IESECShopStateDiffableModel *_stateDiffableModel;
    IESECShopStateDiffableModel *_extraStateDiffableModel;
    IESECShopRecommendFeedDiffableModel *_recommendFeedDiffableModel;
    IESECShopCartsInfoModel *_cartsModel;
    unsigned long long _layoutType;
    IESECShopGoodsObjectDiffableModel *_lynxProductModel;
    IESECShopRecommendFeedDiffableModel *_recommendMixCardsDiffableModel;
    IESECShopProductsPromotionalFilterState *_promotionalFilterState;
    IESECShopRecommendTitleObject *_recommendTitleDiffableModel;
    IESECShopRecommendMallObject *_recommendMallDiffableModel;
    NSString *_materialTitle;
    long long _querySource;
    NSNumber *_totalCount;
    long long _cursor;
}

@property (retain, nonatomic) NSNumber *totalCount;
@property (nonatomic) long long cursor;
@property (retain, nonatomic) IESECShopContext *shopContext;
@property (retain, nonatomic) IESECTracker *tracker;
@property (nonatomic) long long currentPage;
@property (copy, nonatomic) NSString *materialId;
@property (copy, nonatomic) NSString *searchWord;
@property (copy, nonatomic) NSString *paramsFromFE;
@property (copy, nonatomic) NSDictionary *passThroughAPIFromFE;
@property (copy, nonatomic) NSString *nextPageParams;
@property (nonatomic) BOOL hasMoreRecommendFeedData;
@property (retain, nonatomic) IESECShopFilterDiffableModel *shopFilterDiffableModel;
@property (retain, nonatomic) IESECStoreFilterDiffableModel *storeFilterDiffableModel;
@property (retain, nonatomic) IESECShopMultiGoodsDiffableModel *goodsDiffableModel;
@property (retain, nonatomic) IESECShopStateDiffableModel *stateDiffableModel;
@property (retain, nonatomic) IESECShopStateDiffableModel *extraStateDiffableModel;
@property (retain, nonatomic) IESECShopRecommendFeedDiffableModel *recommendFeedDiffableModel;
@property (retain, nonatomic) IESECShopCartsInfoModel *cartsModel;
@property (nonatomic) unsigned long long layoutType;
@property (retain, nonatomic) IESECShopGoodsObjectDiffableModel *lynxProductModel;
@property (retain, nonatomic) IESECShopRecommendFeedDiffableModel *recommendMixCardsDiffableModel;
@property (retain, nonatomic) IESECShopProductsPromotionalFilterState *promotionalFilterState;
@property (nonatomic) BOOL clickedFilter;
@property (retain, nonatomic) IESECShopRecommendTitleObject *recommendTitleDiffableModel;
@property (retain, nonatomic) IESECShopRecommendMallObject *recommendMallDiffableModel;
@property (copy, nonatomic) NSString *materialTitle;
@property (nonatomic) long long querySource;

+ (id)fetchGoodsListWithAPIPath:(id)arg0 parameters:(id)arg1 completion:(id /* block */)arg2;

- (void)loadMoreWithCompletion:(id /* block */)arg0;
- (void)initFetchWithCompletion:(id /* block */)arg0;
- (id)searchWord;
- (void)setSearchWord:(id)arg0;
- (id)shopContext;
- (void)setShopContext:(id)arg0;
- (void)setMaterialTitle:(id)arg0;
- (void)setNextPageParams:(id)arg0;
- (id)storeFilterDiffableModel;
- (void)setHasMoreRecommendFeedData:(BOOL)arg0;
- (id)recommendTitleDiffableModel;
- (id)recommendFeedDiffableModel;
- (id)goodsDiffableModel;
- (BOOL)hasMoreRecommendFeedData;
- (id)stateDiffableModel;
- (void)requestClassficationRecommendWithCompletion:(id /* block */)arg0;
- (id)materialTitle;
- (void)requestNextPageWithQuerySource:(long long)arg0 completion:(id /* block */)arg1;
- (id)recommendMixCardsDiffableModel;
- (void)resetNextPageParams;
- (id)currentTabProductIDs;
- (id)preprocessLogExtra:(id)arg0;
- (id)recommendMallDiffableModel;
- (id)shopFilterDiffableModel;
- (id)paramsFromFE;
- (void)setParamsFromFE:(id)arg0;
- (id)passThroughAPIFromFE;
- (void)setPassThroughAPIFromFE:(id)arg0;
- (id)promotionalFilterState;
- (id)nextPageParamsForQuerySource:(long long)arg0;
- (void)setClickedFilter:(BOOL)arg0;
- (id)nextPageParams;
- (void)setNextPageParams:(id)arg0 forQuerySource:(long long)arg1;
- (void)configWithGoodsListResponse:(id)arg0;
- (void)setCartsModel:(id)arg0;
- (void)addGoodsList:(id)arg0 sortTypes:(id)arg1 pickTypes:(id)arg2 selectButtons:(id)arg3 bizExtra:(id)arg4 hasMore:(BOOL)arg5 cursur:(long long)arg6;
- (void)resetRecommendFeedData;
- (id)extraStateDiffableModel;
- (id)lynxProductModel;
- (void)requestRecommendMallWithCompletion:(id /* block */)arg0;
- (void)requestCartsNumberWithCompletion:(id /* block */)arg0;
- (void)requestGoodsListHeaderViewBackgroundImageWithCompletion:(id /* block */)arg0;
- (void)requestGoodsInfo:(id)arg0 withCompletion:(id /* block */)arg1;
- (void)configWithTabModel:(id)arg0;
- (void)cancelLatestProductListTask;
- (void)setShopFilterDiffableModel:(id)arg0;
- (void)setStoreFilterDiffableModel:(id)arg0;
- (void)setGoodsDiffableModel:(id)arg0;
- (void)setStateDiffableModel:(id)arg0;
- (void)setExtraStateDiffableModel:(id)arg0;
- (void)setRecommendFeedDiffableModel:(id)arg0;
- (id)cartsModel;
- (void)setLynxProductModel:(id)arg0;
- (void)setRecommendMixCardsDiffableModel:(id)arg0;
- (void)setPromotionalFilterState:(id)arg0;
- (BOOL)clickedFilter;
- (void)setRecommendTitleDiffableModel:(id)arg0;
- (void)setRecommendMallDiffableModel:(id)arg0;
- (long long)cursor;
- (unsigned long long)layoutType;
- (id)tracker;
- (void)setTracker:(id)arg0;
- (void)setLayoutType:(unsigned long long)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setCurrentPage:(long long)arg0;
- (long long)currentPage;
- (id)totalCount;
- (void)reset;
- (void)setCursor:(long long)arg0;
- (void)refreshWithCompletion:(id /* block */)arg0;
- (id)materialId;
- (void)setMaterialId:(id)arg0;
- (long long)querySource;
- (void)setQuerySource:(long long)arg0;
- (void)setTotalCount:(id)arg0;

@end
