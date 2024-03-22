//
//     Generated by private class-dump
//

@class BUPlayableAd, NSString, UIView, NSTimer, AWEBDARifleView, AWEAwemeModel, NSDictionary, DUXBottomNotification, NSObject, NSNumber, UIColor;
@protocol AWEUILoadingViewProtocol, AWECommerceQponLandingManager, AWEAdLynxCoverLandingPageView, AWEAdInteractiveLandingpageManager, AWEBDARifleViewControllerLifeCycleProtocol;

@interface AWEBDARifleViewController : UIViewController <UIGestureRecognizerDelegate, AWEBDARifleViewDelegate, BUPlayableAdDelegate, AWEBDARifleViewController> {
    BOOL isPlayable;
    BOOL _shouldFullScreen;
    BOOL canShowLynxOverLandingPageView;
    BOOL fallBackedToH5;
    BOOL forceHiddenNavBar;
    BOOL commentViewControllerIsShow;
    BOOL _hideNavBar;
    BOOL _immersiveMode;
    BOOL _hideNaviBar;
    BOOL _showLoading;
    BOOL _hideStatusBar;
    BOOL _hideLoading;
    BOOL _forceH5;
    BOOL _forceDarkStyle;
    BOOL _disablePopGesture;
    BOOL _enableFontScale;
    BOOL _disablePadResize;
    BOOL _surveyPopFlag;
    BOOL _disableStayTrack;
    BOOL _needUpdateScreenSize;
    id<AWEBDARifleViewControllerLifeCycleProtocol> lifecycleDelegate;
    NSString *accessKey;
    NSString *channelName;
    NSString *bundleName;
    NSString *schema;
    AWEAwemeModel *model;
    long long tipsType;
    NSDictionary *initialParams;
    id /* block */ _clickButtonHandle;
    DUXBottomNotification *bottomNotification;
    id /* block */ showBottomNotificationTask;
    AWEBDARifleView *_bdaRifleView;
    NSDictionary *_urlParams;
    long long _isDynamic;
    UIView<AWEUILoadingViewProtocol> *_loadingView;
    NSString *_cardID;
    NSString *_group;
    NSString *_fallbackURL;
    NSString *_lynxTitle;
    UIColor *_titleColor;
    UIColor *_topBarColor;
    UIColor *_navigationBarColor;
    UIColor *_statusBarColor;
    UIColor *_containerBackgroundColor;
    NSNumber *_currentLynxStatusBarStyleType;
    double _startTime;
    NSNumber *_creativeID;
    NSString *_logExtra;
    BUPlayableAd *_playableSDK;
    long long _userViewTimeLimit;
    NSTimer *_surveyTimer;
    UIView<AWEAdLynxCoverLandingPageView> *_lynxCoverLandingPageContainer;
    NSObject<AWEAdInteractiveLandingpageManager> *_interactiveCardManager;
    NSObject<AWECommerceQponLandingManager> *_couponStyleManager;
}

@property (copy, nonatomic) NSDictionary *urlParams;
@property (nonatomic) long long isDynamic;
@property (nonatomic) BOOL immersiveMode;
@property (nonatomic) BOOL hideNaviBar;
@property (nonatomic) BOOL showLoading;
@property (retain, nonatomic) UIView<AWEUILoadingViewProtocol> *loadingView;
@property (nonatomic) BOOL hideStatusBar;
@property (nonatomic) BOOL hideLoading;
@property (copy, nonatomic) NSString *cardID;
@property (copy, nonatomic) NSString *group;
@property (copy, nonatomic) NSString *fallbackURL;
@property (nonatomic) BOOL forceH5;
@property (copy, nonatomic) NSString *lynxTitle;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) UIColor *topBarColor;
@property (retain, nonatomic) UIColor *navigationBarColor;
@property (retain, nonatomic) UIColor *statusBarColor;
@property (retain, nonatomic) UIColor *containerBackgroundColor;
@property (nonatomic) BOOL forceDarkStyle;
@property (nonatomic) BOOL disablePopGesture;
@property (retain, nonatomic) NSNumber *currentLynxStatusBarStyleType;
@property (nonatomic) BOOL enableFontScale;
@property (nonatomic) BOOL disablePadResize;
@property (nonatomic) double startTime;
@property (retain, nonatomic) NSNumber *creativeID;
@property (copy, nonatomic) NSString *logExtra;
@property (retain, nonatomic) BUPlayableAd *playableSDK;
@property (nonatomic) BOOL surveyPopFlag;
@property (nonatomic) long long userViewTimeLimit;
@property (retain, nonatomic) NSTimer *surveyTimer;
@property (retain, nonatomic) UIView<AWEAdLynxCoverLandingPageView> *lynxCoverLandingPageContainer;
@property (retain, nonatomic) NSObject<AWEAdInteractiveLandingpageManager> *interactiveCardManager;
@property (nonatomic) BOOL disableStayTrack;
@property (nonatomic) BOOL needUpdateScreenSize;
@property (retain, nonatomic) NSObject<AWECommerceQponLandingManager> *couponStyleManager;
@property (retain, nonatomic) AWEBDARifleView *bdaRifleView;
@property (nonatomic) BOOL hideNavBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEBDARifleViewControllerLifeCycleProtocol> lifecycleDelegate;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSString *channelName;
@property (copy, nonatomic) NSString *bundleName;
@property (nonatomic) BOOL isPlayable;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) long long tipsType;
@property (nonatomic) BOOL canShowLynxOverLandingPageView;
@property (nonatomic) BOOL shouldFullScreen;
@property (nonatomic) BOOL fallBackedToH5;
@property (nonatomic) BOOL forceHiddenNavBar;
@property (copy, nonatomic) NSDictionary *initialParams;

- (BOOL)configWithRouterParamDict:(id)arg0;
- (BOOL)awe_shouldAutorotate;
- (unsigned long long)awe_supportedInterfaceOrientations;
- (id)logExtra;
- (void)setLogExtra:(id)arg0;
- (void)setCreativeID:(id)arg0;
- (void)backButtonClicked;
- (long long)tipsType;
- (id)lifecycleDelegate;
- (void)setLifecycleDelegate:(id)arg0;
- (void)updateScreenMetrics;
- (void)playableAd:(id)arg0 registerHandlerBlock:(id /* block */)arg1 forJSMethod:(id)arg2;
- (void)playableAd:(id)arg0 fireEvent:(id)arg1 params:(id)arg2;
- (void)playableEventReportNotification:(id)arg0;
- (id)templateData;
- (void)rifleViewDidStartLoading:(id)arg0;
- (void)rifleView:(id)arg0 didFinishLoadWithURL:(id)arg1;
- (void)rifleView:(id)arg0 didLoadFailedWithURL:(id)arg1 error:(id)arg2;
- (void)rifleViewvDidFirstScreen:(id)arg0;
- (void)rifleView:(id)arg0 didRecieveError:(id)arg1;
- (BOOL)hideLoading;
- (void)setTipsType:(long long)arg0;
- (id)statusBarColor;
- (void)setStatusBarColor:(id)arg0;
- (id)urlParams;
- (void)setUrlParams:(id)arg0;
- (void)setHideLoading:(BOOL)arg0;
- (void)setShowLoading:(BOOL)arg0;
- (BOOL)enableFontScale;
- (void)setEnableFontScale:(BOOL)arg0;
- (void)setShowBottomNotificationTask:(id /* block */)arg0;
- (id /* block */)showBottomNotificationTask;
- (BOOL)commentViewControllerIsShow;
- (id /* block */)clickButtonHandle;
- (void)setBottomNotification:(id)arg0;
- (void)setCommentViewControllerIsShow:(BOOL)arg0;
- (id)bottomNotification;
- (void)setClickButtonHandle:(id /* block */)arg0;
- (id)initialParams;
- (void)setForceHiddenNavBar:(BOOL)arg0;
- (void)setShouldFullScreen:(BOOL)arg0;
- (void)setInitialParams:(id)arg0;
- (void)setHideNavBar:(BOOL)arg0;
- (id)bdaRifleView;
- (void)reportButtonClicked;
- (void)setFallBackedToH5:(BOOL)arg0;
- (id)lynxBridges;
- (BOOL)fallBackedToH5;
- (void)setCanShowLynxOverLandingPageView:(BOOL)arg0;
- (BOOL)canShowLynxOverLandingPageView;
- (BOOL)shouldFullScreen;
- (BOOL)forceHiddenNavBar;
- (void)setImmersiveMode:(BOOL)arg0;
- (void)setForceDarkStyle:(BOOL)arg0;
- (id)playableSDK;
- (void)setPlayableSDK:(id)arg0;
- (void)setBdaRifleView:(id)arg0;
- (void)trackStayTime;
- (void)setNeedUpdateScreenSize:(BOOL)arg0;
- (void)setForceH5:(BOOL)arg0;
- (void)setHideNaviBar:(BOOL)arg0;
- (void)configWithRouterParamDictHelper:(id)arg0;
- (void)setLynxTitle:(id)arg0;
- (void)setTopBarColor:(id)arg0;
- (void)setNavigationBarColor:(id)arg0;
- (void)setDisablePopGesture:(BOOL)arg0;
- (void)setCurrentLynxStatusBarStyleType:(id)arg0;
- (void)setDisableStayTrack:(BOOL)arg0;
- (void)setDisablePadResize:(BOOL)arg0;
- (BOOL)disableStayTrack;
- (BOOL)immersiveMode;
- (id)lynxTitle;
- (BOOL)forceDarkStyle;
- (BOOL)shouldResizeForIpad;
- (void)setupImmersiveNavigationBarLayout;
- (void)setupNormalNavigationBarLayout;
- (void)forceHiddenFENavigationBar;
- (void)onRightCommentButtonClicked;
- (void)onRightSurveyButtonClicked;
- (id)topBarColor;
- (BOOL)hideNaviBar;
- (double)lynxViewTopPadding;
- (id)currentLynxStatusBarStyleType;
- (void)setupSurveryAlertViewIfNeeded;
- (void)updateStartTime;
- (void)notifyViewWillAppear;
- (BOOL)hideNavBar;
- (BOOL)disablePopGesture;
- (void)recoverSlideSlip;
- (void)notifyViewDidDisappear;
- (BOOL)needUpdateScreenSize;
- (void)setupPlayableEventNotification;
- (void)removePlayableEventNotification;
- (id)couponStyleManager;
- (BOOL)forceH5;
- (void)configWithCommentData;
- (void)setupTopBarColor;
- (void)setupPlayable;
- (void)loadLynx;
- (void)setupPlayableJSB;
- (void)setupLynxCoverLandingPageContainer;
- (void)setupInteractiveCard;
- (double)resizeWidthForIpad;
- (BOOL)shouldShowPopView;
- (void)showSurveyAlertView;
- (void)setupCouponStyleIfNeeded;
- (BOOL)blockClose;
- (void)closeLynxAction;
- (void)setSurveyPopFlag:(BOOL)arg0;
- (void)setUserViewTimeLimit:(long long)arg0;
- (long long)userViewTimeLimit;
- (void)disableSlideSlip;
- (void)setSurveyTimer:(id)arg0;
- (id)surveyTimer;
- (BOOL)surveyPopFlag;
- (void)showLynxSurveyWithEnterMethod:(id)arg0;
- (BOOL)hasFetchTemplateData;
- (void)setLynxCoverLandingPageContainer:(id)arg0;
- (void)setInteractiveCardManager:(id)arg0;
- (id)interactiveCardManager;
- (id)lynxCoverLandingPageContainer;
- (void)updateLynxViewLayout;
- (BOOL)disablePadResize;
- (void)setCouponStyleManager:(id)arg0;
- (void)showTopStatusBar;
- (void)hideTopStatusBar;
- (void)reloadLynx;
- (void)setSchema:(id)arg0;
- (long long)isDynamic;
- (void)setModel:(id)arg0;
- (BOOL)isPlayable;
- (void)viewDidLayoutSubviews;
- (void)setStartTime:(double)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setIsPlayable:(BOOL)arg0;
- (id)channelName;
- (id)fallbackURL;
- (id)model;
- (id)bundleName;
- (void)viewWillDisappear:(BOOL)arg0;
- (id)titleColor;
- (void)setBundleName:(id)arg0;
- (id)group;
- (long long)preferredStatusBarStyle;
- (void)viewDidDisappear:(BOOL)arg0;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (double)startTime;
- (id)topViewController;
- (void)setTitleColor:(id)arg0;
- (BOOL)prefersStatusBarHidden;
- (void)setIsDynamic:(long long)arg0;
- (void)viewWillAppear:(BOOL)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (id)schema;
- (id)defaultBackgroundColor;
- (void)setGroup:(id)arg0;
- (id)containerBackgroundColor;
- (id)accessKey;
- (void)setAccessKey:(id)arg0;
- (BOOL)hideStatusBar;
- (void)setFallbackURL:(id)arg0;
- (void)setChannelName:(id)arg0;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (void)appDidBecomeActive;
- (void)setupNavigationBar;
- (void)setupNotifications;
- (id)navigationBarColor;
- (void)setHideStatusBar:(BOOL)arg0;
- (id)creativeID;
- (void)setContainerBackgroundColor:(id)arg0;
- (void)updateNavigationTitle;
- (id)cardID;
- (void)setCardID:(id)arg0;
- (void)appWillResignActive;
- (BOOL)showLoading;

@end