//
//     Generated by private class-dump
//

@class UIView, NSString, AWEAwemeModel, AWEAdLightLandingWebViewInterceptorHandler, AWEAdWebviewInfo, NSDictionary, AWEAdLightLandingErrorView, UIButton, AWEPageSheetPresentationNavigationController, UIColor;
@protocol AWEPageSheetUIModifyDelegate;

@interface AWEAdLightLandingWebViewController : AWEBaseWebViewController <AWEPageSheetPresentationObserving, AWEPageSheetPresentationPhaseTransitionDelegate, AWEPageSheetTransitionDelegate, AWELightTransitionAnimationDelegate, AWEPageSheetPresentationPopupEventDelegate, AWERouterViewControllerProtocol> {
    BOOL _isTransitionAnimating;
    BOOL _isBackgroundVideoPlaying;
    BOOL _shouldUseFullscreen;
    BOOL _isPreloading;
    id /* block */ _panProgress;
    id /* block */ _dismissCallBack;
    id /* block */ _cancelDismissCallback;
    id /* block */ _cancelCompletedCallback;
    id /* block */ _deallocCallback;
    NSString *_URLString;
    AWEAwemeModel *_aweme;
    AWEAdWebviewInfo *_adWebviewContext;
    long long _timesOfViewWillAppearGetCalled;
    long long _timesOfViewDidAppearGetCalled;
    UIButton *_closeButton;
    UIButton *_closeButtonLine;
    AWEAdLightLandingErrorView *_errorView;
    long long _closeButtonStyle;
    long long _UIStyle;
    long long _transferType;
    double _timestampWhenViewDidAppear;
    double _timestampWhenWebViewStartedLoading;
    NSString *_JSInjections;
    NSString *_pageSheetHexBackgroundColor;
    UIView *_topBar;
    NSDictionary *_configParams;
    double _screenHeight;
    AWEPageSheetPresentationNavigationController *_navigationContainer;
    UIColor *_lightBackgroundColor;
    long long _lightTransitionType;
    double _screenHeightInHalfState;
    id<AWEPageSheetUIModifyDelegate> _pageSheetUIDelegate;
    AWEAdLightLandingWebViewInterceptorHandler *_webViewInterceptorHandler;
}

@property (readonly, copy, nonatomic) NSString *URLString;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (retain, nonatomic) AWEAdWebviewInfo *adWebviewContext;
@property (nonatomic) long long timesOfViewWillAppearGetCalled;
@property (nonatomic) long long timesOfViewDidAppearGetCalled;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIButton *closeButtonLine;
@property (retain, nonatomic) AWEAdLightLandingErrorView *errorView;
@property (nonatomic) long long closeButtonStyle;
@property (nonatomic) long long UIStyle;
@property (nonatomic) long long transferType;
@property (nonatomic) double timestampWhenViewDidAppear;
@property (nonatomic) double timestampWhenWebViewStartedLoading;
@property (nonatomic) BOOL isPreloading;
@property (copy, nonatomic) NSString *JSInjections;
@property (copy, nonatomic) NSString *pageSheetHexBackgroundColor;
@property (retain, nonatomic) UIView *topBar;
@property (copy, nonatomic) NSDictionary *configParams;
@property (nonatomic) double screenHeight;
@property (weak, nonatomic) AWEPageSheetPresentationNavigationController *navigationContainer;
@property (retain, nonatomic) UIColor *lightBackgroundColor;
@property (nonatomic) long long lightTransitionType;
@property (nonatomic) double screenHeightInHalfState;
@property (weak, nonatomic) id<AWEPageSheetUIModifyDelegate> pageSheetUIDelegate;
@property (retain, nonatomic) AWEAdLightLandingWebViewInterceptorHandler *webViewInterceptorHandler;
@property (nonatomic) BOOL isBackgroundVideoPlaying;
@property (nonatomic) BOOL shouldUseFullscreen;
@property (copy, nonatomic) id /* block */ panProgress;
@property (copy, nonatomic) id /* block */ dismissCallBack;
@property (copy, nonatomic) id /* block */ cancelDismissCallback;
@property (copy, nonatomic) id /* block */ cancelCompletedCallback;
@property (copy, nonatomic) id /* block */ deallocCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isTransitionAnimating;

+ (id)viewControllerWithURLString:(id)arg0 paramDict:(id)arg1 awemeModel:(id)arg2 adWebviewInfo:(id)arg3;
+ (void)registerJSBridgeHandler;
+ (void)preloadWithURLString:(id)arg0 aweme:(id)arg1;
+ (void)cancelPreloadWithURLString:(id)arg0;
+ (void)removePreloadWithURLString:(id)arg0;
+ (void)setupViewBackgroundColor:(id)arg0 color:(id)arg1;
+ (void)removeAllPreload;
+ (void)_aweLazyRegisterLoad_CacheAndPreload;

- (id)aweui_emptyPageConfigForState:(unsigned long long)arg0;
- (BOOL)configWithRouterParamDict:(id)arg0;
- (void)setPanProgress:(id /* block */)arg0;
- (id /* block */)deallocCallback;
- (void)setDeallocCallback:(id /* block */)arg0;
- (id)aweui_emptyPageContainerView;
- (id)aweme;
- (void)setCloseButtonStyle:(long long)arg0;
- (void)setAweme:(id)arg0;
- (void)trackShow;
- (long long)closeButtonStyle;
- (void)setIsPreloading:(BOOL)arg0;
- (long long)UIStyle;
- (void)setUIStyle:(long long)arg0;
- (void)handleKeyboardDidHideNotification:(id)arg0;
- (void)setupDefaultSettings;
- (id)configParams;
- (long long)initialPhaseForPageSheetPresentation:(id)arg0;
- (void)pageSheetPresentationWillBegin:(id)arg0;
- (void)pageSheetDismissalDidEnd:(id)arg0 completed:(BOOL)arg1;
- (BOOL)shouldUseFullscreen;
- (void)pageSheetPresentationWillDismiss;
- (void)pageSheetPresentationPanProgress:(double)arg0;
- (void)pageSheetPresentationCancelDismiss;
- (unsigned long long)phaseTransitionStyleForPageSheetPresentation:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })pageSheetPresentation:(id)arg0 frameOfPresentedViewForPhase:(long long)arg1;
- (void)setShouldUseFullscreen:(BOOL)arg0;
- (id)animationControllerForPresentedController;
- (id)animationControllerForDismissedController;
- (void)handleKeyboardWillShowNotification:(id)arg0;
- (void)handleKeyboardDidShowNotification:(id)arg0;
- (void)handleKeyboardWillHideNotification:(id)arg0;
- (void)presentWithPresentingViewController:(id)arg0 animated:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)setNavigationContainer:(id)arg0;
- (void)handlePageSheetPresentationNotification:(id)arg0;
- (void)closeButtonAction:(id)arg0;
- (void)trackButtonDismissal;
- (void)setPageSheetUIDelegate:(id)arg0;
- (id)pageSheetUIDelegate;
- (id)navigationContainer;
- (void)presentOnTopViewControllerWithAnimation:(BOOL)arg0 completion:(id /* block */)arg1;
- (id)initWithURLString:(id)arg0 paramDict:(id)arg1 awemeModel:(id)arg2 adWebviewInfo:(id)arg3;
- (void)updateNavigationItemOnErrorIfNeeded;
- (void)trackClick;
- (void)setConfigParams:(id)arg0;
- (Class)jsBridgeClass;
- (void)setDismissCallBack:(id /* block */)arg0;
- (void)setCancelDismissCallback:(id /* block */)arg0;
- (void)setCancelCompletedCallback:(id /* block */)arg0;
- (BOOL)isBackgroundVideoPlaying;
- (void)setIsTransitionAnimating:(BOOL)arg0;
- (void)configWithInitParamDict:(id)arg0;
- (void)setIsBackgroundVideoPlaying:(BOOL)arg0;
- (void)setAdWebviewContext:(id)arg0;
- (void)setPageSheetHexBackgroundColor:(id)arg0;
- (void)configScreenHeightDefaultStyle;
- (void)setLightBackgroundColor:(id)arg0;
- (void)setLightTransitionType:(long long)arg0;
- (void)setScreenHeightInHalfState:(double)arg0;
- (void)configDefaultStyle;
- (void)configTopBarDefaultStyle;
- (void)configWebViewBackgroundColorDefaultStyle;
- (void)configCloseButtonDefaultStyle;
- (void)configCloseButtonLineDefaultStyle;
- (void)configCornerRadiusDefaultStyle;
- (void)configRightTopCloseButton;
- (void)configCloseButtonDefaultStyleBase;
- (void)setCloseButtonLine:(id)arg0;
- (id)closeButtonLine;
- (id)lightBackgroundColor;
- (id)webViewInterceptorHandler;
- (id)webViewInterceptorHandler;
- (void)configUIWithParams;
- (void)setUpJSInjections;
- (void)setUpBridge;
- (void)handleJSBridgeWantsOpeningPanelNotification:(id)arg0;
- (void)handleJSBridgeWantsOpeningAdURLNotification:(id)arg0;
- (void)handleJSBridgeWantsOpeningNormalURLNotification:(id)arg0;
- (void)handleJSBridgeWantsClosingLightLandingNotification:(id)arg0;
- (void)handleShowLightLandingNotification:(id)arg0;
- (void)handleJSBridgeWantsUpdateWebViewPresentedHeight:(id)arg0;
- (void)handleDPBStatusNotification:(id)arg0;
- (long long)timesOfViewWillAppearGetCalled;
- (void)setTimesOfViewWillAppearGetCalled:(long long)arg0;
- (long long)timesOfViewDidAppearGetCalled;
- (void)setTimestampWhenViewDidAppear:(double)arg0;
- (void)setTimesOfViewDidAppearGetCalled:(long long)arg0;
- (double)timestampWhenViewDidAppear;
- (void)trackPageStayWithDuration:(double)arg0;
- (id)adWebviewContext;
- (void)showMenuViewControllerWithInfo:(id)arg0;
- (void)showDatePickerViewControllerWithInfo:(id)arg0;
- (BOOL)isTransitionAnimating;
- (void)transferToOtherPageByPresent:(id)arg0;
- (long long)lightTransitionType;
- (id /* block */)dismissCallBack;
- (void)trackBackgroundTapDismissal;
- (void)trackDraggingDismissal;
- (void)showDebugActionSheet;
- (void)refreshButtonAxtion:(id)arg0;
- (void)setJSInjections:(id)arg0;
- (void)setTimestampWhenWebViewStartedLoading:(double)arg0;
- (void)trackPreloadStarted;
- (double)timestampWhenWebViewStartedLoading;
- (void)trackPreloadCancellationWithDuration:(double)arg0;
- (BOOL)shouldInterceptBottomButtonIfNeededWith:(id)arg0;
- (void)setUpConsoleLogHandler;
- (void)trackPreloadSucceededWithDuration:(double)arg0;
- (id)JSInjections;
- (void)trackPreloadFailedWithDuration:(double)arg0;
- (id)pageSheetHexBackgroundColor;
- (double)screenHeightInHalfState;
- (id /* block */)cancelCompletedCallback;
- (id /* block */)cancelDismissCallback;
- (BOOL)falconSchemeHandlerEnable;
- (id)debugResponseForMenuPanel;
- (id)debugResponseForDatePicker;
- (void)setWebViewInterceptorHandler:(id)arg0;
- (void)removeFromPreloadContainer;
- (void)prepareForDisplay;
- (id)URLString;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setScreenHeight:(double)arg0;
- (void)viewWillDisappear:(BOOL)arg0;
- (id)topBar;
- (void)viewDidDisappear:(BOOL)arg0;
- (double)screenHeight;
- (void)viewWillAppear:(BOOL)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setTopBar:(id)arg0;
- (void)motionBegan:(long long)arg0 withEvent:(id)arg1;
- (void)webView:(id)arg0 didFailLoadWithError:(id)arg1;
- (BOOL)webView:(id)arg0 shouldStartLoadWithRequest:(id)arg1 navigationType:(long long)arg2;
- (void)webViewDidStartLoad:(id)arg0;
- (void)webViewDidFinishLoad:(id)arg0;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (long long)transferType;
- (void)loadRequest;
- (BOOL)isPreloading;
- (id)errorView;
- (void)setErrorView:(id)arg0;
- (void)setTransferType:(long long)arg0;
- (id /* block */)panProgress;
- (BOOL)cancelIfNeeded;

@end