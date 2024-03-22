//
//     Generated by private class-dump
//

@class NSNumber, IESECGoodsDetailModel, NSArray, IESECGoodsDetailCommonMeta, NSString, IESECGoodsSearchWordResponse, NSDictionary, IESECGoodsDetailShowRequest, IESECommerceServiceProvider, IESECGoodsDetailDetailModel, IESECGoodsDetailShopRecommendReponse, IESECGoodsDetailResponse;
@protocol IESECPDPContextService, IESECPDPQualityService, IESECPDPCacheService, IESECPDPChunkService;

@interface IESECGoodsDetailPageDataController : NSObject <IESECPDPDataControllerService, IESECPDPChunkDelegate> {
    IESECGoodsDetailResponse *_goodsDetailResponse;
    IESECGoodsDetailDetailModel *_detailDetailModel;
    IESECGoodsDetailModel *_currentGoodsDetailModel;
    IESECGoodsSearchWordResponse *_searchWordResponse;
    IESECGoodsDetailShopRecommendReponse *_shopRecommendResponse;
    NSNumber *_collapse;
    NSDictionary *_currentGoodsDetailRawDict;
    NSString *_pageIdentifier;
    NSString *_bdTuring;
    NSString *_searchRecommendWord;
    NSString *_normalSkuId;
    long long _shopRecommendTabIndex;
    NSString *_responseCacheKey;
    IESECommerceServiceProvider *_serviceProvider;
    IESECGoodsDetailShowRequest *_request;
    long long _currentGoodsDetailIndex;
    id /* block */ _chunkCallback;
    id<IESECPDPContextService> _context;
    id<IESECPDPQualityService> _pdpQuality;
    id<IESECPDPChunkService> _chunkManager;
    id<IESECPDPCacheService> _cacheManager;
}

@property (retain, nonatomic) IESECGoodsDetailShowRequest *request;
@property (retain, nonatomic) IESECGoodsDetailResponse *goodsDetailResponse;
@property (retain, nonatomic) IESECGoodsDetailDetailModel *detailDetailModel;
@property (nonatomic) long long currentGoodsDetailIndex;
@property (retain, nonatomic) IESECGoodsDetailModel *currentGoodsDetailModel;
@property (retain, nonatomic) IESECGoodsSearchWordResponse *searchWordResponse;
@property (retain, nonatomic) IESECGoodsDetailShopRecommendReponse *shopRecommendResponse;
@property (retain, nonatomic) NSDictionary *currentGoodsDetailRawDict;
@property (copy, nonatomic) id /* block */ chunkCallback;
@property (weak, nonatomic) id<IESECPDPContextService> context;
@property (weak, nonatomic) id<IESECPDPQualityService> pdpQuality;
@property (weak, nonatomic) id<IESECPDPChunkService> chunkManager;
@property (weak, nonatomic) id<IESECPDPCacheService> cacheManager;
@property (readonly, nonatomic, getter=isDeleted) BOOL isDeleted;
@property (retain, nonatomic) NSNumber *collapse;
@property (readonly, nonatomic) NSArray *scrollTabNodes;
@property (readonly, nonatomic) IESECGoodsDetailCommonMeta *commonMeta;
@property (copy, nonatomic) NSString *pageIdentifier;
@property (copy, nonatomic) NSString *bdTuring;
@property (copy, nonatomic) NSString *searchRecommendWord;
@property (copy, nonatomic) NSString *normalSkuId;
@property (nonatomic) long long shopRecommendTabIndex;
@property (copy, nonatomic) NSString *responseCacheKey;
@property (weak, nonatomic) IESECommerceServiceProvider *serviceProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)requestAuctionHistoryWithAuctionId:(id)arg0 offset:(id)arg1 metaParams:(id)arg2 completion:(id /* block */)arg3;
+ (void)preconnectGoodsDetailApiHosts;
+ (void)preconnectGoodsDetailPicHosts;
+ (void)preconnectHost:(id)arg0;

- (void)didReceiveJSON:(id)arg0;
- (void)chunkRequestDidEndWithError:(id)arg0 forceCanceled:(BOOL)arg1 monitorRecord:(id)arg2;
- (id)goodsDetailResponse;
- (id)commonMeta;
- (id)configPriceInfoParams;
- (id)normalSkuId;
- (void)setNormalSkuId:(id)arg0;
- (id)scrollTabNodes;
- (id)searchWordResponse;
- (id)searchRecommendWord;
- (id)initWithGoodsDetailRequest:(id)arg0;
- (id)bdTuring;
- (id)detailDetailModel;
- (void)requestGoodsDetailSpecAndDetailImagesWithCompletion:(id /* block */)arg0;
- (void)requestShopRecommendProductsWithCompletion:(id /* block */)arg0;
- (void)fetchGoodsDetailInfoWithParameters:(id)arg0 completion:(id /* block */)arg1 routerCompletion:(id /* block */)arg2;
- (void)updateAllGoodsDetailInfo:(id /* block */)arg0;
- (id)responseCacheKey;
- (id)currentGoodsDetailModel;
- (void)setCollapse:(id)arg0;
- (id)shopRecommendResponse;
- (void)updateResponseWithNeedRefreshFlag:(id)arg0;
- (void)setGoodsDetailResponse:(id)arg0;
- (void)setCurrentGoodsDetailIndex:(long long)arg0;
- (long long)currentGoodsDetailIndex;
- (void)setCurrentGoodsDetailRawDict:(id)arg0;
- (id)pdpQuality;
- (void)updateGoodsDetailResponse:(id)arg0;
- (void)setResponseCacheKey:(id)arg0;
- (id)currentGoodsDetailRawDict;
- (void)fetchSearchHintWordWithParams:(id)arg0;
- (void)preloadIronMan:(id)arg0;
- (void)trackUserBehavior;
- (void)dealWithVerifyView:(id)arg0 completion:(id /* block */)arg1;
- (void)setBdTuring:(id)arg0;
- (void)getGoodsDetailWithMetaParams:(id)arg0 newRequest:(id)arg1 completion:(id /* block */)arg2 metricsBlock:(id /* block */)arg3;
- (void)setupNetTask:(id)arg0;
- (void)reportCpsTrackWithRetry:(id)arg0 productID:(id)arg1 reportType:(id)arg2;
- (id)buildUpUIParams;
- (long long)shopRecommendTabIndex;
- (void)setAddressDetailToNewRequest:(id)arg0 addressModel:(id)arg1;
- (id)appendAddressDetailInMetaParamsStr:(id)arg0 addressModel:(id)arg1;
- (void)requestPackByChunkWithParams:(id)arg0 newRequest:(id)arg1 additions:(id)arg2 promotionIDs:(id)arg3 completion:(id /* block */)arg4;
- (id)composeDetailCacheDiff:(id)arg0;
- (void)setSearchWordResponse:(id)arg0;
- (void)setSearchRecommendWord:(id)arg0;
- (void)setDetailDetailModel:(id)arg0;
- (BOOL)shouldRequestShopRecommend;
- (void)setShopRecommendResponse:(id)arg0;
- (id)shopRecommendReqParams;
- (id)clientStorage;
- (void)updateGroupBuyInfoWithPromotionID:(id)arg0 productID:(id)arg1 additions:(id)arg2 completion:(id /* block */)arg3;
- (void)requestMoreProducts:(id /* block */)arg0;
- (BOOL)isPromotionV2IsNotEmpty;
- (void)setCurrentGoodsDetailModel:(id)arg0;
- (void)setShopRecommendTabIndex:(long long)arg0;
- (void)setPdpQuality:(id)arg0;
- (void)setChunkManager:(id)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (void)setServiceProvider:(id)arg0;
- (void)setRequest:(id)arg0;
- (id)request;
- (id)context;
- (id)serviceProvider;
- (BOOL)isDeleted;
- (id)collapse;
- (id)cacheManager;
- (void)setCacheManager:(id)arg0;
- (id)pageIdentifier;
- (void)setPageIdentifier:(id)arg0;
- (void)postSetup;
- (id /* block */)chunkCallback;
- (void)setChunkCallback:(id /* block */)arg0;
- (id)chunkManager;

@end