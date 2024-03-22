//
//     Generated by private class-dump
//

@class UICollectionView, NSDictionary, AWEDCFeedShimmerView, AWEDCFeedRouterService, AWEDCFeedSearchBarAbility, AWEDCFeedControllerManager, AWEDCFeedConfig, NSString, AWEDCFeedTransitionService, AWEDCFeedPageContext, DUXVacantView, AWEGradientView, AWEAwemeModel, AWEDCFeedEventDispatcher;
@protocol AWEDCFeedListViewControllerDelegate, AWEDCFeedTrackerServiceProtocol;

@interface AWEDCFeedListViewController : AWEBaseListViewController <UIScrollViewDelegate, UICollectionViewDelegate, AWEListSectionControllerDelegate, AWEDCFeedSectionControllerDelegate, AWEAwemeDetailTableViewControllerDelegate, AWEDCFeedListViewControllerProtocol, AWEShellViewControllerProtocol> {
    BOOL _isScrolling;
    BOOL _isVCAppeared;
    BOOL _isEmptyPageShowing;
    BOOL _hasFetchedValidData;
    BOOL _needFetchData;
    BOOL _needToastErrorMessageWhenAppear;
    AWEDCFeedPageContext *_context;
    AWEDCFeedControllerManager *_controllerManager;
    NSString *_referString;
    id<AWEDCFeedListViewControllerDelegate> _delegate;
    AWEDCFeedSearchBarAbility *_searchBarAbility;
    AWEDCFeedEventDispatcher *_eventDispatcher;
    AWEDCFeedConfig *_config;
    NSDictionary *_routerParams;
    AWEGradientView *_topGradientView;
    AWEDCFeedShimmerView *_shimmerView;
    DUXVacantView *_vacantView;
    id<AWEDCFeedTrackerServiceProtocol> _tracker;
    AWEDCFeedTransitionService *_transitionService;
    AWEDCFeedRouterService *_routerService;
    id /* block */ _refreshCompleteBlock;
    NSString *_liveClickFromRefer;
}

@property (copy, nonatomic) NSString *referString;
@property (weak, nonatomic) id<AWEDCFeedListViewControllerDelegate> delegate;
@property (retain, nonatomic) AWEDCFeedSearchBarAbility *searchBarAbility;
@property (retain, nonatomic) AWEDCFeedPageContext *context;
@property (retain, nonatomic) AWEDCFeedControllerManager *controllerManager;
@property (retain, nonatomic) AWEDCFeedEventDispatcher *eventDispatcher;
@property (retain, nonatomic) AWEDCFeedConfig *config;
@property (retain, nonatomic) NSDictionary *routerParams;
@property (retain, nonatomic) AWEGradientView *topGradientView;
@property (retain, nonatomic) AWEDCFeedShimmerView *shimmerView;
@property (retain, nonatomic) DUXVacantView *vacantView;
@property (retain, nonatomic) id<AWEDCFeedTrackerServiceProtocol> tracker;
@property (retain, nonatomic) AWEDCFeedTransitionService *transitionService;
@property (retain, nonatomic) AWEDCFeedRouterService *routerService;
@property (nonatomic) BOOL isScrolling;
@property (nonatomic) BOOL isVCAppeared;
@property (nonatomic) BOOL isEmptyPageShowing;
@property (nonatomic) BOOL hasFetchedValidData;
@property (nonatomic) BOOL needFetchData;
@property (nonatomic) BOOL needToastErrorMessageWhenAppear;
@property (copy, nonatomic) id /* block */ refreshCompleteBlock;
@property (copy, nonatomic) NSString *liveClickFromRefer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UICollectionView *collectionView;
@property (readonly, nonatomic) AWEAwemeModel *selectedModel;
@property (readonly, nonatomic) long long scrollType;

+ (Class)viewModelClass;

- (id)referString;
- (id)aweui_emptyPageConfigForState:(unsigned long long)arg0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)arg0;
- (void)customLayoutCollectionView:(id)arg0;
- (id)layoutForCollectionView;
- (id)sectionControllerClassArray;
- (long long)workingRangeSize;
- (void)dataSourceDidCreateSectionController:(id)arg0 forSectionViewModel:(id)arg1;
- (void)listDidReloadDataWithCollectionView:(id)arg0;
- (void)sectionControllerWillEnterWorkingRange:(id)arg0;
- (BOOL)configWithRouterParamDict:(id)arg0;
- (void)setReferString:(id)arg0;
- (id)controllerByProtocol:(id)arg0;
- (void)listDidPerformBatchUpdatesWithCollectionView:(id)arg0;
- (BOOL)canRefresh;
- (void)awe_themeReload;
- (id)containerViewModel;
- (void)enterContainerWithModel:(id)arg0;
- (void)exitContainerWithModel:(id)arg0;
- (void)setScrollEnable:(BOOL)arg0;
- (void)appendModels:(id)arg0 animated:(BOOL)arg1;
- (void)removeModels:(id)arg0 animated:(BOOL)arg1;
- (id)controllerManager;
- (id)createControllerManager;
- (void)loadControllerManager;
- (void)initialFetchData;
- (void)refreshListDataWithReason:(unsigned long long)arg0 completion:(id /* block */)arg1;
- (BOOL)currentIsTop;
- (void)reloadContainerData;
- (BOOL)isRefreshingData;
- (id)searchBarAbility;
- (id)filterDataArray:(id)arg0 args:(id)arg1;
- (void)registerEventObservers:(id)arg0;
- (id)awemeModelWithIndexPath:(id)arg0;
- (id)awemeModelWithID:(id)arg0;
- (id)indexPathWithAwemeModel:(id)arg0;
- (id)allAwemeArray;
- (void)fetchListDataWithReason:(unsigned long long)arg0 params:(id)arg1 args:(id)arg2 completion:(id /* block */)arg3;
- (void)insertModels:(id)arg0 indexPath:(id)arg1 animated:(BOOL)arg2;
- (void)didSelectItemAtIndex:(id)arg0 model:(id)arg1 selectedCell:(id)arg2 logExtraDict:(id)arg3;
- (id)routerParams;
- (void)setRouterParams:(id)arg0;
- (id)visibleSectionControllers;
- (void)onApplicationWillTerminate;
- (void)setupDefaultConfig;
- (void)setControllerManager:(id)arg0;
- (void)sectionController:(id)arg0 longPressedCell:(id)arg1 model:(id)arg2 location:(struct CGPoint { double x0; double x1; })arg3;
- (void)startShimming;
- (void)stopShimming;
- (id)createEventDispatcher;
- (void)setupBinds;
- (void)setupContainerViewModel;
- (void)setupVoiceOver;
- (id)currentTopGradientViewColor;
- (void)cellDispatchEvent:(unsigned long long)arg0;
- (void)setIsVCAppeared:(BOOL)arg0;
- (BOOL)needToastErrorMessageWhenAppear;
- (void)setNeedToastErrorMessageWhenAppear:(BOOL)arg0;
- (id)shimmerView;
- (id)currentContainerViewBackgroundColor;
- (void)addFooterIfNeeded;
- (id /* block */)refreshCompleteBlock;
- (BOOL)isEmptyPageShowing;
- (void)setRefreshCompleteBlock:(id /* block */)arg0;
- (void)setHasFetchedValidData:(BOOL)arg0;
- (void)handleFetchDataState:(long long)arg0;
- (BOOL)isVCAppeared;
- (void)setLiveClickFromRefer:(id)arg0;
- (void)onNetworkStatusChanged:(id)arg0;
- (BOOL)hasFetchedValidData;
- (void)loadMoreListDataWithReason:(unsigned long long)arg0 completion:(id /* block */)arg1;
- (void)replaceModels:(id)arg0 sync:(BOOL)arg1;
- (void)dispatchEvent:(unsigned long long)arg0 toCell:(id)arg1;
- (id)liveClickFromRefer;
- (void)adjustCellPositionWithIndexPath:(id)arg0;
- (void)showEmptyPageWithPageState:(unsigned long long)arg0;
- (void)interruptListDragGesture;
- (id)vacantView;
- (void)onEmptyPageRetryButtonClicked;
- (void)setVacantView:(id)arg0;
- (void)createVacantViewIfNeeded;
- (void)setIsEmptyPageShowing:(BOOL)arg0;
- (id)currentVisibleCells;
- (id)transitionService;
- (void)setTransitionService:(id)arg0;
- (void)handleRefreshFromDebug:(id)arg0;
- (void)setSearchBarAbility:(id)arg0;
- (void)setShimmerView:(id)arg0;
- (BOOL)needFetchData;
- (void)setNeedFetchData:(BOOL)arg0;
- (void)setIsScrolling:(BOOL)arg0;
- (id)tracker;
- (void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)setTracker:(id)arg0;
- (id)init;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)setConfig:(id)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (id)collectionView;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (void)setContext:(id)arg0;
- (id)config;
- (BOOL)isScrolling;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)scrollViewDidScrollToTop:(id)arg0;
- (void)scrollViewDidEndScrollingAnimation:(id)arg0;
- (id)createContext;
- (long long)preferredStatusBarStyle;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)applicationWillResignActive;
- (void)scrollViewDidScroll:(id)arg0;
- (id)initWithConfig:(id)arg0;
- (id)delegate;
- (void)scrollToTop;
- (id)context;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg0;
- (void)setDelegate:(id)arg0;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)applicationDidBecomeActive;
- (void)setupUI;
- (void)appDidEnterBackground;
- (void)setupCollectionView:(id)arg0;
- (void)setupNotifications;
- (id)topGradientView;
- (void)setTopGradientView:(id)arg0;
- (id)eventDispatcher;
- (void)setEventDispatcher:(id)arg0;
- (id)routerService;
- (void)setRouterService:(id)arg0;

@end