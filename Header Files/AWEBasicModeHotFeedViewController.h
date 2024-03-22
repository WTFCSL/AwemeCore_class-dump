//
//     Generated by private class-dump
//

@class UITableView, UIButton, NSString, UIView, AWEBasicModeAwemeTableViewCell, AWEListDataController;
@protocol AWEUILoadingViewProtocol;

@interface AWEBasicModeHotFeedViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {
    BOOL _isAppearing;
    BOOL _hasFirstFetched;
    BOOL _isDragging;
    BOOL _shouldShowLoadingView;
    AWEListDataController *_dataController;
    UITableView *_tableView;
    AWEBasicModeAwemeTableViewCell *_currentCell;
    AWEBasicModeAwemeTableViewCell *_willDisplayCell;
    long long _initialIndex;
    UIView<AWEUILoadingViewProtocol> *_loadingView;
    long long _maxPlayedIndex;
    long long _currentPlayIndex;
    long long _willPlayIndex;
    long long _playState;
    UIView *_returnButton;
    UIButton *_searchButton;
    double _lastContentOffsetY;
}

@property (retain, nonatomic) AWEListDataController *dataController;
@property (retain, nonatomic) UITableView *tableView;
@property (nonatomic) BOOL isAppearing;
@property (weak, nonatomic) AWEBasicModeAwemeTableViewCell *currentCell;
@property (nonatomic) long long initialIndex;
@property (nonatomic) BOOL hasFirstFetched;
@property (nonatomic) long long currentPlayIndex;
@property (nonatomic) long long willPlayIndex;
@property (nonatomic) long long playState;
@property (retain, nonatomic) UIView *returnButton;
@property (retain, nonatomic) UIButton *searchButton;
@property (nonatomic) BOOL isDragging;
@property (nonatomic) double lastContentOffsetY;
@property (nonatomic) BOOL shouldShowLoadingView;
@property (weak, nonatomic) AWEBasicModeAwemeTableViewCell *willDisplayCell;
@property (retain, nonatomic) UIView<AWEUILoadingViewProtocol> *loadingView;
@property (nonatomic) long long maxPlayedIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweui_emptyPageConfigForState:(unsigned long long)arg0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)arg0;
- (id)transition_destinatedViewControllerForSlideDirection:(unsigned long long)arg0 gestureRecognizer:(id)arg1;
- (BOOL)currentTabIsTop;
- (BOOL)canRefresh;
- (BOOL)hasFirstFetched;
- (id)aweui_emptyPageBelowView;
- (unsigned long long)transition_destinatedType;
- (BOOL)transition_enableCustomActionForSlideDirection:(unsigned long long)arg0 gestureRecognizer:(id)arg1;
- (void)setDataController:(id)arg0;
- (void)showNetWeak;
- (long long)currentPlayIndex;
- (void)setCurrentPlayIndex:(long long)arg0;
- (void)p_setupUI;
- (void)p_addNotifications;
- (BOOL)p_isActive;
- (void)refreshWithAnimated:(BOOL)arg0 completion:(id /* block */)arg1;
- (id)p_mainAppWindow;
- (id)initWithDataController:(id)arg0 initialIndex:(long long)arg1;
- (void)triggerInitialFetch;
- (void)setWillPlayIndex:(long long)arg0;
- (void)setMaxPlayedIndex:(long long)arg0;
- (id)p_currentFullScreenCell;
- (void)p_addRefreshHeaderAndFooter;
- (void)p_tabBarBackgroundColorFill;
- (void)p_initialFetch;
- (void)setHasFirstFetched:(BOOL)arg0;
- (void)p_loadmoreAnimation;
- (void)p_onReloadDataSource;
- (void)playIfActive;
- (long long)p_numberOfRows;
- (void)autoRefreshIfNeeded;
- (void)p_showToastOnFooterRefreshing;
- (void)loadmoreWithCompletion:(id /* block */)arg0;
- (void)p_loadMore;
- (void)p_playNextVideo;
- (id)getModelSafelyForRow:(long long)arg0;
- (id)footerNoMoreDataTitle;
- (void)handleConnectionChanged:(id)arg0;
- (void)configureCell:(id)arg0 withModel:(id)arg1 atIndexPath:(id)arg2;
- (void)setWillDisplayCell:(id)arg0;
- (long long)willPlayIndex;
- (void)p_prefetchFeedListIfNeeded:(long long)arg0;
- (void)p_onScrollDidEnd;
- (long long)maxPlayedIndex;
- (id)returnButton;
- (void)p_refreshAnimation;
- (void)p_resetFeedCount;
- (id)p_currentAweme;
- (struct CGSize { double x0; double x1; })tableViewSize;
- (void)setReturnButton:(id)arg0;
- (double)lastContentOffsetY;
- (void)setLastContentOffsetY:(double)arg0;
- (BOOL)shouldAutorotate;
- (void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)setTableView:(id)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (long long)currentIndex;
- (void)setIsAppearing:(BOOL)arg0;
- (void)tableView:(id)arg0 didEndDisplayingCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (unsigned long long)supportedInterfaceOrientations;
- (void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint { double x0; double x1; })arg1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)arg2;
- (void)setSearchButton:(id)arg0;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (BOOL)isDragging;
- (void)stop;
- (void)viewWillDisappear:(BOOL)arg0;
- (id)searchButton;
- (void)scrollViewDidEndScrollingAnimation:(id)arg0;
- (long long)preferredStatusBarStyle;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (BOOL)isAppearing;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (void)dealloc;
- (BOOL)play;
- (void)pause;
- (void)reset;
- (void)viewDidLoad;
- (BOOL)viewLoaded;
- (double)cellHeight;
- (id)willDisplayCell;
- (id)currentCell;
- (void)setCurrentCell:(id)arg0;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (id)dataController;
- (void)setIsDragging:(BOOL)arg0;
- (long long)playState;
- (void)setPlayState:(long long)arg0;
- (void)setShouldShowLoadingView:(BOOL)arg0;
- (BOOL)shouldShowLoadingView;
- (long long)initialIndex;
- (void)setInitialIndex:(long long)arg0;

@end
