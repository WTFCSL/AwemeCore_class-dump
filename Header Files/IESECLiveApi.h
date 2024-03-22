//
//     Generated by private class-dump
//

@class NSString, IESECLiveAPIMonitor, NSMutableArray, IESECLiveApiDurationManager;

@interface IESECLiveApi : NSObject <IESECLiveApi> {
    BOOL _openWithSaaS;
    NSString *_baseURLString;
    IESECLiveApiDurationManager *_apiDurationManager;
    IESECLiveAPIMonitor *_monitor;
    NSMutableArray *_requestNotBack;
}

@property (retain, nonatomic) IESECLiveApiDurationManager *apiDurationManager;
@property (retain, nonatomic) IESECLiveAPIMonitor *monitor;
@property (retain, nonatomic) NSMutableArray *requestNotBack;
@property (nonatomic) BOOL openWithSaaS;
@property (copy, nonatomic) NSString *baseURLString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)generateResponseInfo:(id)arg0;
+ (id /* block */)convertBlock:(id /* block */)arg0;
+ (id)new;

- (id)request:(id)arg0 callback:(id /* block */)arg1;
- (BOOL)openWithSaaS;
- (id)initWithOpenWithSaaS:(BOOL)arg0;
- (void)fetchCouponInfoFor:(id)arg0 callback:(id /* block */)arg1;
- (void)bindCouponForRoom:(id)arg0 couponId:(id)arg1 callback:(id /* block */)arg2;
- (void)fetchAllCouponsForRoomId:(id)arg0 page:(unsigned long long)arg1 callback:(id /* block */)arg2;
- (void)fetchAllCouponsForIM:(id)arg0 page:(unsigned long long)arg1 callback:(id /* block */)arg2;
- (void)endGrantCouponForRoom:(id)arg0 couponId:(id)arg1 callback:(id /* block */)arg2;
- (void)grantCouponForConversation:(id)arg0 couponId:(id)arg1 callback:(id /* block */)arg2;
- (void)grantCouponForRoom:(id)arg0 couponId:(id)arg1 callback:(id /* block */)arg2;
- (void)iesec_addAPIMonitor:(id)arg0;
- (void)fetchFlashSaleGoodsBrandWithCategoryID:(id)arg0 shopID:(id)arg1 prefix:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchAnchorCreateFlashSaleCategoryItemsWithCategoryID:(id)arg0 shopID:(id)arg1 targetUID:(id)arg2 completion:(id /* block */)arg3;
- (void)uploadImage:(id)arg0 targetDataSize:(id)arg1 callback:(id /* block */)arg2;
- (void)createFlashSaleProductWithRequest:(id)arg0 completion:(id /* block */)arg1;
- (void)fetchAutoGeneratedBarcodeWithCount:(unsigned long long)arg0 completion:(id /* block */)arg1;
- (void)fetchFlashSaleAuthorWithcallback:(id /* block */)arg0;
- (void)fetchGoodsStateForRoomId:(id)arg0 pageIndex:(id)arg1 callback:(id /* block */)arg2;
- (void)fetchAnchorTransDataForRoomId:(id)arg0 callback:(id /* block */)arg1;
- (void)fetchAnchorNotificationBarForRoomId:(id)arg0 hasNoCommodityFilter:(BOOL)arg1 hasNoCommodityFilterDefault:(BOOL)arg2 callBack:(id /* block */)arg3;
- (void)fetchStateForRoomId:(id)arg0 callback:(id /* block */)arg1;
- (void)fetchAnchorGoodsList:(id)arg0 callback:(id /* block */)arg1;
- (void)fetchGoodsCampaignList:(id)arg0 callback:(id /* block */)arg1;
- (void)fetchAnchorGoodsPickerListWith:(id)arg0 pageIndex:(id)arg1 keyWord:(id)arg2 pickStatus:(long long)arg3 pickMode:(long long)arg4 callback:(id /* block */)arg5;
- (void)updateCurrentExplainProduct:(id)arg0 roomId:(id)arg1 isCancel:(BOOL)arg2 callback:(id /* block */)arg3;
- (void)deleteExplainVideoForRoomID:(id)arg0 promotionID:(id)arg1 callback:(id /* block */)arg2;
- (void)bindPickedGoods:(id)arg0 userId:(id)arg1 toRoomId:(id)arg2 callback:(id /* block */)arg3;
- (void)stopFlashSaleWithShopID:(id)arg0 roomID:(id)arg1 promotionIDs:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchPopGoods:(id)arg0 callback:(id /* block */)arg1;
- (void)postImageURL:(id)arg0 imageId:(id)arg1 roomId:(id)arg2 callback:(id /* block */)arg3;
- (void)fetchBindedCouponsForRoom:(id)arg0 callback:(id /* block */)arg1;
- (id)uploadImageData:(id)arg0 URLString:(id)arg1 progress:(id *)arg2 parameters:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)updateListBanner:(id)arg0 completion:(id /* block */)arg1;
- (void)fetchShopVipShortTouch:(id)arg0 completion:(id /* block */)arg1;
- (void)fetchRedPackageInfo:(id)arg0 completion:(id /* block */)arg1;
- (void)fetchTaskDetail:(id)arg0 completion:(id /* block */)arg1;
- (void)cpsTrackBack:(id)arg0 callback:(id /* block */)arg1;
- (id)request:(id)arg0 completion:(id /* block */)arg1;
- (void)p_handleGoodsModelCampaign:(id)arg0 serverTime:(id)arg1;
- (void)getCompleteGoodsModels:(id)arg0 callback:(id /* block */)arg1;
- (void)p_pageGetGoodsModelWithProductID:(id)arg0 getRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)reportBuyingGoods:(id)arg0;
- (void)updatePrice:(id)arg0 completion:(id /* block */)arg1;
- (void)getTopGoodsModel:(id)arg0 completion:(id /* block */)arg1;
- (void)getGoodsModelWithPromotionID:(id)arg0 request:(id)arg1 completion:(id /* block */)arg2;
- (void)getGoodsModelWithProductID:(id)arg0 request:(id)arg1 completion:(id /* block */)arg2;
- (void)getRouterGoodsModelWithProductID:(id)arg0 request:(id)arg1 completion:(id /* block */)arg2;
- (void)checkGooods:(id)arg0 callback:(id /* block */)arg1;
- (void)editGoodsCart:(id)arg0 callback:(id /* block */)arg1;
- (void)fetchPopCard:(id)arg0 callback:(id /* block */)arg1;
- (void)fetchRelatedCard:(id)arg0 callback:(id /* block */)arg1;
- (void)askGoodsExplain:(id)arg0 completion:(id /* block */)arg1;
- (void)autoApplyCoupon:(id)arg0 callback:(id /* block */)arg1;
- (void)preloadGoodsListFirstPage:(id)arg0 completion:(id /* block */)arg1;
- (void)fetchGoodsListPage:(id)arg0 completion:(id /* block */)arg1;
- (void)fetchBottomGuideInfo:(id)arg0 completion:(id /* block */)arg1;
- (void)fetchTopVibeInfo:(id)arg0 completion:(id /* block */)arg1;
- (void)fetchHeaderSearchBarInfo:(id)arg0 completion:(id /* block */)arg1;
- (void)changeStore:(id)arg0 completion:(id /* block */)arg1;
- (void)enterRoomExtraRequest:(id)arg0 postMethod:(BOOL)arg1 callback:(id /* block */)arg2;
- (void)reportLogWithRequest:(id)arg0 callback:(id /* block */)arg1;
- (void)reportTaskCompletedWithRequest:(id)arg0 callback:(id /* block */)arg1;
- (void)fetchPlaybackDataWithRequest:(id)arg0 completion:(id /* block */)arg1;
- (void)fetchPublicScreenGoodsCardModelWithRequest:(id)arg0 callback:(id /* block */)arg1;
- (id)postByJSONSerializerWithPath:(id)arg0 params:(id)arg1 modelClass:(Class)arg2 completion:(id /* block */)arg3;
- (void)fetchReplayDataWithParams:(id)arg0 useJSONBody:(BOOL)arg1 completion:(id /* block */)arg2;
- (id)p_dealReqParams:(id)arg0;
- (id)apiDurationManager;
- (id)requestNotBack;
- (void)setOpenWithSaaS:(BOOL)arg0;
- (void)setApiDurationManager:(id)arg0;
- (void)setRequestNotBack:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)monitor;
- (void)setMonitor:(id)arg0;
- (void)cancelAllRequests;
- (id)baseURLString;
- (void)setBaseURLString:(id)arg0;

@end