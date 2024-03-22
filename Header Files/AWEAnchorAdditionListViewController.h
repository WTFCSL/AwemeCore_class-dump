//
//     Generated by private class-dump
//

@class AWEAnchorAdditionSearchBar, NSString, AWEAnchorAdditionEmptyView, UIView, AWEAnchorAdditionODRGuideView, AWEAnchorAdditionTabBar, UITableView, NSDictionary, AWEAnchorAdditionSearchHistoryViewController, AWEAnchorAdditionViewModel, UILabel;

@interface AWEAnchorAdditionListViewController : UIViewController <AWERouterViewControllerProtocol, AWEAnchorRecentAddViewControllerDelegate, UITableViewDelegate, UITableViewDataSource, UISearchBarDelegate> {
    BOOL _clicked;
    BOOL _isInSlidingViewController;
    long long _anchorType;
    UITableView *_tableView;
    AWEAnchorAdditionSearchBar *_searchBar;
    AWEAnchorAdditionTabBar *_tabBar;
    AWEAnchorAdditionViewModel *_viewModel;
    AWEAnchorAdditionEmptyView *_emptyView;
    AWEAnchorAdditionSearchHistoryViewController *_searchHistoryViewController;
    NSString *_shootWay;
    NSString *_creationID;
    NSDictionary *_extraParams;
    UIView *_guideContentView;
    UILabel *_guideLabel;
    AWEAnchorAdditionODRGuideView *_emptyGuideView;
}

@property (nonatomic) long long anchorType;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEAnchorAdditionSearchBar *searchBar;
@property (retain, nonatomic) AWEAnchorAdditionTabBar *tabBar;
@property (retain, nonatomic) AWEAnchorAdditionViewModel *viewModel;
@property (retain, nonatomic) AWEAnchorAdditionEmptyView *emptyView;
@property (retain, nonatomic) AWEAnchorAdditionSearchHistoryViewController *searchHistoryViewController;
@property (copy, nonatomic) NSString *shootWay;
@property (copy, nonatomic) NSString *creationID;
@property (nonatomic) BOOL clicked;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (nonatomic) BOOL isInSlidingViewController;
@property (retain, nonatomic) UIView *guideContentView;
@property (retain, nonatomic) UILabel *guideLabel;
@property (retain, nonatomic) AWEAnchorAdditionODRGuideView *emptyGuideView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)arg0;
- (void)setShootWay:(id)arg0;
- (id)extraParams;
- (void)setExtraParams:(id)arg0;
- (id)shootWay;
- (id)guideLabel;
- (void)setGuideLabel:(id)arg0;
- (id)creationID;
- (void)setCreationID:(id)arg0;
- (void)setClicked:(BOOL)arg0;
- (void)setIsInSlidingViewController:(BOOL)arg0;
- (void)closeViewControllerNotification:(id)arg0;
- (void)setupBind;
- (BOOL)clicked;
- (BOOL)isInSlidingViewController;
- (id)searchHistoryViewController;
- (id)emptyGuideView;
- (void)setupTableViewInfinite;
- (id)guideContentView;
- (void)updateGuideLabel;
- (void)popGameAnchorToast:(long long)arg0;
- (id)sectionTypeToTimorParams:(long long)arg0 cellModel:(id)arg1;
- (void)pushRecentAddPage;
- (void)searchCancelButtonTapped:(id)arg0;
- (void)anchorRecentAddDeleteDataSource:(id)arg0;
- (void)setSearchHistoryViewController:(id)arg0;
- (void)setGuideContentView:(id)arg0;
- (void)setEmptyGuideView:(id)arg0;
- (id)searchBar;
- (id)init;
- (id)tableView:(id)arg0 viewForHeaderInSection:(long long)arg1;
- (void)searchBarCancelButtonClicked:(id)arg0;
- (void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)searchBarTextDidBeginEditing:(id)arg0;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (void)setSearchBar:(id)arg0;
- (long long)anchorType;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (double)tableView:(id)arg0 heightForHeaderInSection:(long long)arg1;
- (void)setTableView:(id)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (void)setTabBar:(id)arg0;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (id)tabBar;
- (void)fetchData;
- (long long)preferredStatusBarStyle;
- (void)setViewModel:(id)arg0;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (id)viewModel;
- (void)didSelectRowAtIndexPath:(id)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)searchBarSearchButtonClicked:(id)arg0;
- (double)tableView:(id)arg0 heightForFooterInSection:(long long)arg1;
- (id)tableView:(id)arg0 viewForFooterInSection:(long long)arg1;
- (void)setupUI;
- (id)emptyView;
- (void)setEmptyView:(id)arg0;
- (void)setAnchorType:(long long)arg0;

@end