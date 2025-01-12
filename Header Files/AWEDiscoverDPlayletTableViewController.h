//
//     Generated by private class-dump
//

@class AWEFeedPreloadManager, AWEUILoadingView, AWEPlayletInfoModel, NSDictionary, AWEDiscoverDPlayletPerformanceEvent, AWEDiscoverDPlayletDataController, NSMutableArray, NSString, AWEPlayletWatchedFinishedHistory, AWEDiscoverDPlayletBottomView, NSNumber, AWEDiscoverDPlayletPanelViewController, AWEPlayletSchemaModel;

@interface AWEDiscoverDPlayletTableViewController : AWEAwemeDetailTableViewController <AWERouterViewControllerProtocol, AWEDiscoverDPlayletBottomViewDelegate, AWEDiscoverDPlayletPanelDelegate, AWEDiscoverDPlayletDataChangeProtocol, AWEZoomTransitionOuterContextProvider, AWEDiscoverDPlayletCollectionButtonTrackParamsDelegate, AWEPlayVideoMessage> {
    BOOL _initialDataSourceFetchHasFinished;
    BOOL _viewHasAppear;
    BOOL _isShareAlertShowed;
    BOOL _isPlayletPanelShowed;
    BOOL _hasLaunch;
    BOOL _isAlreaySeekedTimeFromOuter;
    BOOL _firstShowedLoading;
    NSMutableArray *_recommendPlayletCards;
    AWEPlayletInfoModel *_playletInfoModel;
    AWEPlayletSchemaModel *_schemaModel;
    AWEDiscoverDPlayletBottomView *_bottomView;
    AWEDiscoverDPlayletPanelViewController *_panelViewController;
    AWEDiscoverDPlayletDataController *_playletDataController;
    AWEUILoadingView *_loadingView;
    NSMutableArray *_loadPreviousModels;
    long long _awemeIndexBeforeDrag;
    long long _lastDisplayedPlayletIndex;
    long long _currentDisplayedPlayletIndex;
    AWEPlayletWatchedFinishedHistory *_currentPlayletTrackedModel;
    NSMutableArray *_alreadyRecommendedPlayletIDs;
    NSNumber *_currentTime;
    AWEDiscoverDPlayletPerformanceEvent *_performanceEvent;
    NSDictionary *_schemaOriginalParams;
    NSNumber *_shouldScrollToInitItemID;
    AWEFeedPreloadManager *_playletPreloadManager;
}

@property (retain, nonatomic) AWEPlayletInfoModel *playletInfoModel;
@property (retain, nonatomic) AWEPlayletSchemaModel *schemaModel;
@property (retain, nonatomic) AWEDiscoverDPlayletBottomView *bottomView;
@property (retain, nonatomic) AWEDiscoverDPlayletPanelViewController *panelViewController;
@property (retain, nonatomic) AWEDiscoverDPlayletDataController *playletDataController;
@property (nonatomic) BOOL initialDataSourceFetchHasFinished;
@property (nonatomic) BOOL viewHasAppear;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) NSMutableArray *loadPreviousModels;
@property (nonatomic) long long awemeIndexBeforeDrag;
@property (nonatomic) long long lastDisplayedPlayletIndex;
@property (nonatomic) long long currentDisplayedPlayletIndex;
@property (nonatomic) BOOL isShareAlertShowed;
@property (nonatomic) BOOL isPlayletPanelShowed;
@property (retain, nonatomic) AWEPlayletWatchedFinishedHistory *currentPlayletTrackedModel;
@property (retain, nonatomic) NSMutableArray *alreadyRecommendedPlayletIDs;
@property (nonatomic) BOOL hasLaunch;
@property (copy, nonatomic) NSNumber *currentTime;
@property (nonatomic) BOOL isAlreaySeekedTimeFromOuter;
@property (retain, nonatomic) AWEDiscoverDPlayletPerformanceEvent *performanceEvent;
@property (retain, nonatomic) NSDictionary *schemaOriginalParams;
@property (copy, nonatomic) NSNumber *shouldScrollToInitItemID;
@property (nonatomic) BOOL firstShowedLoading;
@property (retain, nonatomic) AWEFeedPreloadManager *playletPreloadManager;
@property (retain, nonatomic) NSMutableArray *recommendPlayletCards;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadDetailTableViewAdapterClass;

- (id)zoomTransitionStartViewForOffset:(long long)arg0;
- (BOOL)configWithRouterParamDict:(id)arg0;
- (void)player:(id)arg0 didChangePlaybackStateWithAction:(long long)arg1;
- (id)transition_destinatedViewControllerForSlideDirection:(unsigned long long)arg0 gestureRecognizer:(id)arg1;
- (void)loadPreviousData;
- (BOOL)isPlayletPanelShowed;
- (id)schemaModel;
- (id)playletInfoModel;
- (id)panelViewController;
- (id)currentPlayingModel;
- (void)playIfActive;
- (void)setPlayletInfoModel:(id)arg0;
- (void)setSchemaModel:(id)arg0;
- (void)configureUI;
- (void)autoScrollToNextVideo;
- (void)initialDataSourceFetchDidFinished;
- (void)trackLaunch:(id)arg0;
- (id)aAWEPadDetailTableViewAdapter;
- (void)onScrollWillChangeVideo:(id)arg0 index:(long long)arg1 directTop:(BOOL)arg2;
- (void)disableSlideGesture;
- (BOOL)hasLaunch;
- (void)setHasLaunch:(BOOL)arg0;
- (void)onScrollViewWillBeginDragging:(double)arg0;
- (id)configCell:(id)arg0 atIndexPath:(id)arg1 tableView:(id)arg2;
- (void)onScrollDidEndWithIndexPath:(id)arg0;
- (void)enableSlideGesture;
- (void)dismissPanelWithAnimated:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)resetPanelView;
- (void)showPanelView;
- (void)setPanelViewController:(id)arg0;
- (BOOL)isShareAlertShowed;
- (void)onBottomSelectViewClick;
- (void)favoriteItemChanged:(id)arg0;
- (id)initialPlayletIDStr;
- (void)playletDataHasChanged:(BOOL)arg0 awemeModels:(id)arg1;
- (id)performanceEvent;
- (void)playletDataConfigureInitialIndex:(long long)arg0;
- (id)getPlayletRecommendModel;
- (void)setPerformanceEvent:(id)arg0;
- (id)initWithDataController:(id)arg0 initialIndex:(long long)arg1 referString:(id)arg2 logExtraDict:(id)arg3;
- (void)handleRefreshDataNotification:(id)arg0;
- (void)loadmorePlayletData;
- (long long)initialVideoIndex;
- (id)panelDataSource;
- (void)loadPreviousPlayletData;
- (void)playletPanelDidSelect:(long long)arg0;
- (void)setSchemaOriginalParams:(id)arg0;
- (void)configurePlayLogExtraParams;
- (void)setupPerformanceEvent;
- (void)configureDataController;
- (void)configurePlayletPreloadManager;
- (id)playletDataController;
- (void)setInitialDataSourceFetchHasFinished:(BOOL)arg0;
- (void)setLastDisplayedPlayletIndex:(long long)arg0;
- (void)configureBottomView;
- (void)requestPlayletInfo;
- (void)enterMethodAssert;
- (BOOL)viewHasAppear;
- (void)setViewHasAppear:(BOOL)arg0;
- (id)playletPreloadManager;
- (void)saveWatchedFinishedPlayletIfNeededWithModel:(id)arg0;
- (void)savePlayletWatchedHistory;
- (void)setPlayletDataController:(id)arg0;
- (void)setPlayletPreloadManager:(id)arg0;
- (void)updateUIWithInitialData;
- (id)loadPreviousModels;
- (void)setAwemeIndexBeforeDrag:(long long)arg0;
- (long long)awemeIndexBeforeDrag;
- (void)handleLoadPreviousWithModels:(id)arg0;
- (void)shouldShowBottomViewAnimated:(BOOL)arg0;
- (void)setCurrentDisplayedPlayletIndex:(long long)arg0;
- (void)preloadVideoWithIndex:(long long)arg0;
- (long long)lastDisplayedPlayletIndex;
- (BOOL)isPlayletChangedWithCurrentIndex:(long long)arg0 lastIndex:(long long)arg1;
- (BOOL)isAlreaySeekedTimeFromOuter;
- (void)setIsAlreaySeekedTimeFromOuter:(BOOL)arg0;
- (BOOL)shouldTrackedWatchedHistory;
- (id)currentPlayletTrackedModel;
- (BOOL)initialDataSourceFetchHasFinished;
- (id)recommendPlayletCards;
- (id)alreadyRecommendedPlayletIDs;
- (void)willPlayNextLoop;
- (void)showShareAlert;
- (void)dismissShareAlert;
- (void)setIsShareAlertShowed:(BOOL)arg0;
- (void)resetPanelWithAnimated:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)resetScrollToInitItemID;
- (BOOL)firstShowedLoading;
- (id)shouldScrollToInitItemID;
- (void)setFirstShowedLoading:(BOOL)arg0;
- (void)setShouldScrollToInitItemID:(id)arg0;
- (void)setIsPlayletPanelShowed:(BOOL)arg0;
- (long long)currentDisplayedPlayletIndex;
- (void)p_updateVoiceOverElementWithPanelVCShown:(BOOL)arg0;
- (void)panelStartLoading;
- (void)reloadForScrollToInitID;
- (void)requestRecommendListsIfNeeded;
- (void)videoQualityTrackerWithPlayer:(id)arg0;
- (id)schemaOriginalParams;
- (double)getStartSeekTime:(id)arg0;
- (void)setRecommendPlayletCards:(id)arg0;
- (void)setLoadPreviousModels:(id)arg0;
- (void)setCurrentPlayletTrackedModel:(id)arg0;
- (void)setAlreadyRecommendedPlayletIDs:(id)arg0;
- (id)init;
- (id)actionType;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setCurrentTime:(id)arg0;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)viewDidDisappear:(BOOL)arg0;
- (id)currentTime;
- (void)dealloc;
- (void)play;
- (void)viewDidLoad;
- (void)appWillResignActive:(id)arg0;
- (id)bottomView;
- (void)setBottomView:(id)arg0;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (id)dataController;
- (void)addObservers;

@end
