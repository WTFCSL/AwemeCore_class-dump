//
//     Generated by private class-dump
//

@class UIView, IESECGoodsDetailCommonMeta, NSString, IESECDurationHelper, IESECSKUShowRequest, IESECGoodsDetailPageContext, NSDictionary, IESECGoodsDetailSKUManager, IESECGoodsDetailBottomMetaModel, IESECSKUDetailContext, NSNumber;
@protocol IESECSKUViewProtocol, IESECGoodsDetailContainerProtocol;

@interface IESECGoodsDetailSKUPageViewController : UIViewController <IESECSKUViewDelegate, IESECGoodsDetailPopoverContentProtocol, IESECSKUViewControllerProtocol, IESECSKUViewAppearance> {
    NSString *_closeMethod;
    NSString *_previousPageName;
    NSDictionary *_extraLogParams;
    NSDictionary *_entranceInfoExtraParams;
    IESECSKUShowRequest *_showRequest;
    UIView<IESECSKUViewProtocol> *_skuView;
    IESECSKUDetailContext *_detailContext;
    id<IESECGoodsDetailContainerProtocol> _container;
    NSDictionary *_extraInfo;
    NSNumber *_couponMinPrice;
    IESECDurationHelper *_stay;
    IESECGoodsDetailPageContext *_pageContext;
    IESECGoodsDetailCommonMeta *_commonMeta;
    IESECGoodsDetailBottomMetaModel *_bottomMeta;
    IESECGoodsDetailSKUManager *_skuManager;
    struct CGSize { double width; double height; } _containerSize;
}

@property (retain, nonatomic) IESECSKUShowRequest *showRequest;
@property (retain, nonatomic) UIView<IESECSKUViewProtocol> *skuView;
@property (retain, nonatomic) IESECSKUDetailContext *detailContext;
@property (weak, nonatomic) id<IESECGoodsDetailContainerProtocol> container;
@property (retain, nonatomic) NSDictionary *extraInfo;
@property (retain, nonatomic) NSNumber *couponMinPrice;
@property (retain, nonatomic) IESECDurationHelper *stay;
@property (retain, nonatomic) IESECGoodsDetailPageContext *pageContext;
@property (retain, nonatomic) IESECGoodsDetailCommonMeta *commonMeta;
@property (retain, nonatomic) IESECGoodsDetailBottomMetaModel *bottomMeta;
@property (retain, nonatomic) IESECGoodsDetailSKUManager *skuManager;
@property (nonatomic) struct CGSize { double width; double height; } containerSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *closeMethod;
@property (copy, nonatomic) NSString *previousPageName;
@property (copy, nonatomic) NSDictionary *extraLogParams;
@property (copy, nonatomic) NSDictionary *entranceInfoExtraParams;

+ (void)skuInfoToCart:(id)arg0 addToCartMeta:(id)arg1 openWithSaaS:(BOOL)arg2 completion:(id /* block */)arg3;

- (void)setExtraInfo:(id)arg0;
- (id)detailContext;
- (void)setDetailContext:(id)arg0;
- (id)commonMonitorParams;
- (void)embedInContainer:(id)arg0;
- (void)confirmClick:(id)arg0 skuInfo:(id)arg1 couponId:(id)arg2;
- (void)addToCartClick:(id)arg0 skuInfo:(id)arg1;
- (void)selectedSpecsChanged:(id)arg0 skuInfo:(id)arg1;
- (void)backClick:(id)arg0 skuInfo:(id)arg1;
- (void)openSimpleURL:(id)arg0 skuInfo:(id)arg1;
- (void)dismissCurrentPopoverWithCompletion:(id /* block */)arg0;
- (double)popoverContentHeight;
- (void)showWithAnimation:(id /* block */)arg0 completion:(id /* block */)arg1;
- (void)containerWillDismissContentPopover;
- (void)setCloseMethod:(id)arg0;
- (id)closeMethod;
- (id)extraLogParams;
- (void)setExtraLogParams:(id)arg0;
- (id)previousPageName;
- (void)setPreviousPageName:(id)arg0;
- (void)dismissWithAnimation:(id /* block */)arg0 completion:(id /* block */)arg1;
- (id)skuView;
- (void)setSkuView:(id)arg0;
- (void)setShowRequest:(id)arg0;
- (id)showRequest;
- (id)stay;
- (void)setStay:(id)arg0;
- (void)dismissCurrentVC;
- (id)commonMeta;
- (id)skuManager;
- (void)setSkuManager:(id)arg0;
- (void)setBottomMeta:(id)arg0;
- (id)bottomMeta;
- (id)initWithPageContext:(id)arg0 commonMeta:(id)arg1 bottomMeta:(id)arg2 skuManager:(id)arg3 extraInfo:(id)arg4;
- (void)setCommonMeta:(id)arg0;
- (id)entranceInfoExtraParams;
- (id)specIDsFromSkuManager;
- (void)showGoodsDetailHeaderReportButtonIfNeeded;
- (void)trackEnterPageBeginWithAction:(id)arg0 categoryParams:(id)arg1;
- (void)trackDuration:(id)arg0 forAction:(id)arg1 categoryParams:(id)arg2;
- (void)trackEnterPageWithAction:(id)arg0 success:(BOOL)arg1 categoryParams:(id)arg2 code:(id)arg3 message:(id)arg4;
- (void)storeUserActionWithSelectedIDs:(id)arg0 selectedSKUID:(id)arg1 selectedCount:(id)arg2;
- (void)setEntranceInfoExtraParams:(id)arg0;
- (id)couponMinPrice;
- (void)setCouponMinPrice:(id)arg0;
- (id)container;
- (void)setContainerSize:(struct CGSize { double x0; double x1; })arg0;
- (struct CGSize { double x0; double x1; })containerSize;
- (void)applicationWillEnterForeground:(id)arg0;
- (void).cxx_destruct;
- (void)setContainer:(id)arg0;
- (void)applicationDidEnterBackground:(id)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (id)pageContext;
- (void)setPageContext:(id)arg0;
- (id)extraInfo;

@end
