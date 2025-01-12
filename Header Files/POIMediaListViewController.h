//
//     Generated by private class-dump
//

@class NSString, POIMediaListExtensionManager, POIMediaListPageContext, AWEPOITouchThroughView, POIMediaListPageModel, UITableView;
@protocol POIMediaListStickyContainerProtocol, POIMediaListControllerProtocol;

@interface POIMediaListViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, POIMediaListViewControllerProtocol, POIMediaPlayerViewDelegate, POIMediaAlbumPlayerDelegate, BTMPageManagableProtocol, AWERouterViewControllerProtocol> {
    BOOL _hasStickHeader;
    BOOL _hasStickFooter;
    BOOL _hasTracked;
    UITableView *_POIMediaListView;
    id<POIMediaListControllerProtocol> _containerController;
    POIMediaListPageModel *_pageModel;
    unsigned long long _videoStyle;
    unsigned long long _scene;
    id<POIMediaListStickyContainerProtocol> _headerContainer;
    id<POIMediaListStickyContainerProtocol> _footerContainer;
    id<POIMediaListStickyContainerProtocol> _pagingContainer;
    POIMediaListExtensionManager *_extensionManager;
    POIMediaListPageContext *_context;
    double _startTime;
    AWEPOITouchThroughView *_viewForContainer;
    double _fmpStartTime;
    long long _maxIndex;
}

@property (retain, nonatomic) UITableView *POIMediaListView;
@property (retain, nonatomic) id<POIMediaListControllerProtocol> containerController;
@property (retain, nonatomic) POIMediaListPageModel *pageModel;
@property (nonatomic) unsigned long long videoStyle;
@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) id<POIMediaListStickyContainerProtocol> headerContainer;
@property (nonatomic) BOOL hasStickHeader;
@property (retain, nonatomic) id<POIMediaListStickyContainerProtocol> footerContainer;
@property (nonatomic) BOOL hasStickFooter;
@property (retain, nonatomic) id<POIMediaListStickyContainerProtocol> pagingContainer;
@property (retain, nonatomic) POIMediaListExtensionManager *extensionManager;
@property (retain, nonatomic) POIMediaListPageContext *context;
@property (nonatomic) double startTime;
@property (retain, nonatomic) AWEPOITouchThroughView *viewForContainer;
@property (nonatomic) double fmpStartTime;
@property (nonatomic) BOOL hasTracked;
@property (nonatomic) long long maxIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UITableView *tableView;

- (id)aweui_emptyPageConfigForState:(unsigned long long)arg0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)arg0;
- (void)loadMoreWithCompletion:(id /* block */)arg0;
- (BOOL)configWithRouterParamDict:(id)arg0;
- (BOOL)btm_autoManaged;
- (id)btm_pageIdentifier;
- (BOOL)hasTracked;
- (void)setHasTracked:(BOOL)arg0;
- (id)poiID;
- (id)containerController;
- (void)setContainerController:(id)arg0;
- (void)setMaxIndex:(long long)arg0;
- (unsigned long long)videoStyle;
- (void)setVideoStyle:(unsigned long long)arg0;
- (id)pageModel;
- (void)setPageModel:(id)arg0;
- (void)onScrollDidEnd;
- (void)didLoadPageModel:(id)arg0;
- (double)fmpStartTime;
- (void)setFmpStartTime:(double)arg0;
- (id)safelyGetCurrentMediaModel;
- (id)getVisibleTopmostMediaModel;
- (void)reloadInitialDataWithCompletion:(id /* block */)arg0;
- (id)viewForContainer;
- (void)playerPlayTime:(double)arg0 canPlayTime:(double)arg1 totalTime:(double)arg2 mediaModel:(id)arg3;
- (void)playFailedWithError:(id)arg0 mediaModel:(id)arg1;
- (void)didChangeStallState:(long long)arg0 mediaModel:(id)arg1;
- (void)playerDidChangeStallState:(long long)arg0 actionType:(long long)arg1 reason:(unsigned long long)arg2 mediaModel:(id)arg3;
- (void)playerDidReadyForDisplayWithMediaModel:(id)arg0;
- (void)playerDidChangePlaybackStateWithAction:(long long)arg0 mediaModel:(id)arg1;
- (void)playbackFailedForURL:(id)arg0 error:(id)arg1 mediaModel:(id)arg2;
- (void)playerMuteStateDidChanged:(BOOL)arg0 mediaModel:(id)arg1;
- (void)playerWillLoopPlayingWithMediaModel:(id)arg0;
- (void)didChangePlaybackStateWithAction:(long long)arg0 mediaModel:(id)arg1;
- (void)playbackFailedWithError:(id)arg0 mediaModel:(id)arg1;
- (void)playerWillPlayFirstFrame:(id)arg0;
- (void)albumPlayerWillBeginNextCircle:(id)arg0;
- (void)albumPlayerDidBeginNextCircle:(id)arg0;
- (void)albumPlayerDidScroll:(id)arg0 index:(long long)arg1 isAuto:(BOOL)arg2;
- (void)albumPlayerModelConfigFinish:(id)arg0 mediaID:(id)arg1 success:(BOOL)arg2 error:(id)arg3;
- (void)trackDataError:(id)arg0;
- (void)reloadFooterContainerWithCompletion:(id /* block */)arg0;
- (void)reloadHeaderContainerWithCompletion:(id /* block */)arg0;
- (id)safelyGetCurrentCell;
- (void)initializeWithScene:(unsigned long long)arg0 videoStyle:(unsigned long long)arg1 params:(id)arg2;
- (void)buildContext;
- (void)buildManager;
- (void)setHasStickHeader:(BOOL)arg0;
- (void)setHasStickFooter:(BOOL)arg0;
- (id)buildFooterView;
- (id)buildPagingView;
- (void)setPagingContainer:(id)arg0;
- (id)pagingContainer;
- (void)addBasicExtensions;
- (id)POIMediaListView;
- (void)updateTableViewFrame;
- (void)addLoadMoreToTableView;
- (id)getInitialMediaModel;
- (void)updateHeaderAndFooter;
- (BOOL)hasStickHeader;
- (BOOL)hasStickFooter;
- (id)getVisibleTopmostIndexPath;
- (id)getVisibleTopmostCell;
- (id)safelyGetItemAtIndex:(long long)arg0;
- (void)buildPageModel;
- (void)reloadContainerViews;
- (void)didEndReloadWithCompletion:(id /* block */)arg0;
- (void)tryInitializePage;
- (void)trackerFMP:(id)arg0;
- (void)trackPlayerError:(id)arg0 mediaID:(id)arg1 urls:(id)arg2 url:(id)arg3;
- (void)trackPlayerExit;
- (id)safelyGetCurrentInteractorContainer;
- (id)getVisibleTopmostInteractorContainer;
- (id)getHeaderContainer;
- (id)getFooterContainer;
- (id)initWithScene:(unsigned long long)arg0 videoStyle:(unsigned long long)arg1;
- (id)safelyGetCurrentInteractor;
- (void)setPOIMediaListView:(id)arg0;
- (void)setViewForContainer:(id)arg0;
- (void)scrollViewWillBeginDecelerating:(id)arg0;
- (void)scrollViewWillBeginZooming:(id)arg0 withView:(id)arg1;
- (void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)dismiss;
- (void)setScene:(unsigned long long)arg0;
- (void)setStartTime:(double)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (id)items;
- (void)tableView:(id)arg0 didEndDisplayingCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint { double x0; double x1; })arg1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)arg2;
- (void)setContext:(id)arg0;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)scrollViewDidEndScrollingAnimation:(id)arg0;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (BOOL)hasMore;
- (double)startTime;
- (id)context;
- (void)scrollViewDidZoom:(id)arg0;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (long long)maxIndex;
- (id)initWithParams:(id)arg0;
- (void)viewWillAppear:(BOOL)arg0;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (unsigned long long)scene;
- (void)setExtensionManager:(id)arg0;
- (id)extensionManager;
- (long long)indexOfItem:(id)arg0;
- (void)setupUI;
- (id)buildHeaderView;
- (void)scrollToItem:(id)arg0 animated:(BOOL)arg1;
- (void)scrollToIndex:(long long)arg0 animated:(BOOL)arg1;
- (double)cellHeight;
- (void)reloadDataWithCompletion:(id /* block */)arg0;
- (id)headerContainer;
- (void)setHeaderContainer:(id)arg0;
- (id)footerContainer;
- (void)setFooterContainer:(id)arg0;

@end
