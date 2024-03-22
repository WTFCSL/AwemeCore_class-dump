//
//     Generated by private class-dump
//

@class IESLiveWebpLoadingView, UIView, IESLiveTableViewCellDisplayTrackHelper, NSString, IESLivePKSearchView, IESLiveButton, IESLiveRevenueInteractInviteViewModel, UITableView, UILabel;
@protocol IESLiveScrollRefreshServiceAdapter;

@interface IESLiveRevenueInteractInviteViewController : IESLiveRevenueInteractPopupViewController <UITableViewDelegate, UITableViewDataSource, IESLiveTableViewCellDisplayTrackHelperDelegate> {
    BOOL _hasBannerShowReported;
    BOOL _hasSlideTracked;
    unsigned long long _enterSource;
    IESLiveButton *_backButton;
    UILabel *_titleLabel;
    UIView *_topSeparateLine;
    IESLivePKSearchView *_searchView;
    UITableView *_inviteListView;
    IESLiveWebpLoadingView *_loadingView;
    id<IESLiveScrollRefreshServiceAdapter> _scrollRefresh;
    IESLiveRevenueInteractInviteViewModel *_viewModel;
    IESLiveTableViewCellDisplayTrackHelper *_tableViewTrackHelper;
    double _tabAppearTimestamp;
    long long _showTime;
    long long _refreshTimes;
    long long _fromSource;
}

@property (retain, nonatomic) IESLiveButton *backButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *topSeparateLine;
@property (retain, nonatomic) IESLivePKSearchView *searchView;
@property (retain, nonatomic) UITableView *inviteListView;
@property (retain, nonatomic) IESLiveWebpLoadingView *loadingView;
@property (retain, nonatomic) id<IESLiveScrollRefreshServiceAdapter> scrollRefresh;
@property (retain, nonatomic) IESLiveRevenueInteractInviteViewModel *viewModel;
@property (retain, nonatomic) IESLiveTableViewCellDisplayTrackHelper *tableViewTrackHelper;
@property (nonatomic) BOOL hasBannerShowReported;
@property (nonatomic) BOOL hasSlideTracked;
@property (nonatomic) double tabAppearTimestamp;
@property (nonatomic) long long showTime;
@property (nonatomic) long long refreshTimes;
@property (nonatomic) long long fromSource;
@property (nonatomic) unsigned long long enterSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setEnterSource:(unsigned long long)arg0;
- (unsigned long long)enterSource;
- (long long)showTime;
- (void)setShowTime:(long long)arg0;
- (long long)fromSource;
- (void)setFromSource:(long long)arg0;
- (void)onBackButtonClicked;
- (void)initSubviews;
- (id)topSeparateLine;
- (void)setTopSeparateLine:(id)arg0;
- (long long)refreshTimes;
- (void)setRefreshTimes:(long long)arg0;
- (id)initWithViewModel:(id)arg0 diContext:(id)arg1;
- (void)onSetupNavBar:(id)arg0;
- (BOOL)trackDisplayedCellWithIndexPath:(id)arg0;
- (void)trackInvitePanelClose;
- (void)setHasSlideTracked:(BOOL)arg0;
- (void)setTabAppearTimestamp:(double)arg0;
- (double)tabAppearTimestamp;
- (id)tableViewTrackHelper;
- (BOOL)hasSlideTracked;
- (void)trackAnchorListSlide;
- (void)setTableViewTrackHelper:(id)arg0;
- (id)initWithViewModel:(id)arg0 fromSource:(long long)arg1 diContext:(id)arg2;
- (id)scrollRefresh;
- (void)setScrollRefresh:(id)arg0;
- (id)inviteListView;
- (void)setInviteListView:(id)arg0;
- (void)fetchRecommendRivals:(id /* block */)arg0;
- (void)setupHeaderTitleInSection:(long long)arg0 containerView:(id)arg1;
- (BOOL)hasBannerShowReported;
- (void)setHasBannerShowReported:(BOOL)arg0;
- (void)onSearchViewClicked;
- (id)tableView:(id)arg0 viewForHeaderInSection:(long long)arg1;
- (void)dismiss;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (double)tableView:(id)arg0 heightForHeaderInSection:(long long)arg1;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (id)titleLabel;
- (void)setViewModel:(id)arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (id)viewModel;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setTitleLabel:(id)arg0;
- (id)backButton;
- (void)setBackButton:(id)arg0;
- (double)tableView:(id)arg0 heightForFooterInSection:(long long)arg1;
- (id)tableView:(id)arg0 viewForFooterInSection:(long long)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (id)searchView;
- (void)setSearchView:(id)arg0;

@end