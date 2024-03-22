//
//     Generated by private class-dump
//

@class NSDictionary, IESLiveGuideDotManager, IESLiveDI, HTSLive4LayerContainerView, IESLiveEnterRoomAisle, IESLiveEnterRoomTraceContext, NSString, IESLiveSEIReceiver, IESLiveComponentSyncManager, IESLiveSafetyCheckManager, IESLiveInteractServiceImpl, NSMutableDictionary, HTSEventContext, IESLiveImageView, IESLiveVideoPlayer, IESLiveRevenueActionsAdapterHandler, UIView, IESLiveAccessibilityCombination, IESLiveMonitorContext, HTSLiveStreamPlayer, HTSLiveDetailRouterImpl, IESLiveComponentContext, NSDate, HTSLiveAudienceStore, IESLiveRoomPopMananger;
@protocol IESLiveAWEFeedModuleService, IESLiveMTScreenCastService, IESLiveMonitor, HTSLivePluginLayoutMachineProvider, IESLiveRoomLuckyCatTimingActions, IESLiveReference, IESLiveFullLinkMonitor, HTSLiveAudienceActions, IESLiveStrategyService, IESLivePromotionFpsService, HTSLiveAudienceViewControllerDelegate, IESLivePayWallFreeTrialProvider, IESLiveComponentBootLoaderProtocol, IESLiveCustomConfig, IESLiveGeneralService, IESLiveGeckoService, IESLiveHighlightContainerSyncDataStrategyProvider, IESLivePerfSampler, IESLivePushService, IESLiveRoomPopService, HTSLiveNetworkStatusActions, IESLiveFinishViewFactory, IESLiveAudienceRoomAwareness, IESLiveKiteLogTracker, IESLiveDynamicBackgroundUpdaterService, IESLiveMessageActionCreatorProtocol, HTSLiveAppLifeCycleActions, IESLiveRoomNavigationService;

@interface HTSLiveAudienceViewController : UIViewController <HTSLiveStreamPlayerDelegate, IESLiveVideoPlayerDelegate, IESLiveAudienceReaction, IESLivePerfMonitorStreamProvider, IESLiveComponentContextProvider, IESLiveTrackContextProvider, IESLiveControllerLifeCycleProtocol, IESLiveStrategyEventDispatcherObserver, IESLiveComponentLifeCycleNotifier, IESLiveBackgroundMaskProvider, IESLiveComponentLoadFinish, IESLiveUGGuideAction, IESLiveRoomCellControllerProtocol> {
    BOOL _needTrackShowEvent;
    BOOL _isFirstFramePlay;
    BOOL _paused;
    BOOL _closed;
    BOOL _canPause;
    BOOL _clickedClose;
    BOOL _closeActionEnable;
    BOOL _isExitGuideShown;
    BOOL _didMonitorEnterRoom;
    BOOL _didMonitorEnterRoomFull;
    BOOL _didMonitorEnterRoomTracing;
    BOOL _didMonitorEnter;
    BOOL _didEnterRoomSuccess;
    BOOL _didLivePlaySuccess;
    BOOL _didTrackLoadSuccessEvent;
    BOOL _hiddenStatusBarOnPortrait;
    BOOL _hasAppeared;
    BOOL _isViewAppearing;
    BOOL _viewDidShow;
    BOOL _didLoadComponents;
    BOOL _didExcuteCloseHandler;
    BOOL _disableResumeCurrentLive;
    BOOL _hasReleaseAudience;
    BOOL _isCancelLoadBySlide;
    BOOL _isVCWillClose;
    BOOL _isPreLoading;
    BOOL _isProbingStream;
    BOOL _delayLoadComponent;
    BOOL _isAllComponentMountFinish;
    BOOL _isAllComponentLoadFinish;
    BOOL _playReport;
    BOOL _carouselDisablePlayReport;
    BOOL _isLoadedVSFirstFrame;
    BOOL _isRoomDidFirstFrame;
    BOOL _optimizeGeckoSync;
    int _runloopCount;
    NSString *_preSetJumpSchema;
    IESLiveEnterRoomAisle *_roomAisle;
    HTSLiveAudienceStore *_store;
    HTSLive4LayerContainerView *_containerView;
    IESLiveDI *_roomDI;
    id<HTSLiveAudienceViewControllerDelegate> _delegate;
    id /* block */ _afterLaunch;
    id /* block */ _afterDidLoad;
    id /* block */ _afterDidLoadBySlide;
    HTSEventContext *_pageContext;
    HTSEventContext *_eventContext;
    IESLiveEnterRoomTraceContext *_enterContext;
    id<IESLiveDynamicBackgroundUpdaterService> _backgroundUpdater;
    HTSEventContext *_streamContext;
    id<IESLiveComponentBootLoaderProtocol> _componentLoader;
    IESLiveInteractServiceImpl *_interactService;
    IESLiveRevenueActionsAdapterHandler *_revenueActionsAdapterHandler;
    HTSLiveStreamPlayer *_streamPlayer;
    IESLiveVideoPlayer *_videoPlayer;
    double _enterRoomTime;
    NSMutableDictionary *_observerDict;
    IESLiveGuideDotManager *_guideDotManager;
    IESLiveRoomPopMananger *_popManager;
    HTSLiveDetailRouterImpl *_router;
    long long _originalStyle;
    IESLiveSafetyCheckManager *_safeManager;
    IESLiveAccessibilityCombination *_accessibilityCombination;
    NSString *_curTrackedPlayCameraID;
    id<IESLiveMTScreenCastService> _screenCastService;
    id<IESLiveRoomPopService> _roomPopService;
    id<IESLiveCustomConfig> _customConfig;
    id<IESLivePerfSampler> _perfSampler;
    id<IESLiveFullLinkMonitor> _fullLinkMonitor;
    id<HTSLiveAudienceActions> _audienceActionCreator;
    id<IESLiveRoomLuckyCatTimingActions> _luckyCatTimingActionCreator;
    id<HTSLiveAppLifeCycleActions> _appLifeCycleActionCreator;
    id<HTSLivePluginLayoutMachineProvider> _pluginLayoutMachine;
    id<IESLiveMonitor> _monitor;
    id<IESLiveFinishViewFactory> _finishControllerFactory;
    id<IESLiveAudienceRoomAwareness> _audienceAwareness;
    id<IESLivePushService> _pushService;
    id<IESLiveReference> _reference;
    id<IESLivePayWallFreeTrialProvider> _trialGuarder;
    id<IESLiveMessageActionCreatorProtocol> _messageActionCreator;
    id<IESLiveRoomNavigationService> _navigationMananger;
    id<IESLiveAWEFeedModuleService> _feedModuleService;
    id<IESLiveHighlightContainerSyncDataStrategyProvider> _highlightStrategyProvider;
    IESLiveSEIReceiver *_acqSeiReceiver;
    NSDate *_livePlayerFisrtFrameForVC;
    id<HTSLiveNetworkStatusActions> _networkDispatcher;
    id<IESLiveKiteLogTracker> _kitelogTracker;
    id<IESLiveStrategyService> _strategyService;
    IESLiveComponentContext *_componentContext;
    id<IESLiveGeneralService> _generalServiceManager;
    NSDictionary *_firstFrameInfo;
    id<IESLivePromotionFpsService> _promotionFps;
    UIView *_playerViceView;
    UIView *_backgroundMaskView;
    UIView *_landscapeInnerLiveBanner;
    IESLiveImageView *_backSlipImageView;
    long long _enteredRoomOrientation;
    long long _currentComponentLoadLevel;
    NSString *_preCameraID;
    id<IESLiveGeckoService> _gecko;
    long long _audienceStartStayTime;
    long long _audienceEndStayTime;
    IESLiveComponentSyncManager *_componentSyncManager;
    NSMutableDictionary *_exitTraceMetric;
    double _exitLastRecordTime;
    double _exitTotalDuration;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _screenEdgeInsets;
}

@property (retain, nonatomic) IESLiveMonitorContext *monitorContext;
@property (retain, nonatomic) IESLiveDI *roomDI;
@property (retain, nonatomic) HTSLiveAudienceStore *store;
@property (retain, nonatomic) HTSEventContext *streamContext;
@property (retain, nonatomic) HTSEventContext *pageContext;
@property (retain, nonatomic) id<IESLiveComponentBootLoaderProtocol> componentLoader;
@property (weak, nonatomic) HTSLive4LayerContainerView *containerView;
@property (retain, nonatomic) IESLiveInteractServiceImpl *interactService;
@property (retain, nonatomic) IESLiveRevenueActionsAdapterHandler *revenueActionsAdapterHandler;
@property (retain, nonatomic) HTSLiveStreamPlayer *streamPlayer;
@property (retain, nonatomic) IESLiveVideoPlayer *videoPlayer;
@property (nonatomic) double enterRoomTime;
@property (retain, nonatomic) NSMutableDictionary *observerDict;
@property (nonatomic) BOOL paused;
@property (nonatomic) BOOL closed;
@property (nonatomic) BOOL canPause;
@property (nonatomic) BOOL clickedClose;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } screenEdgeInsets;
@property (nonatomic) BOOL closeActionEnable;
@property (nonatomic) BOOL isExitGuideShown;
@property (retain, nonatomic) IESLiveGuideDotManager *guideDotManager;
@property (retain, nonatomic) IESLiveRoomPopMananger *popManager;
@property (retain, nonatomic) HTSLiveDetailRouterImpl *router;
@property (nonatomic) long long originalStyle;
@property (retain, nonatomic) IESLiveSafetyCheckManager *safeManager;
@property (retain, nonatomic) IESLiveAccessibilityCombination *accessibilityCombination;
@property (nonatomic) BOOL didMonitorEnterRoom;
@property (nonatomic) BOOL didMonitorEnterRoomFull;
@property (nonatomic) BOOL didMonitorEnterRoomTracing;
@property (nonatomic) BOOL didMonitorEnter;
@property (nonatomic) BOOL didEnterRoomSuccess;
@property (nonatomic) BOOL didLivePlaySuccess;
@property (nonatomic) BOOL didTrackLoadSuccessEvent;
@property (nonatomic) BOOL hiddenStatusBarOnPortrait;
@property (nonatomic) BOOL hasAppeared;
@property (nonatomic) BOOL isViewAppearing;
@property (nonatomic) BOOL viewDidShow;
@property (nonatomic) BOOL didLoadComponents;
@property (nonatomic) BOOL didExcuteCloseHandler;
@property (nonatomic) BOOL disableResumeCurrentLive;
@property (nonatomic) BOOL hasReleaseAudience;
@property (nonatomic) BOOL isCancelLoadBySlide;
@property BOOL isFirstFramePlay;
@property (retain, nonatomic) NSString *curTrackedPlayCameraID;
@property (retain, nonatomic) id<IESLiveMTScreenCastService> screenCastService;
@property (retain, nonatomic) id<IESLiveRoomPopService> roomPopService;
@property (retain, nonatomic) id<IESLiveCustomConfig> customConfig;
@property (retain, nonatomic) id<IESLivePerfSampler> perfSampler;
@property (retain, nonatomic) id<IESLiveFullLinkMonitor> fullLinkMonitor;
@property (retain, nonatomic) id<HTSLiveAudienceActions> audienceActionCreator;
@property (retain, nonatomic) id<IESLiveRoomLuckyCatTimingActions> luckyCatTimingActionCreator;
@property (retain, nonatomic) id<HTSLiveAppLifeCycleActions> appLifeCycleActionCreator;
@property (retain, nonatomic) id<HTSLivePluginLayoutMachineProvider> pluginLayoutMachine;
@property (retain, nonatomic) id<IESLiveMonitor> monitor;
@property (retain, nonatomic) id<IESLiveFinishViewFactory> finishControllerFactory;
@property (retain, nonatomic) id<IESLiveAudienceRoomAwareness> audienceAwareness;
@property (retain, nonatomic) id<IESLivePushService> pushService;
@property (retain, nonatomic) id<IESLiveReference> reference;
@property (retain, nonatomic) id<IESLivePayWallFreeTrialProvider> trialGuarder;
@property (retain, nonatomic) id<IESLiveMessageActionCreatorProtocol> messageActionCreator;
@property (retain, nonatomic) id<IESLiveRoomNavigationService> navigationMananger;
@property (retain, nonatomic) id<IESLiveAWEFeedModuleService> feedModuleService;
@property (retain, nonatomic) id<IESLiveHighlightContainerSyncDataStrategyProvider> highlightStrategyProvider;
@property (retain, nonatomic) IESLiveSEIReceiver *acqSeiReceiver;
@property (retain, nonatomic) NSDate *livePlayerFisrtFrameForVC;
@property (retain, nonatomic) id<HTSLiveNetworkStatusActions> networkDispatcher;
@property (retain, nonatomic) id<IESLiveKiteLogTracker> kitelogTracker;
@property (retain, nonatomic) id<IESLiveStrategyService> strategyService;
@property (readonly, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) id<IESLiveGeneralService> generalServiceManager;
@property (copy, nonatomic) NSDictionary *firstFrameInfo;
@property (retain, nonatomic) id<IESLivePromotionFpsService> promotionFps;
@property (nonatomic) BOOL isVCWillClose;
@property (nonatomic) BOOL isPreLoading;
@property (nonatomic) BOOL isProbingStream;
@property (nonatomic) BOOL delayLoadComponent;
@property (retain, nonatomic) UIView *playerViceView;
@property (retain, nonatomic) UIView *backgroundMaskView;
@property (retain, nonatomic) UIView *landscapeInnerLiveBanner;
@property (retain, nonatomic) IESLiveImageView *backSlipImageView;
@property (nonatomic) BOOL isAllComponentMountFinish;
@property (nonatomic) BOOL isAllComponentLoadFinish;
@property (nonatomic) long long enteredRoomOrientation;
@property (nonatomic) int runloopCount;
@property (nonatomic) long long currentComponentLoadLevel;
@property (nonatomic) BOOL playReport;
@property (nonatomic) BOOL carouselDisablePlayReport;
@property (nonatomic) BOOL isLoadedVSFirstFrame;
@property (nonatomic) BOOL isRoomDidFirstFrame;
@property (copy, nonatomic) NSString *preCameraID;
@property (retain, nonatomic) id<IESLiveGeckoService> gecko;
@property (nonatomic) BOOL optimizeGeckoSync;
@property (nonatomic) long long audienceStartStayTime;
@property (nonatomic) long long audienceEndStayTime;
@property (retain, nonatomic) IESLiveComponentSyncManager *componentSyncManager;
@property (retain, nonatomic) NSMutableDictionary *exitTraceMetric;
@property (nonatomic) double exitLastRecordTime;
@property (nonatomic) double exitTotalDuration;
@property (retain, nonatomic) IESLiveEnterRoomAisle *roomAisle;
@property (weak, nonatomic) id<HTSLiveAudienceViewControllerDelegate> delegate;
@property (copy, nonatomic) id /* block */ afterLaunch;
@property (copy, nonatomic) id /* block */ afterDidLoad;
@property (copy, nonatomic) id /* block */ afterDidLoadBySlide;
@property (retain, nonatomic) HTSEventContext *eventContext;
@property (retain, nonatomic) IESLiveEnterRoomTraceContext *enterContext;
@property (retain, nonatomic) id<IESLiveDynamicBackgroundUpdaterService> backgroundUpdater;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL needTrackShowEvent;
@property (copy, nonatomic) NSString *preSetJumpSchema;

- (void)player:(id)arg0 loadStateDidChange:(unsigned long long)arg1;
- (void)player:(id)arg0 playbackStateDidChange:(unsigned long long)arg1;
- (void)player:(id)arg0 reportURL:(id)arg1 monitorStateInfo:(id)arg2;
- (id)customConfig;
- (void)setCustomConfig:(id)arg0;
- (id)componentContext;
- (void)didSetAttachingDIContext;
- (void)videoPlayerDidLoadFirstFrame:(id)arg0;
- (void)onOrientationTransitionBegin:(long long)arg0;
- (BOOL)forceCloseCurrentRoom;
- (void)setIsViewAppearing:(BOOL)arg0;
- (void)setEventContext:(id)arg0;
- (id)monitorContext;
- (void)setMonitorContext:(id)arg0;
- (id)topViewControllerForController:(id)arg0;
- (id)gecko;
- (void)setGecko:(id)arg0;
- (void)logEvent:(id)arg0 params:(id)arg1;
- (id)fullLinkMonitor;
- (void)setFullLinkMonitor:(id)arg0;
- (id)previewFps;
- (void)didClickCloseButton;
- (void)onNetworkStatusChanged:(id)arg0;
- (void)configBTMTracker;
- (id)enterContext;
- (id)feedModuleService;
- (void)setFeedModuleService:(id)arg0;
- (BOOL)viewDidShow;
- (BOOL)hasTopLeftLiveEntrance;
- (id)roomAisle;
- (void)setRoomAisle:(id)arg0;
- (id /* block */)afterDidLoad;
- (void)addBackGesture;
- (id)componentLoader;
- (void)setComponentLoader:(id)arg0;
- (BOOL)shouldAutorotateIniPadARMode;
- (id)roomDI;
- (void)setRoomDI:(id)arg0;
- (void)setAfterDidLoad:(id /* block */)arg0;
- (void)setEnterContext:(id)arg0;
- (BOOL)processExitRoomWithContext:(id)arg0;
- (BOOL)willExitRoomWithContext:(id)arg0;
- (void)preloadWithRoom:(id)arg0 eventContext:(id)arg1 callTrace:(id)arg2;
- (id)streamPlayer;
- (void)cancelPreloadStreamWithCallTrace:(id)arg0;
- (id)getPreRoomOrientaion;
- (void)setStreamPlayer:(id)arg0;
- (id)streamPlayerGetCurrentRoomModel;
- (void)streamPlayerDidReadyToRender:(id)arg0;
- (void)streamPlayer:(id)arg0 didReceiveError:(id)arg1;
- (void)didChangeCamera;
- (void)player:(id)arg0 measureStageTimeInfo:(id)arg1;
- (id)audienceStoreLoadState;
- (void)unmutePlayerIfNeeded;
- (void)setMessageActionCreator:(id)arg0;
- (id)messageActionCreator;
- (id)perfSampler;
- (void)setPerfSampler:(id)arg0;
- (id)audienceActionCreator;
- (void)p_closeAllRoomInDealloc:(BOOL)arg0 preferOptions:(id)arg1;
- (void)prepareForClose:(unsigned long long)arg0;
- (void)prepareForReuse:(BOOL)arg0 callTrace:(id)arg1;
- (void)loadNewInstance;
- (void)setBackgroundUpdater:(id)arg0;
- (id)finishControllerFactory;
- (void)setFinishControllerFactory:(id)arg0;
- (void)setAudienceActionCreator:(id)arg0;
- (void)didForceUpdateToOrientation:(long long)arg0;
- (id)strategyService;
- (void)setStrategyService:(id)arg0;
- (void)clickCloseButton:(id)arg0;
- (void)forceCloseRoomByMSeq;
- (id)screenRatioForTrack;
- (id)screenAlignmentForTrack;
- (void)eventDispatcherWillDispatchValue:(id)arg0 withFactorKey:(id)arg1;
- (id)playerViceView;
- (void)setPlayerViceView:(id)arg0;
- (void)uploadFailEnterRoomEvent:(id)arg0;
- (void)cancelPreloadStream;
- (void)setGuideShownFlag;
- (void)executeRoomExitAction;
- (void)setViewDidShow:(BOOL)arg0;
- (void)clickContinueButton:(id)arg0;
- (BOOL)isPreLoading;
- (void)setIsPreLoading:(BOOL)arg0;
- (id)safeManager;
- (void)setSafeManager:(id)arg0;
- (id)pushService;
- (BOOL)isFromAd;
- (int)runloopCount;
- (void)setRunloopCount:(int)arg0;
- (double)enterRoomTime;
- (void)setEnterRoomTime:(double)arg0;
- (void)didUpdateRoom:(id)arg0;
- (void)componentCreateDidFinishForLevel:(long long)arg0;
- (void)componentMountDidFinishForLevel:(long long)arg0;
- (void)componentAppearDidFinishForLevel:(long long)arg0;
- (void)componentFirstFrameDidStartLoad;
- (void)componentFirstFrameDidFinishWithCost:(double)arg0;
- (void)removeStrategyObserver;
- (void)registerStrategyObserver;
- (id)liveRoomBackgroundMask;
- (void)p_checkSecurity;
- (id)currentComponentContext;
- (void)didLeaveAudienceRoom;
- (id)audienceAwareness;
- (void)setAudienceAwareness:(id)arg0;
- (id)currentTrackContext;
- (BOOL)isHeadSetPlugging;
- (float)getSystemVolume;
- (BOOL)allowEnterSameRoomID;
- (BOOL)p_enableStoreVC;
- (id)generalServiceManager;
- (void)configBTMTrackerV2;
- (void)resetHMDFilter;
- (void)setInteractService:(id)arg0;
- (void)setGeneralServiceManager:(id)arg0;
- (void)setupHighlightManager;
- (void)setPluginLayoutMachine:(id)arg0;
- (id)pluginLayoutMachine;
- (void)setRevenueActionsAdapterHandler:(id)arg0;
- (void)setHighlightStrategyProvider:(id)arg0;
- (id)highlightStrategyProvider;
- (void)setIsVCWillClose:(BOOL)arg0;
- (BOOL)isVCWillClose;
- (id)interactService;
- (id)revenueActionsAdapterHandler;
- (id)initWithStore:(id)arg0 player:(id)arg1 context:(id)arg2 componentContext:(id)arg3 parentDIContext:(id)arg4;
- (void)becomeNewInstanceByReplaceStore:(id)arg0 context:(id)arg1 parentDIContext:(id)arg2;
- (void)updateStatusBarHiddenOnPortrait:(BOOL)arg0;
- (void)onOrientationTransitionEnd:(long long)arg0;
- (void)setDidLoadComponents:(BOOL)arg0;
- (void)preloadDidupdateRoom:(id)arg0;
- (void)loadEcomGoodsParams:(id)arg0;
- (void)traceSpan:(unsigned long long)arg0 isStart:(BOOL)arg1 error:(id)arg2;
- (BOOL)didLoadComponents;
- (void)overValiteWatchTime;
- (void)clickPauseButton:(id)arg0;
- (BOOL)firstFrameCanReport;
- (BOOL)isFirstFramePlay;
- (double)streamFirstFrameDuration;
- (void)trackFirstFrameFail:(id)arg0 extraParam:(id)arg1;
- (void)trackerSlideLoadingTime:(id)arg0;
- (void)trackEnterVCSuccess;
- (void)trackRecordCapture:(BOOL)arg0;
- (void)trackFirstFrameFailByReuseWithExtraParam:(id)arg0 isSwipe:(BOOL)arg1;
- (void)trackFirstFrameFailByTerminateWithExtraParam:(id)arg0;
- (void)trackStreamFirstFrameDurationWithExtraParam:(id)arg0;
- (void)traceEnterFinishWithType:(unsigned long long)arg0 didMonitorEnter:(BOOL)arg1;
- (void)clearReportRecord;
- (BOOL)hasReleaseAudience;
- (id)screenCastService;
- (void)clearEventContextInfo;
- (void)clearLiveCycleContext;
- (void)cleanXTabGuideRoomsCaheInfo;
- (void)addAudienceStoreObservers;
- (BOOL)componentMountIsFinishForLevel;
- (void)dealWithContext:(id)arg0;
- (void)dealWithPlayer:(id)arg0 context:(id)arg1;
- (void)generateFirstFrameInfo;
- (id)acqSeiReceiver;
- (void)setAcqSeiReceiver:(id)arg0;
- (void)setLivePlayerFisrtFrameForVC:(id)arg0;
- (void)setStreamContext:(id)arg0;
- (id)enterRoomTypeString;
- (void)configStreamPlayerSupportFrameAbnormalCheckBlock;
- (void)generatePlayerInfoWithContext:(id)arg0;
- (void)dealPaidLiveFreeTrial;
- (void)setTrialGuarder:(id)arg0;
- (void)bindTrialMgr;
- (void)liveDesktopGuideConfig;
- (void)resetPerfSampler;
- (void)setOriginalStyle:(long long)arg0;
- (void)streamPlayerFirstFrameTrack;
- (void)addLiveRoomBackgroundMask;
- (void)loadOtherUIAsync;
- (void)loadRouter;
- (void)loadNavigationManangerIfNeeded;
- (BOOL)canUseLiveTask;
- (void)loadAccessibilityCombination;
- (void)loadMessageClient;
- (void)setupGuideDot;
- (void)p_tryOpenPresetUrl;
- (void)configBcm;
- (id)backgroundUpdater;
- (long long)currentComponentLoadLevel;
- (BOOL)optimizeGeckoSync;
- (void)p_handleSmoothSwitchStrategy:(id)arg0;
- (void)setIsRoomDidFirstFrame:(BOOL)arg0;
- (id)navigationMananger;
- (void)removeViceViewIfNeeded;
- (id)promotionFps;
- (void)loadOtherUIOptimize;
- (void)setAudienceStartStayTime:(long long)arg0;
- (void)addAppearTracker;
- (void)enableCloseAction;
- (void)renderStartForTraceEvent:(unsigned long long)arg0;
- (BOOL)p_enableRoomPopToShowPipGuide;
- (id)popManager;
- (void)setClickedClose:(BOOL)arg0;
- (void)setCurrentComponentLoadLevel:(long long)arg0;
- (void)loadComponentStrategyMgr;
- (void)p_prepareForReuse:(BOOL)arg0 callTrace:(id)arg1;
- (void)setIsProbingStream:(BOOL)arg0;
- (BOOL)isProbingStream;
- (void)probeStreamWithRoom:(id)arg0;
- (void)trackScrollBegin:(id)arg0;
- (void)setIsCancelLoadBySlide:(BOOL)arg0;
- (void)setNavigationMananger:(id)arg0;
- (id)roomPopService;
- (id)trialGuarder;
- (id)accessibilityCombination;
- (void)setGuideDotManager:(id)arg0;
- (id)guideDotManager;
- (BOOL)closeRoomWithType:(unsigned long long)arg0;
- (BOOL)askForForceClose;
- (void)pauseRoom;
- (BOOL)__unwindToRoom:(BOOL)arg0;
- (void)startPlayIfNeededWithCallTrace:(id)arg0;
- (void)loadIdleComponentsIfNeeded;
- (void)setupViceViewIfNeeded;
- (void)preShowPlayerViewIfNeeded:(id)arg0;
- (void)setIsAllComponentMountFinish:(BOOL)arg0;
- (void)setIsAllComponentLoadFinish:(BOOL)arg0;
- (void)componentLoaderInstallWithPre:(BOOL)arg0;
- (BOOL)clickedClose;
- (void)recordAudienceEndStayTime;
- (void)setHasReleaseAudience:(BOOL)arg0;
- (void)_notifyViewDisappear;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })viceViewRenderingArea;
- (id)observerDict;
- (void)_roomWillEnterForeground:(id)arg0;
- (void)_roomDidEnterBackground:(id)arg0;
- (void)_roomDidBecomeActive:(id)arg0;
- (void)_roomWillTerminate:(id)arg0;
- (id)networkDispatcher;
- (BOOL)isAllComponentMountFinish;
- (void)reloadRoomInfo;
- (void)enterRoomPaused;
- (void)handleCloseWithReason:(unsigned long long)arg0;
- (void)enterRoomSucceed;
- (void)trackerLivePlayIfNeeds;
- (void)enterRoomSelfOnRecord:(BOOL)arg0;
- (void)enterRoomFailed;
- (void)enterRoomBeenKickedOut;
- (void)enterRoomBeenForbidden;
- (id)beenKickedOut;
- (void)checkVSRoomOrientationIfNeeded;
- (void)setDidEnterRoomSuccess:(BOOL)arg0;
- (void)trackBcmPageParams;
- (void)updateHDMFilter;
- (void)parseLiveCommunityParamsFromPreview;
- (void)didEnterInterfaceFinished:(id)arg0;
- (void)reportRoomStreamMismatch:(id)arg0 room:(id)arg1;
- (BOOL)isCancelLoadBySlide;
- (void)updateTrackGameAnchorInfo;
- (void)reloadRoomModelWithOrientationChanged:(long long)arg0;
- (void)orientationReloadIfNeeded;
- (void)updateVideoStreamLayout:(long long)arg0;
- (void)resetLandscapeSceneWith:(long long)arg0;
- (BOOL)shouldShowEcomShortCutGuide;
- (BOOL)shouldShowLiveShortCutGuide;
- (BOOL)shouldShowLiveXTabGuide;
- (void)showLiveXTabGuide:(id)arg0;
- (void)executeCloseAction;
- (void)trackBeginQualityChangeStateCode:(long long)arg0 type:(id)arg1 orientation:(long long)arg2 strategyInfo:(id)arg3;
- (void)reloadRoomModelWithFirstDelay:(double)arg0 retryDelay:(double)arg1 retryCount:(long long)arg2 strategyInfo:(id)arg3;
- (void)realReloadRoomModelWithRetryDelay:(double)arg0 retryCount:(long long)arg1 strategyInfo:(id)arg2;
- (void)trackQualityChangeCost:(id)arg0 succeed:(BOOL)arg1 sdkKey:(id)arg2 errorCode:(long long)arg3 strategyInfo:(id)arg4;
- (BOOL)didMonitorEnterRoomTracing;
- (void)setDidMonitorEnterRoomTracing:(BOOL)arg0;
- (BOOL)shouldTrack10SecondsPlay;
- (void)track10Seconds;
- (void)trackMultiCameraFirstFrameIfNeeded;
- (void)trackerFirstFrameStreamStyleException;
- (void)trackerVSPullStreamFirstFrame;
- (void)setIsFirstFramePlay:(BOOL)arg0;
- (void)handleProbeStreamSuccess;
- (void)handleStreamPlayerReportParam:(id)arg0;
- (BOOL)didMonitorEnter;
- (void)setDidMonitorEnter:(BOOL)arg0;
- (BOOL)carouselDisablePlayReport;
- (BOOL)playReport;
- (id)livePlayerFisrtFrameForVC;
- (id)firstFrameInfo;
- (void)reportORIGEnterRoom;
- (void)reportEnterRoomFullDuration;
- (void)reportEnterRoomPerformanceDuration:(id)arg0;
- (void)setDidLivePlaySuccess:(BOOL)arg0;
- (id)kitelogTracker;
- (void)collectStrategyInfo;
- (id)feedLabelTypeTrackerInfo;
- (void)appendEcomLiveParamsFromParams:(id)arg0;
- (void)appendAudioThemeFunctionTypeFromParams:(id)arg0;
- (void)appendPortalParams:(id)arg0;
- (id)trackCurrentResolution;
- (id)processAdParams:(id)arg0;
- (void)trackEnterTimeStampForInteract;
- (id)appLifeCycleActionCreator;
- (void)trackAppLeave;
- (id)preSetJumpSchema;
- (BOOL)btmUserV2Api;
- (void)setDisableResumeCurrentLive:(BOOL)arg0;
- (BOOL)disableResumeCurrentLive;
- (void)setExitLastRecordTime:(double)arg0;
- (void)trackerLiveExitNew;
- (id)luckyCatTimingActionCreator;
- (void)trackFailEnterRoomIfNeeded:(unsigned long long)arg0;
- (void)reportCloseForStreamFail;
- (void)traceExitProcessWithKey:(id)arg0 report:(BOOL)arg1 extra:(id)arg2;
- (void)cancelLoadComponents;
- (void)clearEcomGoodsParams;
- (double)exitLastRecordTime;
- (double)exitTotalDuration;
- (void)setExitTotalDuration:(double)arg0;
- (id)exitTraceMetric;
- (void)setExitTraceMetric:(id)arg0;
- (void)p_reportCloseWithType:(unsigned long long)arg0;
- (void)p_closeAllRoomWithAllowSmoothLeave:(BOOL)arg0 allowPostLiveDidCloseService:(BOOL)arg1 preferOptions:(id)arg2 callTrace:(id)arg3;
- (void)dismissSelfAnimated:(BOOL)arg0;
- (void)didCloseRoomWithType:(unsigned long long)arg0;
- (void)showFinishViewController:(id)arg0 params:(id)arg1;
- (void)setCloseActionEnable:(BOOL)arg0;
- (BOOL)didExcuteCloseHandler;
- (void)setDidExcuteCloseHandler:(BOOL)arg0;
- (BOOL)askForClose;
- (BOOL)shouldDelayStream;
- (void)setAudienceEndStayTime:(long long)arg0;
- (long long)audienceEndStayTime;
- (long long)audienceStartStayTime;
- (void)setIsExitGuideShown:(BOOL)arg0;
- (BOOL)stayRoomTime;
- (BOOL)isExitGuideShown;
- (void)p_reportPlayerErrorIfNeeded;
- (id)componentSyncManager;
- (void)setCurTrackedPlayCameraID:(id)arg0;
- (void)setPopManager:(id)arg0;
- (BOOL)closeActionEnable;
- (void)animationInAutoRotating;
- (BOOL)hiddenStatusBarOnPortrait;
- (void)setHiddenStatusBarOnPortrait:(BOOL)arg0;
- (BOOL)tempShieldSceneEnable;
- (void)setComponentSyncManager:(id)arg0;
- (BOOL)isLinkmicRoom:(id)arg0;
- (id)realFps;
- (BOOL)isRoomDidFirstFrame;
- (void)addEnterRoomIDLocal;
- (id)audioPortType;
- (void)setPlayReport:(BOOL)arg0;
- (void)setCarouselDisablePlayReport:(BOOL)arg0;
- (BOOL)didTrackLoadSuccessEvent;
- (void)setDidTrackLoadSuccessEvent:(BOOL)arg0;
- (id)curTrackedPlayCameraID;
- (id)feedLabelTypeMapToString:(int)arg0;
- (void)trackerLiveLeave;
- (void)liveReusedRoomWithContext:(id)arg0;
- (void)liveDidCloseRoomWithContext:(id)arg0;
- (void)liveFinishedWithContext:(id)arg0;
- (BOOL)p_dealCloseActionsForExit:(id)arg0;
- (BOOL)p_canPopForExit;
- (void)prepareForReuseWithCallTrace:(id)arg0;
- (BOOL)needTrackShowEvent;
- (void)setNeedTrackShowEvent:(BOOL)arg0;
- (void)setPreSetJumpSchema:(id)arg0;
- (BOOL)supportUpdateStatusBar;
- (void)onFeedScrollDidEnd;
- (void)innerFeedLastMountedPreloadWithRoom:(id)arg0 eventContext:(id)arg1;
- (void)innerFeedDragWillEndPreloadByReplaceStore:(id)arg0 context:(id)arg1 parentDIContext:(id)arg2;
- (long long)currentComponentLoadState;
- (BOOL)checkRoomModeScene;
- (BOOL)checkCurrentInteractiveScene;
- (void)preloadWithRoomForAudioTrack:(id)arg0;
- (void)cancelProbeStream;
- (id)trackCurrentResolutionSdkKey;
- (id)p_roomScene;
- (id /* block */)afterLaunch;
- (void)setAfterLaunch:(id /* block */)arg0;
- (id /* block */)afterDidLoadBySlide;
- (void)setAfterDidLoadBySlide:(id /* block */)arg0;
- (void)setObserverDict:(id)arg0;
- (void)setAccessibilityCombination:(id)arg0;
- (BOOL)didMonitorEnterRoom;
- (void)setDidMonitorEnterRoom:(BOOL)arg0;
- (BOOL)didMonitorEnterRoomFull;
- (void)setDidMonitorEnterRoomFull:(BOOL)arg0;
- (BOOL)didEnterRoomSuccess;
- (BOOL)didLivePlaySuccess;
- (void)setScreenCastService:(id)arg0;
- (void)setRoomPopService:(id)arg0;
- (void)setLuckyCatTimingActionCreator:(id)arg0;
- (void)setAppLifeCycleActionCreator:(id)arg0;
- (void)setPushService:(id)arg0;
- (void)setNetworkDispatcher:(id)arg0;
- (void)setKitelogTracker:(id)arg0;
- (void)setFirstFrameInfo:(id)arg0;
- (void)setPromotionFps:(id)arg0;
- (BOOL)delayLoadComponent;
- (void)setDelayLoadComponent:(BOOL)arg0;
- (id)landscapeInnerLiveBanner;
- (void)setLandscapeInnerLiveBanner:(id)arg0;
- (id)backSlipImageView;
- (void)setBackSlipImageView:(id)arg0;
- (BOOL)isAllComponentLoadFinish;
- (long long)enteredRoomOrientation;
- (void)setEnteredRoomOrientation:(long long)arg0;
- (BOOL)isLoadedVSFirstFrame;
- (void)setIsLoadedVSFirstFrame:(BOOL)arg0;
- (id)preCameraID;
- (void)setPreCameraID:(id)arg0;
- (void)setOptimizeGeckoSync:(BOOL)arg0;
- (void)setVideoPlayer:(id)arg0;
- (id)videoPlayer;
- (void)setReference:(id)arg0;
- (BOOL)shouldAutorotate;
- (BOOL)paused;
- (BOOL)canPause;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (id)monitor;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (BOOL)prefersHomeIndicatorAutoHidden;
- (void)commonInit;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })arg0 withTransitionCoordinator:(id)arg1;
- (id)store;
- (void)close;
- (void)setMonitor:(id)arg0;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)setClosed:(BOOL)arg0;
- (void)setPaused:(BOOL)arg0;
- (void)setContainerView:(id)arg0;
- (long long)preferredStatusBarStyle;
- (id)reference;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)setStore:(id)arg0;
- (id)delegate;
- (id)containerView;
- (id)topViewController;
- (id)eventContext;
- (BOOL)hasAppeared;
- (void)prepareForReuse;
- (BOOL)prefersStatusBarHidden;
- (void)viewWillAppear:(BOOL)arg0;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)applicationWillTerminate;
- (id)player;
- (BOOL)closed;
- (id)backgroundMaskView;
- (void)setBackgroundMaskView:(id)arg0;
- (void)setCanPause:(BOOL)arg0;
- (id)router;
- (void)setRouter:(id)arg0;
- (id)pageContext;
- (void)setPageContext:(id)arg0;
- (long long)originalStyle;
- (void)closeButtonAction;
- (void)setHasAppeared:(BOOL)arg0;
- (id)extraInfo;
- (BOOL)isViewAppearing;
- (void)addObservers;
- (void)removeObservers;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })screenEdgeInsets;
- (void)setScreenEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (void)_notifyViewWillAppear;
- (void)_notifyViewDidAppear;
- (void)_notifyViewWillDisappear;
- (id)streamContext;

@end