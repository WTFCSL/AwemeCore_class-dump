//
//     Generated by private class-dump
//

@class IESLiveScreencastLinkerSearchViewModel, IESLiveScreencastLinkerSearchTextField, NSString, UIView, IESLiveEmptyView, UITableView;
@protocol IESLiveSubscription, IESLiveScreencastLinkerSearchAction;

@interface IESLiveScreencastLinkerSearchPanel : IESLiveGameInteractPopupViewController <UITextFieldDelegate, UITableViewDelegate, UITableViewDataSource, IESLiveRefreshDelegate> {
    UITableView *_tableView;
    IESLiveScreencastLinkerSearchTextField *_textField;
    UIView *_loadingView;
    IESLiveEmptyView *_emptyView;
    NSString *_searchPlaceHolder;
    IESLiveScreencastLinkerSearchViewModel *_viewModel;
    id<IESLiveSubscription> _disposable;
    id<IESLiveScreencastLinkerSearchAction> _searchDispatcher;
}

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) IESLiveScreencastLinkerSearchTextField *textField;
@property (retain, nonatomic) UIView *loadingView;
@property (retain, nonatomic) IESLiveEmptyView *emptyView;
@property (copy, nonatomic) NSString *searchPlaceHolder;
@property (retain, nonatomic) IESLiveScreencastLinkerSearchViewModel *viewModel;
@property (retain, nonatomic) id<IESLiveSubscription> disposable;
@property (retain, nonatomic) id<IESLiveScreencastLinkerSearchAction> searchDispatcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDisposable:(id)arg0;
- (id)disposable;
- (void)scrollView:(id)arg0 willBeginRefreshWithRefreshType:(unsigned long long)arg1;
- (id)scrollView:(id)arg0 viewForRefreshWithRefreshType:(unsigned long long)arg1 refreshState:(unsigned long long)arg2;
- (double)scrollView:(id)arg0 heightForRefreshViewWithRefreshType:(unsigned long long)arg1 refreshState:(unsigned long long)arg2;
- (void)onSetupNavBar:(id)arg0;
- (id)searchDispatcher;
- (void)setSearchDispatcher:(id)arg0;
- (void)onReceivedCancelInviteUser:(id)arg0;
- (void)p_startSearch:(id)arg0 isLoadMore:(BOOL)arg1;
- (id)searchPlaceHolder;
- (void)setSearchPlaceHolder:(id)arg0;
- (void)setTextField:(id)arg0;
- (id)tableView:(id)arg0 viewForHeaderInSection:(long long)arg1;
- (id)textField;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (double)tableView:(id)arg0 heightForHeaderInSection:(long long)arg1;
- (void)setTableView:(id)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (void)touchesBegan:(id)arg0 withEvent:(id)arg1;
- (void)setup;
- (void)setViewModel:(id)arg0;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (id)viewModel;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (BOOL)textFieldShouldReturn:(id)arg0;
- (double)tableView:(id)arg0 heightForFooterInSection:(long long)arg1;
- (id)tableView:(id)arg0 viewForFooterInSection:(long long)arg1;
- (void)textFieldDidChange:(id)arg0;
- (id)emptyView;
- (void)setEmptyView:(id)arg0;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (void)cancelAction:(id)arg0;
- (void)layoutUI;

@end