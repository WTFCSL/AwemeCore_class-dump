//
//     Generated by private class-dump
//

@class NSString, AWESlidingViewController, AWESlidingTabbarView, NSArray;

@interface AWETeenSearchResultViewController : UIViewController <AWESlidingViewControllerDelegate, AWETeenSearchResultDelegate, AWEPadUITrackerProtocol> {
    BOOL _isAppear;
    NSString *_groupId;
    NSString *_enterFrom;
    NSString *_searchPosition;
    long long _searchVideoType;
    NSString *_keyword;
    long long _selectedIndex;
    long long _lastSearchType;
    AWESlidingViewController *_slidingViewController;
    AWESlidingTabbarView *_slidingTabView;
    NSArray *_tabViewTitles;
    NSArray *_tabViewControllers;
    id /* block */ _completeBlock;
}

@property (nonatomic) BOOL isAppear;
@property (copy, nonatomic) NSString *keyword;
@property (nonatomic) long long selectedIndex;
@property (copy, nonatomic) NSString *searchPosition;
@property (nonatomic) long long lastSearchType;
@property (retain, nonatomic) AWESlidingViewController *slidingViewController;
@property (retain, nonatomic) AWESlidingTabbarView *slidingTabView;
@property (copy, nonatomic) NSArray *tabViewTitles;
@property (copy, nonatomic) NSArray *tabViewControllers;
@property (copy, nonatomic) id /* block */ completeBlock;
@property (copy, nonatomic) NSString *groupId;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) long long searchVideoType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *awe_padUITrackerPageEnterFrom;
@property (nonatomic) BOOL awe_padUITrackerIgnoreStayTime;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (void)setHide:(BOOL)arg0;
- (BOOL)isAppear;
- (void)setIsAppear:(BOOL)arg0;
- (void)setCompleteBlock:(id /* block */)arg0;
- (id /* block */)completeBlock;
- (id)awe_padUITrackerPageEnterFrom;
- (id)slidingViewController;
- (long long)numberOfControllers:(id)arg0;
- (id)slidingViewController:(id)arg0 viewControllerAtIndex:(long long)arg1;
- (void)slidingViewController:(id)arg0 didSelectIndex:(long long)arg1 transitionType:(long long)arg2;
- (void)setSlidingViewController:(id)arg0;
- (id)searchPosition;
- (id)slidingTabView;
- (void)setSlidingTabView:(id)arg0;
- (id)tabViewTitles;
- (id)tabViewControllers;
- (void)setTabViewTitles:(id)arg0;
- (void)setTabViewControllers:(id)arg0;
- (void)setSearchVideoType:(long long)arg0;
- (long long)searchVideoType;
- (void)searchResultVC:(id)arg0 didClickViewMore:(unsigned long long)arg1;
- (void)didFinishRefreshData;
- (void)setSearchPosition:(id)arg0;
- (void)p_cancelTeenQualitySearchPageWithMsg:(id)arg0;
- (void)p_startTeenQualitySearch;
- (void)setLastSearchType:(long long)arg0;
- (long long)lastSearchType;
- (id)currentQualitySubScene;
- (id)p_getSearchPosition;
- (void)searchWithKeyword:(id)arg0 type:(long long)arg1 completeBlock:(id /* block */)arg2;
- (void)didMoveToParentViewController:(id)arg0;
- (void).cxx_destruct;
- (void)setGroupId:(id)arg0;
- (void)setSelectedIndex:(long long)arg0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })arg0 withTransitionCoordinator:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg0;
- (id)groupId;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)viewWillAppear:(BOOL)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(void *)arg3;
- (long long)selectedIndex;
- (void)setupUI;
- (void)setKeyword:(id)arg0;
- (id)keyword;
- (void)setupData;

@end
