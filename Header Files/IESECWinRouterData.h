//
//     Generated by private class-dump
//

@class NSString, NSDictionary, IESECShopOwner, NSNumber;

@interface IESECWinRouterData : NSObject {
    BOOL _isSplitScreen;
    BOOL _enableCommonAdTrack;
    BOOL _isFromAd;
    BOOL _isPreviewMode;
    BOOL _store;
    BOOL _fromProfilePage;
    BOOL _fromShopOrStorePage;
    NSString *_shopId;
    NSString *_secShopId;
    NSString *_bindShopName;
    NSDictionary *_extraDict;
    IESECShopOwner *_shopOwner;
    NSDictionary *_entranceInfo;
    NSNumber *_targetTabType;
    NSDictionary *_preEnterStoreParams;
    NSDictionary *_trackExtraDic;
    NSString *_itemID;
    NSDictionary *_enterStorePageExtraDic;
    NSString *_enterFrom;
    NSDictionary *_ecomShareTrackParams;
    double _routeStart;
    id /* block */ _containerWillClose;
    id /* block */ _closeProgressHandler;
    NSString *_extraSchema;
    NSNumber *_sortType;
    NSNumber *_sort;
    long long _extraSchemaType;
    NSString *_entranceClassName;
    NSString *_passThroughAPI;
    NSString *_whichAccount;
    NSNumber *_brandVerified;
    NSString *_previewToken;
    unsigned long long _liveStyle;
    long long _volumeType;
    NSString *_templateId;
    long long _tabType;
    NSString *_taskBannerContainerID;
    long long _preSceneType;
}

@property (copy, nonatomic) NSString *shopId;
@property (copy, nonatomic) NSString *secShopId;
@property (copy, nonatomic) NSString *bindShopName;
@property (copy, nonatomic) NSDictionary *extraDict;
@property (retain, nonatomic) IESECShopOwner *shopOwner;
@property (copy, nonatomic) NSDictionary *entranceInfo;
@property (copy, nonatomic) NSNumber *targetTabType;
@property (copy, nonatomic) NSDictionary *preEnterStoreParams;
@property (copy, nonatomic) NSDictionary *trackExtraDic;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSDictionary *enterStorePageExtraDic;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL isSplitScreen;
@property (nonatomic) BOOL enableCommonAdTrack;
@property (copy, nonatomic) NSDictionary *ecomShareTrackParams;
@property (nonatomic) double routeStart;
@property (copy, nonatomic) id /* block */ containerWillClose;
@property (copy, nonatomic) id /* block */ closeProgressHandler;
@property (copy, nonatomic) NSString *extraSchema;
@property (copy, nonatomic) NSNumber *sortType;
@property (copy, nonatomic) NSNumber *sort;
@property (nonatomic) long long extraSchemaType;
@property (copy, nonatomic) NSString *entranceClassName;
@property (copy, nonatomic) NSString *passThroughAPI;
@property (nonatomic) BOOL isFromAd;
@property (copy, nonatomic) NSString *whichAccount;
@property (readonly, nonatomic) BOOL isPreviewMode;
@property (copy, nonatomic) NSNumber *brandVerified;
@property (copy, nonatomic) NSString *previewToken;
@property (nonatomic) unsigned long long liveStyle;
@property (nonatomic) long long volumeType;
@property (nonatomic, getter=isStore) BOOL store;
@property (copy, nonatomic) NSString *templateId;
@property (nonatomic) long long tabType;
@property (nonatomic) BOOL fromProfilePage;
@property (nonatomic) BOOL fromShopOrStorePage;
@property (copy, nonatomic) NSString *taskBannerContainerID;
@property (nonatomic) long long preSceneType;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (long long)tabType;
- (void)setExtraDict:(id)arg0;
- (void)setEntranceInfo:(id)arg0;
- (id)extraDict;
- (id)shopId;
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
- (id /* block */)containerWillClose;
- (void)setTargetTabType:(id)arg0;
- (id)brandVerified;
- (BOOL)isFromAd;
- (id)whichAccount;
- (void)setWhichAccount:(id)arg0;
- (void)setBrandVerified:(id)arg0;
- (void)setIsFromAd:(BOOL)arg0;
- (void)setEnableCommonAdTrack:(BOOL)arg0;
- (BOOL)enableCommonAdTrack;
- (id)passThroughAPI;
- (id)preEnterStoreParams;
- (id)shopOwner;
- (unsigned long long)liveStyle;
- (void)setShopOwner:(id)arg0;
- (void)setContainerWillClose:(id /* block */)arg0;
- (void)setCloseProgressHandler:(id /* block */)arg0;
- (void)setTaskBannerContainerID:(id)arg0;
- (void)setPreviewToken:(id)arg0;
- (void)setVolumeType:(long long)arg0;
- (void)setLiveStyle:(unsigned long long)arg0;
- (void)setPassThroughAPI:(id)arg0;
- (void)setExtraSchema:(id)arg0;
- (void)setEnterStorePageExtraDic:(id)arg0;
- (void)setPreEnterStoreParams:(id)arg0;
- (void)setEntranceClassName:(id)arg0;
- (void)setIsSplitScreen:(BOOL)arg0;
- (id)taskBannerContainerID;
- (id)extraSchema;
- (id)previewToken;
- (id /* block */)closeProgressHandler;
- (void)setBindShopName:(id)arg0;
- (BOOL)fromProfilePage;
- (void)setFromProfilePage:(BOOL)arg0;
- (BOOL)fromShopOrStorePage;
- (void)setFromShopOrStorePage:(BOOL)arg0;
- (long long)volumeType;
- (id)enterStorePageExtraDic;
- (long long)extraSchemaType;
- (void)setExtraSchemaType:(long long)arg0;
- (id)entranceClassName;
- (long long)preSceneType;
- (void)setPreSceneType:(long long)arg0;
- (id)convertToShopContext;
- (void).cxx_destruct;
- (id)itemID;
- (void)setStore:(BOOL)arg0;
- (void)setItemID:(id)arg0;
- (id)sort;
- (id)sortType;
- (void)setSortType:(id)arg0;
- (id)templateId;
- (void)setTemplateId:(id)arg0;
- (void)setSort:(id)arg0;
- (double)routeStart;
- (void)setRouteStart:(double)arg0;
- (BOOL)isStore;
- (BOOL)isSplitScreen;

@end
