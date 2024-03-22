//
//     Generated by private class-dump
//

@class NSMutableDictionary, IESECGoodsDetailShowRequest, IESECGoodsRecommendDataController, NSIndexPath, NSDictionary, IESECQualityInfoV2, IESECGoodsDetailSectionObjectManager, IESECGoodsDetailPageDataController, NSString, IESECGoodsDetailEventManager, IESECGoodsDetailPageActivityManager, IESECPDPSlcViewPreloadManager, IESECTracker, IESECTrackContext, IESECGoodsDetailSKUManager, IESECGoodsDetailSliceManager, IESECLLDCLynxManager;

@interface IESECGoodsDetailPageContext : NSObject <IESECGoodsDetailPageActivityManagerDelegate, IESECPDPContextService> {
    BOOL _shouldHideGoodsDetail;
    BOOL _popupWhenClose;
    BOOL _couldShowFriendsIconAtShareButton;
    BOOL _hasOpenedSKU;
    IESECGoodsDetailShowRequest *_goodsDetailRequest;
    IESECGoodsDetailPageActivityManager *_activityManager;
    IESECGoodsDetailSKUManager *_skuManager;
    IESECGoodsDetailSectionObjectManager *_sectionObjectManager;
    IESECGoodsDetailPageDataController *_goodsDetailPageDataController;
    IESECPDPSlcViewPreloadManager *_slcViewPreloadManager;
    IESECTracker *_tracker;
    IESECQualityInfoV2 *_qualityInfoV2;
    long long _currentContainerMode;
    IESECLLDCLynxManager *_lynxManager;
    IESECGoodsDetailSliceManager *_sliceManager;
    IESECGoodsDetailEventManager *_eventMananger;
    NSString *_identifier;
    NSMutableDictionary *_goodsSharedDictionary;
    NSDictionary *_hybridLogData;
    NSIndexPath *_lastWaterfallMaskIndexPath;
    double _percent;
    IESECGoodsRecommendDataController *_recommendDataController;
    IESECTrackContext *_trackerContext;
    NSDictionary *_metaParamsDict;
    double _priceOffsetUpdateTime;
}

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) IESECGoodsDetailShowRequest *goodsDetailRequest;
@property (retain, nonatomic) IESECGoodsRecommendDataController *recommendDataController;
@property (retain, nonatomic) IESECGoodsDetailPageActivityManager *activityManager;
@property (retain, nonatomic) IESECGoodsDetailSKUManager *skuManager;
@property (retain, nonatomic) IESECPDPSlcViewPreloadManager *slcViewPreloadManager;
@property (retain, nonatomic) IESECTracker *tracker;
@property (retain, nonatomic) IESECTrackContext *trackerContext;
@property (retain, nonatomic) NSMutableDictionary *goodsSharedDictionary;
@property (retain, nonatomic) NSDictionary *hybridLogData;
@property (retain, nonatomic) NSDictionary *metaParamsDict;
@property (nonatomic) BOOL shouldHideGoodsDetail;
@property (nonatomic) double priceOffsetUpdateTime;
@property (readonly, nonatomic) IESECGoodsDetailSectionObjectManager *sectionObjectManager;
@property (retain, nonatomic) IESECGoodsDetailPageDataController *goodsDetailPageDataController;
@property (readonly, nonatomic) IESECQualityInfoV2 *qualityInfoV2;
@property (nonatomic) long long currentContainerMode;
@property (retain, nonatomic) IESECLLDCLynxManager *lynxManager;
@property (retain, nonatomic) IESECGoodsDetailSliceManager *sliceManager;
@property (retain, nonatomic) IESECGoodsDetailEventManager *eventMananger;
@property (nonatomic) BOOL popupWhenClose;
@property (nonatomic) BOOL couldShowFriendsIconAtShareButton;
@property (retain, nonatomic) NSIndexPath *lastWaterfallMaskIndexPath;
@property (nonatomic) BOOL hasOpenedSKU;
@property (nonatomic) double percent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupTracker;
- (id)trackerContext;
- (void)setTrackerContext:(id)arg0;
- (id)recommendDataController;
- (void)setRecommendDataController:(id)arg0;
- (id)lynxManager;
- (BOOL)fromLive;
- (void)setLynxManager:(id)arg0;
- (id)metaParamsDict;
- (void)setMetaParamsDict:(id)arg0;
- (id)sliceManager;
- (void)setSliceManager:(id)arg0;
- (id)goodsDetailRequest;
- (id)goodsDetailPageDataController;
- (BOOL)shouldHideGoodsDetail;
- (id)skuManager;
- (void)setSkuManager:(id)arg0;
- (id)sectionObjectManager;
- (id)goodsSharedDictionary;
- (void)updateTrackMetaEnranceInfoStringWithResponder:(id)arg0;
- (BOOL)popupWhenClose;
- (void)setPopupWhenClose:(BOOL)arg0;
- (void)setupQualityInfo:(id)arg0;
- (id)qualityInfoV2;
- (void)startPreloadSlcView;
- (id)initWithGoodsDetailPageRequest:(id)arg0;
- (void)setGoodsDetailPageDataController:(id)arg0;
- (BOOL)isInvalidProduct;
- (void)updateGoodsDetailResponse;
- (void)chunkMonitorReport:(id)arg0;
- (void)updateAllGoodsDetailInfo:(id /* block */)arg0;
- (void)goodsDetailPageActivityManagerDidTriggerAutoUpdateAuction:(id)arg0 completion:(id /* block */)arg1;
- (void)setGoodsSharedDictionary:(id)arg0;
- (void)setupEntranceInfoString;
- (void)setupMetaParamsString;
- (void)setupDataController;
- (void)updatePageIdentifier;
- (void)setupLabelName;
- (void)setupBusinessTrackerParams;
- (void)setupHybridLogData;
- (void)updateSliceData;
- (void)updateShouldHideGoodsDetail;
- (void)updateRecommendDataControllerInputParams;
- (void)setSlcViewPreloadManager:(id)arg0;
- (id)slcViewPreloadManager;
- (id)trackMetaFormat:(id)arg0;
- (void)setShouldHideGoodsDetail:(BOOL)arg0;
- (void)preloadTextWithOneIconElementList:(id)arg0;
- (void)preloadCouponButtonElementList:(id)arg0;
- (void)preloadGradientLabelItemList:(id)arg0;
- (void)preloadIconImageModel:(id)arg0;
- (void)preloadTextWithIconElement:(id)arg0;
- (void)updateSliceOffset;
- (void)updateShopRecommend;
- (void)clearResponseCacheRequired;
- (void)updateAddressID:(id)arg0 type:(id)arg1;
- (void)preloadLongContentLabelElementIconImages:(id)arg0;
- (void)preloadIconImageModelList:(id)arg0;
- (id)recommendListController;
- (BOOL)fromFlowPage;
- (BOOL)longConnectionEnable;
- (void)setGoodsDetailRequest:(id)arg0;
- (long long)currentContainerMode;
- (void)setCurrentContainerMode:(long long)arg0;
- (id)eventMananger;
- (void)setEventMananger:(id)arg0;
- (id)hybridLogData;
- (void)setHybridLogData:(id)arg0;
- (BOOL)couldShowFriendsIconAtShareButton;
- (void)setCouldShowFriendsIconAtShareButton:(BOOL)arg0;
- (id)lastWaterfallMaskIndexPath;
- (void)setLastWaterfallMaskIndexPath:(id)arg0;
- (BOOL)hasOpenedSKU;
- (void)setHasOpenedSKU:(BOOL)arg0;
- (double)priceOffsetUpdateTime;
- (void)setPriceOffsetUpdateTime:(double)arg0;
- (id)tracker;
- (void)setTracker:(id)arg0;
- (void).cxx_destruct;
- (id)activityManager;
- (id)identifier;
- (void)setActivityManager:(id)arg0;
- (void)setIdentifier:(id)arg0;
- (void)showBanner;
- (double)percent;
- (void)setPercent:(double)arg0;

@end