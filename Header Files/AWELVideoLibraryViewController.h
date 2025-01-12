//
//     Generated by private class-dump
//

@class AWELVideoLibraryPageContext, NSString, AWELVideoHallTracker, AWELVideoFilterChildViewController;

@interface AWELVideoLibraryViewController : AWEBaseListViewController <UIScrollViewDelegate> {
    BOOL _isFirstRequestData;
    AWELVideoLibraryPageContext *_context;
    NSString *_filterPageID;
    AWELVideoHallTracker *_tracker;
    AWELVideoFilterChildViewController *_searchFilterChildVC;
    double _stayDuration;
    double _pageCreateTime;
    double _requestFinishTime;
}

@property (copy, nonatomic) NSString *filterPageID;
@property (retain, nonatomic) AWELVideoHallTracker *tracker;
@property (retain, nonatomic) AWELVideoFilterChildViewController *searchFilterChildVC;
@property (nonatomic) BOOL isFirstRequestData;
@property (nonatomic) double stayDuration;
@property (nonatomic) double pageCreateTime;
@property (nonatomic) double requestFinishTime;
@property (retain, nonatomic) AWELVideoLibraryPageContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)sectionControllerClassArray;
- (void)dataSourceDidCreateSectionController:(id)arg0 forSectionViewModel:(id)arg1;
- (BOOL)configWithRouterParamDict:(id)arg0;
- (void)backBtnClick;
- (double)stayDuration;
- (void)addNotifications;
- (void)setStayDuration:(double)arg0;
- (id)filterPageID;
- (void)setFilterPageID:(id)arg0;
- (double)naviBarHeight;
- (void)trackStayTime;
- (void)startStayTime;
- (void)handleFetchDataState:(long long)arg0;
- (void)handleAppWillResignActive:(id)arg0;
- (void)setIsFirstRequestData:(BOOL)arg0;
- (void)setPageCreateTime:(double)arg0;
- (void)bindState;
- (void)setupAPIMonitor;
- (void)adjustTheme;
- (double)requestFinishTime;
- (double)pageCreateTime;
- (id)searchFilterChildVC;
- (void)updateNavigationBarForFeedShare;
- (void)handleAppDidBecomeActive:(id)arg0;
- (void)p_updateSearchCategoryChildVCFrame;
- (BOOL)isFirstRequestData;
- (void)setRequestFinishTime:(double)arg0;
- (void)setSearchFilterChildVC:(id)arg0;
- (id)tracker;
- (void)setTracker:(id)arg0;
- (id)init;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (id)context;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setupData;
- (void)setupCollectionView:(id)arg0;
- (void)setupNavigationBar;

@end
