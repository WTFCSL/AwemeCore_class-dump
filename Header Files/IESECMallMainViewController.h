//
//     Generated by private class-dump
//

@class NSDictionary, IESECListKitCardPreloader, IESECMallViewModel, IESECMallPageCard, IESECListKitBackgroundModel, IESECLynxCardBridgeEventSubscriber, IESECMallLiveMiniWindowService, NSString, IESECMallLynxRenderMonitor, NSTimer, NSArray, UIButton, NSObject, FBKVOController, IESECMallNativeRreloadMonitor, IESECMallPopupTaskManager, UIView, IESECMallNativeCardCell, IESECMallBackgroundView, IESECMallBridgesRegister, IESECMallPopupView, HMDMonitorCallbackObject, IESECMallHomeView, UIColor, NSNumber, NSCache;
@protocol IESECMallMainViewControllerDelegate, IESECMallCardClickActionInterceptor, OS_dispatch_queue, IESECMallLoadingViewProtocol;

@interface IESECMallMainViewController : UIViewController <IESECXBridgeCallHandlerService, IESECMallFeedViewControllerDelegate, IESECMallPopupViewDelegate, IESECSKUServiceProtocol, IESECMallHomeViewDelegate, IESECMallLynxRenderMonitorDelegate, IESECMallPopupDelegate, IESECMallJSBridgeProvider, IESECMallPageCardDelegate, IESECMallXBridgeRegisterDelegate, IESECListKitLynxCardLifeCycle> {
    BOOL _forbiddenBottomMargin;
    BOOL _useCustomTopMargin;
    BOOL _forbiddenShowLoadingView;
    BOOL _useCustomBackgroundColor;
    BOOL _transferMainListError;
    BOOL _forbidFirstScreenStraightOut;
    BOOL _enableSyncStraightOut;
    BOOL _openSaveStraightOutData;
    BOOL _didPreloadStraight;
    BOOL _isRequestOnAir;
    BOOL _isNativeCellMute;
    BOOL _viewDidSetup;
    BOOL _delayShowLoading;
    BOOL _abMallFixMutiRequest;
    BOOL _abMallFixRepeatedRequest;
    BOOL _scrollStart;
    BOOL _hasShowCoinPendant;
    BOOL _hasReportSlide;
    BOOL _isLoadingMore;
    BOOL _globalGreyMode;
    BOOL _needRevetColorful;
    BOOL _firstScreenShowNotify;
    BOOL _disableLoadmoreModify;
    id<IESECMallMainViewControllerDelegate> _delegate;
    NSDictionary *_currentRouterParams;
    NSString *_openTime;
    double _customTopMargin;
    UIColor *_customBackgroundColor;
    IESECMallHomeView *_homeView;
    IESECMallViewModel *_mallViewModel;
    NSString *_firstScreenStraightOutIdentity;
    double _recommendViewFirstViewAppear;
    NSNumber *_sendVisibilityEventNextRunLoop;
    long long _nativeType;
    id /* block */ _refreshCompletion;
    NSArray *_needlessComponents;
    id<IESECMallCardClickActionInterceptor> _interceptor;
    IESECMallPageCard *_pageCard;
    IESECMallBackgroundView *_bgView;
    UIButton *_goTopButton;
    UIView<IESECMallLoadingViewProtocol> *_loadingView;
    IESECMallLiveMiniWindowService *_liveMiniWinService;
    IESECMallNativeCardCell *_nativeCardCell;
    long long _lastTabId;
    NSString *_nativeCardSchema;
    FBKVOController *_kvoController;
    IESECMallLynxRenderMonitor *_lynxRenderMonitor;
    IESECMallNativeRreloadMonitor *_nativePreloadMonitor;
    IESECMallBridgesRegister *_bridgesRegister;
    double _containerInitTime;
    IESECLynxCardBridgeEventSubscriber *_subscriber;
    NSString *_enterFrom;
    NSString *_finishLoadTemplate;
    NSString *_coinsPendantSchema;
    IESECListKitCardPreloader *_preloader;
    NSObject<OS_dispatch_queue> *_reportQueue;
    IESECListKitBackgroundModel *_skinBackground;
    NSTimer *_loadMoreTimer;
    double _feedOffsetY;
    double _baseOffsetY;
    IESECMallPopupTaskManager *_popupManager;
    IESECMallPopupView *_popupView;
    IESECMallPopupView *_coinsView;
    NSString *_lastPageShowId;
    NSString *_curPageShowId;
    UIView *_loginView;
    HMDMonitorCallbackObject *_hmdFPSCallback;
    NSCache *_loadmorePageNumTSDict;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) IESECMallHomeView *homeView;
@property (retain, nonatomic) IESECMallPageCard *pageCard;
@property (retain, nonatomic) IESECMallBackgroundView *bgView;
@property (retain, nonatomic) UIButton *goTopButton;
@property (retain, nonatomic) UIView<IESECMallLoadingViewProtocol> *loadingView;
@property (retain, nonatomic) IESECMallLiveMiniWindowService *liveMiniWinService;
@property (retain, nonatomic) IESECMallNativeCardCell *nativeCardCell;
@property (nonatomic) BOOL isNativeCellMute;
@property (nonatomic) long long lastTabId;
@property (copy, nonatomic) NSString *nativeCardSchema;
@property (retain, nonatomic) FBKVOController *kvoController;
@property (retain, nonatomic) IESECMallLynxRenderMonitor *lynxRenderMonitor;
@property (retain, nonatomic) IESECMallNativeRreloadMonitor *nativePreloadMonitor;
@property (retain, nonatomic) IESECMallBridgesRegister *bridgesRegister;
@property (nonatomic) double containerInitTime;
@property (retain, nonatomic) IESECLynxCardBridgeEventSubscriber *subscriber;
@property (nonatomic) BOOL viewDidSetup;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL delayShowLoading;
@property (copy, nonatomic) NSString *finishLoadTemplate;
@property (nonatomic) BOOL abMallFixMutiRequest;
@property (nonatomic) BOOL abMallFixRepeatedRequest;
@property (retain, nonatomic) IESECMallViewModel *mallViewModel;
@property (nonatomic) BOOL scrollStart;
@property (copy, nonatomic) NSString *coinsPendantSchema;
@property (nonatomic) BOOL hasShowCoinPendant;
@property (nonatomic) BOOL hasReportSlide;
@property (retain, nonatomic) IESECListKitCardPreloader *preloader;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *reportQueue;
@property (retain, nonatomic) IESECListKitBackgroundModel *skinBackground;
@property (nonatomic) BOOL isLoadingMore;
@property (retain, nonatomic) NSTimer *loadMoreTimer;
@property (nonatomic) BOOL globalGreyMode;
@property (nonatomic) BOOL needRevetColorful;
@property (nonatomic) BOOL firstScreenShowNotify;
@property (nonatomic) double feedOffsetY;
@property (nonatomic) double baseOffsetY;
@property (retain, nonatomic) IESECMallPopupTaskManager *popupManager;
@property (retain, nonatomic) IESECMallPopupView *popupView;
@property (retain, nonatomic) IESECMallPopupView *coinsView;
@property (copy, nonatomic) NSString *lastPageShowId;
@property (copy, nonatomic) NSString *curPageShowId;
@property (retain, nonatomic) UIView *loginView;
@property (retain, nonatomic) HMDMonitorCallbackObject *hmdFPSCallback;
@property (nonatomic) BOOL disableLoadmoreModify;
@property (retain, nonatomic) NSCache *loadmorePageNumTSDict;
@property (weak, nonatomic) id<IESECMallMainViewControllerDelegate> delegate;
@property (copy, nonatomic) NSDictionary *currentRouterParams;
@property (copy, nonatomic) NSString *openTime;
@property (nonatomic) BOOL forbiddenBottomMargin;
@property (nonatomic) BOOL useCustomTopMargin;
@property (nonatomic) double customTopMargin;
@property (nonatomic) BOOL forbiddenShowLoadingView;
@property (nonatomic) BOOL useCustomBackgroundColor;
@property (retain, nonatomic) UIColor *customBackgroundColor;
@property (nonatomic) BOOL transferMainListError;
@property (nonatomic) BOOL forbidFirstScreenStraightOut;
@property (nonatomic) BOOL enableSyncStraightOut;
@property (copy, nonatomic) NSString *firstScreenStraightOutIdentity;
@property (nonatomic) double recommendViewFirstViewAppear;
@property (nonatomic) BOOL openSaveStraightOutData;
@property (nonatomic) BOOL didPreloadStraight;
@property (retain, nonatomic) NSNumber *sendVisibilityEventNextRunLoop;
@property (nonatomic) long long nativeType;
@property (copy, nonatomic) id /* block */ refreshCompletion;
@property (nonatomic) BOOL isRequestOnAir;
@property (copy, nonatomic) NSArray *needlessComponents;
@property (weak, nonatomic) id<IESECMallCardClickActionInterceptor> interceptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)removeStorageConfigV2;
+ (BOOL)removeStorageByConfigV2;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (void)didReceiveMemoryWarningNotification;
- (BOOL)isRequestOnAir;
- (void)setIsRequestOnAir:(BOOL)arg0;
- (void)sendEvent:(id)arg0 params:(id)arg1;
- (void)dismissLoadingView;
- (void)updateLocationIfNeed;
- (BOOL)needCheckLogin;
- (BOOL)isHomePageMallTopMall;
- (BOOL)isLoadingMore;
- (void)setIsLoadingMore:(BOOL)arg0;
- (id)hybridMonitorContext;
- (id)responderView;
- (void)setInterceptor:(id)arg0;
- (id)interceptor;
- (id)openTime;
- (id)loginView;
- (void)setOpenTime:(id)arg0;
- (void)setNativeType:(long long)arg0;
- (void)requireLogin;
- (void)buildUI;
- (void)unregisterSubscriber;
- (double)containerTopMargin;
- (id)mallViewModel;
- (void)setRefreshCompletion:(id /* block */)arg0;
- (id)listCollectionView;
- (void)leaveMall:(long long)arg0;
- (id)currentRouterParams;
- (id /* block */)refreshCompletion;
- (void)rebuildConstraints:(double)arg0;
- (void)closeHalfMall;
- (unsigned long long)pageNum;
- (unsigned long long)mallResVersion;
- (void)configPreloadStraight;
- (void)setCurrentRouterParams:(id)arg0;
- (void)mallReport:(id)arg0 enterNewPage:(BOOL)arg1;
- (void)mallReport:(id)arg0;
- (void)requestFirstScreenApis;
- (id)globalPropsExtra;
- (id)rootGlobalPropsExtra;
- (void)requestRefreshApis;
- (void)configWithRouterParams:(id)arg0 enterForm:(id)arg1;
- (BOOL)isNativeMallVisibleSupport;
- (void)mediaCellDidDisplay;
- (void)tryShowDesktopGuide;
- (id)lynxRenderMonitor;
- (void)lynxCard:(id)arg0 didLoadFail:(id)arg1 resource:(id)arg2 itemModel:(id)arg3;
- (void)lynxCard:(id)arg0 didFirstScreen:(id)arg1 resource:(id)arg2 itemModel:(id)arg3 isPreloader:(BOOL)arg4;
- (void)lynxCardMallReport:(id)arg0;
- (void)mallLynxRenderReport:(id)arg0;
- (void)anchorPendantShow:(id)arg0 completion:(id /* block */)arg1;
- (void)anchorPendantDismissWithContainerId:(id)arg0;
- (void)setLynxRenderMonitor:(id)arg0;
- (double)currentMemory;
- (void)updateThemeStyle:(unsigned long long)arg0 defaultBgUrl:(id)arg1;
- (void)updateSkinData:(id)arg0;
- (void)updateSkinDataDefault;
- (void)setMallViewModel:(id)arg0;
- (void)setDidPreloadStraight:(BOOL)arg0;
- (void)setNeedlessComponents:(id)arg0;
- (void)setEnableSyncStraightOut:(BOOL)arg0;
- (void)showLoginViewIfNeed;
- (void)updateThemeStyleImmediately:(unsigned long long)arg0;
- (BOOL)hasVisiblePopup;
- (void)checkAndGetGeckoResource;
- (BOOL)enableStraightOutRender;
- (void)removeStorageKeysIfNeed;
- (void)loadConfigJsonBundle;
- (void)loadStraightOutData:(id)arg0;
- (id)pageCardLynxSchema;
- (void)preloadPageCardWithPageName:(id)arg0;
- (BOOL)shouldSendVisibilityEventNextRunLoop;
- (BOOL)enableOptLynxViewLoadLogic;
- (id)mallGrayFilter;
- (id)removeStorageKeys;
- (long long)pageCardDynamicParamTimeout;
- (BOOL)mallEnableWriteAlog;
- (void)handlePitayaBroadcast:(id)arg0;
- (void)setLoginView:(id)arg0;
- (void)setLoadMoreTimer:(id)arg0;
- (id)loadMoreTimer;
- (void)setPopupView:(id)arg0;
- (id)popupView;
- (void)startPreload;
- (id)listVC;
- (id)currentPlayingCell;
- (double)containerInitTime;
- (void)setContainerInitTime:(double)arg0;
- (void)stopPreload;
- (double)customTopMargin;
- (void)setCustomTopMargin:(double)arg0;
- (void)setHomeView:(id)arg0;
- (id)lynxCardMallGetReportInfo:(id)arg0;
- (void)scrollToFirstFavoriteCellWithSectionID:(id)arg0 animated:(BOOL)arg1;
- (id)lynxCardFeedProductIds:(id)arg0;
- (void)mallWriteAlog:(id)arg0 paramModel:(id)arg1 result:(id)arg2 context:(id)arg3;
- (void)lynxCardMallReport:(id)arg0 isCacheData:(BOOL)arg1;
- (void)lynxCardMallFeedScrollToTop:(id)arg0;
- (void)lynxCardBffDataUpdate:(id)arg0;
- (void)lynxCardAdReport:(id)arg0;
- (id)mallListSharedDataIMP;
- (id)mallDynamicRequestIMP;
- (id)lynxCardMallGetPageInfo;
- (id)isCurrentPageVisible;
- (void)callNegativeFeedback:(id)arg0;
- (void)callGetFeedDataMethod:(id)arg0 completion:(id /* block */)arg1;
- (void)lottieMountMethod:(id)arg0 completion:(id /* block */)arg1;
- (void)anchorPendantVisibility:(id)arg0 visible:(BOOL)arg1;
- (id)popupSubmitTask:(id)arg0;
- (void)popupDismissWithContainerId:(id)arg0;
- (void)mallGetCardPosition:(id)arg0 completion:(id /* block */)arg1;
- (void)halfMallIsExpandWithCompletion:(id /* block */)arg0;
- (void)closeHalfMallWithCompletion:(id /* block */)arg0;
- (void)appendCommonImpressionArray:(id)arg0;
- (void)getRecommendParams:(id /* block */)arg0;
- (void)setNeedRecordPageShowIdIfNeed:(BOOL)arg0;
- (id)responderViewForBtm;
- (void)reportSchemaDiff:(id)arg0 outSchema:(id)arg1;
- (id)xBridgesCallHandler;
- (id)pageNameForPopup:(id)arg0;
- (void)dismissBubbleView:(id)arg0;
- (void)bubbleView:(id)arg0 resetVisibility:(BOOL)arg1;
- (id)currentBridgesRegister;
- (id)globalExtraForPopup:(id)arg0;
- (id)rootGlobalExtraForPopup:(id)arg0;
- (id)hybridMonitorContextForPopup:(id)arg0;
- (id)hmBidForPopup:(id)arg0;
- (BOOL)enableOptLynxViewLoadLogicForPopup:(id)arg0;
- (id)currentListContextIdForPopup:(id)arg0;
- (id)globalXBridgesCallHandler;
- (void)lynxCard:(id)arg0 didUpdateDataWithLynxViewFromType:(unsigned long long)arg1 resource:(id)arg2 itemModel:(id)arg3 perfDict:(id)arg4;
- (id)popupManager;
- (void)addPopupTaskContainer;
- (void)dismissPopupView:(id)arg0;
- (id)hmBid;
- (BOOL)currentListViewIsVisible;
- (void)setPopupManager:(id)arg0;
- (void)liveCardDidDisplay:(id)arg0;
- (id)mallListInnerNativeMonitor;
- (BOOL)feedViewControllerIsNativeCellCardMute:(id)arg0;
- (void)feedViewController:(id)arg0 itemCardSetVoiceMute:(BOOL)arg1;
- (void)feedViewController:(id)arg0 itemCardRouterSchema:(id)arg1;
- (id)feedViewControllerGetRootGlobalExtra:(id)arg0;
- (id)feedViewControllerGetGlobalExtra:(id)arg0;
- (id)feedViewControllerGetCurrentRequestContext:(id)arg0;
- (BOOL)feedViewControllerIsCacheData;
- (long long)loadmoreRangeSize;
- (void)feedViewController:(id)arg0 scrollViewDidScroll:(id)arg1;
- (void)feedViewController:(id)arg0 scrollViewDidEndDecelerating:(id)arg1;
- (void)feedViewController:(id)arg0 scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)feedViewController:(id)arg0 scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)feedViewController:(id)arg0 scrollViewWillBeginDragging:(id)arg1;
- (void)feedViewControllerLoadMoreData:(id)arg0 source:(unsigned long long)arg1;
- (BOOL)feedViewControllerDidFirstScreen:(id)arg0;
- (void)feedViewController:(id)arg0 mallReport:(id)arg1 isCacheData:(BOOL)arg2;
- (BOOL)loadingMoreFlag;
- (id)feedViewControllerdidEnvIdentifier:(id)arg0;
- (void)didCreateCellWith:(long long)arg0 totalInterval:(double)arg1 createCellInterval:(double)arg2 configCellInterval:(double)arg3;
- (id)cardActioninterceptor;
- (id)mallHomeViewHybridMonitorContext;
- (id)mallHomeViewHmBid;
- (BOOL)mallHomeViewEnableOptLynxViewLoadLogic;
- (id)currentFeedEnvIdentifier:(id)arg0;
- (void)mallHomeView:(id)arg0 topBarSizeDidChanged:(struct CGSize { double x0; double x1; })arg1;
- (void)confirmWithSKUInfo:(id)arg0;
- (id)nativePreloadMonitor;
- (void)setNativePreloadMonitor:(id)arg0;
- (void)lynxCard:(id)arg0 onSetup:(id)arg1 resource:(id)arg2 itemModel:(id)arg3 isPreloader:(BOOL)arg4 isPreDecode:(BOOL)arg5;
- (id)lastPageShowId;
- (id)findTabContainerView:(id)arg0;
- (id)tryFindPendantSuperView:(id)arg0;
- (void)tryAddPendantToList:(id)arg0 with:(id)arg1;
- (id)homepagePageRootView;
- (void)setKvoController:(id)arg0;
- (void)readABKeys;
- (BOOL)didPreloadStraight;
- (void)buildBinding;
- (void)setScrollStart:(BOOL)arg0;
- (BOOL)transferMainListError;
- (void)setTransferMainListError:(BOOL)arg0;
- (void)buildHeaderRefreshViewIfNeeded;
- (BOOL)isLoginWithCheckIfNeed;
- (void)setViewDidSetup:(BOOL)arg0;
- (void)subscribeFpsEvent;
- (void)trackerDidLoad;
- (id)curPageShowId;
- (void)setCurPageShowId:(id)arg0;
- (void)setLastPageShowId:(id)arg0;
- (void)pageVisibilityChage:(BOOL)arg0;
- (void)buildSubscriber;
- (id)cellForPaymentSuccess;
- (id)liveMiniWinService;
- (id)nativeCardCell;
- (void)trackerFpsPerformance;
- (void)invalidLoadMoreTime;
- (id)hmdFPSCallback;
- (void)reportWindowFPS:(id)arg0;
- (void)setHmdFPSCallback:(id)arg0;
- (BOOL)viewDidSetup;
- (id)coinsView;
- (id)pageCard;
- (BOOL)abMallFixMutiRequest;
- (void)removeLoginViewIfNeed;
- (void)setNeedRevetColorful:(BOOL)arg0;
- (void)realRefreshByPageCard;
- (void)getPitayaUserBehaviorParamsAndReport;
- (id)pageNameForPageCard;
- (void)addPageCardWithPageName:(id)arg0;
- (void)setLastTabId:(long long)arg0;
- (BOOL)globalGreyMode;
- (BOOL)needRevetColorful;
- (id)sharedLynxGroupID:(id)arg0;
- (BOOL)enableAnimaxWith:(id)arg0;
- (void)trackerFirstScreenTime;
- (void)setAbMallFixMutiRequest:(BOOL)arg0;
- (void)setAbMallFixRepeatedRequest:(BOOL)arg0;
- (void)setDisableLoadmoreModify:(BOOL)arg0;
- (BOOL)useCustomBackgroundColor;
- (void)addBgView;
- (id)needlessComponents;
- (void)addCoinsView;
- (void)addPopupView;
- (id)eventDenyList;
- (id)goTopButton;
- (void)addGoTopButton;
- (id)kvoController;
- (void)trackerGoToTopShow;
- (BOOL)delayShowLoading;
- (void)homePageEndRefreshing;
- (void)trackerLoadmorePerformance;
- (void)finishRefreshMainList:(id)arg0;
- (void)setGreyIfNeed:(id)arg0;
- (id)skinBackground;
- (void)setCoinsPendantSchema:(id)arg0;
- (void)handleCoinsPop:(id)arg0;
- (void)handleFavoriteSectionIfEmpty:(id)arg0;
- (BOOL)enableSyncStraightOut;
- (void)setupTimingModelProps;
- (BOOL)disableLoadmoreModify;
- (void)setFooterEndRefreshing;
- (BOOL)firstScreenShowNotify;
- (void)setFirstScreenShowNotify:(BOOL)arg0;
- (void)setNativeCardCell:(id)arg0;
- (void)setupLiveMiniWindow;
- (BOOL)abMallFixRepeatedRequest;
- (void)setSkinBackground:(id)arg0;
- (void)setGlobalGreyMode:(BOOL)arg0;
- (void)handleMallTabSelectedEvent:(id)arg0;
- (void)mallRefreshHomepageEvent:(id)arg0;
- (id)coinsPendantSchema;
- (BOOL)hasShowCoinPendant;
- (void)setHasShowCoinPendant:(BOOL)arg0;
- (void)sendMallReportTrackerNative:(id)arg0;
- (void)topBarChangeNoVisible:(id)arg0;
- (void)bottomBarChangeNoVisible:(id)arg0;
- (void)handlefeedLoadingError:(id)arg0;
- (void)openNativeSKU:(id)arg0;
- (BOOL)isNativeCellMute;
- (long long)lastTabId;
- (id)nativeCardSchema;
- (BOOL)forbiddenShowLoadingView;
- (void)canShowNewLoadingForCDN;
- (void)setDelayShowLoading:(BOOL)arg0;
- (void)setFinishLoadTemplate:(id)arg0;
- (id)currentBundleConfigUrl;
- (double)recommendViewFirstViewAppear;
- (void)setRecommendViewFirstViewAppear:(double)arg0;
- (BOOL)needCookingNotification:(id)arg0;
- (void)stopCoinsViewCountDown;
- (id)finishLoadTemplate;
- (BOOL)scrollStart;
- (void)trackerScrollToTop;
- (BOOL)shouldRequestSelectedSection:(id)arg0;
- (void)updateSelectedTabInfo:(id)arg0 curSectionModel:(id)arg1;
- (void)realRequestByPageCard:(id)arg0 apiKeys:(id)arg1 withHandler:(id /* block */)arg2 forbidEvent:(BOOL)arg3;
- (void)updateSpecificSectionForFeed:(id)arg0;
- (void)realLoadMoreByPageCard;
- (void)loadMoreTimeOutHandler;
- (id)loadmorePageNumTSDict;
- (double)feedOffsetY;
- (void)realRequestByPageCardReport:(id)arg0 isTimeout:(BOOL)arg1 startTime:(double)arg2;
- (void)setFeedOffsetY:(double)arg0;
- (BOOL)hasReportSlide;
- (double)baseOffsetY;
- (void)setHasReportSlide:(BOOL)arg0;
- (void)setBaseOffsetY:(double)arg0;
- (void)showOrHideLiveMiniWindow;
- (void)updateBackgroundColorInNeeded:(double)arg0;
- (void)setIsNativeCellMute:(BOOL)arg0;
- (void)setNativeCardSchema:(id)arg0;
- (id)mallJsbDenylist;
- (id)bridgesRegister;
- (id)mallPopupViewHmBid;
- (BOOL)mallPopupViewEnableOptLynxViewLoadLogic;
- (void)delayDismissLoadingViewForCDN:(id)arg0;
- (void)setGoTopButton:(id)arg0;
- (void)goTopButtonAction:(id)arg0;
- (BOOL)forbidFirstScreenStraightOut;
- (void)setForbidFirstScreenStraightOut:(BOOL)arg0;
- (id)firstScreenStraightOutIdentity;
- (void)setFirstScreenStraightOutIdentity:(id)arg0;
- (BOOL)openSaveStraightOutData;
- (void)setOpenSaveStraightOutData:(BOOL)arg0;
- (id)sendVisibilityEventNextRunLoop;
- (void)feedViewController:(id)arg0 feedback:(id)arg1;
- (id)currentEnvIdentifierForPopup:(id)arg0;
- (id)mallPopupViewHybridMonitorContext;
- (void)popupViewMakeStartPerformance;
- (void)popupViewMakeEndPerformance;
- (id)currentEnvIdentifierForPageCard:(id)arg0;
- (void)lynxCardDidFinishLoad:(id)arg0 resource:(id)arg1 itemModel:(id)arg2;
- (void)lynxCardReceiveError:(id)arg0 resource:(id)arg1 itemModel:(id)arg2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })insertItem:(id)arg0 inSection:(id)arg1 atIndex:(unsigned long long)arg2 animated:(BOOL)arg3;
- (void)setCustomLoadMoreView:(id)arg0;
- (void)setCustomNoMoreView:(id)arg0;
- (void)setupNeedlessComponents:(id)arg0;
- (id)currentFilters;
- (void)appendFilters:(id)arg0;
- (BOOL)forbiddenBottomMargin;
- (void)setForbiddenBottomMargin:(BOOL)arg0;
- (BOOL)useCustomTopMargin;
- (void)setUseCustomTopMargin:(BOOL)arg0;
- (void)setForbiddenShowLoadingView:(BOOL)arg0;
- (void)setUseCustomBackgroundColor:(BOOL)arg0;
- (void)setSendVisibilityEventNextRunLoop:(id)arg0;
- (void)setPageCard:(id)arg0;
- (void)setLiveMiniWinService:(id)arg0;
- (void)setBridgesRegister:(id)arg0;
- (void)setCoinsView:(id)arg0;
- (void)setLoadmorePageNumTSDict:(id)arg0;
- (id)init;
- (void)appDidEnterBackground:(id)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (id)customBackgroundColor;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)sendAction:(id)arg0;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)setReportQueue:(id)arg0;
- (id)delegate;
- (void)setCustomBackgroundColor:(id)arg0;
- (id)subscriber;
- (void)appWillEnterForeground:(id)arg0;
- (void)viewWillAppear:(BOOL)arg0;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (id)reportQueue;
- (id)bgView;
- (void)setBgView:(id)arg0;
- (id)preloader;
- (void)setPreloader:(id)arg0;
- (void)showLoadingView;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (void)scrollToVisible;
- (void)setSubscriber:(id)arg0;
- (void)addNotificationObserver;
- (id)homeView;
- (id)envIdentifier;
- (void)appendAction:(id)arg0;
- (id)pageName;
- (long long)nativeType;
- (void)buildConstraints;

@end
