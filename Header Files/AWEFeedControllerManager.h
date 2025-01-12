//
//     Generated by private class-dump
//

@class NSString;

@interface AWEFeedControllerManager : AWEShellControllerManager <AWEFeedControllerProtocol> {
    BOOL _controllerManagerEnable;
    BOOL _controllerManagerEnablePreLoadVideos;
    BOOL _controllerManagerEnableLoadingView;
    BOOL _controllerManagerEnableLoginAndEmptyView;
    BOOL _controllerManagerEnableDebugView;
    BOOL _controllerManagerEnableLearningTab;
    BOOL _controllerManagerEnableTableViewMonitoring;
    BOOL _controllerManagerEnableAnitiaddict;
    BOOL _controllerManagerEnableInterestSelect;
    BOOL _controllerManagerEnableEcommerce;
    BOOL _controllerManagerEnableSearchBigEntrance;
    BOOL _controllerManagerEnableGlobalVision;
    NSString *_referString;
    long long _feedType;
}

@property (retain, nonatomic) NSString *referString;
@property (nonatomic) long long feedType;
@property (nonatomic) BOOL controllerManagerEnable;
@property (nonatomic) BOOL controllerManagerEnablePreLoadVideos;
@property (nonatomic) BOOL controllerManagerEnableLoadingView;
@property (nonatomic) BOOL controllerManagerEnableLoginAndEmptyView;
@property (nonatomic) BOOL controllerManagerEnableDebugView;
@property (nonatomic) BOOL controllerManagerEnableLearningTab;
@property (nonatomic) BOOL controllerManagerEnableTableViewMonitoring;
@property (nonatomic) BOOL controllerManagerEnableAnitiaddict;
@property (nonatomic) BOOL controllerManagerEnableInterestSelect;
@property (nonatomic) BOOL controllerManagerEnableEcommerce;
@property (nonatomic) BOOL controllerManagerEnableSearchBigEntrance;
@property (nonatomic) BOOL controllerManagerEnableGlobalVision;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEFeedModuleServiceDOUYINHTSAdaperClass;
+ (Class)aAWEFeedModuleServiceDOUYINLiteAdaperClass;

- (id)referString;
- (void)setReferString:(id)arg0;
- (id)classNameArray;
- (void)clickNoticePush;
- (void)setAccessoriesHidden:(BOOL)arg0;
- (void)didScrollToConcernWillShowGuideIfNeeded:(BOOL)arg0;
- (void)holdStopPlayer;
- (void)dragWithProgress:(double)arg0;
- (void)dragCancellation;
- (void)updateUIWithLiveExsit:(BOOL)arg0;
- (id)aAWEPadModuleAdapter;
- (void)insertVideosToFamiliarFeedWithAweme:(id)arg0;
- (void)willRefresh;
- (void)configureCell:(id)arg0 withModel:(id)arg1 atIndexPath:(id)arg2;
- (void)manualRefreshCompletionMethod;
- (void)videoControllerWillStartNextLoop:(id)arg0;
- (void)videoBufferingPrepared:(id)arg0;
- (void)modernVideoBufferingPrepared:(id)arg0;
- (void)videoCacheEndedWhenPlay:(id)arg0;
- (void)videoBufferLoadEnough:(id)arg0;
- (void)videoBufferLoadNotEnough:(id)arg0;
- (void)videoPlayer:(id)arg0 updatePlayTime:(double)arg1 totalTime:(double)arg2;
- (void)publishProgressViewBeginPublish;
- (void)publishProgressViewEndPublish;
- (void)vcdTopBubbleDidShow;
- (void)beforInitialFetch;
- (void)beginInitialFetch;
- (void)beginLoadMore;
- (void)beginRefresh;
- (void)initialFetchCompletion:(id)arg0 error:(id)arg1;
- (void)loadMoreCompletion:(id)arg0 error:(id)arg1 isFooterRefreshing:(BOOL)arg2;
- (void)refreshCompletion:(id)arg0 error:(id)arg1 needAnimation:(BOOL)arg2;
- (void)willInitialFetch;
- (void)willLoadMore:(long long)arg0;
- (void)relatedPanelDidDismiss;
- (void)fetchConcernData:(BOOL)arg0 videoCompletion:(id /* block */)arg1;
- (void)fetchECommerceData:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)onDataSourceReload;
- (void)viewDidLoadBeforeTableviewSetup;
- (void)viewDidLoadAfterTableviewSetup;
- (void)tableView:(id)arg0 didEndDisplayingCellBeforeReset:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)willConfigureCell:(id)arg0 withModel:(id)arg1 atIndexPath:(id)arg2;
- (void)configureCellBrforeSetParentVC:(id)arg0 withModel:(id)arg1 atIndexPath:(id)arg2;
- (void)configureCellAfterSetParentVC:(id)arg0 withModel:(id)arg1 atIndexPath:(id)arg2;
- (void)scrollViewDidScrollEndWithNotActive;
- (void)scrollViewDidScrollEndWithActive;
- (void)currentPlayVideoDidChangePlayState:(long long)arg0;
- (void)transitionDidStartTransitionWithContext:(id)arg0;
- (void)transitionDidPopDoneTransitionWithContext:(id)arg0;
- (void)transitionPerformCustomActionForSlideDirection:(unsigned long long)arg0 gestureRecognizer:(id)arg1;
- (void)transitionDestinatedViewControllerForSlideDirection:(unsigned long long)arg0 gestureRecognizer:(id)arg1;
- (void)feedPreloadManagerAllTaskCompleted:(id)arg0;
- (void)feedPreloadManager:(id)arg0 didCompleteTaskWithModel:(id)arg1 error:(id)arg2;
- (void)willEnterUserProfileViewController;
- (void)onAwemeDeleted:(id)arg0 isLiveFinish:(BOOL)arg1 isDislike:(BOOL)arg2 index:(unsigned long long)arg3 isLiveEnded:(BOOL)arg4;
- (void)insertAwemeWithUploadSuccess:(id)arg0;
- (void)insertVideosToFeedFromHotLaunchWithAwemeIDs:(id)arg0 extraInfo:(id)arg1;
- (void)updateUIWhenLiveSkylightOpen:(BOOL)arg0;
- (id)aAWEFeedModuleServiceDOUYINHTSAdaper;
- (id)getClassArray;
- (id)aAWEFeedModuleServiceDOUYINLiteAdaper;
- (BOOL)controllerManagerEnableLoginAndEmptyView;
- (BOOL)controllerManagerEnablePreLoadVideos;
- (BOOL)controllerManagerEnableLoadingView;
- (BOOL)controllerManagerEnableLearningTab;
- (BOOL)controllerManagerEnableSearchLongBarEntrance;
- (BOOL)controllerManagerEnableGlobalVision;
- (id)hotOnlyControllers;
- (id)concernOnlyControllers;
- (id)familiarOnlyControllers;
- (id)nearbyOnlyControllers;
- (id)guestFollowOnlyControllers;
- (BOOL)controllerManagerEnableTimorPreload;
- (BOOL)controllerManagerEnableAnitiaddict;
- (BOOL)controllerManagerEnable;
- (BOOL)controllerManagerEnableDebugView;
- (void)setControllerManagerEnable:(BOOL)arg0;
- (void)setControllerManagerEnablePreLoadVideos:(BOOL)arg0;
- (void)setControllerManagerEnableLoadingView:(BOOL)arg0;
- (void)setControllerManagerEnableLoginAndEmptyView:(BOOL)arg0;
- (void)setControllerManagerEnableDebugView:(BOOL)arg0;
- (void)setControllerManagerEnableLearningTab:(BOOL)arg0;
- (BOOL)controllerManagerEnableTableViewMonitoring;
- (void)setControllerManagerEnableTableViewMonitoring:(BOOL)arg0;
- (void)setControllerManagerEnableAnitiaddict:(BOOL)arg0;
- (BOOL)controllerManagerEnableInterestSelect;
- (void)setControllerManagerEnableInterestSelect:(BOOL)arg0;
- (BOOL)controllerManagerEnableEcommerce;
- (void)setControllerManagerEnableEcommerce:(BOOL)arg0;
- (BOOL)controllerManagerEnableSearchBigEntrance;
- (void)setControllerManagerEnableSearchBigEntrance:(BOOL)arg0;
- (void)setControllerManagerEnableGlobalVision:(BOOL)arg0;
- (void)setScrollEnabled:(BOOL)arg0;
- (long long)feedType;
- (void)cellForRowAtIndexPath:(id)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (void)setFeedType:(long long)arg0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint { double x0; double x1; })arg1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)arg2;
- (void)stop;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)scrollViewDidEndScrollingAnimation:(id)arg0;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)viewWillAppear:(BOOL)arg0;
- (void)play;
- (void)pause;

@end
