//
//     Generated by private class-dump
//

@class UIView, IESECTracker, NSString, IESECGoodsFeedLargeCardViewModel, IESECGoodsBottomActionHelper, IESECWinFeedEnterParameters, IESECGoodsDetailShowRequest, UIViewController, IESECGoodsRitTagModel;
@protocol IESECSKUViewControllerProtocol, IESECGoodsDetailPopoverContentProtocol;

@interface IESECWindowFeedProductCardViewModel : NSObject <IESECGoodsDetailContainerProtocol, IESECGoodsFeedLargeCardCellContentProtocol, IESECGoodsFeedLargeCardCellOperationProtocol, IGListDiffable> {
    BOOL _isPresentingPopover;
    UIViewController<IESECGoodsDetailPopoverContentProtocol, IESECSKUViewControllerProtocol> *skuVC;
    long long _index;
    IESECGoodsFeedLargeCardViewModel *_model;
    IESECWinFeedEnterParameters *_parameters;
    UIViewController *_containerVC;
    IESECGoodsRitTagModel *_recommendRitTag;
    IESECGoodsDetailShowRequest *_showDetailRequest;
    IESECGoodsBottomActionHelper *_actionHelper;
    UIView *_popoverBackground;
    UIView *_popoverContainer;
    UIViewController<IESECGoodsDetailPopoverContentProtocol> *_popoverContent;
    IESECTracker *_winTracker;
}

@property (retain, nonatomic) IESECGoodsDetailShowRequest *showDetailRequest;
@property (retain, nonatomic) IESECGoodsBottomActionHelper *actionHelper;
@property (nonatomic) BOOL isPresentingPopover;
@property (retain, nonatomic) UIView *popoverBackground;
@property (retain, nonatomic) UIView *popoverContainer;
@property (retain, nonatomic) UIViewController<IESECGoodsDetailPopoverContentProtocol> *popoverContent;
@property (retain, nonatomic) IESECTracker *winTracker;
@property (nonatomic) long long index;
@property (retain, nonatomic) IESECGoodsFeedLargeCardViewModel *model;
@property (retain, nonatomic) IESECWinFeedEnterParameters *parameters;
@property (weak, nonatomic) UIViewController *containerVC;
@property (readonly, copy, nonatomic) IESECGoodsRitTagModel *recommendRitTag;
@property (weak, nonatomic) UIViewController<IESECGoodsDetailPopoverContentProtocol, IESECSKUViewControllerProtocol> *skuVC;
@property (nonatomic) BOOL shouldDetachLiveFloatOnTopToNextPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setContainerVC:(id)arg0;
- (id)containerVC;
- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)arg0;
- (void)close:(id)arg0 completion:(id /* block */)arg1;
- (void)setPopoverContent:(id)arg0;
- (id)popoverContent;
- (long long)containerMode;
- (BOOL)presentPopover:(id)arg0;
- (BOOL)presentingPopover;
- (void)dismissCurrentPopover;
- (void)transitionToCommentViewController;
- (void)transitionToStoreCommentVC;
- (void)favoriteActionButtonDidTapWithCompletion:(id /* block */)arg0;
- (void)addToShoppingCartActionWithSKUInfo:(id)arg0;
- (void)isGoingToOrderPage:(BOOL)arg0;
- (void)isGoingToAddrBook:(BOOL)arg0;
- (void)openAddrBook;
- (id)liveBanner;
- (void)detachLiveFloatOnTopWhenBuyTouTiaoGoodsIfNeeded;
- (void)detachLiveFloatOnTop;
- (void)attachLiveFloatOnTop;
- (void)openReplayWithURLString:(id)arg0;
- (void)markNeedsStatusBarAppearanceUpdate;
- (void)goToOrderPageWithCouponId:(id)arg0 actionType:(long long)arg1 withSKUInfo:(id)arg2 onViewController:(id)arg3 entranceInfoParamsForSKU:(id)arg4 completion:(id /* block */)arg5;
- (void)goToNativeOrderPageWithCouponId:(id)arg0 actionType:(long long)arg1 withSKUInfo:(id)arg2 onViewController:(id)arg3 entranceInfoParamsForSKU:(id)arg4 completion:(id /* block */)arg5;
- (id)skuVC;
- (void)setSkuVC:(id)arg0;
- (void)p_dismissCurrentPopover;
- (void)p_presentPopover:(id)arg0;
- (void)setIsPresentingPopover:(BOOL)arg0;
- (BOOL)isPopoverSKU;
- (void)setPopoverBackground:(id)arg0;
- (void)tapToDismissPopover;
- (void)setPopoverContainer:(id)arg0;
- (id)popoverContainer;
- (id)popoverBackground;
- (void)collectionViewCell:(id)arg0 doWantWithCompletion:(id /* block */)arg1;
- (void)collectionViewCell:(id)arg0 doAddCartWithButton:(id)arg1;
- (void)collectionViewCell:(id)arg0 doActionOf:(long long)arg1;
- (void)collectionViewCell:(id)arg0 didTapImageAtIndex:(long long)arg1;
- (void)collectionViewCellTapEffectivePreviewArea:(id)arg0;
- (void)collectionViewCellScrollToDetails:(id)arg0;
- (void)jumpStoreCommentAreaWithCell:(id)arg0;
- (id)recommendRitTag;
- (id)showDetailRequest;
- (void)enterCommodityDetailPage;
- (id)winTracker;
- (void)setShowDetailRequest:(id)arg0;
- (void)setWinTracker:(id)arg0;
- (BOOL)isClosing;
- (void)setModel:(id)arg0;
- (double)totalDuration;
- (id)tracker;
- (void)setIndex:(long long)arg0;
- (void).cxx_destruct;
- (id)model;
- (id)header;
- (void)close:(id)arg0;
- (long long)index;
- (id)actionHelper;
- (void)setParameters:(id)arg0;
- (id)parameters;
- (void)setActionHelper:(id)arg0;
- (id)bottomView;
- (BOOL)showingPreview;
- (BOOL)isPresentingPopover;

@end