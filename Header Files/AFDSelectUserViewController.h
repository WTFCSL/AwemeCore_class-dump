//
//     Generated by private class-dump
//

@class UIView, AWEUILoadingView, NSDate, NSString, AFDModalViewHelper, UITableView, UITextField, AFDSelectUserViewModel, UIButton, UILabel, AFDSelectUserSearchViewController;

@interface AFDSelectUserViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate, AWEPanelTransitionWithBackground> {
    BOOL _hasFetchedCommonData;
    BOOL _hasLoadTopCache;
    BOOL _hasLoadCommonCache;
    NSString *_mainTitle;
    unsigned long long _limit;
    NSString *_limitToastDesc;
    NSString *_searchSource;
    NSString *_searchBusinessID;
    id /* block */ _fetchLastSelectedUsersBlock;
    id /* block */ _loadLastSelectedUsersCacheBlock;
    id /* block */ _filterIllegalDataBlock;
    id /* block */ _selectCompletionBlock;
    AFDModalViewHelper *_helper;
    UIView *_contentView;
    UILabel *_titleLabel;
    UIButton *_completeButton;
    UIView *_lineView;
    UITextField *_searchTextField;
    UITableView *_tableView;
    UIView *_bar;
    AFDSelectUserViewModel *_viewModel;
    AFDSelectUserSearchViewController *_searchVC;
    AWEUILoadingView *_loadingView;
    NSDate *_date;
    NSString *_completeButtonTitle;
}

@property (retain, nonatomic) AFDModalViewHelper *helper;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *completeButton;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UITextField *searchTextField;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIView *bar;
@property (retain, nonatomic) AFDSelectUserViewModel *viewModel;
@property (retain, nonatomic) AFDSelectUserSearchViewController *searchVC;
@property (nonatomic) BOOL hasFetchedCommonData;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) NSDate *date;
@property (copy, nonatomic) NSString *completeButtonTitle;
@property (nonatomic) BOOL hasLoadTopCache;
@property (nonatomic) BOOL hasLoadCommonCache;
@property (copy, nonatomic) NSString *mainTitle;
@property (nonatomic) unsigned long long limit;
@property (copy, nonatomic) NSString *limitToastDesc;
@property (copy, nonatomic) NSString *searchSource;
@property (copy, nonatomic) NSString *searchBusinessID;
@property (copy, nonatomic) id /* block */ fetchLastSelectedUsersBlock;
@property (copy, nonatomic) id /* block */ loadLastSelectedUsersCacheBlock;
@property (copy, nonatomic) id /* block */ filterIllegalDataBlock;
@property (copy, nonatomic) id /* block */ selectCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweui_emptyPageConfigForState:(unsigned long long)arg0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (BOOL)wantsDimmingTransitionBackground;
- (id)aweui_emptyPageBgContainerView;
- (void)dismissLoadingView;
- (void)clearButtonClicked:(id)arg0;
- (void)p_setupUI;
- (id)completeButton;
- (void)setCompleteButton:(id)arg0;
- (void)p_fetchData;
- (void)p_loadMoreData;
- (void)p_search:(id)arg0;
- (id)searchBusinessID;
- (id /* block */)filterIllegalDataBlock;
- (id)limitToastDesc;
- (void)setCompleteButtonTitle:(id)arg0;
- (BOOL)p_enableScrollViewAutoLoadMore;
- (void)p_resetSearchVC;
- (id)searchVC;
- (void)loadTopCache;
- (void)loadCommonCache;
- (id /* block */)fetchLastSelectedUsersBlock;
- (void)showLoadingViewIfNeed;
- (void)p_endRefreshingWithError:(id)arg0;
- (void)p_fetchCommonData;
- (id /* block */)loadLastSelectedUsersCacheBlock;
- (void)setHasLoadTopCache:(BOOL)arg0;
- (void)setHasLoadCommonCache:(BOOL)arg0;
- (BOOL)hasLoadTopCache;
- (BOOL)hasLoadCommonCache;
- (void)p_selectedItemsChanged;
- (void)setHasFetchedCommonData:(BOOL)arg0;
- (BOOL)hasFetchedCommonData;
- (void)p_reloadViewControllerStateWithError:(id)arg0;
- (id /* block */)selectCompletionBlock;
- (void)p_clearSearch;
- (id)completeButtonTitle;
- (void)completeButtonClicked:(id)arg0;
- (void)setFilterIllegalDataBlock:(id /* block */)arg0;
- (void)setLimitToastDesc:(id)arg0;
- (void)setSearchBusinessID:(id)arg0;
- (id)initWithTitle:(id)arg0 completeButtonTitle:(id)arg1;
- (void)setFetchLastSelectedUsersBlock:(id /* block */)arg0;
- (void)setLoadLastSelectedUsersCacheBlock:(id /* block */)arg0;
- (void)setSelectCompletionBlock:(id /* block */)arg0;
- (void)setSearchVC:(id)arg0;
- (id)bar;
- (void)setBar:(id)arg0;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (double)contentHeight;
- (void)setHelper:(id)arg0;
- (void)setDate:(id)arg0;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (id)searchTextField;
- (void)setSearchTextField:(id)arg0;
- (void)show;
- (id)titleLabel;
- (id)helper;
- (void)setViewModel:(id)arg0;
- (id)contentView;
- (id)date;
- (id)initWithTitle:(id)arg0;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (id)viewModel;
- (unsigned long long)limit;
- (void)viewWillAppear:(BOOL)arg0;
- (void)viewDidLoad;
- (void)setTitleLabel:(id)arg0;
- (BOOL)textFieldShouldReturn:(id)arg0;
- (void)setLimit:(unsigned long long)arg0;
- (void)setContentView:(id)arg0;
- (id)lineView;
- (void)setLineView:(id)arg0;
- (id)searchSource;
- (void)setSearchSource:(id)arg0;
- (void)textFieldDidChange:(id)arg0;
- (id)mainTitle;
- (void)setMainTitle:(id)arg0;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;

@end