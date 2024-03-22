//
//     Generated by private class-dump
//

@class IESECSKUUplinkController, IESECSKUDataController, IESECBuyNowSKUContext, UIView, IESECSKUScrollToViewInstance;
@protocol IESECSKUViewProtocol, IESECBuyNowSKUDelegate, IESECSKUViewDelegate;

@interface IESECSkuBuyNowModel : NSObject {
    BOOL _isUltimate;
    UIView<IESECSKUViewProtocol, IESECBuyNowSKUDelegate> *_skuView;
    IESECSKUScrollToViewInstance *_anchorInstance;
    IESECBuyNowSKUContext *_skuContext;
    IESECSKUDataController *_dataController;
}

@property (retain, nonatomic) IESECBuyNowSKUContext *skuContext;
@property (retain, nonatomic) IESECSKUDataController *dataController;
@property (weak, nonatomic) UIView<IESECSKUViewProtocol, IESECBuyNowSKUDelegate> *skuView;
@property (readonly, weak, nonatomic) id<IESECSKUViewDelegate> skuDelegate;
@property (retain, nonatomic) IESECSKUScrollToViewInstance *anchorInstance;
@property (readonly, nonatomic) IESECSKUUplinkController *yataUplinkController;
@property (nonatomic) BOOL isUltimate;

- (void)setDataController:(id)arg0;
- (id)skuView;
- (void)setSkuView:(id)arg0;
- (id)skuDelegate;
- (id)initWithSkuView:(id)arg0 skuContext:(id)arg1;
- (id)yataUplinkController;
- (void)setAnchorInstance:(id)arg0;
- (BOOL)isUltimate;
- (id)skuContext;
- (void)setSkuContext:(id)arg0;
- (id)anchorInstance;
- (void)setIsUltimate:(BOOL)arg0;
- (void).cxx_destruct;
- (id)dataController;

@end