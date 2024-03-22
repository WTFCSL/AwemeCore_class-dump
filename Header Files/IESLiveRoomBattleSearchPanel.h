//
//     Generated by private class-dump
//

@class UITableView, NSString, IESLiveInteractiveSearchTextField, IESLiveRoomBattleSearchViewModel, UIButton;
@protocol IESLiveCompoundSubscription;

@interface IESLiveRoomBattleSearchPanel : IESLiveInteractionPopupViewController <UITextFieldDelegate, UITableViewDelegate, UITableViewDataSource, IESLiveRefreshDelegate> {
    IESLiveInteractiveSearchTextField *_textField;
    UIButton *_cancelButton;
    UITableView *_tableView;
    IESLiveRoomBattleSearchViewModel *_viewModel;
    id<IESLiveCompoundSubscription> _disposable;
    NSString *_requestPage;
}

@property (retain, nonatomic) IESLiveInteractiveSearchTextField *textField;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) IESLiveRoomBattleSearchViewModel *viewModel;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;
@property (copy, nonatomic) NSString *requestPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupAction;
- (void)setDisposable:(id)arg0;
- (id)disposable;
- (id)requestPage;
- (void)setRequestPage:(id)arg0;
- (void)scrollView:(id)arg0 willBeginRefreshWithRefreshType:(unsigned long long)arg1;
- (id)scrollView:(id)arg0 viewForRefreshWithRefreshType:(unsigned long long)arg1 refreshState:(unsigned long long)arg2;
- (double)scrollView:(id)arg0 heightForRefreshViewWithRefreshType:(unsigned long long)arg1 refreshState:(unsigned long long)arg2;
- (void)clickCancelButton;
- (void)onSetupNavBar:(id)arg0;
- (id)initWithRequestPage:(id)arg0 DIContext:(id)arg1;
- (void)startSearch:(id)arg0 isLoadMore:(BOOL)arg1;
- (void)setTextField:(id)arg0;
- (void)setCancelButton:(id)arg0;
- (void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (id)textField;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (id)cancelButton;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (void)setViewModel:(id)arg0;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (id)viewModel;
- (void)viewDidLoad;
- (BOOL)textFieldShouldReturn:(id)arg0;
- (void)setupUI;
- (void)textFieldDidChange:(id)arg0;

@end