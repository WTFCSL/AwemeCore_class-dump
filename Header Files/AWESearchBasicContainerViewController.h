//
//     Generated by private class-dump
//

@class NSDictionary, UIViewController, AWESearchResultCachalotResponseParams, AWEPadCachalotSideView, AWESearchBaseUtility, AWEAwemeModel, NSMutableArray, NSString, AWESearchResultViewController, AWESearchFloatingBackgroundView, NSArray, NSMutableDictionary, AWESearchCachalotView, CachalotMonitorContext, NSObject, AWESearchLoadMoreFooter, AWETrackerContext, AWESearchBaseContainerConfig, AWESearchCachalotCardPipeline, AWESearchResultRefreshHeader, AWESearchTracker, AWESearchSchemaModel, AWESearchScrollSessionContext, CAGradientLayer, AWESearchEasterEggView, AWESearchTabConfig, AWESearchCachalotDataController, AWESearchCachalotResultContext;
@protocol AWESearchActionListenerProtocol, AWESearchFeelGoodManagerProtocol, AWEAwemeDetailTableViewControllerProtocol, AWESearchChildViewControllerResultFilterProtocol;

@interface AWESearchBasicContainerViewController : UIViewController <CachalotFeedEngineDelegate, AWEAwemeDetailTableViewControllerDelegate, AWEModernFullscreenTransitionOuterContextProvider, AWEZoomTransitionOuterContextProvider, BTMPageManagableProtocol, CachalotMainLoopIdleTaskManagerDelegate, AWESearchChildViewControllerProtocol, AWESearchCachalotDataControllerDelegate> {
    BOOL _didTriggerContentRenderFinish;
    BOOL _didCompletePredictCellDrawing;
    BOOL _didShowStreamContent;
    BOOL _didDropStreamContent;
    BOOL _responseIsFinished;
    BOOL _didEndStreamRefreshCost;
    BOOL _pageIsAppeared;
    BOOL _pageIsAtForeground;
    BOOL _isSearchLoading;
    BOOL _scrollSessionActive;
    BOOL _isExecutingLoadmore;
    BOOL _isChunkProcessRunning;
    BOOL _loadmoreRecording;
    BOOL _enablePullRefresh;
    AWESearchTabConfig *tabConfig;
    id<AWESearchChildViewControllerResultFilterProtocol> delegate;
    id<AWESearchActionListenerProtocol> listener;
    AWESearchResultViewController *searchResultViewController;
    long long searchQueryInputTime;
    long long searchButtonPressDuration;
    long long searchButtonClickPositionX;
    long long searchButtonClickPositionY;
    AWETrackerContext *_trackerContext;
    AWESearchSchemaModel *_routerModel;
    AWESearchBaseContainerConfig *_containerConfig;
    AWESearchCachalotView *_cachalotView;
    AWESearchCachalotResultContext *_cachalotContext;
    AWESearchCachalotDataController *_dataController;
    NSDictionary *_extraLogParams;
    AWESearchTracker *_searchTracker;
    AWETrackerContext *_cachalotTrackerContext;
    AWESearchResultCachalotResponseParams *_responseParams;
    AWESearchResultRefreshHeader *_refreshHeaderView;
    AWESearchLoadMoreFooter *_footerView;
    NSMutableDictionary *_flowDataTagMap;
    long long _cachalotViewTrigerCount;
    AWESearchScrollSessionContext *_scrollSessionContext;
    CAGradientLayer *_topLayer;
    NSMutableArray *_cachalotflowDataDisplayMetricBlocks;
    NSArray *_messageHandlers;
    AWESearchCachalotCardPipeline *_nativeCardPipeline;
    CachalotMonitorContext *_monitorContext;
    AWESearchBaseUtility *_searchBaseUtility;
    NSMutableArray *_chunkProcessSequence;
    id /* block */ _chunkProcessCompletion;
    AWEAwemeModel *_originModel;
    long long _transitionIndex;
    long long _transitionToIndex;
    UIViewController<AWEAwemeDetailTableViewControllerProtocol> *_detailVC;
    id /* block */ _beforeBuildRequestBlock;
    AWEPadCachalotSideView *_backgroundViewLeft;
    AWEPadCachalotSideView *_backgroundViewRight;
}

@property (retain, nonatomic) AWESearchCachalotDataController *dataController;
@property (retain, nonatomic) AWESearchCachalotView *cachalotView;
@property (retain, nonatomic) AWESearchResultRefreshHeader *refreshHeaderView;
@property (retain, nonatomic) AWESearchLoadMoreFooter *footerView;
@property (retain, nonatomic) CAGradientLayer *topLayer;
@property (retain, nonatomic) NSMutableArray *cachalotflowDataDisplayMetricBlocks;
@property (copy, nonatomic) NSArray *messageHandlers;
@property (retain, nonatomic) AWESearchCachalotCardPipeline *nativeCardPipeline;
@property (retain, nonatomic) AWESearchCachalotResultContext *cachalotContext;
@property (retain, nonatomic) AWETrackerContext *cachalotTrackerContext;
@property (retain, nonatomic) CachalotMonitorContext *monitorContext;
@property (retain, nonatomic) AWESearchTracker *searchTracker;
@property (copy, nonatomic) NSDictionary *extraLogParams;
@property (nonatomic) BOOL isExecutingLoadmore;
@property (retain, nonatomic) AWESearchBaseUtility *searchBaseUtility;
@property (nonatomic) BOOL pageIsAppeared;
@property (nonatomic) BOOL pageIsAtForeground;
@property (retain, nonatomic) NSMutableArray *chunkProcessSequence;
@property (nonatomic) BOOL isChunkProcessRunning;
@property (copy, nonatomic) id /* block */ chunkProcessCompletion;
@property (retain, nonatomic) AWEAwemeModel *originModel;
@property (nonatomic) long long transitionIndex;
@property (nonatomic) long long transitionToIndex;
@property (retain, nonatomic) UIViewController<AWEAwemeDetailTableViewControllerProtocol> *detailVC;
@property (copy, nonatomic) id /* block */ beforeBuildRequestBlock;
@property (retain, nonatomic) AWEPadCachalotSideView *backgroundViewLeft;
@property (retain, nonatomic) AWEPadCachalotSideView *backgroundViewRight;
@property (retain, nonatomic) AWESearchScrollSessionContext *scrollSessionContext;
@property (nonatomic) BOOL scrollSessionActive;
@property (nonatomic) BOOL loadmoreRecording;
@property (nonatomic) BOOL enablePullRefresh;
@property (retain, nonatomic) AWESearchBaseContainerConfig *containerConfig;
@property (retain, nonatomic) AWESearchResultCachalotResponseParams *responseParams;
@property (retain, nonatomic) NSMutableDictionary *flowDataTagMap;
@property (nonatomic) BOOL didTriggerContentRenderFinish;
@property (nonatomic) BOOL didCompletePredictCellDrawing;
@property (nonatomic) BOOL didShowStreamContent;
@property (nonatomic) BOOL didDropStreamContent;
@property (nonatomic) BOOL responseIsFinished;
@property (nonatomic) BOOL didEndStreamRefreshCost;
@property (nonatomic) long long cachalotViewTrigerCount;
@property (nonatomic) BOOL isSearchLoading;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWESearchTabConfig *tabConfig;
@property (weak, nonatomic) id<AWESearchChildViewControllerResultFilterProtocol> delegate;
@property (weak, nonatomic) id<AWESearchActionListenerProtocol> listener;
@property (weak, nonatomic) AWESearchResultViewController *searchResultViewController;
@property (retain, nonatomic) AWETrackerContext *trackerContext;
@property (retain, nonatomic) AWESearchSchemaModel *routerModel;
@property (copy, nonatomic) id /* block */ searchTabsUpdateBlock;
@property (nonatomic) BOOL isFilterSearch;
@property (nonatomic) unsigned long long publishTime;
@property (nonatomic) unsigned long long sortType;
@property (nonatomic) unsigned long long refreshType;
@property (retain, nonatomic) NSString *refer;
@property (copy, nonatomic) NSString *enterMethod;
@property (nonatomic) BOOL dismissTabBottomLine;
@property (retain, nonatomic) AWESearchFloatingBackgroundView *floatingBackgroundView;
@property (retain, nonatomic) AWESearchEasterEggView *easterEggView;
@property (nonatomic) long long searchTabFeedType;
@property (copy, nonatomic) NSString *personalSearchChannel;
@property (copy, nonatomic) NSString *personalTrackTabType;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *tokenType;
@property (copy, nonatomic) NSString *clickMoreMethod;
@property (nonatomic) long long searchQueryInputTime;
@property (nonatomic) long long searchButtonPressDuration;
@property (nonatomic) long long searchButtonClickPositionX;
@property (nonatomic) long long searchButtonClickPositionY;
@property (copy, nonatomic) id /* block */ isShowingMiddlePageBlock;
@property (copy, nonatomic) id /* block */ sugSessionIDBlock;
@property (retain, nonatomic) NSObject<AWESearchFeelGoodManagerProtocol> *surveyManager;

+ (id)searchResultVertivalVCWith:(id)arg0;

- (id)aweui_emptyPageConfigForState:(unsigned long long)arg0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (void)setAweui_viewControllerState:(unsigned long long)arg0;
- (id)zoomTransitionStartViewForOffset:(long long)arg0;
- (id)liveTransitionContext;
- (BOOL)zoomTransitionWantsFromVCAnimation;
- (id)targetViewControllerSnapshotView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })targetViewFrame;
- (BOOL)loadMoreWithCompletion:(id /* block */)arg0;
- (void)detailTableViewController:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 model:(id)arg3;
- (BOOL)btm_autoManaged;
- (id)btm_pageIdentifier;
- (id)topLayer;
- (void)setDataController:(id)arg0;
- (void)modernTransitionUpdateOffset:(long long)arg0 isScrolled:(BOOL)arg1;
- (id)modernTransitionContext;
- (void)modernTransitionDidCompleteWithOffset:(long long)arg0;
- (void)startMagnifyTransition;
- (void)endShrinkTransition;
- (BOOL)delayInteraction;
- (BOOL)shouldSetMask;
- (id)detailVC;
- (id)containerConfig;
- (id)searchEnterFrom;
- (id)originModel;
- (void)setOriginModel:(id)arg0;
- (id)monitorContext;
- (void)setMonitorContext:(id)arg0;
- (void)componentWillBeginRenderWithViewModel:(id)arg0;
- (void)componentDidFinishRender:(id)arg0 withViewModel:(id)arg1;
- (void)componentWillDisplay:(id)arg0 withViewModel:(id)arg1;
- (void)componentDidEndDisplay:(id)arg0;
- (void)feedDidScroll:(id)arg0;
- (void)feedWillBeginDragging:(id)arg0;
- (void)feedDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (void)feedDidEndDecelerating:(id)arg0;
- (void)feedDidEndScrollingAnimation:(id)arg0;
- (BOOL)feedShouldStartPreLoadMoreWithCompletion:(id /* block */)arg0;
- (void)engineTaskDidExecute:(id)arg0 from:(double)arg1 to:(double)arg2;
- (void)taskWillExecute:(id)arg0;
- (void)taskDidExecute:(id)arg0 timing:(id)arg1 isCanceled:(BOOL)arg2;
- (double)ignoredScrollViewContentInsetTop;
- (void)setDetailVC:(id)arg0;
- (void)configUI;
- (void)setContainerConfig:(id)arg0;
- (BOOL)enableRefreshHeader;
- (void)scrollToDisplayItemAtIndex:(long long)arg0 offset:(double)arg1 animated:(BOOL)arg2;
- (void)fetchDataWithCompletion:(id /* block */)arg0;
- (long long)transitionIndex;
- (void)setTransitionToIndex:(long long)arg0;
- (long long)transitionToIndex;
- (id)detailVCWithInitialIndex:(long long)arg0 withExtra:(id)arg1;
- (void)setTransitionIndex:(long long)arg0;
- (id)detailVCWithInitialIndex:(long long)arg0;
- (long long)awemeIndexInDisplayItems:(long long)arg0;
- (void)singleTapEnterDetail:(long long)arg0 withExtra:(id)arg1 withPlayer:(id)arg2;
- (void)singleTapEnterDetail:(long long)arg0;
- (void)setTabConfig:(id)arg0;
- (id)trackerContext;
- (void)setTrackerContext:(id)arg0;
- (void)saveSearchWord:(id)arg0 wordType:(id)arg1;
- (id)tabConfig;
- (id)routerModel;
- (void)setRouterModel:(id)arg0;
- (void)fetchDataWithKeyWord:(id)arg0 enterFrom:(id)arg1 extraLogParams:(id)arg2 isSearchByUserClick:(BOOL)arg3 animated:(BOOL)arg4 completion:(id /* block */)arg5;
- (id)getCurrentSearchId;
- (id)getCurrentLogId;
- (id)searchEnterMethod;
- (void)setBeforeBuildRefreshRequestBlock:(id /* block */)arg0;
- (long long)searchQueryInputTime;
- (void)setSearchQueryInputTime:(long long)arg0;
- (long long)searchButtonPressDuration;
- (void)setSearchButtonPressDuration:(long long)arg0;
- (long long)searchButtonClickPositionX;
- (void)setSearchButtonClickPositionX:(long long)arg0;
- (long long)searchButtonClickPositionY;
- (void)setSearchButtonClickPositionY:(long long)arg0;
- (id)surveyManager;
- (void)p_performanceHandleScrollWillBegin;
- (void)p_performanceHandleScrollDidEnd;
- (id)p_searchPageScrollFpsSceneName;
- (void)setCachalotContext:(id)arg0;
- (id)cachalotContext;
- (void)configContext;
- (id)searchDetailLogExtraDictWithExtra:(id)arg0;
- (BOOL)shouldUseModernFullScreenTransitionForAweme:(id)arg0;
- (long long)displayItemSectionInAwemes:(long long)arg0;
- (id)detailVCWithVideos:(id)arg0 withExtra:(id)arg1;
- (void)preloadDetailVC;
- (void)updateTransionIndex;
- (id)zoomTransitionView;
- (BOOL)disableCatchRenderException;
- (id)pushVideoDetailPageTransitionClass;
- (id)configSearchType;
- (id)customSearchType;
- (id)rootModelWithRawJson:(id)arg0;
- (void)innerFetchData:(id /* block */)arg0;
- (void)innerLoadmoreData:(id /* block */)arg0;
- (void)innerLoadmoreFilteredData:(id /* block */)arg0;
- (void)handleCachalotContext:(id)arg0;
- (void)chunkHandleReplaceResponse:(id)arg0 allowShow:(BOOL)arg1 rootModel:(id)arg2;
- (void)chunkHandleShowResponseContainer:(BOOL)arg0;
- (void)chunkHandleClearResponse:(id /* block */)arg0;
- (void)chunkHandleAppendResponse:(id)arg0 rootModel:(id)arg1;
- (void)handleChunkRequestFinishWithResponse:(id)arg0 withError:(id)arg1 forceCanceled:(BOOL)arg2;
- (void)handleChunkSerialProcess:(id /* block */)arg0;
- (id)fetchLeafViewModelsWithRootModel:(id)arg0;
- (id)cachalotView;
- (void)setResponseIsFinished:(BOOL)arg0;
- (void)setIsSearchLoading:(BOOL)arg0;
- (void)handleRefreshResponseCompletion:(id /* block */)arg0 withParams:(id)arg1;
- (long long)configCustomPerformanceDisplayType;
- (id)customTabConfig;
- (BOOL)enableStableLog;
- (id)customPageScrollFpsSceneName;
- (id)customEnterFrom;
- (id)customContainerId;
- (id)customBusinesssId;
- (Class)customDataControllerClass;
- (id)customBtmPageIdentifier;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })customContentInsets;
- (double)loadMoreMarigin;
- (BOOL)customPageEnableAutoPlay;
- (BOOL)customAutoPlayWhenAppeard;
- (BOOL)customPageEnableAsyncProcess;
- (id)customInnerFlowEnterFrom;
- (BOOL)customInnerFlowShouldShowDataModel:(id)arg0;
- (id)customOuterDataModels;
- (id)customContainerConfig;
- (id)customCachalotContext;
- (id)customMessageHandlers;
- (id)customPageScrollFpsExtraData;
- (void)customFeedWillBeginDragging:(id)arg0;
- (void)customFeedDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (void)customFeedDidEndDecelerating:(id)arg0;
- (void)customFeedDidEndScrollingAnimation:(id)arg0;
- (void)customVideoPlayerStartPlay;
- (void)customFeedwillRequestNetwork;
- (BOOL)shouldOpenNetworkSep;
- (void)customFeedRecieveRequestWithResponseParams:(id)arg0 isLoadMore:(BOOL)arg1;
- (id)customAutoplayRules;
- (void)customComponentWillBeginRenderWithViewModel:(id)arg0;
- (void)customComponentDidFinishRender:(id)arg0 withViewModel:(id)arg1;
- (void)customComponentWillDisplay:(id)arg0 withViewModel:(id)arg1;
- (void)customComponentDidEndDisplay:(id)arg0;
- (id)customSearchTrackParams;
- (id)customSearchTrackParams;
- (id)customFooterTitle;
- (id)customFooterTitleWithLink;
- (id)customEmptyViewSubTitle;
- (void)customFeedDidScroll:(struct CGPoint { double x0; double x1; })arg0;
- (void)endReloadData;
- (void)customDataCompletionFromFlowData:(id)arg0;
- (void)customHandleNodeViewModelsReady:(id)arg0 withResponseParams:(id)arg1 isLoadmore:(BOOL)arg2;
- (void)customHandleResponseDataModelsReadyBlock:(id)arg0 withParams:(id)arg1 isLoadMore:(BOOL)arg2;
- (void)updateDataCompletionWithOuterModelArray:(id)arg0 isLoadMore:(BOOL)arg1;
- (void)customHandleScrollDidEnd;
- (void)customWillBeginLoadmore;
- (void)customDidEndLoadmore:(BOOL)arg0 canceled:(BOOL)arg1 error:(id)arg2;
- (long long)customPerformanceDisplayType;
- (BOOL)customConcurrentChunkMachineProcess;
- (BOOL)customSetScrollViewNotReturnToTopAfterRefresh;
- (BOOL)customSyncAtMainThread;
- (BOOL)customForceInvalidateLayoutChange;
- (BOOL)customPartReloadFilterInvalidIndexPaths;
- (BOOL)customCleanComponentCacheWhenReSearch;
- (BOOL)customOptimizeComponentClearReuse;
- (BOOL)customAnalyserFixParentMissing;
- (BOOL)customCompletionUseLayoutIfNeed;
- (BOOL)customUseSerialOperationMode;
- (BOOL)customUseNewUpdateHeightTransaction;
- (id)customSerialOperationExpireDuration;
- (id)customCreateAutoPlayHandler;
- (BOOL)customEnableFullCasePreloadMore;
- (void)customHandlePreRenderUsage:(BOOL)arg0 viewModel:(id)arg1;
- (BOOL)customUseUniversalReusePool;
- (void)registerContainerConfig;
- (void)p_callNextChunkProcess;
- (void)notificationHandle;
- (void)refreshAfterLoginIfNeeded;
- (BOOL)customDisablePadSideView;
- (id)backgroundViewLeft;
- (id)backgroundViewRight;
- (void)setBackgroundViewLeft:(id)arg0;
- (void)setBackgroundViewRight:(id)arg0;
- (void)addGradientLayer;
- (void)replaceWithViewModel:(id)arg0 dataModelsReadyBlock:(id /* block */)arg1 viewModelsReadyBlock:(id /* block */)arg2 flushAfter:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)p_scrollSessionReset:(BOOL)arg0;
- (BOOL)needDefaultSurveyManager;
- (BOOL)isPullRefreshing;
- (void)trackSearchWithTime:(double)arg0 cardCount:(long long)arg1 logPb:(id)arg2;
- (id)searchBaseUtility;
- (id)extraLogParams;
- (id)cachalotTrackerContext;
- (void)customAnylyseResponseViewModelsReadyBlock:(id)arg0 withParams:(id)arg1 isLoadMore:(BOOL)arg2;
- (void)customAnylyseResponseDataModelsReadyBlock:(id)arg0 withParams:(id)arg1 isLoadMore:(BOOL)arg2;
- (void)customRefreshResponseCompletion:(id /* block */)arg0 withParams:(id)arg1;
- (BOOL)customCleanReuseWhenRefreshSearch;
- (void)customBeforeReloadCahcalotWithData:(id)arg0 params:(id)arg1;
- (void)reloadCahcalotWithData:(id)arg0 viewModelsReadyBlock:(id /* block */)arg1 dataModelsReadyBlock:(id /* block */)arg2 completion:(id /* block */)arg3;
- (id)currentSearchTabStr;
- (void)customEmptyResponseCompletion:(id /* block */)arg0 withParams:(id)arg1 isLoadMore:(BOOL)arg2;
- (id /* block */)beforeBuildRequestBlock;
- (BOOL)p_useFlowData;
- (void)resetFlowRequestConfig;
- (id)flowDataTagMap;
- (void)setCachalotViewTrigerCount:(long long)arg0;
- (void)autoPlayResignActiveIfNeed;
- (BOOL)customEnableSetListContentInsetWhenFetchData;
- (void)clearChunkProcess;
- (BOOL)disableBasicContainerResponseUpgrade;
- (void)handleDataRefreshCompletionWithResponse:(id)arg0 refreshBeginTime:(double)arg1 completion:(id /* block */)arg2;
- (BOOL)filterComponentDataModelArray;
- (void)p_handleLoadmoreDataInsertWithParams:(id)arg0;
- (void)customLoadmoreResponseCompletion:(id /* block */)arg0 withParams:(id)arg1;
- (void)p_didEndLoadmore:(BOOL)arg0 canceled:(BOOL)arg1 error:(id)arg2;
- (void)appendWithViewModel:(id)arg0 viewModelsReadyBlock:(id /* block */)arg1 dataModelsReadyBlock:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)endRefreshingWithParams:(id)arg0 completion:(id /* block */)arg1;
- (void)setIsExecutingLoadmore:(BOOL)arg0;
- (BOOL)isExecutingLoadmore;
- (void)handleDataLoadMoreCompletionWithResponse:(id)arg0 completion:(id /* block */)arg1;
- (void)p_willBeginLoadmore;
- (double)customBottomSpacingOfScrollViewContentInsetWhenEndRefreshingWithNoHasMore;
- (BOOL)didTriggerContentRenderFinish;
- (BOOL)didShowStreamContent;
- (BOOL)didCompletePredictCellDrawing;
- (void)p_fireRealFlowDataDisplay;
- (void)setDidTriggerContentRenderFinish:(BOOL)arg0;
- (BOOL)responseIsFinished;
- (id)covertDictToString:(id)arg0;
- (BOOL)allBlockExcuted;
- (BOOL)isEmptypListWithParams:(id)arg0;
- (long long)cachalotViewTrigerCount;
- (void)setUpCachalotViewHidden:(BOOL)arg0;
- (void)setDidEndStreamRefreshCost:(BOOL)arg0;
- (void)setDidCompletePredictCellDrawing:(BOOL)arg0;
- (void)p_checkContentRenderStatus;
- (void)setDidShowStreamContent:(BOOL)arg0;
- (void)setDidDropStreamContent:(BOOL)arg0;
- (void)p_cleanDisplayMetricBlocks;
- (void)updateSearchBarText:(id)arg0;
- (BOOL)scrollSessionActive;
- (id)scrollSessionContext;
- (void)singleTapEnterDetail:(long long)arg0 withExtra:(id)arg1 withPlayer:(id)arg2 popScene:(id /* block */)arg3;
- (id)customInerDataModels;
- (id)ecomSceneIdParamsForLiveRoomWithEterMethod:(id)arg0;
- (long long)innerPositionFromOutPosition:(long long)arg0;
- (BOOL)enableSearchFeaturesCollectionForHangout;
- (BOOL)loadmoreRecording;
- (void)setLoadmoreRecording:(BOOL)arg0;
- (void)scrollToViewModel:(id)arg0 positionType:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)scrollToViewModel:(id)arg0 positionType:(unsigned long long)arg1 animated:(BOOL)arg2 completionBlock:(id /* block */)arg3;
- (id)p_fetchDataModelAtIndex:(long long)arg0;
- (void)setBeforeBuildRequestBlock:(id /* block */)arg0;
- (long long)resultSearchQueryInputTime;
- (void)setExtraLogParams:(id)arg0;
- (void)autoPlayBecomeActiveIfNeed;
- (void)setScrollSessionActive:(BOOL)arg0;
- (id)p_searchPageScrollFpsExtraData;
- (void)trackFreqControlShow:(unsigned long long)arg0;
- (long long)outPositionFromInnerPosition:(long long)arg0;
- (void)transitionBackToFeedWithIndex:(long long)arg0;
- (id)p_wrappedComponentAtIndex:(long long)arg0;
- (void)autoPlayForceBecomeActiveWith:(id)arg0;
- (id)currentTransitionComponent;
- (id)nativeCardPipeline;
- (id)refreshHeaderView;
- (void)setEnablePullRefresh:(BOOL)arg0;
- (BOOL)enableFixPullRefreshSeq;
- (BOOL)enablePullRefresh;
- (void)handleViewDidEnterBackground;
- (void)hadleViewWillEnterForeground;
- (BOOL)enableSafeMergeLog;
- (void)p_updateDataCompletionWithOuterModelArray:(id)arg0 isLoadMore:(BOOL)arg1;
- (BOOL)emptyDataEnableCloseAutoPreload;
- (BOOL)customShouldTurnOnAutoPreloadMoreWhenEndRefreshingCompleted;
- (void)endReloadDataWithParams:(id)arg0;
- (BOOL)enableContainerFunctionAssemble;
- (void)handleContainerFunctionAssembleWithConfig:(id)arg0;
- (id)lynxPipeline;
- (id)webPipeline;
- (void)willExecutePullRefresh;
- (BOOL)customPullRefreshRequest;
- (void)pullRefreshComplectionWithResponse:(id)arg0;
- (void)endPullRefresh;
- (void)setProxyDelegateWithContext:(id)arg0;
- (void)setCachalotTrackerContext:(id)arg0;
- (id)chunkProcessSequence;
- (BOOL)isChunkProcessRunning;
- (void)setIsChunkProcessRunning:(BOOL)arg0;
- (id /* block */)chunkProcessCompletion;
- (id)mergedModelWithOriginModel:(id)arg0 appendModel:(id)arg1;
- (void)chunkHandleResponseError:(id)arg0;
- (void)scrollToDisplayItemAtIndex:(long long)arg0 animated:(BOOL)arg1 withPostion:(unsigned long long)arg2;
- (void)scrollToDisplayItemAtIndex:(long long)arg0 animated:(BOOL)arg1 withPosition:(unsigned long long)arg2 completionBlock:(id /* block */)arg3;
- (BOOL)enableForceLayoutAfterReloadWhenNilWindow;
- (BOOL)enableLayoutAfterPerformBatchUpdates;
- (void)registerNativeDataType:(long long)arg0 withDataClass:(Class)arg1;
- (void)registerNativeViewType:(long long)arg0 withViewClass:(Class)arg1;
- (void)togglePullRefreshHeaderEnable:(BOOL)arg0;
- (id)searchTracker;
- (void)autoPlayRecalculateToActiveNeedReset;
- (void)autoPlayEndForceBecomeActiveWith:(id)arg0;
- (void)setCachalotView:(id)arg0;
- (void)setSearchTracker:(id)arg0;
- (void)setRefreshHeaderView:(id)arg0;
- (void)setFlowDataTagMap:(id)arg0;
- (BOOL)didDropStreamContent;
- (BOOL)didEndStreamRefreshCost;
- (BOOL)pageIsAppeared;
- (void)setPageIsAppeared:(BOOL)arg0;
- (BOOL)pageIsAtForeground;
- (void)setPageIsAtForeground:(BOOL)arg0;
- (BOOL)isSearchLoading;
- (void)setScrollSessionContext:(id)arg0;
- (void)setTopLayer:(id)arg0;
- (id)cachalotflowDataDisplayMetricBlocks;
- (void)setCachalotflowDataDisplayMetricBlocks:(id)arg0;
- (void)setNativeCardPipeline:(id)arg0;
- (void)setSearchBaseUtility:(id)arg0;
- (void)setChunkProcessSequence:(id)arg0;
- (void)setChunkProcessCompletion:(id /* block */)arg0;
- (void)becomeActive;
- (id)init;
- (id)searchResultViewController;
- (id)footerView;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg0;
- (void)setSearchResultViewController:(id)arg0;
- (void)setFooterView:(id)arg0;
- (void).cxx_destruct;
- (id)listener;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)setListener:(id)arg0;
- (void)viewDidDisappear:(BOOL)arg0;
- (id)initWithConfig:(id)arg0;
- (id)delegate;
- (void)setMessageHandlers:(id)arg0;
- (void)viewWillAppear:(BOOL)arg0;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)reset;
- (void)viewDidLoad;
- (id)dataController;
- (id)responseParams;
- (void)setResponseParams:(id)arg0;
- (id)messageHandlers;

@end
