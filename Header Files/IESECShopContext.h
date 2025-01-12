//
//     Generated by private class-dump
//

@class IESECShopPopupManager, NSString, IESECURLModel, NSMutableDictionary, NSDictionary, UIViewController, IESECShopPhotoSearchManager, NSNumber, IESECShopOwner;

@interface IESECShopContext : NSObject {
    BOOL _isSplitScreen;
    BOOL _fromProfilePage;
    BOOL _fromShopOrStorePage;
    BOOL _store;
    BOOL _custom;
    BOOL _productShopEntry;
    BOOL _showAddCart;
    BOOL _hasDiscountFilter;
    BOOL _isFromAd;
    BOOL _enableCommonAdTrack;
    BOOL _autoFollow;
    BOOL _isAIPreloadCacheInvalid;
    BOOL _isHitAIPreloadCache;
    long long _enterMode;
    IESECShopOwner *_shopOwner;
    NSString *_bindShopName;
    NSString *_shopId;
    NSString *_secShopId;
    IESECURLModel *_shopLogo;
    unsigned long long _liveStyle;
    long long _volumeType;
    unsigned long long _defaultTabType;
    unsigned long long _schemaTabType;
    unsigned long long _schemaSortType;
    unsigned long long _schemaPickType;
    NSNumber *_bottomModuleTypeValue;
    NSString *_bottomModuleParams;
    NSString *_previewToken;
    NSString *_templateId;
    NSString *_enterFrom;
    NSString *_whichAccount;
    NSString *_itemID;
    NSNumber *_brandVerified;
    NSString *_entrances;
    NSDictionary *_enterStorePageExtraDic;
    NSDictionary *_trackExtraDic;
    NSDictionary *_extraDict;
    NSString *_customIds;
    NSString *_customIdType;
    long long _shopProductCount;
    NSString *_shopURL;
    long long _tabType;
    long long _pageType;
    NSString *_promotionPrimaryColor;
    NSString *_promotionSecondaryColor;
    NSNumber *_promotionTransparency;
    NSDictionary *_passThroughHybrid;
    NSString *_passThroughAPI;
    NSDictionary *_ecomShareTrackParams;
    NSDictionary *_preEnterStoreParams;
    NSString *_liveMiniWindowRoomID;
    NSString *_anchorId;
    NSString *_taskBannerContainerID;
    NSString *_extraSchema;
    long long _extraSchemaType;
    NSDictionary *_entranceInfo;
    double _firstEnterTime;
    double _routeStart;
    NSString *_entranceClassName;
    UIViewController *_fromVC;
    NSMutableDictionary *_interceptionConfig;
    NSNumber *_targetTabType;
    NSNumber *_sortType;
    NSNumber *_sort;
    IESECShopPhotoSearchManager *_photoSearchManager;
    id /* block */ _containerWillClose;
    id /* block */ _closeProgressHandler;
    IESECShopPopupManager *_popupManager;
    unsigned long long _preloadType;
    NSString *_debugURL;
}

@property (nonatomic) long long enterMode;
@property (nonatomic) BOOL isSplitScreen;
@property (nonatomic) BOOL fromProfilePage;
@property (nonatomic) BOOL fromShopOrStorePage;
@property (retain, nonatomic) IESECShopOwner *shopOwner;
@property (copy, nonatomic) NSString *bindShopName;
@property (copy, nonatomic) NSString *shopId;
@property (copy, nonatomic) NSString *secShopId;
@property (copy, nonatomic) IESECURLModel *shopLogo;
@property (nonatomic) unsigned long long liveStyle;
@property (nonatomic, getter=isStore) BOOL store;
@property (nonatomic) long long volumeType;
@property (nonatomic) unsigned long long defaultTabType;
@property (nonatomic) unsigned long long schemaTabType;
@property (nonatomic) unsigned long long schemaSortType;
@property (nonatomic) unsigned long long schemaPickType;
@property (readonly, nonatomic) unsigned long long bottomModuleType;
@property (copy, nonatomic) NSNumber *bottomModuleTypeValue;
@property (copy, nonatomic) NSString *bottomModuleParams;
@property (copy, nonatomic) NSString *previewToken;
@property (readonly, nonatomic) BOOL isPreviewMode;
@property (copy, nonatomic) NSString *templateId;
@property (nonatomic, getter=isCustom) BOOL custom;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *whichAccount;
@property (copy, nonatomic) NSString *itemID;
@property (retain, nonatomic) NSNumber *brandVerified;
@property (copy, nonatomic) NSString *entrances;
@property (copy, nonatomic) NSDictionary *enterStorePageExtraDic;
@property (copy, nonatomic) NSDictionary *trackExtraDic;
@property (copy, nonatomic) NSDictionary *extraDict;
@property (copy, nonatomic) NSString *customIds;
@property (copy, nonatomic) NSString *customIdType;
@property (nonatomic) BOOL productShopEntry;
@property (nonatomic) long long shopProductCount;
@property (copy, nonatomic) NSString *shopURL;
@property (nonatomic) long long tabType;
@property (nonatomic) BOOL showAddCart;
@property (nonatomic) BOOL hasDiscountFilter;
@property (nonatomic) long long pageType;
@property (copy, nonatomic) NSString *promotionPrimaryColor;
@property (copy, nonatomic) NSString *promotionSecondaryColor;
@property (retain, nonatomic) NSNumber *promotionTransparency;
@property (copy, nonatomic) NSDictionary *passThroughHybrid;
@property (copy, nonatomic) NSString *passThroughAPI;
@property (copy, nonatomic) NSDictionary *ecomShareTrackParams;
@property (copy, nonatomic) NSDictionary *preEnterStoreParams;
@property (readonly, nonatomic) BOOL fromLive;
@property (copy, nonatomic) NSString *liveMiniWindowRoomID;
@property (copy, nonatomic) NSString *anchorId;
@property (copy, nonatomic) NSString *taskBannerContainerID;
@property (copy, nonatomic) NSString *extraSchema;
@property (nonatomic) long long extraSchemaType;
@property (copy, nonatomic) NSDictionary *entranceInfo;
@property (nonatomic) BOOL isFromAd;
@property (nonatomic) BOOL enableCommonAdTrack;
@property (nonatomic) BOOL autoFollow;
@property (nonatomic) double firstEnterTime;
@property (nonatomic) double routeStart;
@property (copy, nonatomic) NSString *entranceClassName;
@property (weak, nonatomic) UIViewController *fromVC;
@property (nonatomic) BOOL isAIPreloadCacheInvalid;
@property (nonatomic) BOOL isHitAIPreloadCache;
@property (retain, nonatomic) NSMutableDictionary *interceptionConfig;
@property (retain, nonatomic) NSNumber *targetTabType;
@property (retain, nonatomic) NSNumber *sortType;
@property (retain, nonatomic) NSNumber *sort;
@property (retain, nonatomic) IESECShopPhotoSearchManager *photoSearchManager;
@property (copy, nonatomic) id /* block */ containerWillClose;
@property (copy, nonatomic) id /* block */ closeProgressHandler;
@property (retain, nonatomic) IESECShopPopupManager *popupManager;
@property (nonatomic) unsigned long long preloadType;
@property (copy, nonatomic) NSString *debugURL;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (long long)tabType;
- (void)setExtraDict:(id)arg0;
- (void)setEntranceInfo:(id)arg0;
- (id)extraDict;
- (void)setPreloadType:(unsigned long long)arg0;
- (id)anchorId;
- (void)setAnchorId:(id)arg0;
- (void)setFromVC:(id)arg0;
- (id)fromVC;
- (id)shopLogo;
- (id)shopId;
- (void)setShopLogo:(id)arg0;
- (void)setShopId:(id)arg0;
- (BOOL)isPreviewMode;
- (id)entranceInfo;
- (id)ecomShareTrackParams;
- (void)setEcomShareTrackParams:(id)arg0;
- (void)setTabType:(long long)arg0;
- (void)setTrackExtraDic:(id)arg0;
- (id)trackExtraDic;
- (id)secShopId;
- (void)setSecShopId:(id)arg0;
- (id)bindShopName;
- (id)targetTabType;
- (BOOL)hasLiveRoom;
- (id /* block */)containerWillClose;
- (BOOL)fromLive;
- (void)setTargetTabType:(id)arg0;
- (long long)enterMode;
- (void)setEnterMode:(long long)arg0;
- (id)popupManager;
- (void)setPopupManager:(id)arg0;
- (id)brandVerified;
- (BOOL)isFromAd;
- (id)whichAccount;
- (void)setWhichAccount:(id)arg0;
- (void)setBrandVerified:(id)arg0;
- (void)setIsFromAd:(BOOL)arg0;
- (void)setEnableCommonAdTrack:(BOOL)arg0;
- (BOOL)enableCommonAdTrack;
- (BOOL)showAddCart;
- (id)passThroughAPI;
- (id)preEnterStoreParams;
- (id)liveMiniWindowRoomID;
- (void)setShowAddCart:(BOOL)arg0;
- (id)shopOwner;
- (unsigned long long)liveStyle;
- (void)setShopOwner:(id)arg0;
- (void)setContainerWillClose:(id /* block */)arg0;
- (void)setCloseProgressHandler:(id /* block */)arg0;
- (void)setTaskBannerContainerID:(id)arg0;
- (void)setPreviewToken:(id)arg0;
- (void)setSchemaTabType:(unsigned long long)arg0;
- (void)setSchemaSortType:(unsigned long long)arg0;
- (void)setSchemaPickType:(unsigned long long)arg0;
- (void)setVolumeType:(long long)arg0;
- (void)setLiveStyle:(unsigned long long)arg0;
- (void)setEntrances:(id)arg0;
- (void)setCustomIds:(id)arg0;
- (void)setCustomIdType:(id)arg0;
- (void)setPassThroughHybrid:(id)arg0;
- (void)setPassThroughAPI:(id)arg0;
- (void)setDebugURL:(id)arg0;
- (void)setExtraSchema:(id)arg0;
- (void)setAutoFollow:(BOOL)arg0;
- (void)setInterceptionConfig:(id)arg0;
- (void)setEnterStorePageExtraDic:(id)arg0;
- (void)setPreEnterStoreParams:(id)arg0;
- (void)setEntranceClassName:(id)arg0;
- (void)setIsSplitScreen:(BOOL)arg0;
- (void)setLiveMiniWindowRoomID:(id)arg0;
- (id)taskBannerContainerID;
- (id)extraSchema;
- (id)previewToken;
- (id)customIds;
- (id)customIdType;
- (id /* block */)closeProgressHandler;
- (void)updateWithInfoResponse:(id)arg0;
- (void)setProductShopEntry:(BOOL)arg0;
- (void)setShopProductCount:(long long)arg0;
- (void)setShopURL:(id)arg0;
- (void)setBindShopName:(id)arg0;
- (void)setPromotionPrimaryColor:(id)arg0;
- (void)setPromotionSecondaryColor:(id)arg0;
- (void)setPromotionTransparency:(id)arg0;
- (void)setDefaultTabType:(unsigned long long)arg0;
- (unsigned long long)bottomModuleType;
- (void)setBottomModuleTypeValue:(id)arg0;
- (id)bottomModuleParams;
- (void)setBottomModuleParams:(id)arg0;
- (void)updateWithBffTabResponse:(id)arg0;
- (id)photoSearchManager;
- (BOOL)fromProfilePage;
- (void)setFromProfilePage:(BOOL)arg0;
- (BOOL)fromShopOrStorePage;
- (void)setFromShopOrStorePage:(BOOL)arg0;
- (long long)volumeType;
- (unsigned long long)defaultTabType;
- (unsigned long long)schemaTabType;
- (unsigned long long)schemaSortType;
- (unsigned long long)schemaPickType;
- (id)bottomModuleTypeValue;
- (id)entrances;
- (id)enterStorePageExtraDic;
- (BOOL)productShopEntry;
- (long long)shopProductCount;
- (id)shopURL;
- (BOOL)hasDiscountFilter;
- (void)setHasDiscountFilter:(BOOL)arg0;
- (id)promotionPrimaryColor;
- (id)promotionSecondaryColor;
- (id)promotionTransparency;
- (id)passThroughHybrid;
- (long long)extraSchemaType;
- (void)setExtraSchemaType:(long long)arg0;
- (BOOL)autoFollow;
- (double)firstEnterTime;
- (void)setFirstEnterTime:(double)arg0;
- (id)entranceClassName;
- (BOOL)isAIPreloadCacheInvalid;
- (void)setIsAIPreloadCacheInvalid:(BOOL)arg0;
- (BOOL)isHitAIPreloadCache;
- (void)setIsHitAIPreloadCache:(BOOL)arg0;
- (id)interceptionConfig;
- (void)setPhotoSearchManager:(id)arg0;
- (id)debugURL;
- (long long)pageType;
- (void).cxx_destruct;
- (id)itemID;
- (void)setStore:(BOOL)arg0;
- (void)setItemID:(id)arg0;
- (id)sort;
- (void)setPageType:(long long)arg0;
- (void)setCustom:(BOOL)arg0;
- (id)sortType;
- (void)setSortType:(id)arg0;
- (id)templateId;
- (void)setTemplateId:(id)arg0;
- (void)setSort:(id)arg0;
- (BOOL)isCustom;
- (double)routeStart;
- (void)setRouteStart:(double)arg0;
- (BOOL)isStore;
- (BOOL)isSplitScreen;
- (unsigned long long)preloadType;

@end
