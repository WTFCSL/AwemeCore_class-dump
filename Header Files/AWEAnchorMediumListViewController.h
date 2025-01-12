//
//     Generated by private class-dump
//

@class UIView, NSString, NSArray, AWEAnchorMediumSearchEmptyView, AWEAnchorMediumDataController, UITableView, AWEAnchorMediumSearchHistoryViewController, AWEAnchorMediumSearchBarView;

@interface AWEAnchorMediumListViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWERouterViewControllerProtocol, UISearchBarDelegate> {
    BOOL _isSearchModal;
    UITableView *_tableView;
    AWEAnchorMediumSearchEmptyView *_emptyView;
    NSArray *_dataSource;
    AWEAnchorMediumDataController *_dataController;
    AWEAnchorMediumSearchBarView *_anchorSearchBar;
    UIView *_fakeNavigationBar;
    UIView *_tableHeaderView;
    NSString *_keyword;
    AWEAnchorMediumSearchHistoryViewController *_searchHistoryViewController;
}

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEAnchorMediumSearchEmptyView *emptyView;
@property (retain, nonatomic) NSArray *dataSource;
@property (retain, nonatomic) AWEAnchorMediumDataController *dataController;
@property (retain, nonatomic) AWEAnchorMediumSearchBarView *anchorSearchBar;
@property (retain, nonatomic) UIView *fakeNavigationBar;
@property (retain, nonatomic) UIView *tableHeaderView;
@property (nonatomic) BOOL isSearchModal;
@property (copy, nonatomic) NSString *keyword;
@property (retain, nonatomic) AWEAnchorMediumSearchHistoryViewController *searchHistoryViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)arg0;
- (void)setDataController:(id)arg0;
- (id)searchHistoryViewController;
- (void)showSearchCancelButton;
- (void)hideSearchCancelButton;
- (void)searchCancelButtonTapped:(id)arg0;
- (void)setSearchHistoryViewController:(id)arg0;
- (void)animationWithSearchBarBeginEditing:(BOOL)arg0;
- (id)fakeNavigationBar;
- (void)setFakeNavigationBar:(id)arg0;
- (void)loadMoreData;
- (void)loadMoreSearchData;
- (void)refreshRecommendDataSource;
- (id)anchorSearchBar;
- (BOOL)isSearchModal;
- (void)trackerPageShow;
- (void)loadMoreRecommendData;
- (id)tableViewdataSource;
- (void)setIsSearchModal:(BOOL)arg0;
- (void)refreshSearchDataSourceWithKeyword:(id)arg0;
- (void)backTapped:(id)arg0;
- (void)setAnchorSearchBar:(id)arg0;
- (void)setDataSource:(id)arg0;
- (void)searchBarCancelButtonClicked:(id)arg0;
- (id)dataSource;
- (void)searchBarTextDidBeginEditing:(id)arg0;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (long long)preferredStatusBarStyle;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (void)viewDidLoad;
- (void)searchBarSearchButtonClicked:(id)arg0;
- (id)tableHeaderView;
- (void)setTableHeaderView:(id)arg0;
- (void)setupUI;
- (void)updateSubviews;
- (id)emptyView;
- (void)setEmptyView:(id)arg0;
- (void)setKeyword:(id)arg0;
- (id)keyword;
- (id)dataController;

@end
