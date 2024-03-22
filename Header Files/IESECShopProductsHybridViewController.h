//
//     Generated by private class-dump
//

@class UICollectionView, IESECShopProductsHybridDataSource, IESECShopProductsProductInsertionTarget, IESECShopLoadMorePerfInfo, IESECShopProductsScrollHandler, IESECShopProductsListFilterChangedActionTarget, UIView, NSString, IESECShopProductsLigoSubscriberTarget, IESECShopProductsListStyleChangedActionTarget, IESECListKitListModel, IESECListKitBFFViewController, IESECShopGoodsBackgroundView, IESECShopProductsPlayableActionTarget, IESECShopProductsHybridContext;
@protocol IESECUILoadingViewProtocol;

@interface IESECShopProductsHybridViewController : IESECBaseShopTabViewController <IESECShopProductsEventTrackable, IESECShopProductsEnvironmentalContext, IESECListKitBFFViewControllerDelegate, IESECPagerViewTabElement> {
    IESECShopProductsHybridContext *_context;
    IESECShopLoadMorePerfInfo *_loadMorePerfInfo;
    IESECShopProductsListStyleChangedActionTarget *_listStyleChangedTarget;
    IESECShopProductsScrollHandler *_scrollActionHandler;
    IESECShopProductsListFilterChangedActionTarget *_listFilterChangedTarget;
    IESECShopProductsPlayableActionTarget *_playableTarget;
    IESECShopProductsProductInsertionTarget *_productInsertionTarget;
    IESECShopProductsLigoSubscriberTarget *_ligoSubscriber;
    UIView<IESECUILoadingViewProtocol> *_loadingView;
    BOOL _isRefreshFooterHidden;
    BOOL _enableAutoLoadMore;
    unsigned long long _loadMoreRangeSize;
    IESECListKitListModel *_preloadedHybridList;
    struct optional<IESECShopProductsListStyle> { union { char __null_state_; unsigned long long __val_; } ; BOOL __engaged_; } _overrideListStyle;
    BOOL _enableTopMargin;
    BOOL _footerTaskEnabled;
    long long _autoNextPageCount;
    double _pageInitTime;
    double _initializationTime;
    BOOL _firstRender;
    IESECListKitBFFViewController *_listKitViewController;
    IESECShopGoodsBackgroundView *_backgroundView;
    IESECShopProductsHybridDataSource *_dataSource;
}

@property (retain, nonatomic) IESECListKitBFFViewController *listKitViewController;
@property (retain, nonatomic) IESECShopProductsHybridDataSource *dataSource;
@property (retain, nonatomic) IESECShopGoodsBackgroundView *backgroundView;
@property (readonly, nonatomic) UICollectionView *collectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)endLoading;
- (id)listKitEnvIdentifier;
- (void)listViewShouldLoadMore;
- (unsigned long long)loadMoreRangeSize;
- (void)tabScrollViewDidScrollCallback:(id /* block */)arg0;
- (id)tabScrollViews;
- (void)trackStayWithEventName:(id)arg0 duration:(long long)arg1;
- (id)initWithContext:(id)arg0 contextV2:(id)arg1 container:(id)arg2;
- (BOOL)isFilterActivityButtonSelected;
- (id)productsPickTypeModel;
- (void)configureObservers;
- (void)configureFooter;
- (id)environmentalShopContext;
- (void)prepareDataWithTabModel:(id)arg0;
- (id)listKitViewController;
- (void)setListKitViewController:(id)arg0;
- (void)configureCardControllers;
- (void)configureListLayout;
- (void)configureActionTargets;
- (void)configureJSBridge;
- (void)requestNextPageDataWithSource:(unsigned long long)arg0;
- (void)handleExternalRequestParams:(id)arg0;
- (void)configureLigoSubscriber;
- (void)checkLoadMoreVisibleWithSource:(unsigned long long)arg0;
- (void)endFooterRefreshing;
- (void)setDataSource:(id)arg0;
- (id)dataSource;
- (void)viewDidLayoutSubviews;
- (id)backgroundView;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (id)collectionView;
- (void)startLoading;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setBackgroundView:(id)arg0;
- (id).cxx_construct;
- (void)refreshData;
- (void)configureSubviews;

@end
