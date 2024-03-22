//
//     Generated by private class-dump
//

@class AWEAccountManageViewModel, NSString;

@interface AWEAccountManageTableViewController : AWESettingBaseViewController <AWEUserMessage, AWERouterViewControllerProtocol> {
    AWEAccountManageViewModel *_viewModel;
}

@property (readonly, nonatomic) AWEAccountManageViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishBindPhone;
- (void)didFinishSetPassword;
- (void)didFinishUpdateAwemeUser;
- (BOOL)configWithRouterParamDict:(id)arg0;
- (id)vcTitle;
- (void)refreshTableView;
- (void)registDidBecomeActiveObserve;
- (void).cxx_destruct;
- (id)viewModel;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setupView;

@end