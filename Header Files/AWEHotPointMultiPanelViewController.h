//
//     Generated by private class-dump
//

@class UIView, AWEHotSearchBoardTabModel, NSArray, NSString, UIImageView, AWEHotPointPanelSingleTabTableViewController, AWESlidingTabbarView, NSMutableArray, NSMutableDictionary, AWESlidingViewController;

@interface AWEHotPointMultiPanelViewController : AWEHotPointPanelBaseViewController <AWESlidingViewControllerDelegate, AWEHotPointSingleTabVCDelegate> {
    BOOL _shouldShowHotWordsRecommend;
    BOOL _isRecommendViewShowing;
    BOOL _hideEveryPanelAfterFetch;
    NSArray *_tabArray;
    UIImageView *_titleImageView;
    UIView *_blankAccessView;
    AWESlidingTabbarView *_slidingTabBar;
    AWESlidingViewController *_slidingViewController;
    NSMutableArray *_childViewControllers;
    long long _selectedIndex;
    AWEHotSearchBoardTabModel *_initialTabModel;
    AWEHotPointPanelSingleTabTableViewController *_initialChildVC;
    NSArray *_filterTabsArray;
    NSString *_currentSelectedAuthorSubType;
    NSMutableDictionary *_backupTrackBoardChangeParams;
}

@property (retain, nonatomic) UIImageView *titleImageView;
@property (retain, nonatomic) UIView *blankAccessView;
@property (retain, nonatomic) AWESlidingTabbarView *slidingTabBar;
@property (retain, nonatomic) AWESlidingViewController *slidingViewController;
@property (retain, nonatomic) NSMutableArray *childViewControllers;
@property (nonatomic) long long selectedIndex;
@property (retain, nonatomic) AWEHotSearchBoardTabModel *initialTabModel;
@property (retain, nonatomic) AWEHotPointPanelSingleTabTableViewController *initialChildVC;
@property (copy, nonatomic) NSArray *filterTabsArray;
@property (nonatomic) BOOL isRecommendViewShowing;
@property (copy, nonatomic) NSString *currentSelectedAuthorSubType;
@property (retain, nonatomic) NSMutableDictionary *backupTrackBoardChangeParams;
@property (nonatomic) BOOL hideEveryPanelAfterFetch;
@property (copy, nonatomic) NSArray *tabArray;
@property (nonatomic) BOOL shouldShowHotWordsRecommend;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)panelViewController;
- (void)showView;
- (id)slidingViewController;
- (long long)numberOfControllers:(id)arg0;
- (id)slidingViewController:(id)arg0 viewControllerAtIndex:(long long)arg1;
- (void)slidingViewController:(id)arg0 didSelectIndex:(long long)arg1;
- (void)slidingViewController:(id)arg0 didFinishTransitionFromPreviousIndex:(long long)arg1 currentIndex:(long long)arg2 transitionType:(long long)arg3;
- (void)setSlidingViewController:(id)arg0;
- (id)tabArray;
- (void)setTabArray:(id)arg0;
- (id)initialTabModel;
- (id)initWithInitialTab:(id)arg0;
- (id)currentTabManager;
- (id)currentTabRecommendManager;
- (void)changeCurrentTabToNationIfNeeded;
- (BOOL)changeToNationTabAndFetchDataWithCompletion:(id /* block */)arg0;
- (void)updatePanelLayoutWithCurrentModel:(id)arg0 paramsModel:(id)arg1;
- (void)updatePanelLayoutWithCurrentModel:(id)arg0;
- (void)refreshWithData:(id)arg0 risingHotSpotList:(id)arg1 paramsModel:(id)arg2 otherParams:(id)arg3;
- (BOOL)shouldShowHotWordsRecommend;
- (long long)currentWordTabIndex;
- (void)handleJSBroadcast:(id)arg0;
- (id)blankAccessView;
- (id)slidingTabBar;
- (void)showRecommendView;
- (long long)nationTab;
- (void)setIsRecommendViewShowing:(BOOL)arg0;
- (void)hideRecommendView;
- (void)updateSelectedWordInTabs:(id)arg0 paramsModel:(id)arg1;
- (void)updateRecommendView:(id)arg0;
- (void)setShouldShowHotWordsRecommend:(BOOL)arg0;
- (BOOL)hideEveryPanelAfterFetch;
- (id)initialChildVC;
- (void)setFilterTabsArray:(id)arg0;
- (void)setChildViewControllers:(id)arg0;
- (id)currentTabVCShownOnScreen;
- (void)updateUI:(id)arg0 otherParams:(id)arg1;
- (void)setHideEveryPanelAfterFetch:(BOOL)arg0;
- (id)filterTabsArray;
- (id)currentSelectedAuthorSubType;
- (void)setBackupTrackBoardChangeParams:(id)arg0;
- (id)backupTrackBoardChangeParams;
- (BOOL)isRecommendViewShowing;
- (void)setCurrentSelectedAuthorSubType:(id)arg0;
- (void)singleTabSelected:(long long)arg0 hotSearchModel:(id)arg1;
- (void)doSpecificUIConfig;
- (void)updateSelectedWordInTabs:(id)arg0;
- (id)currentPanelScrollView;
- (void)hideMultiPanelIfNeeded;
- (void)setBlankAccessView:(id)arg0;
- (void)setSlidingTabBar:(id)arg0;
- (void)setInitialTabModel:(id)arg0;
- (void)setInitialChildVC:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setSelectedIndex:(long long)arg0;
- (BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
- (id)titleImageView;
- (void)viewDidLoad;
- (long long)selectedIndex;
- (id)childViewControllers;
- (void)setTitleImageView:(id)arg0;

@end
