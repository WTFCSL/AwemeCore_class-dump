//
//     Generated by private class-dump
//

@class AWEInviteRecommendSearchTableViewCell, AWEInviteSearchViewController, UIView, NSString, AWEListDataController, UIImageView, AWEAnimatedButton, UITableView, NSObject, NSMutableArray, UILabel;
@protocol AWEUserRecommendTableViewManagerProtocol, AWERecommendUserDataControllerProtocol;

@interface AWEInviteRecommendViewController : UIViewController <CAAnimationDelegate, AWEFindFriendsSearchDelegate, AWERouterViewControllerProtocol, UITableViewDataSource, UITableViewDelegate, AWEUserRecommendTableViewManagerDataSource, AWEInviteRecommendViewControllerProtocol> {
    BOOL isRecommendCombine;
    BOOL _isHalfScreen;
    NSString *enterFrom;
    NSString *previousPage;
    NSString *fromRequestID;
    AWEListDataController<AWERecommendUserDataControllerProtocol> *recommendController;
    UITableView *_tableView;
    UIView *_searchPlaceHolderView;
    AWEAnimatedButton *_searchPlaceHolderContainerView;
    UIImageView *_searchIconImageView;
    UILabel *_searchPlaceHolderLabel;
    AWEInviteSearchViewController *_searchVC;
    AWEInviteRecommendSearchTableViewCell *_searchCell;
    NSObject<AWEUserRecommendTableViewManagerProtocol> *_recommendTableViewManager;
    NSMutableArray *_dataSource;
    unsigned long long _inviteType;
    long long _recommendType;
    NSString *_userID;
    NSString *_pushUserID;
    NSString *_searchText;
}

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIView *searchPlaceHolderView;
@property (retain, nonatomic) AWEAnimatedButton *searchPlaceHolderContainerView;
@property (retain, nonatomic) UIImageView *searchIconImageView;
@property (retain, nonatomic) UILabel *searchPlaceHolderLabel;
@property (retain, nonatomic) AWEInviteSearchViewController *searchVC;
@property (retain, nonatomic) AWEInviteRecommendSearchTableViewCell *searchCell;
@property (retain, nonatomic) NSObject<AWEUserRecommendTableViewManagerProtocol> *recommendTableViewManager;
@property (retain, nonatomic) NSMutableArray *dataSource;
@property (nonatomic) unsigned long long inviteType;
@property (nonatomic) long long recommendType;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *pushUserID;
@property (copy, nonatomic) NSString *searchText;
@property (retain, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSString *previousPage;
@property (nonatomic) BOOL isHalfScreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isRecommendCombine;
@property (copy, nonatomic) NSString *fromRequestID;
@property (retain, nonatomic) AWEListDataController<AWERecommendUserDataControllerProtocol> *recommendController;

- (id)aweui_emptyPageConfigForState:(unsigned long long)arg0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (void)setEnterFrom:(id)arg0;
- (BOOL)configWithRouterParamDict:(id)arg0;
- (id)enterFrom;
- (long long)recommendType;
- (void)setRecommendType:(long long)arg0;
- (void)backBtnClicked:(id)arg0;
- (id)recommendSectionProvider;
- (void)recommendSectionDidBecomeEmpty;
- (void)recommendSectionDidBecomeNonEmpty;
- (void)setFromRequestID:(id)arg0;
- (void)setIsRecommendCombine:(BOOL)arg0;
- (id)fromRequestID;
- (BOOL)isHalfScreen;
- (void)setIsHalfScreen:(BOOL)arg0;
- (id)recommendTableViewManager;
- (void)showSearchPlaceHolderView;
- (void)hideSearchPlaceHolderView;
- (void)setRecommendTableViewManager:(id)arg0;
- (id)searchVC;
- (void)setSearchVC:(id)arg0;
- (void)searchUser;
- (unsigned long long)inviteType;
- (void)setInviteType:(unsigned long long)arg0;
- (id)cellModelForRowAtIndexPath:(id)arg0;
- (id)searchPlaceHolderView;
- (void)p_setUpPlachHolderViewWithSearchText:(id)arg0;
- (void)p_searchUser;
- (void)p_showSearchPlaceHolderView;
- (id)searchPlaceHolderContainerView;
- (id)searchPlaceHolderLabel;
- (void)searchTextDidChanged:(id)arg0;
- (void)setSearchPlaceHolderView:(id)arg0;
- (void)setSearchPlaceHolderContainerView:(id)arg0;
- (void)setSearchPlaceHolderLabel:(id)arg0;
- (void)setPushUserID:(id)arg0;
- (BOOL)isRecommendCombine;
- (void)handleScanTapped;
- (id)recommendController;
- (void)setRecommendController:(id)arg0;
- (id)initWithInviteType:(unsigned long long)arg0 recommendType:(long long)arg1 userID:(id)arg2 enterFrom:(id)arg3 previousPage:(id)arg4;
- (id)pushUserID;
- (id)userID;
- (void)setDataSource:(id)arg0;
- (id)tableView:(id)arg0 viewForHeaderInSection:(long long)arg1;
- (id)dataSource;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (id)searchText;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (double)tableView:(id)arg0 heightForHeaderInSection:(long long)arg1;
- (void)setSearchText:(id)arg0;
- (void)setTableView:(id)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (void)setUserID:(id)arg0;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)viewDidDisappear:(BOOL)arg0;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (void)animationDidStop:(id)arg0 finished:(BOOL)arg1;
- (void)configureDataSource;
- (void)viewWillAppear:(BOOL)arg0;
- (void)viewDidLoad;
- (double)tableView:(id)arg0 heightForFooterInSection:(long long)arg1;
- (id)tableView:(id)arg0 viewForFooterInSection:(long long)arg1;
- (id)previousPage;
- (void)setPreviousPage:(id)arg0;
- (id)searchIconImageView;
- (void)setSearchIconImageView:(id)arg0;
- (void)setupUI;
- (id)searchCell;
- (void)setSearchCell:(id)arg0;
- (void)refreshData;
- (void)setupNavigationBar;

@end
