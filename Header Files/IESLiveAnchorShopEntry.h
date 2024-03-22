//
//     Generated by private class-dump
//

@class UIControl, IESLiveECommerceAPI, NSString, UILabel, IESLiveGuideToolBarItem, IESLiveEntryTag;
@protocol IESLiveURLSchemaHandler, IESLiveGuideToolBarProvider, IESLiveECommerceService, IESLiveGuideShopEntryAction, IESLiveInternalRouter;

@interface IESLiveAnchorShopEntry : NSObject <IESLiveGuideTimorEntryAction, IESLiveGuideWelfareEntryAction, IESLiveGuideLocalLifeAction, IESLiveCommercialComponentsActions, IESLiveGuideShopFactory> {
    BOOL _enableNewStyle;
    BOOL _isLocalLifeFull;
    BOOL _isPaidLiveTicketFull;
    id /* block */ _startLiveCompletetion;
    id /* block */ _startLiveFail;
    id<IESLiveECommerceService> _ecommerceRouter;
    id<IESLiveInternalRouter> _internalRouter;
    id<IESLiveURLSchemaHandler> _urlSchemaHandler;
    id<IESLiveGuideToolBarProvider> _toolbarProvider;
    id<IESLiveGuideShopEntryAction> _shopEntryAction;
    UIControl *_goodsPickerActor;
    IESLiveGuideToolBarItem *_shoppingEntryItem;
    UILabel *_goodsPickedlabel;
    IESLiveEntryTag *_shoppingButtonTag;
    IESLiveECommerceAPI *_api;
    long long _pickedCount;
}

@property (nonatomic) BOOL enableNewStyle;
@property (copy, nonatomic) id /* block */ startLiveCompletetion;
@property (copy, nonatomic) id /* block */ startLiveFail;
@property (retain, nonatomic) id<IESLiveECommerceService> ecommerceRouter;
@property (retain, nonatomic) id<IESLiveInternalRouter> internalRouter;
@property (retain, nonatomic) id<IESLiveURLSchemaHandler> urlSchemaHandler;
@property (retain, nonatomic) id<IESLiveGuideToolBarProvider> toolbarProvider;
@property (retain, nonatomic) id<IESLiveGuideShopEntryAction> shopEntryAction;
@property (weak, nonatomic) UIControl *goodsPickerActor;
@property (weak, nonatomic) IESLiveGuideToolBarItem *shoppingEntryItem;
@property (weak, nonatomic) UILabel *goodsPickedlabel;
@property (weak, nonatomic) IESLiveEntryTag *shoppingButtonTag;
@property (retain, nonatomic) IESLiveECommerceAPI *api;
@property (readonly, nonatomic) BOOL isTimorEntryFull;
@property (nonatomic) BOOL isLocalLifeFull;
@property (nonatomic) BOOL isPaidLiveTicketFull;
@property (nonatomic) long long pickedCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)internalRouter;
- (void)setInternalRouter:(id)arg0;
- (void)bindActions;
- (void)willSwitchToCommercialComponent:(unsigned long long)arg0;
- (void)willRemoveCommercialComponent:(unsigned long long)arg0;
- (void)localLifeChangeWithEmpty:(BOOL)arg0;
- (BOOL)enableNewStyle;
- (void)setEnableNewStyle:(BOOL)arg0;
- (id)urlSchemaHandler;
- (id)toolbarProvider;
- (void)setUrlSchemaHandler:(id)arg0;
- (void)setToolbarProvider:(id)arg0;
- (BOOL)shopEnable;
- (void)enableToolbarNewStyle:(BOOL)arg0;
- (void)trackShopEntryShow;
- (id)createShoppingEntryItem;
- (void)guideTimorModelDidChange;
- (BOOL)isTimorEntryFull;
- (void)setIsLocalLifeFull:(BOOL)arg0;
- (void)setIsPaidLiveTicketFull:(BOOL)arg0;
- (BOOL)isLocalLifeFull;
- (BOOL)isPaidLiveTicketFull;
- (void)guideWelfareModelDidChange;
- (BOOL)selectedShops;
- (BOOL)isWelfareEntryFull;
- (void)_setButtonTag:(long long)arg0 needRefresh:(BOOL)arg1;
- (id)shopEntryAction;
- (void)openCommodityPicker:(id)arg0;
- (void)setGoodsPickerActor:(id)arg0;
- (void)setShoppingButtonTag:(id)arg0;
- (void)_fetchPickedGoods;
- (id)shoppingEntryItem;
- (void)setShoppingEntryItem:(id)arg0;
- (void)shopViewHandler:(id /* block */)arg0;
- (long long)pickedCount;
- (BOOL)supportCoexistWithTimor;
- (void)trackShopEntryClickWithTarget:(id)arg0;
- (id)ecommerceRouter;
- (void)_updateGoodsPickedLabel:(long long)arg0;
- (void)setPickedCount:(long long)arg0;
- (id)shoppingButtonTag;
- (id)goodsPickerActor;
- (void)updateShopImage:(id)arg0;
- (id)goodsPickedlabel;
- (void)updateGoodsPickerButtonCountLabel:(long long)arg0;
- (id /* block */)startLiveCompletetion;
- (void)setStartLiveCompletetion:(id /* block */)arg0;
- (id /* block */)startLiveFail;
- (void)setStartLiveFail:(id /* block */)arg0;
- (void)setEcommerceRouter:(id)arg0;
- (void)setShopEntryAction:(id)arg0;
- (void)setGoodsPickedlabel:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)api;
- (void)setApi:(id)arg0;

@end