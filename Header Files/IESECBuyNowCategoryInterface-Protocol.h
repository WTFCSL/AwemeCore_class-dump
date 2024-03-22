//
//     Generated by private class-dump
//

@class UIStackView, IESECBuyNowContext, UICollectionView, IESECTracker, IESECBuyNowContainerView, IESECBuyNowStateView, IESECBuyNowDataController;
@protocol YataInstanceInterface, IESECBuyNowOrderInterface;

@protocol IESECBuyNowCategoryInterface <NSObject>

@property (readonly, nonatomic) IESECBuyNowContext *context;
@property (readonly, nonatomic) id<IESECBuyNowOrderInterface> orderService;
@property (readonly, nonatomic) id<YataInstanceInterface> yataInstance;
@property (readonly, nonatomic) IESECBuyNowDataController *dataController;
@property (readonly, nonatomic) IESECTracker *tracker;
@property (readonly, nonatomic) UICollectionView *mainCollectionView;
@property (readonly, nonatomic) IESECBuyNowContainerView *containerView;
@property (readonly, nonatomic) UIStackView *yataTopBanner;
@property (readonly, nonatomic) IESECBuyNowStateView *stateView;

- (void)startRender;
- (id)stateView;
- (id)yataInstance;
- (void)closeVCWithMethod:(id)arg0;
- (id)orderService;
- (void)setUpWithBuyNowContext:(id)arg0;
- (id)yataTopBanner;
- (id)tracker;
- (id)containerView;
- (id)context;
- (id)mainCollectionView;
- (id)dataController;

@end