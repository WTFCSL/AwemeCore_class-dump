//
//     Generated by private class-dump
//

@class AWETeenModeSettingsViewModel, NSString, UILabel, UIView, UITableView;

@interface AWETeenModeSettingsTableViewController : UIViewController <AWEUserMessage, AWERouterViewControllerProtocol, AWETeenModeSettingViewModelDelegate, UITableViewDataSource, UITableViewDelegate> {
    UITableView *_tableView;
    AWETeenModeSettingsViewModel *_viewModel;
    long long _colorStyle;
    UILabel *_versionLabel;
    UIView *_userInfoView;
}

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWETeenModeSettingsViewModel *viewModel;
@property (retain, nonatomic) UILabel *versionLabel;
@property (retain, nonatomic) UIView *userInfoView;
@property (nonatomic) long long colorStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWETeenModeSettingsViewModelDOUYINHTSAdapterClass;

- (void)didFinishLogin;
- (void)didFinishLogout;
- (BOOL)configWithRouterParamDict:(id)arg0;
- (void)backBtnClick:(id)arg0;
- (void)addNoti;
- (void)setUserInfoView:(id)arg0;
- (id)versionLabel;
- (void)setVersionLabel:(id)arg0;
- (void)setupCacheCleanCell;
- (void)showUserInfo;
- (void)_calculateCacheSizeWithCompletion:(id /* block */)arg0;
- (void)updateSettingsCell;
- (id)getCurrentVersionStr;
- (id)aAWETeenModeSettingsViewModelDOUYINHTSAdapter;
- (void)uidLabelTapped:(id)arg0;
- (void)didLabelTapped:(id)arg0;
- (void)_popSettingsViewController;
- (void)awe_setLoadingView:(id)arg0;
- (id)awe_loadingView;
- (void)showLoadingViewWithTitle:(id)arg0;
- (id)init;
- (id)tableView:(id)arg0 viewForHeaderInSection:(long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (double)tableView:(id)arg0 heightForHeaderInSection:(long long)arg1;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)dealloc;
- (void)viewDidLoad;
- (double)tableView:(id)arg0 heightForFooterInSection:(long long)arg1;
- (id)tableView:(id)arg0 viewForFooterInSection:(long long)arg1;
- (void)setupUI;
- (long long)colorStyle;
- (void)setColorStyle:(long long)arg0;
- (id)versionString:(id)arg0;
- (void)hideLoadingView;
- (id)userInfoView;

@end
