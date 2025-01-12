//
//     Generated by private class-dump
//

@class AWEPadWatchTogetherFloatButton, UIView, NSString, UIButton, AWEUILoadingView, IGListAdapter, UICollectionView, AWEPadPolymericChannelViewModel, UILabel;
@protocol AWEPadPolymericChannelModelProtocol, AWEDiscoverFeedEntranceViewProtocol;

@interface AWEPadPolymericChannelViewController : UIViewController <UIScrollViewDelegate, AWEPadChannelPreLoadTask, DUXGridBreakPointResponder, AWEUserMessage, AWEFeedTabItemViewControllerProtocol, AWERouterViewControllerProtocol> {
    BOOL _shouldLockScrollTop;
    BOOL _shouldPaddingNaviBar;
    BOOL _isFPSMonitoring;
    NSString *_launchFrom;
    UICollectionView *_listView;
    UIView *_naviBarBackgroundView;
    AWEUILoadingView *_loadingView;
    UIView *_topicHeaderView;
    UILabel *_topicLabel;
    UIButton *_backButton;
    UIView<AWEDiscoverFeedEntranceViewProtocol> *_discoverEntranceView;
    AWEPadWatchTogetherFloatButton *_watchTogetherFloatButton;
    id<AWEPadPolymericChannelModelProtocol> _channelModel;
    AWEPadPolymericChannelViewModel *_viewModel;
    IGListAdapter *_listAdapter;
    double _pageInitTime;
    double _openFetchTime;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lastFrame;
}

@property (retain, nonatomic) UICollectionView *listView;
@property (retain, nonatomic) UIView *naviBarBackgroundView;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastFrame;
@property (retain, nonatomic) UIView *topicHeaderView;
@property (retain, nonatomic) UILabel *topicLabel;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UIView<AWEDiscoverFeedEntranceViewProtocol> *discoverEntranceView;
@property (retain, nonatomic) AWEPadWatchTogetherFloatButton *watchTogetherFloatButton;
@property (retain, nonatomic) id<AWEPadPolymericChannelModelProtocol> channelModel;
@property (retain, nonatomic) AWEPadPolymericChannelViewModel *viewModel;
@property (retain, nonatomic) IGListAdapter *listAdapter;
@property (nonatomic) double pageInitTime;
@property (nonatomic) double openFetchTime;
@property (nonatomic) BOOL isFPSMonitoring;
@property (nonatomic) BOOL shouldLockScrollTop;
@property (nonatomic) BOOL shouldPaddingNaviBar;
@property (retain, nonatomic) NSString *launchFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long type;

- (void)setLaunchFrom:(id)arg0;
- (id)launchFrom;
- (id)referString;
- (id)aweui_emptyPageConfigForState:(unsigned long long)arg0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (void)didFinishLogin;
- (void)didFinishLogout;
- (BOOL)configWithRouterParamDict:(id)arg0;
- (void)pauseWithAnimation;
- (void)duxGrid_viewDidChangeBreakPointFrom:(struct { long long x0; long long x1; })arg0 toBreakPoint:(struct { long long x0; long long x1; })arg1;
- (void)animatedRefreshWithCompletion:(id /* block */)arg0;
- (BOOL)currentTabIsTop;
- (BOOL)canRefresh;
- (void)showLoading:(BOOL)arg0;
- (void)setupNotification;
- (void)bindViewModel;
- (void)onDiscoverButtonClicked:(id)arg0;
- (void)onApplicationWillEnterForeground:(id)arg0;
- (void)loadMore;
- (id)listAdapter;
- (id)naviBarBackgroundView;
- (void)setNaviBarBackgroundView:(id)arg0;
- (id)discoverEntranceView;
- (void)setDiscoverEntranceView:(id)arg0;
- (id)topicLabel;
- (void)setTopicLabel:(id)arg0;
- (void)onTabChanged:(id)arg0;
- (id)channelModel;
- (void)setChannelModel:(id)arg0;
- (void)clickBackButton:(id)arg0;
- (void)setListAdapter:(id)arg0;
- (void)setupListAdapter;
- (void)refreshWithComplete:(id /* block */)arg0;
- (void)addLoadMoreCallback;
- (void)refreshWithScene:(id)arg0;
- (void)awe_padChannelPrelaodRun;
- (id)initWithChannelModel:(id)arg0;
- (void)setShouldLockScrollTop:(BOOL)arg0;
- (void)updateViewWhenNetworkCompleteWihtError:(id)arg0;
- (void)simplePostWithUrl:(id)arg0 params:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithPageKey:(id)arg0 enterFrom:(id)arg1 enableCache:(BOOL)arg2;
- (void)setShouldPaddingNaviBar:(BOOL)arg0;
- (void)loadDataFromCacheIfNeed;
- (void)initRefresh;
- (void)showFloatButtonIfNeed;
- (void)reportTaskIfNeeded;
- (void)trackFloatButtonEvent:(id)arg0 withExtraParams:(id)arg1;
- (BOOL)shouldPaddingNaviBar;
- (id)topicHeaderView;
- (void)setupTheme;
- (id)watchTogetherFloatButton;
- (double)pageInitTime;
- (void)trackPagePagePerform:(double)arg0 queryDuration:(double)arg1 buildDuration:(double)arg2 showDuration:(double)arg3 freshType:(id)arg4 error:(id)arg5;
- (void)setOpenFetchTime:(double)arg0;
- (double)openFetchTime;
- (BOOL)shouldShowFloatButton;
- (void)setupFloatButton;
- (BOOL)shouldLockScrollTop;
- (void)setIsFPSMonitoring:(BOOL)arg0;
- (BOOL)isFPSMonitoring;
- (void)addRefreshCallBack;
- (void)updateFilterParams:(id)arg0 forSection:(id)arg1;
- (void)postHistoryClickReportWithDataType:(long long)arg0 Id:(id)arg1 completion:(id /* block */)arg2;
- (void)updateButtonAlphaWithOffsetY:(double)arg0;
- (void)setTopicHeaderView:(id)arg0;
- (void)setWatchTogetherFloatButton:(id)arg0;
- (void)setPageInitTime:(double)arg0;
- (void)reload;
- (void)setScrollEnabled:(BOOL)arg0;
- (void)setListView:(id)arg0;
- (void)viewDidLayoutSubviews;
- (id)listView;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (void)stop;
- (long long)preferredStatusBarStyle;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)setViewModel:(id)arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (id)viewModel;
- (id)layout;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (void)dealloc;
- (void)play;
- (void)pause;
- (void)viewDidLoad;
- (id)backButton;
- (void)setBackButton:(id)arg0;
- (void)setupView;
- (void)setLastFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })lastFrame;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;

@end
