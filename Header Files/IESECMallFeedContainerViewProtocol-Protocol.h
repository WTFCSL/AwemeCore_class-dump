//
//     Generated by private class-dump
//

@class UICollectionView, IESECTracker, IESECGoodsFeedControllerAdapter, UIViewController;
@protocol IESECMallFeedContainerViewDelegate;

@protocol IESECMallFeedContainerViewProtocol <IESECGoodsFeedControllerAdapterProtocol>

@property (weak, nonatomic) UIViewController *containerVC;
@property (weak, nonatomic) id<IESECMallFeedContainerViewDelegate> delegate;
@property (weak, nonatomic) IESECGoodsFeedControllerAdapter *ctrlAdapter;
@property (retain, nonatomic) IESECTracker *tracker;
@property (readonly, nonatomic) UICollectionView *collectionView;

- (void)setContainerVC:(id)arg0;
- (id)containerVC;
- (id)initWithFeedNode:(id)arg0;
- (id)ctrlAdapter;
- (void)setCtrlAdapter:(id)arg0;
- (id)tracker;
- (void)setTracker:(id)arg0;
- (id)collectionView;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@optional

- (void)dismissLoading;
- (void)startAutoPlay;
- (void)stopAutoPlay;
- (void)addToCartWithResponse:(id)arg0;
- (void)skudSpecsChangedWithSKUInfo:(id)arg0;
- (void)navBarCartClickWithBtmID:(id)arg0;
- (void)navBarShareClickWithBtmID:(id)arg0 shareTrackParams:(id)arg1;
- (BOOL)isTimeout;
- (void)setCanAutoPlay:(BOOL)arg0;

@end
