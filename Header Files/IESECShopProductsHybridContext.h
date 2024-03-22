//
//     Generated by private class-dump
//

@class IESECShopGoodsState, IESECTracker, IESECShopGoodsActionHandler, IESECShopGoodsEventHandler, IESECShopProductsObjectPool, NSMutableDictionary, IESECShopProductsHybridDataSource, IESECServiceProxy, IESECShopProductsHybridViewController, IESECAtom, IESECStorePageContext;
@protocol IESECShopImageService, IESECStoreContainerProtocol, IESECShopPageContextV2;

@interface IESECShopProductsHybridContext : NSObject {
    IESECShopGoodsActionHandler *_actionHandler;
    IESECShopGoodsEventHandler *_eventHandler;
    IESECServiceProxy<IESECShopImageService> *_imageService;
    BOOL _didHitDynamicProductCard;
    IESECStorePageContext *_storePageContext;
    id<IESECStoreContainerProtocol> _storeContainer;
    id<IESECShopPageContextV2> _cv2;
    IESECShopProductsHybridViewController *_viewController;
    IESECAtom *_listStyle;
    long long _skuIdx;
    NSMutableDictionary *_kvStorage;
    IESECShopProductsHybridDataSource *_dataSource;
    IESECTracker *_tracker;
    IESECShopGoodsState *_backwardState;
    IESECShopProductsObjectPool *_priceLabelPool;
}

@property (retain, nonatomic) IESECStorePageContext *storePageContext;
@property (weak, nonatomic) id<IESECStoreContainerProtocol> storeContainer;
@property (retain, nonatomic) id<IESECShopPageContextV2> cv2;
@property (weak, nonatomic) IESECShopProductsHybridViewController *viewController;
@property (retain, nonatomic) IESECAtom *listStyle;
@property (nonatomic) long long skuIdx;
@property (retain, nonatomic) NSMutableDictionary *kvStorage;
@property (weak, nonatomic) IESECShopProductsHybridDataSource *dataSource;
@property (retain, nonatomic) IESECTracker *tracker;
@property (retain, nonatomic) IESECShopGoodsState *backwardState;
@property (readonly, nonatomic) IESECShopGoodsActionHandler *backwardActionHandler;
@property (readonly, nonatomic) IESECShopGoodsEventHandler *backwardEventHandler;
@property (retain, nonatomic) IESECShopProductsObjectPool *priceLabelPool;
@property (readonly, nonatomic) IESECServiceProxy<IESECShopImageService> *imageService;
@property (nonatomic) BOOL didHitDynamicProductCard;

- (id)kvStorage;
- (void)setKvStorage:(id)arg0;
- (long long)skuIdx;
- (id)storePageContext;
- (void)setSkuIdx:(long long)arg0;
- (void)setStorePageContext:(id)arg0;
- (id)imageService;
- (id)backwardEventHandler;
- (void)configureBackwardState;
- (id)backwardActionHandler;
- (id)priceLabelPool;
- (id)storeContainer;
- (void)setStoreContainer:(id)arg0;
- (id)cv2;
- (void)setCv2:(id)arg0;
- (id)backwardState;
- (void)setBackwardState:(id)arg0;
- (void)setPriceLabelPool:(id)arg0;
- (BOOL)didHitDynamicProductCard;
- (void)setDidHitDynamicProductCard:(BOOL)arg0;
- (id)tracker;
- (void)setTracker:(id)arg0;
- (void)setDataSource:(id)arg0;
- (id)init;
- (id)dataSource;
- (void)setViewController:(id)arg0;
- (id)viewController;
- (void).cxx_destruct;
- (id)listStyle;
- (void)setListStyle:(id)arg0;

@end
