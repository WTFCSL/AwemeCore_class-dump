//
//     Generated by private class-dump
//

@class AWEAwemeModel, NSHashTable, NSObject, AFDNewSchoolStoryContainerContext, NSString, AFDNewSchoolStoryAutoPlayHandler, UITableView, NSMutableArray, UIViewController, AWEModernFeedSectionReusablePool, NSNumber, AWEUILoadingView;
@protocol AFDSchoolStoryContainerDataSource, AWEAwemeDetailTableViewControllerProtocol, AFDNewSchoolStoryContainerProtocol;

@interface AFDNewSchoolStoryFeedViewController : UIViewController <AWEModernFullscreenTransitionOuterContextProvider, AWEZoomTransitionOuterContextProvider, UITableViewDelegate, UITableViewDataSource, AFDNewSchoolStoryAutoPlayContainerProtocol, AWEAwemeDetailTableViewControllerDelegate, AFDNewSchoolStorySubTabContainerProtocol> {
    BOOL _isAppearing;
    BOOL _scrollDetectionEnabled;
    BOOL _hasInitFetched;
    AFDNewSchoolStoryContainerContext *containerContext;
    UITableView *_tableView;
    id /* block */ _loadMoreBlock;
    id /* block */ _applicationWillResignActiveBlock;
    id /* block */ _applicationDidBecomeActiveBlock;
    id /* block */ _recaculateCellHeightBlock;
    id /* block */ _dataTypeTransferBeforeGetRegisteredCell;
    id /* block */ _dataTypeHandleAfterGetRegisteredCell;
    NSHashTable *_optVisibleCellsCache;
    NSMutableArray *_displayItems;
    AFDNewSchoolStoryAutoPlayHandler *_autoPlayHandler;
    AWEModernFeedSectionReusablePool *_sectionReusablePool;
    unsigned long long _scrollDirection;
    AWEUILoadingView *_loadingView;
    double _scrollingSpeed;
    long long _scrollTriggerCount;
    double _lastDidScrollTime;
    double _bottomTriggerThreshold;
    long long _bottomTriggerIndex;
    double _topTriggerThreshold;
    long long _topTriggerIndex;
    double _willShowCellBottomTriggerThreshold;
    double _willShowCellTopTriggerThreshold;
    long long _willShowCellBottomTriggerIndex;
    long long _willShowCellTopTriggerIndex;
    long long _willActiveIndex;
    long long _forceActiveIndex;
    long long _currentActiveIndex;
    double _lastContentOffset;
    struct CGPoint { double x; double y; } _savedFeedContentOffset;
    struct CGPoint { double x; double y; } _originalScrollViewOffset;
}

@property (retain, nonatomic) NSNumber *afd_transitionIndex;
@property (retain, nonatomic) NSNumber *afd_transitionToIndex;
@property (retain, nonatomic) AWEAwemeModel *afd_originModel;
@property (retain, nonatomic) UIViewController<AWEAwemeDetailTableViewControllerProtocol> *afd_detailVC;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSHashTable *optVisibleCellsCache;
@property (retain, nonatomic) NSMutableArray *displayItems;
@property (retain, nonatomic) AFDNewSchoolStoryAutoPlayHandler *autoPlayHandler;
@property (retain, nonatomic) AWEModernFeedSectionReusablePool *sectionReusablePool;
@property (nonatomic) unsigned long long scrollDirection;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (nonatomic) BOOL isAppearing;
@property (nonatomic) double scrollingSpeed;
@property (nonatomic) long long scrollTriggerCount;
@property (nonatomic) double lastDidScrollTime;
@property (nonatomic) double bottomTriggerThreshold;
@property (nonatomic) long long bottomTriggerIndex;
@property (nonatomic) double topTriggerThreshold;
@property (nonatomic) long long topTriggerIndex;
@property (nonatomic) double willShowCellBottomTriggerThreshold;
@property (nonatomic) double willShowCellTopTriggerThreshold;
@property (nonatomic) long long willShowCellBottomTriggerIndex;
@property (nonatomic) long long willShowCellTopTriggerIndex;
@property (nonatomic) long long willActiveIndex;
@property (nonatomic) long long forceActiveIndex;
@property (nonatomic) long long currentActiveIndex;
@property (nonatomic) double lastContentOffset;
@property (nonatomic) struct CGPoint { double x; double y; } savedFeedContentOffset;
@property (nonatomic) struct CGPoint { double x; double y; } originalScrollViewOffset;
@property (nonatomic) BOOL scrollDetectionEnabled;
@property (nonatomic) BOOL hasInitFetched;
@property (readonly, weak, nonatomic) UIViewController<AFDNewSchoolStoryContainerProtocol> *container;
@property (readonly, weak, nonatomic) NSObject<AFDSchoolStoryContainerDataSource> *dataController;
@property (weak, nonatomic) AFDNewSchoolStoryContainerContext *containerContext;
@property (readonly, nonatomic) BOOL isActive;
@property (readonly, copy, nonatomic) NSString *referString;
@property (readonly, copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) id /* block */ loadMoreBlock;
@property (copy, nonatomic) id /* block */ applicationWillResignActiveBlock;
@property (copy, nonatomic) id /* block */ applicationDidBecomeActiveBlock;
@property (copy, nonatomic) id /* block */ recaculateCellHeightBlock;
@property (copy, nonatomic) id /* block */ dataTypeTransferBeforeGetRegisteredCell;
@property (copy, nonatomic) id /* block */ dataTypeHandleAfterGetRegisteredCell;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)referString;
- (id)aweui_emptyPageConfigForState:(unsigned long long)arg0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (id)zoomTransitionStartViewForOffset:(long long)arg0;
- (id)liveTransitionContext;
- (BOOL)zoomTransitionWantsFromVCAnimation;
- (id)targetViewControllerSnapshotView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })targetViewFrame;
- (void)detailTableViewController:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 model:(id)arg3;
- (BOOL)detailTableViewController:(id)arg0 shouldHideSearchEntranceWithModel:(id)arg1;
- (id)enterFrom;
- (BOOL)shouldModernTransitionUpdatePlayerControllerWithFromContext:(id)arg0;
- (void)modernTransitionUpdateOffset:(long long)arg0 isScrolled:(BOOL)arg1;
- (id)modernTransitionContext;
- (BOOL)disableSyncReferString;
- (void)setAutoPlayHandler:(id)arg0;
- (id)feedScrollView;
- (id)autoPlayHandler;
- (void)didDeleteAweme:(id)arg0;
- (void)handleConnectionChanged:(id)arg0;
- (void)windowDidBecomeKeyNotification:(id)arg0;
- (void)windowDidResignKeyNotification:(id)arg0;
- (void)setHasInitFetched:(BOOL)arg0;
- (BOOL)hasInitFetched;
- (double)lastDidScrollTime;
- (void)setLastDidScrollTime:(double)arg0;
- (long long)scrollTriggerCount;
- (void)setScrollTriggerCount:(long long)arg0;
- (void)setOptVisibleCellsCache:(id)arg0;
- (id)optVisibleCellsCache;
- (id)scrollProxy;
- (void)playVideoIfActive;
- (void)setSavedFeedContentOffset:(struct CGPoint { double x0; double x1; })arg0;
- (struct CGPoint { double x0; double x1; })savedFeedContentOffset;
- (void)scrollToDisplayItemAtIndex:(long long)arg0 offset:(double)arg1 animated:(BOOL)arg2;
- (void)setOriginalScrollViewOffset:(struct CGPoint { double x0; double x1; })arg0;
- (struct CGPoint { double x0; double x1; })originalScrollViewOffset;
- (void)insertDisplayObjectsFromArray:(id)arg0 intoIndex:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)updateCellModel:(id)arg0 containerWidth:(double)arg1;
- (void)resetThresholds;
- (long long)awemeIndexInDisplayItems:(long long)arg0;
- (void)addDisplayObjectsFromArray:(id)arg0 completion:(id /* block */)arg1;
- (void)didDeleteAweme:(BOOL)arg0 awemeID:(id)arg1;
- (void)singleTapEnterDetail:(long long)arg0 withExtra:(id)arg1 withPlayer:(id)arg2;
- (void)singleTapEnterDetail:(long long)arg0;
- (id /* block */)applicationDidBecomeActiveBlock;
- (id /* block */)applicationWillResignActiveBlock;
- (id)cellManager;
- (long long)willActiveIndex;
- (BOOL)shouldNotActivateItem;
- (struct CGPoint { double x0; double x1; })centerForCell:(id)arg0;
- (struct CGPoint { double x0; double x1; })contentOffsetForScrollView:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForCell:(id)arg0;
- (long long)bottomTriggerIndex;
- (double)bottomTriggerThreshold;
- (void)setBottomTriggerThreshold:(double)arg0;
- (void)setBottomTriggerIndex:(long long)arg0;
- (void)setTopTriggerIndex:(long long)arg0;
- (void)setTopTriggerThreshold:(double)arg0;
- (void)setWillShowCellBottomTriggerThreshold:(double)arg0;
- (void)setWillShowCellBottomTriggerIndex:(long long)arg0;
- (void)setWillShowCellTopTriggerThreshold:(double)arg0;
- (void)setWillShowCellTopTriggerIndex:(long long)arg0;
- (double)scrollingSpeed;
- (void)trackShowForIndex:(long long)arg0;
- (id /* block */)loadMoreBlock;
- (id)sectionReusablePool;
- (BOOL)scrollDetectionEnabled;
- (void)setScrollingSpeed:(double)arg0;
- (long long)willShowCellBottomTriggerIndex;
- (double)willShowCellBottomTriggerThreshold;
- (long long)willShowCellTopTriggerIndex;
- (double)willShowCellTopTriggerThreshold;
- (double)minimunContentOffsetY;
- (void)setTableViewContentOffset:(struct CGPoint { double x0; double x1; })arg0 animated:(BOOL)arg1;
- (BOOL)needReloadAutoPlayWithCellNewHeight:(double)arg0 originHeight:(double)arg1 withModel:(id)arg2;
- (id /* block */)recaculateCellHeightBlock;
- (void)setScrollDetectionEnabled:(BOOL)arg0;
- (long long)forceActiveIndex;
- (void)setCurrentActiveIndex:(long long)arg0;
- (void)setWillActiveIndex:(long long)arg0;
- (void)insertDisplayObjectsFromArray:(id)arg0 intoIndex:(id /* block */)arg1 completion:(id /* block */)arg2 needConcurrentExec:(BOOL)arg3 autoPlayImmediately:(BOOL)arg4;
- (id /* block */)dataTypeTransferBeforeGetRegisteredCell;
- (id /* block */)dataTypeHandleAfterGetRegisteredCell;
- (long long)currentActiveIndex;
- (long long)findIndexForAwemeInDataController:(id)arg0;
- (void)setForceActiveIndex:(long long)arg0;
- (void)trackShowEventIfNeeded;
- (double)listViewCellWidth;
- (double)listViewCellWidthWithCellModel:(id)arg0;
- (void)reloadDataListWithArray:(id)arg0 dataHandler:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)setLoadMoreBlock:(id /* block */)arg0;
- (void)setApplicationWillResignActiveBlock:(id /* block */)arg0;
- (void)setApplicationDidBecomeActiveBlock:(id /* block */)arg0;
- (void)setRecaculateCellHeightBlock:(id /* block */)arg0;
- (void)setDataTypeTransferBeforeGetRegisteredCell:(id /* block */)arg0;
- (void)setDataTypeHandleAfterGetRegisteredCell:(id /* block */)arg0;
- (void)setSectionReusablePool:(id)arg0;
- (double)topTriggerThreshold;
- (long long)topTriggerIndex;
- (id)awemeModelAtIndex:(long long)arg0;
- (id)awemeCellFrameModelAtIndex:(long long)arg0;
- (void)afd_showLoadingView;
- (void)afd_hideLoadingViewIfNeeded;
- (void)afd_loadMoreWithCompletionBlock:(id /* block */)arg0 retryCount:(long long)arg1;
- (void)afd_initialFetch;
- (void)afd_loadMoreWithCompletionBlock:(id /* block */)arg0;
- (id)afd_typeForSection:(long long)arg0;
- (void)afd_updateMetaForSection:(long long)arg0 fromOldMeta:(id)arg1 toNewMeta:(id)arg2 animated:(BOOL)arg3;
- (BOOL)afd_isSectionDataLoading;
- (id)afd_sectionBindedData;
- (id)afd_sectionSearchLogPassback;
- (id)afd_sectionSearchType;
- (void)afd_videoPlayerStartPlay;
- (void)afd_videoSinglePlayed:(long long)arg0 withCardModel:(id)arg1 awemeModel:(id)arg2 isFromDetail:(BOOL)arg3;
- (id)afd_combinateCardAwemeList:(long long)arg0;
- (long long)afd_rowCountForMeta:(id)arg0;
- (void)afd_didEndScroll;
- (id)afd_sectionControllerForSection:(long long)arg0 dequeueIfNeeded:(BOOL)arg1;
- (void)afd_didScrollToDisplayItemAtIndex:(long long)arg0 offset:(double)arg1 animated:(BOOL)arg2;
- (id)afd_metaForCellModel:(id)arg0;
- (void)afd_reloadDataListWithArray:(id)arg0 dataTypeTransfer:(id /* block */)arg1 dataHandler:(id /* block */)arg2 completion:(id /* block */)arg3 needConcurrentExec:(BOOL)arg4 autoPlayImmediately:(BOOL)arg5;
- (void)afd_deleteItemAtIndex:(long long)arg0 animated:(BOOL)arg1 completion:(id /* block */)arg2;
- (id)afd_awemeCellFrameModelAtIndex:(long long)arg0;
- (long long)afd_refreshDataFromIndex;
- (void)afd_insertDisplayObjectsFromArray:(id)arg0 dataTypeTransfer:(id /* block */)arg1 dataHandler:(id /* block */)arg2 intoIndex:(id /* block */)arg3 dataPreHandleBlock:(id /* block */)arg4 completion:(id /* block */)arg5 needConcurrentExec:(BOOL)arg6 autoPlayImmediately:(BOOL)arg7;
- (void)afd_reloadDataListWithArray:(id)arg0 dataTypeTransfer:(id /* block */)arg1 dataHandler:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)afd_deleteItemAtIndex:(long long)arg0 completion:(id /* block */)arg1;
- (long long)afd_didAwemeIndexInDisplayItems:(long long)arg0;
- (id)afd_originModel;
- (void)setAfd_originModel:(id)arg0;
- (id)afd_transitionIndex;
- (void)setAfd_transitionIndex:(id)arg0;
- (id)afd_transitionToIndex;
- (void)setAfd_transitionToIndex:(id)arg0;
- (id)afd_detailVC;
- (void)setAfd_detailVC:(id)arg0;
- (id)afd_detailVCWithInitialIndex:(long long)arg0 withExtra:(id)arg1;
- (void)afd_modernTransitionUpdateOffset:(long long)arg0 isScrolled:(BOOL)arg1;
- (void)afd_transitionSingleTapEnterDetail:(long long)arg0 withExtra:(id)arg1 withPlayer:(id)arg2;
- (id)afd_modernTransitionContext;
- (id)afd_liveTransitionContext;
- (BOOL)afd_disableSyncReferString;
- (BOOL)afd_shouldModernTransitionUpdatePlayerControllerWithFromContext:(id)arg0;
- (id)afd_zoomTransitionStartViewForOffset:(long long)arg0;
- (id)afd_targetViewControllerSnapshotView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })afd_targetViewFrame;
- (BOOL)afd_zoomTransitionWantsFromVCAnimation;
- (id)afd_detailVCWithInitialIndex:(long long)arg0;
- (void)afd_transitionSingleTapEnterDetail:(long long)arg0;
- (double)getAutoPlayParamsWithType:(unsigned long long)arg0;
- (id)visibleCells;
- (id)container;
- (unsigned long long)scrollDirection;
- (void)setDisplayItems:(id)arg0;
- (id)init;
- (id)tableView:(id)arg0 viewForHeaderInSection:(long long)arg1;
- (void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (double)tableView:(id)arg0 heightForHeaderInSection:(long long)arg1;
- (void)setTableView:(id)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (void)setIsAppearing:(BOOL)arg0;
- (void)tableView:(id)arg0 didEndDisplayingCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (id)displayItems;
- (void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint { double x0; double x1; })arg1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)arg2;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (void)setScrollDirection:(unsigned long long)arg0;
- (void)commonInit;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)scrollViewDidScrollToTop:(id)arg0;
- (void)scrollViewDidEndScrollingAnimation:(id)arg0;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)applicationWillResignActive;
- (void)scrollViewDidScroll:(id)arg0;
- (BOOL)isAppearing;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (BOOL)isActive;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (void)viewWillAppear:(BOOL)arg0;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)applicationDidBecomeActive;
- (double)tableView:(id)arg0 heightForFooterInSection:(long long)arg1;
- (id)tableView:(id)arg0 viewForFooterInSection:(long long)arg1;
- (double)lastContentOffset;
- (void)setLastContentOffset:(double)arg0;
- (id)containerContext;
- (void)setContainerContext:(id)arg0;
- (id)sectionControllerForSection:(long long)arg0;
- (double)tableViewHeight;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (id)dataController;
- (void)deleteItemsAtIndexes:(id)arg0;
- (void)refreshData;
- (void)addObservers;
- (void)pauseVideo;

@end
