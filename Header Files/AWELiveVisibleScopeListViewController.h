//
//     Generated by private class-dump
//

@class UIView, NSString, NSArray, AWELiveVisibleScopeTabListViewController, AWELiveVisibleScopeSearchViewController, UIButton, AWEVisibleScopeManager, UICollectionView, UILabel, AWELiveVisibleScopeSearchView;

@interface AWELiveVisibleScopeListViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, AWELiveVisibleScopeSearchViewDelegate, UITextFieldDelegate> {
    BOOL _iesliveNewVisibleContainer;
    id /* block */ _selectUserListBlock;
    id /* block */ _selectUserListCallback;
    id /* block */ _cancelUserListBlock;
    NSString *_awemeID;
    NSArray *_tabArray;
    AWEVisibleScopeManager *_manager;
    NSString *_keyword;
    unsigned long long _curVisibleType;
    unsigned long long _selectedTabType;
    UIButton *_backButton;
    UILabel *_titleLabel;
    UILabel *_limitTipLabel;
    AWELiveVisibleScopeSearchView *_searchView;
    AWELiveVisibleScopeSearchViewController *_searchVC;
    UICollectionView *_tabCollectionView;
    UIButton *_completeButton;
    UIView *_listView;
    AWELiveVisibleScopeTabListViewController *_allListVC;
    AWELiveVisibleScopeTabListViewController *_friendsVC;
    AWELiveVisibleScopeTabListViewController *_fansVC;
    AWELiveVisibleScopeTabListViewController *_followingVC;
}

@property (retain, nonatomic) NSString *awemeID;
@property (retain, nonatomic) NSArray *tabArray;
@property (retain, nonatomic) AWEVisibleScopeManager *manager;
@property (copy, nonatomic) NSString *keyword;
@property (nonatomic) unsigned long long curVisibleType;
@property (nonatomic) unsigned long long selectedTabType;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *limitTipLabel;
@property (retain, nonatomic) AWELiveVisibleScopeSearchView *searchView;
@property (retain, nonatomic) AWELiveVisibleScopeSearchViewController *searchVC;
@property (retain, nonatomic) UICollectionView *tabCollectionView;
@property (retain, nonatomic) UIButton *completeButton;
@property (retain, nonatomic) UIView *listView;
@property (retain, nonatomic) AWELiveVisibleScopeTabListViewController *allListVC;
@property (retain, nonatomic) AWELiveVisibleScopeTabListViewController *friendsVC;
@property (retain, nonatomic) AWELiveVisibleScopeTabListViewController *fansVC;
@property (retain, nonatomic) AWELiveVisibleScopeTabListViewController *followingVC;
@property (nonatomic) BOOL iesliveNewVisibleContainer;
@property (copy, nonatomic) id /* block */ selectUserListBlock;
@property (copy, nonatomic) id /* block */ selectUserListCallback;
@property (copy, nonatomic) id /* block */ cancelUserListBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)transImage:(id)arg0;
- (void)setAwemeID:(id)arg0;
- (id)awemeID;
- (id)completeButton;
- (void)setCompleteButton:(id)arg0;
- (id)tabArray;
- (void)setTabArray:(id)arg0;
- (id)followingVC;
- (id)fansVC;
- (void)setFollowingVC:(id)arg0;
- (void)setFansVC:(id)arg0;
- (void)clearSearchView;
- (void)p_search:(id)arg0;
- (void)completeButtonTapped:(id)arg0;
- (void)p_resetSearchVC;
- (id)searchVC;
- (void)setSearchVC:(id)arg0;
- (BOOL)iesliveNewVisibleContainer;
- (id)userIdStringArray:(id)arg0;
- (void)addUploadVisibleSelectMonitor:(id)arg0 type:(unsigned long long)arg1 userList:(id)arg2 updateFailedList:(id)arg3 cancelFailedList:(id)arg4;
- (void)setCurVisibleType:(unsigned long long)arg0;
- (void)selectedListChanged;
- (void)setSelectedTabType:(unsigned long long)arg0;
- (id)limitTipLabel;
- (unsigned long long)selectedTabType;
- (id)currentTabListVC:(unsigned long long)arg0;
- (void)p_selectUser:(id)arg0 needCheckStranger:(BOOL)arg1;
- (id)liveUserFromAwemUser:(id)arg0;
- (id /* block */)cancelUserListBlock;
- (unsigned long long)curVisibleType;
- (id /* block */)selectUserListCallback;
- (id /* block */)selectUserListBlock;
- (void)p_selectAwemeUser:(id)arg0 needCheckStranger:(BOOL)arg1;
- (id)allListVC;
- (id)friendsVC;
- (void)removeSelectObject:(id)arg0;
- (id)initWithType:(unsigned long long)arg0 AwemeID:(id)arg1 trackContext:(id)arg2 originUserList:(id)arg3;
- (void)setSelectUserListBlock:(id /* block */)arg0;
- (void)setSelectUserListCallback:(id /* block */)arg0;
- (void)setCancelUserListBlock:(id /* block */)arg0;
- (void)setLimitTipLabel:(id)arg0;
- (void)setTabCollectionView:(id)arg0;
- (void)setAllListVC:(id)arg0;
- (void)setFriendsVC:(id)arg0;
- (void)setIesliveNewVisibleContainer:(BOOL)arg0;
- (BOOL)textFieldShouldClear:(id)arg0;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (void)setListView:(id)arg0;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (id)listView;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)tabCollectionView;
- (id)titleLabel;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)setManager:(id)arg0;
- (void)viewWillAppear:(BOOL)arg0;
- (void)viewDidLoad;
- (void)setTitleLabel:(id)arg0;
- (BOOL)textFieldShouldReturn:(id)arg0;
- (id)backButton;
- (id)manager;
- (void)setBackButton:(id)arg0;
- (void)setupUI;
- (void)textFieldDidChange:(id)arg0;
- (void)setKeyword:(id)arg0;
- (id)keyword;
- (void)dismissSelf;
- (id)searchView;
- (void)setSearchView:(id)arg0;

@end