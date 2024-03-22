//
//     Generated by private class-dump
//

@class AWEPlayInteractionCommerceViewModel, NSString, AWEListDataController, UILabel, UIView, NSObject, UIViewController;
@protocol AWECommerceDispatcherManager, AWEAdSummerCallingManager, AWEAdFormOperationGuideViewController, AWEAdMysteryBoxManager, AWEAdOperationWebViewController, AWEFeedLokiManager, AWECommerceSimilarAdManager, AWEFeedAutoPlayManagerProtocol, AWEAdAutoPopupLandingPageManager, AWESplashAlbumManager, CMCBatManManagerProtocol, AWEAdVibrationManagerProtocol, AWECommerceAdRichAwemeBaseManager, AWEAdTwistImageManager, AWEAdNakedEye3DManagerProtocol, AWEAdTigerFromEastManager, AWEAdMannorCardManager, AWEAdWebViewModalManager, AWEAdOperationGuideView, AWEAdRelatedSearchManager, AWEAdLynxCardManager, AWEAdPromptViewManager, AWEAdSimilarRecommendView, AWEAwemeLikeFireworksEggManagerProtocol, AWEAppStoreHistoryManager, AWESimilarRecommendDataManagerProtocol, AWEAdEggViewProtocol;

@interface AWEPlayInteractionCommerceController : AWEPlayInteractionBaseController <AWELiveRoomMessage, AFDPureModePageCommerceDelegate, AWEAwemePlayInteractionCommerceDelegate, AWEAwemePlayInteractionCommerceInnerDelegate, AWEPlayInteractionRichAwemeCommerceDelegate, AWEPlayInteractionAdCommonHelperProtocol, AWEPlayInteractionPlayerLifeCycleProtocol, AWEWebViewLoadLiftCircleMessage, AWEZoomTransitionOuterContextProvider> {
    UILabel *_cleanModeAdTitle;
    NSObject<AWEAdPromptViewManager> *_promptViewManager;
    NSObject<AWEAdLynxCardManager> *_adLynxCardManager;
    NSObject<AWEAdMannorCardManager> *_adMannorCardManager;
    UIView<AWEAdSimilarRecommendView> *_similarRecommendView;
    NSString *_componentsPriorityType;
    BOOL _alreadyShowAdOperationGuide;
    BOOL _adInteractedWithFeedAutoPLay;
    NSObject<AWEFeedLokiManager> *_adFeedLokiManager;
    NSObject<AWECommerceSimilarAdManager> *_similarAdManager;
    BOOL _hasShownAdLightLandingBefore;
    BOOL _isAdLightLandingShowing;
    BOOL _videoPausedByAdMask;
    BOOL _enableTTPlayer;
    BOOL _enableSeekOptimize;
    BOOL _forbidCommentViewLoadInAdvance;
    BOOL _adOperationGuideShowing;
    BOOL _isDisplaying;
    BOOL _shouldDelayLoadLynxCard;
    BOOL _hasLoadLynxCardView;
    BOOL _hasLoadOrderCenterPopWindow;
    BOOL _shouldResetManually;
    BOOL _isAdLearnMoreShowed;
    AWEListDataController<AWESimilarRecommendDataManagerProtocol> *_similarRecommendDataManager;
    NSObject<AWEAppStoreHistoryManager> *_adFeedAppStoreHistoryManager;
    NSObject<AWEAdVibrationManagerProtocol> *_vibrationManager;
    NSObject<AWEAdNakedEye3DManagerProtocol> *_nakedEye3DManager;
    NSObject<AWEAdTigerFromEastManager> *_tigerFromEastManager;
    NSObject<AWEAdMysteryBoxManager> *_mysteryBoxManager;
    NSObject<AWEAdSummerCallingManager> *_summerCallingManager;
    NSObject<AWEAwemeLikeFireworksEggManagerProtocol> *_likeFireworksEggManager;
    NSObject<AWEAdTwistImageManager> *_twistImageManager;
    NSObject<AWEAdWebViewModalManager> *_promptModalManager;
    NSObject<AWEAdWebViewModalManager> *_complianceModalManager;
    NSObject<CMCBatManManagerProtocol> *_batManManager;
    NSObject<AWECommerceAdRichAwemeBaseManager> *_adRichAwemeManager;
    UIView<AWEAdOperationGuideView> *_adOperationView;
    UIViewController<AWEAdFormOperationGuideViewController> *_adOperationViewController;
    UIViewController<AWEAdOperationWebViewController> *_adOperationWebViewController;
    UIViewController<AWEAdOperationWebViewController> *_cacheForAdOperationWebViewController;
    NSObject<AWEAdRelatedSearchManager> *_adSearchManager;
    UIView<AWEAdEggViewProtocol> *_likeEggView;
    NSObject<AWEAdAutoPopupLandingPageManager> *_autoPopupLandingPageManager;
    NSObject<AWESplashAlbumManager> *_splashAlbumManager;
    double _likeEggLastPlayTime;
    AWEPlayInteractionCommerceViewModel *_commerceViewModel;
    NSString *_adEventName;
    long long _playStatusWithLightLanding;
    id<AWEFeedAutoPlayManagerProtocol> _autoPlayManager;
    id /* block */ _lynxCardLoadHandler;
    double _quickSlideLynxCardLoadTime;
    long long _lastAlbumIndex;
    NSObject<AWECommerceDispatcherManager> *_adDispatcherManager;
}

@property (retain, nonatomic) NSObject<AWEAppStoreHistoryManager> *adFeedAppStoreHistoryManager;
@property (retain, nonatomic) NSObject<AWEAdVibrationManagerProtocol> *vibrationManager;
@property (retain, nonatomic) NSObject<AWEAdNakedEye3DManagerProtocol> *nakedEye3DManager;
@property (retain, nonatomic) NSObject<AWEAdTigerFromEastManager> *tigerFromEastManager;
@property (retain, nonatomic) NSObject<AWEAdMysteryBoxManager> *mysteryBoxManager;
@property (retain, nonatomic) NSObject<AWEAdSummerCallingManager> *summerCallingManager;
@property (retain, nonatomic) NSObject<AWEAwemeLikeFireworksEggManagerProtocol> *likeFireworksEggManager;
@property (retain, nonatomic) NSObject<AWEAdTwistImageManager> *twistImageManager;
@property (retain, nonatomic) NSObject<AWEAdWebViewModalManager> *promptModalManager;
@property (retain, nonatomic) NSObject<AWEAdWebViewModalManager> *complianceModalManager;
@property (retain, nonatomic) NSObject<CMCBatManManagerProtocol> *batManManager;
@property (retain, nonatomic) NSObject<AWECommerceAdRichAwemeBaseManager> *adRichAwemeManager;
@property (retain, nonatomic) UIView<AWEAdOperationGuideView> *adOperationView;
@property (retain, nonatomic) UIViewController<AWEAdFormOperationGuideViewController> *adOperationViewController;
@property (retain, nonatomic) UIViewController<AWEAdOperationWebViewController> *adOperationWebViewController;
@property (retain, nonatomic) UIViewController<AWEAdOperationWebViewController> *cacheForAdOperationWebViewController;
@property (retain, nonatomic) NSObject<AWEAdRelatedSearchManager> *adSearchManager;
@property (retain, nonatomic) UIView<AWEAdEggViewProtocol> *likeEggView;
@property (retain, nonatomic) NSObject<AWEAdAutoPopupLandingPageManager> *autoPopupLandingPageManager;
@property (retain, nonatomic) NSObject<AWESplashAlbumManager> *splashAlbumManager;
@property (nonatomic) double likeEggLastPlayTime;
@property (nonatomic) BOOL hasShownAdLightLandingBefore;
@property (nonatomic) BOOL isAdLightLandingShowing;
@property (nonatomic) BOOL videoPausedByAdMask;
@property (retain, nonatomic) AWEPlayInteractionCommerceViewModel *commerceViewModel;
@property (copy, nonatomic) NSString *adEventName;
@property (nonatomic) BOOL enableTTPlayer;
@property (nonatomic) BOOL enableSeekOptimize;
@property (nonatomic) long long playStatusWithLightLanding;
@property (nonatomic) BOOL forbidCommentViewLoadInAdvance;
@property (nonatomic) BOOL adOperationGuideShowing;
@property (nonatomic) BOOL isDisplaying;
@property (retain, nonatomic) id<AWEFeedAutoPlayManagerProtocol> autoPlayManager;
@property (copy, nonatomic) id /* block */ lynxCardLoadHandler;
@property (nonatomic) BOOL shouldDelayLoadLynxCard;
@property (nonatomic) double quickSlideLynxCardLoadTime;
@property (nonatomic) BOOL hasLoadLynxCardView;
@property (nonatomic) BOOL hasLoadOrderCenterPopWindow;
@property (nonatomic) BOOL shouldResetManually;
@property (nonatomic) long long lastAlbumIndex;
@property (nonatomic) BOOL isAdLearnMoreShowed;
@property (retain, nonatomic) NSObject<AWECommerceDispatcherManager> *adDispatcherManager;
@property (retain, nonatomic) AWEListDataController<AWESimilarRecommendDataManagerProtocol> *similarRecommendDataManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UILabel *cleanModeAdTitle;
@property (retain, nonatomic) NSObject<AWEAdPromptViewManager> *promptViewManager;
@property (retain, nonatomic) NSObject<AWEAdLynxCardManager> *adLynxCardManager;
@property (retain, nonatomic) UIView<AWEAdSimilarRecommendView> *similarRecommendView;
@property (copy, nonatomic) NSString *componentsPriorityType;
@property (nonatomic) BOOL alreadyShowAdOperationGuide;
@property (nonatomic) BOOL adInteractedWithFeedAutoPLay;

- (id)zoomTransitionStartViewForOffset:(long long)arg0;
- (BOOL)zoomTransitionWantsTabBarAnimation;
- (double)tabbarAnimationDuration;
- (BOOL)zoomTransitionWantsTabBarAlphaAnimation;
- (id)adEventName;
- (void)setAdEventName:(id)arg0;
- (void)setHide:(BOOL)arg0;
- (void)onPlayerWillLoopPlaying:(id)arg0;
- (void)onPlayer:(id)arg0 didChangePlaybackStateWithAction:(long long)arg1;
- (void)onPlayer:(id)arg0 didChangeStallState:(long long)arg1 actionType:(long long)arg2 reason:(unsigned long long)arg3;
- (void)audienceQuitAllRoom;
- (void)onPlayerPlay:(id)arg0 ifPlay:(BOOL)arg1;
- (void)updateAllSubViews;
- (void)playVideoControllerWillLoopPlay;
- (void)resumeCardAnimation;
- (void)cancelCardAnimation;
- (void)setIsDisplaying:(BOOL)arg0;
- (id)cleanModeAdTitle;
- (void)setCleanModeAdTitle:(id)arg0;
- (void)setPromptViewManager:(id)arg0;
- (id)adLynxCardManager;
- (void)setAdLynxCardManager:(id)arg0;
- (id)similarRecommendView;
- (void)setSimilarRecommendView:(id)arg0;
- (id)componentsPriorityType;
- (void)setComponentsPriorityType:(id)arg0;
- (BOOL)alreadyShowAdOperationGuide;
- (void)setAlreadyShowAdOperationGuide:(BOOL)arg0;
- (BOOL)adInteractedWithFeedAutoPLay;
- (void)setAdInteractedWithFeedAutoPLay:(BOOL)arg0;
- (BOOL)adOperationGuideShowing;
- (BOOL)forbidCommentViewLoadInAdvance;
- (void)updateAdOperationViewNewImmediately;
- (BOOL)isSimilarRecommendViewShowing;
- (void)reCalculateComponentPriority:(id)arg0;
- (void)promptCardAppearWithOffset:(double)arg0;
- (void)promptCardDisAppear;
- (void)showSimilarRecommendViewIfNeedWithAnimation:(BOOL)arg0;
- (BOOL)checkToShowCardForCurrentPriorityComponent:(unsigned long long)arg0;
- (void)setupCardWithQuickSlideStrategy:(id)arg0;
- (void)viewDidAppearForLazyLoad;
- (void)viewWillDisappearForLazyLoad;
- (void)showAnimationContainerWithIndex:(long long)arg0;
- (id)promptViewManager;
- (void)richAwemeProgressUpdateWithIndex:(long long)arg0 fromIndex:(long long)arg1 method:(unsigned long long)arg2 needTrack:(BOOL)arg3;
- (void)updateSlidesAwemeProgressWithDuration:(double)arg0 totalCount:(long long)arg1 currentIndex:(long long)arg2 currentProgress:(double)arg3 slideMethod:(unsigned long long)arg4 direction:(id)arg5;
- (void)richAwemePinch;
- (void)onUpdatePlayerController:(id)arg0 withPlayVideoVC:(id)arg1;
- (void)popUpAdPromptView:(BOOL)arg0;
- (void)videoController_updatePlayerIfNeeded:(id)arg0;
- (void)showDouPlusEntryGuideAnimation;
- (void)playAdRiflePendantElementWebpIcon;
- (id)adOperationView;
- (void)onAdOperationViewClicked:(id)arg0;
- (void)setAdOperationView:(id)arg0;
- (void)showAdOperationViewWithPlayTimes:(long long)arg0;
- (void)showAdMannorOperationViewWithPlayTimes:(long long)arg0;
- (void)closeAdOperationGuide:(unsigned long long)arg0;
- (void)showLearnMoreView:(BOOL)arg0 withModel:(id)arg1;
- (void)notifyScreenRotation;
- (void)flashLearnMoreViewWithAnimation:(BOOL)arg0;
- (void)hideRewardView:(BOOL)arg0 withModel:(id)arg1;
- (void)popUpAdSimilarRecommandView;
- (void)closeAdPromptView;
- (BOOL)isDecouplingFromMask;
- (BOOL)isPromptModalShowing;
- (void)resetPromptCardIfNeeded;
- (void)resetAdOperationWebViewIfNeeded;
- (void)preloadWebViewOperationWithModel:(id)arg0;
- (void)popUpAnchorView;
- (void)showRedpacketAnimation;
- (void)animateLeftBottomByXOffset:(double)arg0 yOffset:(double)arg1 alpha:(double)arg2;
- (void)handleVideoPlayWhenOpenLandingPage:(id)arg0;
- (id)similarAdManager;
- (void)p_prepareForDisplay;
- (void)removeControllerFromSuperView;
- (void)showAdMannorOperationView;
- (void)postVideoNotificationForAutoPlay;
- (id)promptModalManager;
- (id)commerceViewModel;
- (void)setEnableTTPlayer:(BOOL)arg0;
- (void)setPromptModalManager:(id)arg0;
- (void)setCommerceViewModel:(id)arg0;
- (BOOL)promptViewExist;
- (BOOL)isPromptViewShowing;
- (void)setLastAlbumIndex:(long long)arg0;
- (long long)lastAlbumIndex;
- (id)adOperationViewController;
- (id)adOperationWebViewController;
- (void)setAdOperationWebViewController:(id)arg0;
- (void)setAdOperationViewController:(id)arg0;
- (void)setAdOperationGuideShowing:(BOOL)arg0;
- (BOOL)enableTTPlayer;
- (id)autoPlayManager;
- (void)setAutoPlayManager:(id)arg0;
- (BOOL)shouldShowAdOperationView;
- (void)handleLightLandingWebViewControllerWillShowNotification:(id)arg0;
- (void)setupDispatcherManager;
- (void)setEnableSeekOptimize:(BOOL)arg0;
- (BOOL)enableSeekOptimize;
- (void)showAdLearnMoreViewImmediatly:(id)arg0;
- (void)setupAdSimilarRecommandView;
- (void)setupAnchorIfNeed;
- (void)logFlexibleDurationActionMask;
- (void)setIsAdLearnMoreShowed:(BOOL)arg0;
- (BOOL)isAdLearnMoreShowed;
- (BOOL)setupLearnMoreViewForInteractiveVideo;
- (void)trackAdPlayOver;
- (BOOL)isCorrectVideoViewController;
- (BOOL)bizDowngradeCommentViewLoadInAdvance;
- (void)adWebViewDidFinishedBackWithContext:(id)arg0;
- (void)addEventHandler;
- (void)addFeedElementsAnimateNotification;
- (void)adComponentsReset:(id)arg0;
- (void)hasInteractedWithFeedAutoPlay;
- (void)startHARService;
- (void)setForbidCommentViewLoadInAdvance:(BOOL)arg0;
- (BOOL)isAdLightLandingShowing;
- (BOOL)videoPausedByAdMask;
- (void)setVideoPausedByAdMask:(BOOL)arg0;
- (id)mysteryBoxManager;
- (id)twistImageManager;
- (void)handlePopupOrderCenterViewIfNeed;
- (void)hideAdOperationGuideView;
- (void)stopObservingLightLandingNotifications;
- (void)stopObservingLightLandingCloseNotifications;
- (void)closeOldOperationNotification;
- (id)adFeedAppStoreHistoryManager;
- (BOOL)shouldShowNewAdFormOperationGuide;
- (void)beginObservingLightLandingNotifications;
- (void)beginObservingLightLandingCloseNotifications;
- (void)showOldOperationNotification;
- (id)similarRecommendDataManager;
- (void)setSimilarRecommendDataManager:(id)arg0;
- (void)setupSimilarRecommendViewWithDataManager:(id)arg0;
- (void)dismissLeftBottomAdCard;
- (void)processSummerCallingIfNeeded;
- (id)nakedEye3DManager;
- (void)processTwistImageIfNeeded;
- (void)p_loadMannorIfNeeded;
- (void)setupSplashAlbumManagerIfNeeded;
- (void)p_resetMannorManagerIfNeeded;
- (void)loadVibrationManagerIfNeeded;
- (void)setupCardInfo;
- (void)loadLikeFireworksEggManagerIfNeeded;
- (id)complianceModalManager;
- (void)loadAdRichAwemeManagerIfNeeded;
- (void)loadAdSearchManager;
- (void)loadMysteryBoxManagerIfNeeded;
- (void)adSimilarRecommandViewInitFetch;
- (id)batManManager;
- (id)vibrationManager;
- (id)likeFireworksEggManager;
- (id)adRichAwemeManager;
- (id)splashAlbumManager;
- (void)setCacheForAdOperationWebViewController:(id)arg0;
- (id /* block */)lynxCardLoadHandler;
- (void)resetAdDispatcherManager;
- (void)setComplianceModalManager:(id)arg0;
- (void)resetSummerCallingIfNeeded;
- (void)resetLikeFireworksManagerIfNeeded;
- (void)removeAdRichAwemeManagerIfNeeded;
- (id)tigerFromEastManager;
- (void)setTigerFromEastManager:(id)arg0;
- (id)likeEggView;
- (void)setHasShownAdLightLandingBefore:(BOOL)arg0;
- (void)setIsAdLightLandingShowing:(BOOL)arg0;
- (void)setShouldResetManually:(BOOL)arg0;
- (void)closeFeedElementsAnimateNotification;
- (void)updateAdOperationView;
- (BOOL)shouldResetManually;
- (id)adFeedLokiManager;
- (void)similarAdResetOtherComponents;
- (void)resetSimilarAdManagerIfNeeded:(id)arg0;
- (void)setupLynxCardQuickSlideStrategyInfo;
- (void)LoadlynxCardDelay;
- (void)loadAdLynxCardManagerIfNeeded;
- (void)loadNakedEye3DIfNeeded;
- (void)loadAdLokiManagerIfNeeded;
- (void)loadAdAppStoreDownloadManagerIfNeeded;
- (void)_onAdOperationViewClicked_IMP:(id)arg0;
- (void)promptViewAppearingDebugHandler;
- (void)promptViewDisappearingDebugHandler;
- (void)trackIronManEventMPShowWithPromptStyle:(unsigned long long)arg0;
- (void)trackIronManEventMPClick;
- (id)cacheForAdOperationWebViewController;
- (id)autoPopupLandingPageManager;
- (void)showAdOperationGuide;
- (void)showAdMannorOperationGuide;
- (BOOL)p_loadPlayableLandingPageIfNeededFail;
- (BOOL)shouldShowWebViewOperation;
- (void)showAdOperationView;
- (void)trackShowAdOpeartionView;
- (void)showLearnMoreLynxView:(BOOL)arg0;
- (void)showLearnMoreNormalView:(BOOL)arg0;
- (void)processNotificationOnLandingPageIfNeeded;
- (void)setupAdActivityBottomViewIfNeed;
- (void)onLearnMoreViewClicked:(id)arg0 extParam:(id)arg1;
- (id)similarRecommendDictionary;
- (void)animateLeftBottomByWidth:(double)arg0 height:(double)arg1 xOffset:(double)arg2 yOffset:(double)arg3 alpha:(double)arg4 duration:(double)arg5 exceptElements:(id)arg6 completionBlock:(id /* block */)arg7;
- (void)executeTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })arg0 alpha:(double)arg1 exceptElements:(id)arg2;
- (double)likeEggLastPlayTime;
- (void)setLikeEggLastPlayTime:(double)arg0;
- (void)setLikeEggView:(id)arg0;
- (void)startFeedElementsAnimationWithNotification:(id)arg0;
- (void)showOldOperationWithNotification:(id)arg0;
- (void)closeOperationWithNotification;
- (void)handleLightLandingWebViewControllerDidCloseNotification:(id)arg0;
- (void)handleVideoPlayWithLightLandingWhenApplicationDidBecomeActive:(id)arg0;
- (BOOL)enableIsolateOtherPageSoundsWhenOpenLandingPage;
- (void)setPlayStatusWithLightLanding:(long long)arg0;
- (long long)playStatusWithLightLanding;
- (void)playAdLikeEggLottieAnimationOnView:(id)arg0;
- (void)fetchFeedElementStatus;
- (id)adSearchManager;
- (void)richAwemeProgressUpdateWithIndex:(long long)arg0 fromIndex:(long long)arg1 method:(unsigned long long)arg2;
- (void)setNakedEye3DManager:(id)arg0;
- (void)setLikeFireworksEggManager:(id)arg0;
- (void)setSummerCallingManager:(id)arg0;
- (id)summerCallingManager;
- (void)setTwistImageManager:(id)arg0;
- (BOOL)shouldDelayLoadLynxCard;
- (double)quickSlideLynxCardLoadTime;
- (BOOL)hasLoadLynxCardView;
- (void)setHasLoadLynxCardView:(BOOL)arg0;
- (BOOL)shouldAddNotificationOnLandingPage;
- (void)setSplashAlbumManager:(id)arg0;
- (void)setupAdNativeLearnMoreView;
- (void)setupAdCardIfNeeded:(id)arg0;
- (void)setupRedpacketAnimationIfNeed;
- (void)updatePlayerConfiguration:(id)arg0;
- (void)preloadOperationWebView;
- (void)adOperationViewInit;
- (void)setupTigerFromEast;
- (void)setupAdLearnMoreView:(long long)arg0 changeTime:(long long)arg1 animateWhenDelay:(BOOL)arg2;
- (void)displayFeedAnchorIfNeeded;
- (BOOL)shouldShowCleanModeAdTitle;
- (void)onLearnMoreViewClicked:(id)arg0;
- (void)handlePromptContainerViewOffsetWithBottomElement:(id)arg0;
- (void)setAdFeedAppStoreHistoryManager:(id)arg0;
- (void)setVibrationManager:(id)arg0;
- (void)setMysteryBoxManager:(id)arg0;
- (void)setBatManManager:(id)arg0;
- (void)setAdRichAwemeManager:(id)arg0;
- (void)setAdSearchManager:(id)arg0;
- (void)setAutoPopupLandingPageManager:(id)arg0;
- (BOOL)hasShownAdLightLandingBefore;
- (void)setLynxCardLoadHandler:(id /* block */)arg0;
- (void)setShouldDelayLoadLynxCard:(BOOL)arg0;
- (void)setQuickSlideLynxCardLoadTime:(double)arg0;
- (BOOL)hasLoadOrderCenterPopWindow;
- (void)setHasLoadOrderCenterPopWindow:(BOOL)arg0;
- (id)adDispatcherManager;
- (void)setAdDispatcherManager:(id)arg0;
- (void)prepareForDisplay;
- (void)setModel:(id)arg0;
- (void)viewDidLayoutSubviews;
- (void)resume;
- (void).cxx_destruct;
- (double)animationDuration;
- (BOOL)isInteracting;
- (void)viewDidAppear;
- (void)dealloc;
- (void)pause;
- (void)reset;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (BOOL)isDisplaying;
- (void)viewDidDisappear;
- (id)shareButton;
- (void)willDisplay;
- (id)videoDelegate;
- (void)viewWillDisappear;

@end