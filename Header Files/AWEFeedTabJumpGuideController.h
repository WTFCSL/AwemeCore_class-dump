//
//     Generated by private class-dump
//

@class AWEFeedTabJumpStrategyItemModel, AWEAwemeModel, NSArray, AWEFeedTabJumpStrategyModel, NSString, AWEFeedTabJumpConditionTriggerManager, AWEJumpTabInfoModel, AWEFeedTabJumpStorageManager, NSIndexPath;

@interface AWEFeedTabJumpGuideController : AWEBaseController <AWEFeedControllerProtocol, AWETabJumpGuideMessage, AWEFeedTabJumpGuideControllerPrivateProtocol> {
    BOOL _isAppear;
    BOOL _isRefreshing;
    BOOL _isMaskViewShowing;
    BOOL _currentInteractionPureMode;
    BOOL _neewRetryShow;
    AWEAwemeModel *_currentAwemeModel;
    NSIndexPath *_willDisplayIndexPath;
    NSIndexPath *_didEndDisplayIndexPath;
    AWEFeedTabJumpStrategyModel *_strategyModel;
    NSArray *_supportTabIDList;
    AWEJumpTabInfoModel *_currentJumpTabInfoModel;
    AWEFeedTabJumpStrategyItemModel *_currentTabStrategy;
    AWEFeedTabJumpConditionTriggerManager *_currentTriggerManager;
    AWEFeedTabJumpStorageManager *_storageManager;
    long long _triggerCount;
}

@property (nonatomic) BOOL isAppear;
@property (nonatomic) BOOL isRefreshing;
@property (nonatomic) BOOL isMaskViewShowing;
@property (retain, nonatomic) AWEAwemeModel *currentAwemeModel;
@property (retain, nonatomic) NSIndexPath *willDisplayIndexPath;
@property (retain, nonatomic) NSIndexPath *didEndDisplayIndexPath;
@property (retain, nonatomic) AWEFeedTabJumpStrategyModel *strategyModel;
@property (retain, nonatomic) NSArray *supportTabIDList;
@property (nonatomic) BOOL currentInteractionPureMode;
@property (retain, nonatomic) AWEJumpTabInfoModel *currentJumpTabInfoModel;
@property (retain, nonatomic) AWEFeedTabJumpStrategyItemModel *currentTabStrategy;
@property (retain, nonatomic) AWEFeedTabJumpConditionTriggerManager *currentTriggerManager;
@property (retain, nonatomic) AWEFeedTabJumpStorageManager *storageManager;
@property (nonatomic) long long triggerCount;
@property (nonatomic) BOOL neewRetryShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEFeedTabJumpGuideControllerDOUYINLiteAdapterClass;

- (id)referString;
- (id)currentAwemeModel;
- (BOOL)isAppear;
- (void)setIsAppear:(BOOL)arg0;
- (BOOL)isMaskViewShowing;
- (void)addNotification;
- (void)onAwemeDiggNotification:(id)arg0;
- (void)onAddCommentNotification:(id)arg0;
- (void)videoPlayer:(id)arg0 updatePlayTime:(double)arg1 totalTime:(double)arg2;
- (id)strategyModel;
- (void)setStrategyModel:(id)arg0;
- (void)onVideoFavoriteNotification:(id)arg0;
- (void)setCurrentAwemeModel:(id)arg0;
- (void)beginRefresh;
- (void)initialFetchCompletion:(id)arg0 error:(id)arg1;
- (void)loadMoreCompletion:(id)arg0 error:(id)arg1 isFooterRefreshing:(BOOL)arg2;
- (void)refreshCompletion:(id)arg0 error:(id)arg1 needAnimation:(BOOL)arg2;
- (void)scrollViewDidScrollEndWithActive;
- (void)onPlayInteractionPureModeChangeNotification:(id)arg0;
- (void)setWillDisplayIndexPath:(id)arg0;
- (id)willDisplayIndexPath;
- (id)didEndDisplayIndexPath;
- (void)setDidEndDisplayIndexPath:(id)arg0;
- (void)setIsMaskViewShowing:(BOOL)arg0;
- (void)trackTabJumpGuideShow;
- (void)setupSettingsConfig;
- (void)landingTabWithModel:(id)arg0;
- (void)removeTabJumpGuideForCurrentCell;
- (void)setupTabJumpGuideIfNeeded;
- (void)removeTabJumpGuideViewWithCell:(id)arg0;
- (BOOL)checkAwemeModel:(id)arg0;
- (id)checkJumpTabInfoModel:(id)arg0 error:(id *)arg1;
- (void)setCurrentJumpTabInfoModel:(id)arg0;
- (void)setCurrentTabStrategy:(id)arg0;
- (id)currentJumpTabInfoModel;
- (id)currentTabStrategy;
- (BOOL)checkFrequencyControlForGuideView;
- (void)setCurrentTriggerManager:(id)arg0;
- (void)triggerEventWithEventType:(long long)arg0;
- (void)showTabJumpGuideViewIfNeededWithModel:(id)arg0;
- (void)setNeewRetryShow:(BOOL)arg0;
- (void)setCurrentInteractionPureMode:(BOOL)arg0;
- (id)createJumpToMallTrackParamsWithMethod:(id)arg0;
- (id)aAWEFeedTabJumpGuideControllerDOUYINLiteAdapter;
- (void)setSupportTabIDList:(id)arg0;
- (id)supportTabIDList;
- (void)onVideoShareNotification:(id)arg0;
- (void)onAnchorToMallNotification:(id)arg0;
- (void)onAnchorToPOINotification:(id)arg0;
- (void)onFeedTabChangedNotification:(id)arg0;
- (void)onXTabTabChangedNotification:(id)arg0;
- (void)onTabBarChangedNotification:(id)arg0;
- (id)schemaWithPath:(id)arg0 schema:(id)arg1 byAddingQueryDict:(id)arg2;
- (id)currentTriggerManager;
- (BOOL)currentInteractionPureMode;
- (void)showFeedTabJumpGuideButton:(id)arg0;
- (void)recordGuideShow;
- (void)handleJumpModel:(id)arg0;
- (void)trackTabJumpGuideButtonClick;
- (void)nearbyTrackEvent:(id)arg0;
- (void)trackProductEntranceShowToMallWithControllerTrackParam:(id)arg0;
- (BOOL)neewRetryShow;
- (void)lifeClientAITriggerIfNeededWithProgress:(long long)arg0;
- (void)handleUpdateLastShowTimestampWithTabID:(id)arg0;
- (void)setTriggerCount:(long long)arg0;
- (void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (void)tableView:(id)arg0 didEndDisplayingCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)setStorageManager:(id)arg0;
- (void)resetData;
- (long long)triggerCount;
- (void)viewDidAppear;
- (id)storageManager;
- (void)viewDidLoad;
- (BOOL)isRefreshing;
- (void)setIsRefreshing:(BOOL)arg0;
- (void)viewWillDisappear;

@end
