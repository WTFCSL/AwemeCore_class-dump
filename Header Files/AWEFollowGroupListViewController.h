//
//     Generated by private class-dump
//

@class AWEFollowGroupSystemViewController, AWESlidingViewController, AWEFollowGroupMineViewController, AWESlidingTabbarView, NSString, NSMutableArray;

@interface AWEFollowGroupListViewController : UIViewController <AWESlidingViewControllerDelegate, AWERouterViewControllerProtocol> {
    long long _currentSelectedType;
    long long _currentSelectedIndex;
    AWESlidingTabbarView *_tabView;
    AWESlidingViewController *_slidingVC;
    AWEFollowGroupMineViewController *_mineGroupVC;
    AWEFollowGroupSystemViewController *_systemGroupVC;
    NSMutableArray *_tabArray;
    NSMutableArray *_titlesArray;
}

@property (nonatomic) long long currentSelectedType;
@property (nonatomic) long long currentSelectedIndex;
@property (retain, nonatomic) AWESlidingTabbarView *tabView;
@property (retain, nonatomic) AWESlidingViewController *slidingVC;
@property (retain, nonatomic) AWEFollowGroupMineViewController *mineGroupVC;
@property (retain, nonatomic) AWEFollowGroupSystemViewController *systemGroupVC;
@property (retain, nonatomic) NSMutableArray *tabArray;
@property (retain, nonatomic) NSMutableArray *titlesArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)arg0;
- (void)backBtnClicked;
- (void)setTabView:(id)arg0;
- (id)titlesArray;
- (void)setTitlesArray:(id)arg0;
- (long long)numberOfControllers:(id)arg0;
- (id)slidingViewController:(id)arg0 viewControllerAtIndex:(long long)arg1;
- (void)slidingViewController:(id)arg0 didSelectIndex:(long long)arg1 transitionType:(long long)arg2;
- (long long)currentSelectedIndex;
- (void)configNavigationBar;
- (void)configureSlidingViewController;
- (void)constructTabData;
- (id)slidingVC;
- (void)setCurrentSelectedType:(long long)arg0;
- (id)tabArray;
- (long long)currentSelectedType;
- (void)setCurrentSelectedIndex:(long long)arg0;
- (void)setTabArray:(id)arg0;
- (id)titleWithType:(long long)arg0;
- (id)mineGroupVC;
- (id)systemGroupVC;
- (void)setSlidingVC:(id)arg0;
- (void)setMineGroupVC:(id)arg0;
- (void)setSystemGroupVC:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewDidLoad;
- (id)tabView;

@end
