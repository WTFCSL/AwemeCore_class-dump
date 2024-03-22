//
//     Generated by private class-dump
//

@class NSObject, UIViewController, UIView;
@protocol AWEFeedGoodsElementProtocol, AWEECommerceGoodsCardDataControllerProtocol, AWEECommercePopoverContainerProtocol;

@interface AWEPlayInteractionGoodsCardElement : AWEPlayInteractionLeftElement {
    UIView<AWEFeedGoodsElementProtocol> *_goodsCardView;
    NSObject<AWEECommerceGoodsCardDataControllerProtocol> *_goodsCardDataController;
    UIViewController<AWEECommercePopoverContainerProtocol> *_popoverContainerVC;
}

@property (retain, nonatomic) UIView<AWEFeedGoodsElementProtocol> *goodsCardView;
@property (retain, nonatomic) NSObject<AWEECommerceGoodsCardDataControllerProtocol> *goodsCardDataController;
@property (retain, nonatomic) UIViewController<AWEECommercePopoverContainerProtocol> *popoverContainerVC;

+ (BOOL)shouldActiveWithModel:(id)arg0 context:(id)arg1;

- (void)setAppear:(BOOL)arg0;
- (id)goodsCardDataController;
- (void)showGoodsPanel;
- (void)viewController_willDisplay;
- (id)activateInfoWithData:(id)arg0;
- (id)goodsCardView;
- (void)setGoodsCardView:(id)arg0;
- (void)trackProductEntranceClick;
- (void)setGoodsCardDataController:(id)arg0;
- (void)viewController_viewDidAppear;
- (void)layoutElementView;
- (void)setPopoverContainerVC:(id)arg0;
- (id)popoverContainerVC;
- (void)trackProductEntranceShow;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
