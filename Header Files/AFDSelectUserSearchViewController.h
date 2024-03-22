//
//     Generated by private class-dump
//

@class AFDSelectUserViewModel, NSMutableArray, NSString, AFDSugSearchManager, UIView, AWEUILoadingView, UITableView;

@interface AFDSelectUserSearchViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {
    id /* block */ _selectedHandler;
    UITableView *_tableView;
    UIView *_contentView;
    AWEUILoadingView *_loadingView;
    AFDSelectUserViewModel *_viewModel;
    AFDSugSearchManager *_sugSearchManager;
    NSMutableArray *_searchResults;
}

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) AFDSelectUserViewModel *viewModel;
@property (retain, nonatomic) AFDSugSearchManager *sugSearchManager;
@property (retain, nonatomic) NSMutableArray *searchResults;
@property (copy, nonatomic) id /* block */ selectedHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweui_emptyPageConfigForState:(unsigned long long)arg0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (void)p_setupUI;
- (void)p_fetchData;
- (void)p_loadMoreData;
- (id)sugSearchManager;
- (void)addDataSourceWithDataList:(id)arg0;
- (void)endRefreshingWithError:(id)arg0 dataList:(id)arg1;
- (void)fetchSearchSugWithCompletion:(id /* block */)arg0;
- (id /* block */)selectedHandler;
- (void)setSelectedHandler:(id /* block */)arg0;
- (void)setSugSearchManager:(id)arg0;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (void)setSearchResults:(id)arg0;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (id)initWithViewModel:(id)arg0;
- (void)setViewModel:(id)arg0;
- (id)contentView;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (id)viewModel;
- (id)searchResults;
- (void)reset;
- (void)viewDidLoad;
- (void)setContentView:(id)arg0;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (void)beginSearch;

@end
