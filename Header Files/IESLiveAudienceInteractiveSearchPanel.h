//
//     Generated by private class-dump
//

@class UIView, NSString, NSArray, IESLiveAudienceInteractiveSearchPanelViewModel, UIImageView, UIButton, UITableView, UITextField;
@protocol IESLiveAudienceInteractiveRootPanelUserService;

@interface IESLiveAudienceInteractiveSearchPanel : IESLiveInteractionPopupViewController <UITextFieldDelegate, UITableViewDelegate, UITableViewDataSource> {
    BOOL _isRoot;
    UIView *_searchBg;
    UITextField *_searchTextField;
    UIImageView *_searchIcon;
    UIButton *_cancelButton;
    UIButton *_clearButton;
    UITableView *_searchTableView;
    NSArray *_historyUsers;
    IESLiveAudienceInteractiveSearchPanelViewModel *_viewModel;
    id<IESLiveAudienceInteractiveRootPanelUserService> _userService;
}

@property (retain, nonatomic) UIView *searchBg;
@property (retain, nonatomic) UITextField *searchTextField;
@property (retain, nonatomic) UIImageView *searchIcon;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *clearButton;
@property (retain, nonatomic) UITableView *searchTableView;
@property (copy, nonatomic) NSArray *historyUsers;
@property (retain, nonatomic) IESLiveAudienceInteractiveSearchPanelViewModel *viewModel;
@property (weak, nonatomic) id<IESLiveAudienceInteractiveRootPanelUserService> userService;
@property (nonatomic) BOOL isRoot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)setupConstraint;
- (id)searchIcon;
- (void)setSearchIcon:(id)arg0;
- (id)searchTableView;
- (void)setSearchTableView:(id)arg0;
- (id)userService;
- (void)setUserService:(id)arg0;
- (void)onSetupNavBar:(id)arg0;
- (id)initWithDelegate:(id)arg0 rootPanel:(id)arg1 userService:(id)arg2 eventContext:(id)arg3 requestPage:(id)arg4;
- (id)searchBg;
- (void)setHistoryUsers:(id)arg0;
- (id)historyUsers;
- (id)getUserForRestore:(id)arg0;
- (double)calcContentHeight;
- (void)setSearchBg:(id)arg0;
- (void)textFieldDidStartEditing:(id)arg0;
- (void)pressCancelButton;
- (void)pressClearButton;
- (void)dismissNavBarItem;
- (void)setCancelButton:(id)arg0;
- (id)tableView:(id)arg0 viewForHeaderInSection:(long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (double)tableView:(id)arg0 heightForHeaderInSection:(long long)arg1;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)cancelButton;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (id)searchTextField;
- (void)setSearchTextField:(id)arg0;
- (BOOL)isRoot;
- (void)setViewModel:(id)arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (id)viewModel;
- (BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 replacementString:(id)arg2;
- (id)clearButton;
- (void)viewDidLoad;
- (BOOL)textFieldShouldReturn:(id)arg0;
- (void)setIsRoot:(BOOL)arg0;
- (double)tableView:(id)arg0 heightForFooterInSection:(long long)arg1;
- (id)tableView:(id)arg0 viewForFooterInSection:(long long)arg1;
- (void)setupTableView;
- (void)textFieldDidChange:(id)arg0;
- (void)setupViews;
- (void)setClearButton:(id)arg0;

@end