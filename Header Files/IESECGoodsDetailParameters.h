//
//     Generated by private class-dump
//

@class NSMutableDictionary, IESECGoodsDeletedModel, IESECGoodsActivityMananger, IESECommerceServiceProvider, NSDictionary, IESECGoodsSearchWordResponse, IESECGoodsDetailPageContext, IESECShopInfoModel, IESECGoodsDetailPageDataController, NSString, IESECRecommendCommonProductPriceModel, NSArray, IESECGoodsDetailModel, NSNumber, IESECInternalFeedStyleModel, IESECGoodsDetailRequestParams;
@protocol IESECGoodsDetailShopEntryModel;

@interface IESECGoodsDetailParameters : IESECContext <NSCopying, NSMutableCopying> {
    BOOL _isRequesting;
    BOOL _avoidHalfMode;
    BOOL _asChildVC;
    BOOL _asNavigationRootVC;
    BOOL _asNineScreen;
    BOOL _hideDashLine;
    BOOL _isAds;
    BOOL _isStar;
    BOOL _luban;
    BOOL _isFromAd;
    BOOL _enableCommonAdTrack;
    BOOL _followStatus;
    BOOL _isFromVideo;
    BOOL _hasVideoInfo;
    BOOL _isLiveFloatUserClosed;
    BOOL _isLiveFloatUserMuted;
    BOOL _isLiveFloatClosedOtherPage;
    BOOL _shouldHideGoodsDetail;
    BOOL _unAvailable;
    BOOL _oneStepSubmit;
    BOOL _isFromInternalFeed;
    NSString *_identifier;
    NSString *_itemID;
    NSString *_combinationID;
    NSString *_KOLID;
    NSString *_metaParams;
    NSString *_domainParams;
    NSDictionary *_metaParamsDict;
    NSDictionary *_requestAdditions;
    NSString *_popType;
    NSString *_coverImgURLString;
    NSNumber *_hotSaleType;
    NSString *_hotSaleSkuId;
    IESECRecommendCommonProductPriceModel *_productPrice;
    NSNumber *_productSales;
    NSString *_sourceBtmToken;
    NSArray *_goodPriceParam;
    IESECGoodsDetailPageContext *_goodsDetailContext;
    IESECGoodsDetailPageDataController *_goodsDetailPageDataController;
    IESECGoodsDetailRequestParams *_schemaV2Request;
    NSString *_pageID;
    NSString *_productID;
    NSString *_AdCID;
    NSString *_AdGroupID;
    NSString *_AdLogExtra;
    NSString *_AdExtraDataJSONString;
    NSDictionary *_AdAggParams;
    NSDictionary *_AdExtra;
    NSDictionary *_AdExtraData;
    NSString *_sourcePage;
    NSString *_enterMethod;
    NSString *_carrierType;
    NSString *_entranceInfoJSONString;
    NSDictionary *_passthroughEventV3Dict;
    NSDictionary *_depositTrackParams;
    NSString *_targetPromotionID;
    NSString *_currentAddrID;
    NSArray *_promotions;
    long long _targetIndex;
    NSString *_bdTuring;
    NSString *_searchRecommendWord;
    IESECGoodsSearchWordResponse *_searchResponse;
    IESECInternalFeedStyleModel *_interFlowStyle;
    long long _messageDisplayIndex;
    IESECShopInfoModel *_shopInfo;
    double _requestStart;
    double _firstCardImageSubtractedHeight;
    NSDictionary *_hybridLogData;
    NSDictionary *_targetPromotionRawDict;
    NSDictionary *_targetPromotionOrderRawDict;
    NSArray *_rawResponsePromotions;
    id _latestDynamicRawResponse;
    IESECGoodsActivityMananger *_activityManager;
    NSMutableDictionary *_sharedDict;
    NSString *_liveWindowRoomID;
    NSString *_sellingPointTitle;
    NSString *_userAddressID;
    IESECGoodsDeletedModel *_deletedInfo;
    unsigned long long _marketingComponentViewCount;
    NSString *_trackNewSourceType;
    NSString *_btmID;
    id /* block */ _willOpenHalfPage;
    id /* block */ _willClosePage;
    id /* block */ _closeHalfPageProgress;
    NSString *_frontCategoryName;
    NSNumber *_frontCategoryId;
    NSNumber *_firstCategoryId;
    NSString *_firstCategoryName;
    NSString *_goodsDetailMaskColor;
    NSString *_channelId;
    long long _channelType;
    IESECommerceServiceProvider *_serviceProvider;
    long long _pageInternalFlowStyle;
    IESECGoodsDetailModel *_cachedTarget;
}

@property (readonly, nonatomic) BOOL fromLive;
@property (readonly, nonatomic) BOOL fromFeed;
@property (readonly, nonatomic) BOOL fromFlowPage;
@property (readonly, nonatomic) BOOL withLiveRoomID;
@property (readonly, nonatomic) double goodsImageHeaderViewHeight;
@property (readonly, nonatomic) NSString *subsidyChannel;
@property (readonly, nonatomic) id<IESECGoodsDetailShopEntryModel> shopEntry;
@property (retain, nonatomic) NSMutableDictionary *sharedDict;
@property (retain, nonatomic) IESECGoodsDetailModel *cachedTarget;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSDictionary *AdExtraData;
@property (retain, nonatomic) NSDictionary *metaParamsDict;
@property (retain, nonatomic) NSDictionary *targetPromotionRawDict;
@property (retain, nonatomic) NSDictionary *hybridLogData;
@property (nonatomic) BOOL isRequesting;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *combinationID;
@property (copy, nonatomic) NSString *KOLID;
@property (copy, nonatomic) NSString *metaParams;
@property (copy, nonatomic) NSString *domainParams;
@property (copy, nonatomic) NSDictionary *requestAdditions;
@property (nonatomic) BOOL avoidHalfMode;
@property (nonatomic) BOOL asChildVC;
@property (copy, nonatomic) NSString *popType;
@property (nonatomic) BOOL asNavigationRootVC;
@property (copy, nonatomic) NSString *coverImgURLString;
@property (nonatomic) BOOL asNineScreen;
@property (nonatomic) BOOL hideDashLine;
@property (retain, nonatomic) NSNumber *hotSaleType;
@property (copy, nonatomic) NSString *hotSaleSkuId;
@property (retain, nonatomic) IESECRecommendCommonProductPriceModel *productPrice;
@property (retain, nonatomic) NSNumber *productSales;
@property (copy, nonatomic) NSString *sourceBtmToken;
@property (retain, nonatomic) NSArray *goodPriceParam;
@property (nonatomic) BOOL isAds;
@property (nonatomic) BOOL isStar;
@property (retain, nonatomic) IESECGoodsDetailPageContext *goodsDetailContext;
@property (retain, nonatomic) IESECGoodsDetailPageDataController *goodsDetailPageDataController;
@property (retain, nonatomic) IESECGoodsDetailRequestParams *schemaV2Request;
@property (nonatomic, getter=isLuban) BOOL luban;
@property (copy, nonatomic) NSString *pageID;
@property (copy, nonatomic) NSString *productID;
@property (copy, nonatomic) NSString *AdCID;
@property (copy, nonatomic) NSString *AdGroupID;
@property (copy, nonatomic) NSString *AdLogExtra;
@property (copy, nonatomic) NSString *AdExtraDataJSONString;
@property (copy, nonatomic) NSDictionary *AdAggParams;
@property (copy, nonatomic) NSDictionary *AdExtra;
@property (nonatomic) BOOL isFromAd;
@property (nonatomic) BOOL enableCommonAdTrack;
@property (copy, nonatomic) NSString *sourcePage;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *carrierType;
@property (copy, nonatomic) NSString *entranceInfoJSONString;
@property (readonly, copy, nonatomic) NSString *entranceInfoEcomGroupType;
@property (copy, nonatomic) NSDictionary *passthroughEventV3Dict;
@property (nonatomic) BOOL followStatus;
@property (copy, nonatomic) NSDictionary *depositTrackParams;
@property (copy, nonatomic) NSString *targetPromotionID;
@property (copy, nonatomic) NSString *currentAddrID;
@property (nonatomic) BOOL isFromVideo;
@property (copy, nonatomic) NSArray *promotions;
@property (nonatomic) long long targetIndex;
@property (readonly, nonatomic) IESECGoodsDetailModel *targetPromotion;
@property (copy, nonatomic) NSString *bdTuring;
@property (copy, nonatomic) NSString *searchRecommendWord;
@property (copy, nonatomic) IESECGoodsSearchWordResponse *searchResponse;
@property (copy, nonatomic) IESECInternalFeedStyleModel *interFlowStyle;
@property (nonatomic) long long messageDisplayIndex;
@property (retain, nonatomic) IESECShopInfoModel *shopInfo;
@property (nonatomic) double requestStart;
@property (nonatomic) double firstCardImageSubtractedHeight;
@property (retain, nonatomic) NSDictionary *targetPromotionOrderRawDict;
@property (retain, nonatomic) NSArray *rawResponsePromotions;
@property (retain, nonatomic) id latestDynamicRawResponse;
@property (retain, nonatomic) IESECGoodsActivityMananger *activityManager;
@property (nonatomic) BOOL hasVideoInfo;
@property (copy, nonatomic) NSString *liveWindowRoomID;
@property (nonatomic) BOOL isLiveFloatUserClosed;
@property (nonatomic) BOOL isLiveFloatUserMuted;
@property (nonatomic) BOOL isLiveFloatClosedOtherPage;
@property (copy, nonatomic) NSString *sellingPointTitle;
@property (copy, nonatomic) NSString *userAddressID;
@property (nonatomic) BOOL shouldHideGoodsDetail;
@property (nonatomic) BOOL unAvailable;
@property (nonatomic) BOOL oneStepSubmit;
@property (retain, nonatomic) IESECGoodsDeletedModel *deletedInfo;
@property (nonatomic) unsigned long long marketingComponentViewCount;
@property (copy, nonatomic) NSString *trackNewSourceType;
@property (readonly, nonatomic) unsigned long long activityDisplayStyle;
@property (copy, nonatomic) NSString *btmID;
@property (copy, nonatomic) id /* block */ willOpenHalfPage;
@property (copy, nonatomic) id /* block */ willClosePage;
@property (copy, nonatomic) id /* block */ closeHalfPageProgress;
@property (copy, nonatomic) NSString *frontCategoryName;
@property (retain, nonatomic) NSNumber *frontCategoryId;
@property (retain, nonatomic) NSNumber *firstCategoryId;
@property (copy, nonatomic) NSString *firstCategoryName;
@property (copy, nonatomic) NSString *goodsDetailMaskColor;
@property (copy, nonatomic) NSString *channelId;
@property (nonatomic) long long channelType;
@property (retain, nonatomic) IESECommerceServiceProvider *serviceProvider;
@property (nonatomic) long long pageInternalFlowStyle;
@property (nonatomic) BOOL isFromInternalFeed;

- (BOOL)followStatus;
- (void)setEnterMethod:(id)arg0;
- (id)enterMethod;
- (void)setAdExtraData:(id)arg0;
- (void)setFollowStatus:(BOOL)arg0;
- (void)setIsRequesting:(BOOL)arg0;
- (void)setCarrierType:(id)arg0;
- (void)setSourceBtmToken:(id)arg0;
- (void)setSourcePage:(id)arg0;
- (void)setAvoidHalfMode:(BOOL)arg0;
- (long long)pageInternalFlowStyle;
- (id)frontCategoryName;
- (id)frontCategoryId;
- (BOOL)isAds;
- (BOOL)isStar;
- (BOOL)isRequesting;
- (BOOL)fromFeed;
- (BOOL)isLuban;
- (void)setAdExtra:(id)arg0;
- (id)sourceBtmToken;
- (id)popType;
- (void)setPopType:(id)arg0;
- (void)setIsAds:(BOOL)arg0;
- (id)shopInfo;
- (void)setShopInfo:(id)arg0;
- (void)setAdLogExtra:(id)arg0;
- (id)sourcePage;
- (id)carrierType;
- (id)requestAdditions;
- (id)metaParams;
- (void)setRequestAdditions:(id)arg0;
- (void)setMetaParams:(id)arg0;
- (id)KOLID;
- (void)setKOLID:(id)arg0;
- (id)productPrice;
- (void)setPromotions:(id)arg0;
- (BOOL)asChildVC;
- (void)setOneStepSubmit:(BOOL)arg0;
- (id)targetPromotion;
- (void)setAsNineScreen:(BOOL)arg0;
- (void)setTargetPromotionID:(id)arg0;
- (void)setPageInternalFlowStyle:(long long)arg0;
- (void)setAsChildVC:(BOOL)arg0;
- (void)setAdCID:(id)arg0;
- (void)setAdGroupID:(id)arg0;
- (void)setAdAggParams:(id)arg0;
- (void)setIsFromVideo:(BOOL)arg0;
- (void)setPassthroughEventV3Dict:(id)arg0;
- (void)setEntranceInfoJSONString:(id)arg0;
- (void)setWillOpenHalfPage:(id /* block */)arg0;
- (void)setWillClosePage:(id /* block */)arg0;
- (void)setCloseHalfPageProgress:(id /* block */)arg0;
- (void)setFrontCategoryId:(id)arg0;
- (void)setFrontCategoryName:(id)arg0;
- (void)setGoodPriceParam:(id)arg0;
- (void)setIsStar:(BOOL)arg0;
- (void)setUnAvailable:(BOOL)arg0;
- (void)setFirstCategoryId:(id)arg0;
- (void)setFirstCategoryName:(id)arg0;
- (void)setCoverImgURLString:(id)arg0;
- (id)targetPromotionID;
- (void)setAdExtraDataJSONString:(id)arg0;
- (void)setProductSales:(id)arg0;
- (void)setProductPrice:(id)arg0;
- (BOOL)avoidHalfMode;
- (void)setGoodsDetailMaskColor:(id)arg0;
- (BOOL)hasVideoInfo;
- (BOOL)fromLive;
- (BOOL)isLiveFloatUserClosed;
- (id)liveWindowRoomID;
- (void)setIsLiveFloatUserClosed:(BOOL)arg0;
- (void)setLiveWindowRoomID:(id)arg0;
- (void)setBtmID:(id)arg0;
- (id)btmID;
- (id)productSales;
- (id)entranceInfoJSONString;
- (id)combinationID;
- (void)setCombinationID:(id)arg0;
- (void)setHotSaleSkuId:(id)arg0;
- (void)setHotSaleType:(id)arg0;
- (void)setTrackNewSourceType:(id)arg0;
- (BOOL)hideDashLine;
- (void)setHideDashLine:(BOOL)arg0;
- (id)metaParamsDict;
- (void)setMetaParamsDict:(id)arg0;
- (id)passthroughEventV3Dict;
- (id)firstCategoryId;
- (id)firstCategoryName;
- (id)AdAggParams;
- (id)goodPriceParam;
- (id)AdLogExtra;
- (id)AdCID;
- (id)currentAddrID;
- (void)updatePackInfoWithCompletion:(id /* block */)arg0;
- (void)fetchDynamicInfo:(id /* block */)arg0 updatingAuction:(BOOL)arg1;
- (id)shopEntry;
- (id)sharedDict;
- (id)goodsDetailContext;
- (id)trackNewSourceType;
- (id)userAddressID;
- (id)subsidyChannel;
- (id)targetPromotionOrderRawDict;
- (void)setTargetPromotionOrderRawDict:(id)arg0;
- (BOOL)isFromVideo;
- (id)depositTrackParams;
- (BOOL)isFromInternalFeed;
- (id)AdExtraDataJSONString;
- (id)AdExtraData;
- (id)AdGroupID;
- (id)goodsDetailPageDataController;
- (BOOL)shouldHideGoodsDetail;
- (unsigned long long)marketingComponentViewCount;
- (BOOL)isFromAd;
- (void)setCurrentAddrID:(id)arg0;
- (id)hotSaleType;
- (id)hotSaleSkuId;
- (void)fetchDynamicInfo:(id /* block */)arg0;
- (void)setIsLiveFloatClosedOtherPage:(BOOL)arg0;
- (BOOL)withLiveRoomID;
- (BOOL)isLiveFloatUserMuted;
- (void)setIsLiveFloatUserMuted:(BOOL)arg0;
- (id)goodsDetailMaskColor;
- (id)schemaV2Request;
- (id)searchRecommendWord;
- (id /* block */)willClosePage;
- (BOOL)isLiveFloatClosedOtherPage;
- (id /* block */)closeHalfPageProgress;
- (id)deletedInfo;
- (id)coverImgURLString;
- (id)domainParams;
- (void)setSchemaV2Request:(id)arg0;
- (void)setGoodsDetailPageDataController:(id)arg0;
- (void)setGoodsDetailContext:(id)arg0;
- (void)fetchPackAndRefreshContainer:(id /* block */)arg0 identifier:(id)arg1;
- (id)bdTuring;
- (void)setDomainParams:(id)arg0;
- (void)setLuban:(BOOL)arg0;
- (void)setSellingPointTitle:(id)arg0;
- (void)setUserAddressID:(id)arg0;
- (void)setIsFromAd:(BOOL)arg0;
- (void)setEnableCommonAdTrack:(BOOL)arg0;
- (id /* block */)willOpenHalfPage;
- (id)sellingPointTitle;
- (BOOL)enableCommonAdTrack;
- (BOOL)asNavigationRootVC;
- (void)setAsNavigationRootVC:(BOOL)arg0;
- (BOOL)asNineScreen;
- (BOOL)unAvailable;
- (void)setupLabelName;
- (void)setupHybridLogData;
- (void)updateShouldHideGoodsDetail;
- (void)setShouldHideGoodsDetail:(BOOL)arg0;
- (BOOL)fromFlowPage;
- (id)hybridLogData;
- (void)setHybridLogData:(id)arg0;
- (id)rawResponsePromotions;
- (void)setBdTuring:(id)arg0;
- (void)setSearchRecommendWord:(id)arg0;
- (void)setTargetPromotionRawDict:(id)arg0;
- (void)setHasVideoInfo:(BOOL)arg0;
- (void)setupCommentStyle;
- (void)setRawResponsePromotions:(id)arg0;
- (void)setDeletedInfo:(id)arg0;
- (void)setupBusinessTrackerParams:(id)arg0;
- (void)setSearchResponse:(id)arg0;
- (void)setInterFlowStyle:(id)arg0;
- (void)setSharedDict:(id)arg0;
- (void)setIsFromInternalFeed:(BOOL)arg0;
- (id)entranceInfoEcomGroupType;
- (void)fetchSearchHintWordWithCompletion:(id /* block */)arg0;
- (unsigned long long)activityDisplayStyle;
- (id)interFlowStyle;
- (id)AdExtra;
- (void)setDepositTrackParams:(id)arg0;
- (id)searchResponse;
- (long long)messageDisplayIndex;
- (void)setMessageDisplayIndex:(long long)arg0;
- (double)firstCardImageSubtractedHeight;
- (void)setFirstCardImageSubtractedHeight:(double)arg0;
- (id)targetPromotionRawDict;
- (id)latestDynamicRawResponse;
- (void)setLatestDynamicRawResponse:(id)arg0;
- (BOOL)oneStepSubmit;
- (void)setMarketingComponentViewCount:(unsigned long long)arg0;
- (id)cachedTarget;
- (void)setCachedTarget:(id)arg0;
- (double)goodsImageHeaderViewHeight;
- (BOOL)isGotoNativeOrderPageWithActionType:(long long)arg0;
- (void)setRequestStart:(double)arg0;
- (double)requestStart;
- (id)productID;
- (long long)channelType;
- (id)init;
- (void).cxx_destruct;
- (void)setPageID:(id)arg0;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)setServiceProvider:(id)arg0;
- (id)pageID;
- (id)itemID;
- (id)activityManager;
- (void)setProductID:(id)arg0;
- (id)identifier;
- (void)setActivityManager:(id)arg0;
- (void)setTargetIndex:(long long)arg0;
- (void)setItemID:(id)arg0;
- (long long)targetIndex;
- (id)serviceProvider;
- (void)setIdentifier:(id)arg0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)arg0;
- (id)promotions;
- (id)channelId;
- (void)setChannelId:(id)arg0;
- (void)setChannelType:(long long)arg0;
- (void)postSetup;
- (void)updateWithResponse:(id)arg0;

@end
