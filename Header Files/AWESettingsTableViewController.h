//
//     Generated by private class-dump
//

@class UIViewController, NSString, AWESettingBaseViewModel, UILabel, DUXSearchBar, UIView;
@protocol AFDSettingSearchViewControllerProtocol;

@interface AWESettingsTableViewController : AWESettingBaseViewController <AWEUserMessage, AWEUserLoginMessage, AWERouterViewControllerProtocol> {
    AWESettingBaseViewModel *_viewModel;
    UIView *_topGapView;
    UILabel *_versionLabel;
    UIView *_userInfoView;
    long long _nextHighlightType;
    UIView *_searchBgView;
    DUXSearchBar *_searchBar;
    UIViewController<AFDSettingSearchViewControllerProtocol> *_searchVC;
}

@property (retain, nonatomic) UIView *topGapView;
@property (retain, nonatomic) UILabel *versionLabel;
@property (retain, nonatomic) UIView *userInfoView;
@property (nonatomic) long long nextHighlightType;
@property (retain, nonatomic) UIView *searchBgView;
@property (retain, nonatomic) DUXSearchBar *searchBar;
@property (retain, nonatomic) UIViewController<AFDSettingSearchViewControllerProtocol> *searchVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLogin;
- (void)didFinishLogout;
- (void)didFinishUpdateAwemeUser;
- (BOOL)configWithRouterParamDict:(id)arg0;
- (void)backBtnClick:(id)arg0;
- (void)addNoti;
- (void)setStatusBarBackgroundColor:(id)arg0;
- (void)setUserInfoView:(id)arg0;
- (id)versionLabel;
- (void)setVersionLabel:(id)arg0;
- (void)p_search:(id)arg0;
- (void)p_resetSearchVC;
- (id)searchVC;
- (void)setSearchVC:(id)arg0;
- (void)showUserInfo;
- (void)updateSettingsCell;
- (id)getCurrentVersionStr;
- (void)uidLabelTapped:(id)arg0;
- (void)didLabelTapped:(id)arg0;
- (void)_popSettingsViewController;
- (void)setTopGapView:(id)arg0;
- (id)topGapView;
- (void)setNextHighlightType:(long long)arg0;
- (long long)nextHighlightType;
- (void)updateTableViewAfterSetTeenMode;
- (BOOL)needUpdateSectionData;
- (id)searchBgView;
- (void)p_exitSearch;
- (void)p_enterSearch;
- (void)setupSearchVC;
- (void)setSearchBgView:(id)arg0;
- (id)searchBar;
- (void)setSearchBar:(id)arg0;
- (BOOL)isSearching;
- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)setup;
- (void)scrollViewDidScroll:(id)arg0;
- (id)viewModel;
- (void)viewWillAppear:(BOOL)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setupSearchBar;
- (id)versionString:(id)arg0;
- (unsigned long long)footerMargin;
- (id)userInfoView;

@end
