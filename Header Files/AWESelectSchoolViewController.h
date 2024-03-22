//
//     Generated by private class-dump
//

@class UIView, AWESchoolNearestDataController, AWESchoolSearchDataController, NSString, UIButton, AWESchoolListDataController, UITextField, UITableView;

@interface AWESelectSchoolViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, AWECommonSearchBarDelegate, AFDSelectSchoolViewControllerProtocol> {
    BOOL _isFromNearby;
    BOOL _isFromSchoolStory;
    BOOL _isShowingSearch;
    BOOL _isBecomeActiveFromLocationPermission;
    id /* block */ _selectSchoolBlock;
    UITableView *_tableView;
    UITableView *_searchTableView;
    UIView *_loadingView;
    UIButton *_notFoundBtn;
    AWESchoolListDataController *_schoolListDataController;
    AWESchoolSearchDataController *_schoolSearchDataController;
    AWESchoolNearestDataController *_schoolNearestDataController;
}

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UITableView *searchTableView;
@property (retain, nonatomic) UIView *loadingView;
@property (readonly, nonatomic) UITextField *searchBarTextField;
@property (retain, nonatomic) UIButton *notFoundBtn;
@property (retain, nonatomic) AWESchoolListDataController *schoolListDataController;
@property (retain, nonatomic) AWESchoolSearchDataController *schoolSearchDataController;
@property (retain, nonatomic) AWESchoolNearestDataController *schoolNearestDataController;
@property (nonatomic) BOOL isShowingSearch;
@property (nonatomic) BOOL isBecomeActiveFromLocationPermission;
@property (copy, nonatomic) id /* block */ selectSchoolBlock;
@property (nonatomic) BOOL isFromNearby;
@property (nonatomic) BOOL isFromSchoolStory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweui_emptyPageConfigForState:(unsigned long long)arg0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)arg0;
- (id)p_rotationAnimation;
- (void)getClosestSchool:(id /* block */)arg0;
- (id)schoolListDataController;
- (id)schoolSearchDataController;
- (id)schoolNearestDataController;
- (void)backButtonClicked;
- (void)p_setupUI;
- (void)p_showLoadingView;
- (void)_onApplicationDidBecomeActiveNotification:(id)arg0;
- (void)p_loadMoreData;
- (void)p_refreshData:(id)arg0;
- (void)setIsFromSchoolStory:(BOOL)arg0;
- (void)setSelectSchoolBlock:(id /* block */)arg0;
- (id)searchTableView;
- (void)setSearchTableView:(id)arg0;
- (void)setSchoolListDataController:(id)arg0;
- (void)setSchoolSearchDataController:(id)arg0;
- (void)setSchoolNearestDataController:(id)arg0;
- (void)setIsBecomeActiveFromLocationPermission:(BOOL)arg0;
- (BOOL)isBecomeActiveFromLocationPermission;
- (void)setIsShowingSearch:(BOOL)arg0;
- (void)p_loadMoreDataForSearch;
- (void)p_createSearchRequest;
- (void)p_refreshDataForSearch;
- (void)p_hideLoadingView;
- (BOOL)isFromNearby;
- (void)setIsFromNearby:(BOOL)arg0;
- (void)p_setNavigationHeader;
- (void)notFoundBtnClicked;
- (void)setNotFoundBtn:(id)arg0;
- (id)notFoundBtn;
- (void)p_configTableView:(id)arg0;
- (void)p_requestSchoolList;
- (BOOL)isFromSchoolStory;
- (void)p_goToNotFoundPage;
- (void)p_getNearSchoolWithCompletion:(id /* block */)arg0;
- (void)p_showSearchTableView;
- (void)p_showTableView;
- (id /* block */)selectSchoolBlock;
- (BOOL)p_hasLocationPermission;
- (void)p_didSelectClearSchool;
- (BOOL)textFieldShouldClear:(id)arg0;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (void)searchBar:(id)arg0 textDidChange:(id)arg1;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (BOOL)isShowingSearch;
- (void)viewDidLoad;
- (BOOL)textFieldShouldReturn:(id)arg0;
- (id)searchBarTextField;
- (double)tableView:(id)arg0 heightForFooterInSection:(long long)arg1;
- (id)tableView:(id)arg0 viewForFooterInSection:(long long)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;

@end
