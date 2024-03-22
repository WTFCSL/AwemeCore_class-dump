//
//     Generated by private class-dump
//

@class IESECLiveApi, IESECLiveRouter, IESECLiveContext, NSString, IESECHybridParamsVerifyHelper, NSNumber, IESECLiveGoodsJumpRequest;

@interface IESECLiveGoodsJumpHandler : NSObject <IESECLiveGoodsJumpHandler> {
    BOOL _forceFullScreenJumpDetail;
    BOOL _isFetchingLimit;
    NSNumber *_jumpOrderMaskAlpha;
    IESECLiveContext *_liveContext;
    IESECLiveRouter *_router;
    IESECLiveApi *_api;
    IESECLiveGoodsJumpRequest *_jumpRequest;
    IESECHybridParamsVerifyHelper *_verifyHelper;
}

@property (weak, nonatomic) IESECLiveContext *liveContext;
@property (retain, nonatomic) IESECLiveRouter *router;
@property (retain, nonatomic) IESECLiveApi *api;
@property (retain, nonatomic) IESECLiveGoodsJumpRequest *jumpRequest;
@property (nonatomic) BOOL isFetchingLimit;
@property (retain, nonatomic) IESECHybridParamsVerifyHelper *verifyHelper;
@property (nonatomic) BOOL forceFullScreenJumpDetail;
@property (retain, nonatomic) NSNumber *jumpOrderMaskAlpha;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)jumpURLStrForClickStyle:(long long)arg0 withGoodsModel:(id)arg1;
+ (long long)p_jumpDestinationWithGoodsModel:(id)arg0 clickStyle:(long long)arg1;
+ (id)skuOrderParamsFromGoodsModel:(id)arg0 liveTracker:(id)arg1 sourcePage:(id)arg2 skuInfo:(id)arg3;
+ (id)orderParamsFromGoodsModel:(id)arg0 liveTracker:(id)arg1 sourcePage:(id)arg2 skuInfo:(id)arg3;
+ (id)addCJInfoWithInstallmentCount:(id)arg0;
+ (id)ultimateBuySingleSKUGoodsDetailSchemaFromGoodsModel:(id)arg0 tracker:(id)arg1;

- (void)showToast:(id)arg0;
- (void)forceShowDisclaimer:(long long)arg0 extraParams:(id)arg1 confirmBlock:(id /* block */)arg2 cancleBlock:(id /* block */)arg3;
- (void)setLiveContext:(id)arg0;
- (id)liveContext;
- (id)initWithLiveContext:(id)arg0;
- (void)jumpWithRequest:(id)arg0;
- (void)openSchema:(id)arg0 fromInside:(BOOL)arg1 insertParams:(id)arg2 extraInfo:(id)arg3;
- (void)handleAddToCartWithRequest:(id)arg0;
- (void)openSchema:(id)arg0 fromInside:(BOOL)arg1 insertParams:(id)arg2;
- (void)setVerifyHelper:(id)arg0;
- (id)verifyHelper;
- (void)setJumpRequest:(id)arg0;
- (void)jumpWithGoodsModel:(id)arg0 clickStyle:(long long)arg1 delegate:(id)arg2;
- (id)ecommerceTracker;
- (void)verifyOutScheme:(id)arg0;
- (void)handleGoodsJumpLogic:(id)arg0 clickStyle:(long long)arg1 delegate:(id)arg2;
- (id)ecomEntranceFormWithDelegate:(id)arg0;
- (id)jumpRequest;
- (id)sourceVCWithDelegate:(id)arg0;
- (void)openSchema:(id)arg0 fromViewController:(id)arg1 insertParams:(id)arg2 extraInfo:(id)arg3;
- (BOOL)forceFullScreenJumpDetail;
- (void)enterGoodsDetailWithRequest:(id)arg0;
- (void)goToInsuranceOrder:(id)arg0 params:(id)arg1 delegate:(id)arg2;
- (void)autoApplyCouponWithGoodsModel:(id)arg0 completion:(id /* block */)arg1;
- (void)checkDisclaimerIfNeededWithCarrierSource:(id)arg0 carrierType:(id)arg1 confirmBlock:(id /* block */)arg2 cancelBlock:(id /* block */)arg3;
- (id)adTrackParamsWithDelegate:(id)arg0 clickStyle:(long long)arg1;
- (void)p_trackAdParams:(id)arg0 adString:(id)arg1 goodsModel:(id)arg2;
- (void)checkGoodsModel:(id)arg0 ecomEntranceForm:(id)arg1 clickEnterForm:(long long)arg2 checkExtraInfo:(id)arg3 completion:(id /* block */)arg4;
- (id)jumpOrderMaskAlpha;
- (void)enterSKUWithGoodsModel:(id)arg0 delegate:(id)arg1;
- (void)enterOrderPageWithRequest:(id)arg0;
- (void)enterLotteryGoodsPage:(id)arg0 delegate:(id)arg1;
- (void)enterAuctionRaisePriceWithGoodsModel:(id)arg0 delegate:(id)arg1;
- (long long)p_jumpWithGoodsModel:(id)arg0 clickStyle:(long long)arg1 delegate:(id)arg2;
- (id)p_adTrackStringWithDestination:(long long)arg0;
- (void)p_reportBuyWithGoodsModel:(id)arg0;
- (void)p_checkJumpIfNeededWithOriginGoodsModel:(id)arg0 clickStyle:(long long)arg1 delegate:(id)arg2 completion:(id /* block */)arg3;
- (void)p_trackAdDataWithParams:(id)arg0 trackGoodsModel:(id)arg1;
- (BOOL)isUseDirectlyJumpURLForClickStyle:(long long)arg0 withGoodsModel:(id)arg1;
- (void)enterListSearchWithScheme:(id)arg0 delegate:(id)arg1;
- (BOOL)shouldCheckBeforeJumpWithDestination:(long long)arg0;
- (void)setForceFullScreenJumpDetail:(BOOL)arg0;
- (void)setJumpOrderMaskAlpha:(id)arg0;
- (BOOL)isFetchingLimit;
- (void)setIsFetchingLimit:(BOOL)arg0;
- (void)checkBeforeEditCartWithRequest:(id)arg0 completion:(id /* block */)arg1;
- (void).cxx_destruct;
- (id)router;
- (void)setRouter:(id)arg0;
- (id)api;
- (void)setApi:(id)arg0;

@end
