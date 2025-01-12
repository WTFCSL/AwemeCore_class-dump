//
//     Generated by private class-dump
//

@class IESECLiveSKUView, IESECLiveContext, NSDictionary, NSString, IESECLiveGoodsJumpHandler, IESECLiveTracker;
@protocol IESECGoodsListCardEventService, IESECGoodsListCardModelService, IESECGoodsListCardBusinessEnvService;

@interface IESECGoodsListCardProviderServiceManager : NSObject <IESECLiveGoodsJumpHandlerDelegate, IESECLiveSKUViewDelegate, IESECLiveGoodsInfoViewV2Delegate> {
    BOOL _landscapeWhenClick;
    id<IESECGoodsListCardEventService> _service;
    id<IESECGoodsListCardModelService> _listService;
    id<IESECGoodsListCardEventService> _audienceService;
    id<IESECGoodsListCardModelService> _audienceListService;
    id<IESECGoodsListCardBusinessEnvService> _envDelegate;
    IESECLiveContext *_context;
    IESECLiveGoodsJumpHandler *_jumpHandler;
    IESECLiveTracker *_tracker;
    IESECLiveSKUView *_skuView;
    NSDictionary *_searchParams;
}

@property (nonatomic) BOOL landscapeWhenClick;
@property (retain, nonatomic) IESECLiveContext *context;
@property (retain, nonatomic) IESECLiveGoodsJumpHandler *jumpHandler;
@property (retain, nonatomic) IESECLiveTracker *tracker;
@property (retain, nonatomic) IESECLiveSKUView *skuView;
@property (retain, nonatomic) NSDictionary *searchParams;
@property (weak, nonatomic) id<IESECGoodsListCardEventService> service;
@property (weak, nonatomic) id<IESECGoodsListCardModelService> listService;
@property (retain, nonatomic) id<IESECGoodsListCardEventService> audienceService;
@property (retain, nonatomic) id<IESECGoodsListCardModelService> audienceListService;
@property (weak, nonatomic) id<IESECGoodsListCardBusinessEnvService> envDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)searchParams;
- (void)setSearchParams:(id)arg0;
- (void)showToast:(id)arg0;
- (id)updateSearchParams:(id)arg0;
- (id)sourceVC;
- (id)ecomEntranceForm;
- (id)localPage;
- (id)btmParams;
- (id)listService;
- (void)setListService:(id)arg0;
- (struct CGSize { double x0; double x1; })maskSize;
- (id)initWithContext:(id)arg0 dic:(id)arg1;
- (void)setEnvDelegate:(id)arg0;
- (id)selectedSKUItem;
- (id)targetParentView;
- (void)operateSKUView:(id)arg0 addToCartWithGoodsModel:(id)arg1 extraInfo:(id)arg2;
- (void)setAudienceService:(id)arg0;
- (void)setAudienceListService:(id)arg0;
- (id)audienceService;
- (id)audienceListService;
- (BOOL)isSimilarState:(id)arg0;
- (void)trackAppearWithModel:(id)arg0;
- (void)setSelectedSKUItem:(id)arg0;
- (id)blankSearchParams:(id)arg0;
- (id)updatePassThroughLogData:(id)arg0;
- (id)envDelegate;
- (id)goodsModelWithOrientationStatus:(id)arg0;
- (void)trackProductClickWithParams:(id)arg0 goodsModel:(id)arg1 extraInfo:(id)arg2 btmModel:(id)arg3;
- (id)jumpHandler;
- (void)trackProductEvent:(id)arg0 params:(id)arg1 goodsModel:(id)arg2 btmModel:(id)arg3;
- (void)openSchema:(id)arg0 fromInside:(BOOL)arg1 insertParams:(id)arg2 extraInfo:(id)arg3;
- (BOOL)landscapeWhenClick;
- (id)basicTrackParams;
- (void)handleAddToCartWithModel:(id)arg0 extraInfo:(id)arg1;
- (BOOL)goodsJumpHandler:(id)arg0 shouldJump:(id)arg1;
- (id)panelEnvironment;
- (void)goodsJumpHandler:(id)arg0 beforeJump:(id)arg1;
- (id)adTrackParamsWithClickStyle:(long long)arg0;
- (void)searchBCMTrackWithType:(long long)arg0 goodsModel:(id)arg1;
- (void)triggerWithEventType:(long long)arg0 areaType:(long long)arg1 goodsModel:(id)arg2 extraInfo:(id)arg3 goodsInfoView:(id)arg4;
- (id)getBTMID;
- (struct CGSize { double x0; double x1; })panelSize;
- (void)setLandscapeWhenClick:(BOOL)arg0;
- (void)setJumpHandler:(id)arg0;
- (id)skuView;
- (void)setSkuView:(id)arg0;
- (id)tracker;
- (void)setTracker:(id)arg0;
- (void).cxx_destruct;
- (void)setService:(id)arg0;
- (void)setContext:(id)arg0;
- (id)context;
- (id)service;
- (id)roomID;
- (id)logID;

@end
