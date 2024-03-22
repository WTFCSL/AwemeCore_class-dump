//
//     Generated by private class-dump
//

@class UIView, IESECTracker, NSArray, IESECGradientView, IESECDurationHelper, NSString, IESECGoodsVideoSearchResultEmptyView, UICollectionView, IESECTrendGoodsContext, NSIndexPath;
@protocol IESECTrendGoodsDataService;

@interface IESECTrendGoodsViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, IESECGoodsVideoSearchResultLayoutProtocol, IESECTrendGoodsSetCardDelegate, IESECTrendGoodsProductCardDelegate, IESECGoodsVideoSearchResultEmptyViewProtocol, IESECTrendGoodsVideoCardDelegate, IESECCommentBarExpandContentProtocol> {
    BOOL _hasRecordedPagePerformance;
    id /* block */ closeButtonDidTap;
    id /* block */ enterOtherPageWithFullScreen;
    IESECTrendGoodsContext *_context;
    UIView *_topBarView;
    UICollectionView *_mainCollectionView;
    id<IESECTrendGoodsDataService> _dataController;
    IESECTracker *_tracker;
    NSArray *_feedBackList;
    NSIndexPath *_lastAppeardFeedBackCellIndexPath;
    IESECGoodsVideoSearchResultEmptyView *_emptyContentView;
    IESECGradientView *_gradientView;
    IESECDurationHelper *_renderDurationHelper;
}

@property (retain, nonatomic) IESECTrendGoodsContext *context;
@property (retain, nonatomic) UIView *topBarView;
@property (retain, nonatomic) UICollectionView *mainCollectionView;
@property (retain, nonatomic) id<IESECTrendGoodsDataService> dataController;
@property (retain, nonatomic) IESECTracker *tracker;
@property (copy, nonatomic) NSArray *feedBackList;
@property (retain, nonatomic) NSIndexPath *lastAppeardFeedBackCellIndexPath;
@property (retain, nonatomic) IESECGoodsVideoSearchResultEmptyView *emptyContentView;
@property (retain, nonatomic) IESECGradientView *gradientView;
@property (retain, nonatomic) IESECDurationHelper *renderDurationHelper;
@property (nonatomic) BOOL hasRecordedPagePerformance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ closeButtonDidTap;
@property (copy, nonatomic) id /* block */ enterOtherPageWithFullScreen;

- (void)setDataController:(id)arg0;
- (id)emptyContentView;
- (void)updateEmptyViewWithNetworkError;
- (void)retryLoadData;
- (void)setEmptyContentView:(id)arg0;
- (void)closeButtonDidClick:(id)arg0;
- (void)loadMoreData;
- (BOOL)hasRecordedPagePerformance;
- (void)setHasRecordedPagePerformance:(BOOL)arg0;
- (void)setMainCollectionView:(id)arg0;
- (void)setCloseButtonDidTap:(id /* block */)arg0;
- (void)setEnterOtherPageWithFullScreen:(id /* block */)arg0;
- (id)getPanGestureRecognizerView;
- (id)renderDurationHelper;
- (void)setRenderDurationHelper:(id)arg0;
- (id /* block */)closeButtonDidTap;
- (void)transToMall;
- (double)collectionViewLayout:(id)arg0 heightForItemAtIndexPath:(id)arg1;
- (void)didFeedBackMaskViewTapped:(id)arg0 withDislikeType:(long long)arg1;
- (void)didFeedBackMaskViewShow:(id)arg0;
- (void)didTapGoodsDetail:(id)arg0;
- (void)didFeedBackMaskViewBackGroundTapped:(id)arg0;
- (BOOL)isUseNewStyle;
- (void)didTapStoreEntrance:(id)arg0;
- (void)didTapTrendGoodsSetCardEntrance:(id)arg0 byType:(unsigned long long)arg1;
- (void)scrollTrendGoodsSetCardImage:(id)arg0 toIndex:(long long)arg1;
- (void)didTapTrendGoodsVideoCard:(id)arg0 tapArea:(unsigned long long)arg1;
- (void)addInfiniteScrollView;
- (void)fetchFeedListRequestTrack;
- (void)fetchFeedListRequestFailTrack:(id)arg0;
- (void)updateEmptyViewWithNoSearchResult;
- (void)setFeedBackList:(id)arg0;
- (void)enterTrendFeedListFailTrackWithNetError:(id)arg0;
- (id)feedBackList;
- (id)lastAppeardFeedBackCellIndexPath;
- (void)trackGoodsCardShow:(id)arg0;
- (void)trackShopEntranceShow:(id)arg0;
- (void)trackPerformanceOnce;
- (void)trackGoodsCardClick:(id)arg0;
- (id /* block */)enterOtherPageWithFullScreen;
- (void)trackGoodsCardSlide:(id)arg0 currentCarouselIndex:(long long)arg1;
- (void)enterProductDetailAtIndex:(long long)arg0;
- (void)enterProductStoreAtIndex:(long long)arg0;
- (void)setLastAppeardFeedBackCellIndexPath:(id)arg0;
- (void)trackEnterPersonalPage:(id)arg0;
- (void)enterTrendFeedListTrack;
- (id)initWithContext:(id)arg0;
- (id)tracker;
- (void)setTracker:(id)arg0;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)setContext:(id)arg0;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)setGradientView:(id)arg0;
- (void)viewDidDisappear:(BOOL)arg0;
- (id)context;
- (void)setEnable:(BOOL)arg0;
- (void)viewWillAppear:(BOOL)arg0;
- (id)gradientView;
- (void)viewDidLoad;
- (void)setupUI;
- (id)mainCollectionView;
- (id)dataController;
- (id)topBarView;
- (void)setTopBarView:(id)arg0;

@end
