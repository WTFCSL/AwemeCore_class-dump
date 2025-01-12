//
//     Generated by private class-dump
//

@class PuzzleContext, NSString, UIScreenEdgePanGestureRecognizer, PuzzleHybridContainer, UIView, PuzzleFullScreenControllerUIConfig, NSDictionary, UIButton, PuzzleSecureBannerView, NSNumber, UIColor;
@protocol IESHYHybridViewProtocol, IESHYControllerDelegate, PuzzleNavigationBarProtocol;

@interface PuzzleHybridViewController : UIViewController <IESHYHybridViewLifecycleProtocol, UIScrollViewDelegate, UIGestureRecognizerDelegate, IESHYControllerProtocol> {
    NSNumber *_topLevelEnable;
    BOOL _showingKeyboard;
    BOOL _originNaviBarHidden;
    BOOL _originNaviBarIsHidden;
    BOOL _isPageHadShown;
    BOOL _disableNativeClose;
    BOOL _triggerBackByBackBtn;
    BOOL _appearFirstTime;
    BOOL _appearZeroTimes;
    BOOL _isHybridViewDidLoad;
    BOOL _hideStatusBar;
    BOOL _originNavigationBarHidden;
    BOOL _originNavigationBarIsHidden;
    BOOL _originControllerPopGestureRecongnizerEnabled;
    id<IESHYControllerDelegate> _delegate;
    UIButton *_backBtn;
    UIButton *_shareBtn;
    UIButton *_closeBtn;
    PuzzleSecureBannerView *_secureBanner;
    double _topPadding;
    double _containerViewWidth;
    id _keyboardShowObserver;
    id _keyboardHideObserver;
    PuzzleContext *_context;
    NSString *_titleString;
    NSDictionary *_shareInfo;
    UIScreenEdgePanGestureRecognizer *_screenEdgeBackGesture;
    UIButton *_errorPageBackBtn;
    PuzzleHybridContainer *_hybridContainer;
    UIView *_statusBarBackgroundView;
    long long _statusBarStyle;
    UIColor *_originStatusBarBackgroundColor;
    long long _originStatusBarStyle;
    UIView<PuzzleNavigationBarProtocol> *_navigationBar;
    id _cachedPopGestureRecognizerDelegate;
    PuzzleFullScreenControllerUIConfig *_config;
    struct CGPoint { double x; double y; } _panStartPoint;
}

@property (retain, nonatomic) UIButton *backBtn;
@property (retain, nonatomic) UIButton *shareBtn;
@property (retain, nonatomic) UIButton *closeBtn;
@property (retain, nonatomic) PuzzleSecureBannerView *secureBanner;
@property (nonatomic) BOOL showingKeyboard;
@property (nonatomic) BOOL originNaviBarHidden;
@property (nonatomic) BOOL originNaviBarIsHidden;
@property (nonatomic) double topPadding;
@property (nonatomic) double containerViewWidth;
@property (retain, nonatomic) id keyboardShowObserver;
@property (retain, nonatomic) id keyboardHideObserver;
@property (retain, nonatomic) PuzzleContext *context;
@property (retain, nonatomic) NSString *titleString;
@property (nonatomic) BOOL isPageHadShown;
@property (nonatomic) BOOL disableNativeClose;
@property (nonatomic) BOOL triggerBackByBackBtn;
@property (copy, nonatomic) NSDictionary *shareInfo;
@property (retain, nonatomic) UIScreenEdgePanGestureRecognizer *screenEdgeBackGesture;
@property (nonatomic) struct CGPoint { double x; double y; } panStartPoint;
@property (nonatomic) BOOL appearFirstTime;
@property (nonatomic) BOOL appearZeroTimes;
@property (nonatomic) BOOL isHybridViewDidLoad;
@property (retain, nonatomic) UIButton *errorPageBackBtn;
@property (retain, nonatomic) PuzzleHybridContainer *hybridContainer;
@property (retain, nonatomic) UIView *statusBarBackgroundView;
@property (nonatomic) long long statusBarStyle;
@property (nonatomic) BOOL hideStatusBar;
@property (retain, nonatomic) UIColor *originStatusBarBackgroundColor;
@property (nonatomic) long long originStatusBarStyle;
@property (retain, nonatomic) UIView<PuzzleNavigationBarProtocol> *navigationBar;
@property (nonatomic) BOOL originNavigationBarHidden;
@property (nonatomic) BOOL originNavigationBarIsHidden;
@property (nonatomic) BOOL originControllerPopGestureRecongnizerEnabled;
@property (weak, nonatomic) id cachedPopGestureRecognizerDelegate;
@property (retain, nonatomic) PuzzleFullScreenControllerUIConfig *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIView<IESHYHybridViewProtocol> *kitView;
@property (weak, nonatomic) id<IESHYControllerDelegate> delegate;

- (void)dismissWithAnimated:(BOOL)arg0 completion:(id /* block */)arg1;
- (id)kitView;
- (id)hybridContainer;
- (id)closeBtn;
- (id)backBtn;
- (void)setBackBtn:(id)arg0;
- (void)setCloseBtn:(id)arg0;
- (void)setStatusBarBackgroundColor:(id)arg0;
- (void)updateStatusBarStyle:(long long)arg0;
- (void)setOriginNavigationBarHidden:(BOOL)arg0;
- (void)setOriginNavigationBarIsHidden:(BOOL)arg0;
- (void)setOriginStatusBarStyle:(long long)arg0;
- (BOOL)originNavigationBarHidden;
- (BOOL)originNavigationBarIsHidden;
- (long long)originStatusBarStyle;
- (id)hmdPageExtension;
- (void)handlePageVisiablityChange:(BOOL)arg0 source:(id)arg1;
- (BOOL)fixSystemPopTransitionEnable;
- (void)setHybridContainer:(id)arg0;
- (void)viewDidCreated:(id)arg0;
- (void)viewDidStartLoading;
- (void)viewDidFinishLoadWithURL:(id)arg0;
- (void)viewDidLoadFailedWithUrl:(id)arg0 error:(id)arg1;
- (void)closeViewIfNeeded;
- (void)viewDidBackForward;
- (void)viewDidReceiveSecureRisk:(id)arg0;
- (id)shareBtn;
- (void)setShareBtn:(id)arg0;
- (void)updateTitleColor:(id)arg0;
- (void)setTopLevelEnable:(id)arg0;
- (id)topLevelEnable;
- (void)cancelLoadingAnimation;
- (void)injectShareInfo:(id)arg0;
- (void)showWithAnimated:(BOOL)arg0 animator:(id)arg1 completion:(id /* block */)arg2;
- (void)closeHybridWithCompletion:(id /* block */)arg0;
- (void)dismissWithAnimated:(BOOL)arg0 animator:(id)arg1 completion:(id /* block */)arg2;
- (void)updateStatusBarBackgroundColor:(id)arg0;
- (void)updateNavigationBarColor:(id)arg0;
- (void)setWebViewBounceEnable:(BOOL)arg0;
- (void)setDisableNativeClose:(BOOL)arg0;
- (void)setNavigationSwipeBackEnable:(BOOL)arg0;
- (void)setNavigationRightButtonType:(id)arg0;
- (BOOL)isPadAdaptionMode;
- (id)initWithConfig:(id)arg0 context:(id)arg1 delegate:(id)arg2;
- (void)setCachedPopGestureRecognizerDelegate:(id)arg0;
- (void)setOriginControllerPopGestureRecongnizerEnabled:(BOOL)arg0;
- (void)__resetStatusBarStyle;
- (BOOL)originControllerPopGestureRecongnizerEnabled;
- (id)originStatusBarBackgroundColor;
- (void)hideFloatLiveWindow;
- (void)showFloatLiveWindow;
- (void)setContainerViewWidth:(double)arg0;
- (double)containerViewWidth;
- (void)setAppearZeroTimes:(BOOL)arg0;
- (BOOL)appearZeroTimes;
- (void)p_BtnActionWithBtnType:(id)arg0;
- (struct CGPoint { double x0; double x1; })panStartPoint;
- (void)setPanStartPoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)handleScreenEdgePan:(id)arg0;
- (void)dismissKeyboard:(id)arg0;
- (void)p_showTracker;
- (id)secureBanner;
- (void)removeSecBanner;
- (void)setSecureBanner:(id)arg0;
- (void)showSecBanner:(id)arg0;
- (void)setOriginStatusBarBackgroundColor:(id)arg0;
- (void)clickBackBtn;
- (void)setAppearFirstTime:(BOOL)arg0;
- (BOOL)appearFirstTime;
- (void)calculateContainerWidth;
- (void)addKeyboardObserver;
- (BOOL)disableNativeClose;
- (id)keyboardShowObserver;
- (id)keyboardHideObserver;
- (void)addScreenshotObserver;
- (long long)targetUIMode;
- (id)commonTrackerParam;
- (void)setTriggerBackByBackBtn:(BOOL)arg0;
- (void)setKeyboardShowObserver:(id)arg0;
- (void)setKeyboardHideObserver:(id)arg0;
- (void)sendScreenshotEvent;
- (void)dismissWithAnimated:(BOOL)arg0 animator:(id)arg1 closeType:(long long)arg2 completion:(id /* block */)arg3;
- (BOOL)interceptCloseAndSendEventWithType:(long long)arg0;
- (void)closeLastContainerIfNeeded:(id)arg0;
- (BOOL)triggerBackByBackBtn;
- (void)__setupHybridContainer;
- (void)__registerJSB;
- (void)__setupBackBtn;
- (void)__setupShareBtn;
- (void)__setupCloseBtn;
- (void)__setupNavigationView;
- (void)__configUIAppearance;
- (BOOL)enableResetNaviBarHidden;
- (void)setOriginNaviBarHidden:(BOOL)arg0;
- (void)setOriginNaviBarIsHidden:(BOOL)arg0;
- (BOOL)isPageHadShown;
- (void)setIsPageHadShown:(BOOL)arg0;
- (void)cachePopGestureRecognizer;
- (void)updateSystemPopTransitionEnable:(BOOL)arg0 fullscreenPopTransitionEnable:(BOOL)arg1;
- (void)resumePopGestureRecognizer;
- (BOOL)originNaviBarHidden;
- (BOOL)originNaviBarIsHidden;
- (void)updateHybridViewLayout;
- (BOOL)isHybridViewDidLoad;
- (id)__setupContext;
- (void)clickShareBtn;
- (double)topBtnMargin;
- (void)clickCloseBtn;
- (long long)statusBarStyleForNormalMode;
- (void)setScreenEdgeBackGesture:(id)arg0;
- (id)screenEdgeBackGesture;
- (id)cachedPopGestureRecognizerDelegate;
- (BOOL)isInLightAdapterAllowList;
- (void)updateAutoShowNavBarButtonAlpha:(double)arg0;
- (void)_doPopActionWithAnimated:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)__addScreenEdgeBackGesture;
- (void)setupNavigationPopGestureRecognizerEnable:(BOOL)arg0;
- (void)setIsHybridViewDidLoad:(BOOL)arg0;
- (id)errorPageBackBtn;
- (void)setErrorPageBackBtn:(id)arg0;
- (BOOL)shouldAutorotate;
- (void)setStatusBarHidden:(BOOL)arg0;
- (long long)statusBarStyle;
- (void)goBack;
- (void)setConfig:(id)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (id)statusBarBackgroundView;
- (unsigned long long)supportedInterfaceOrientations;
- (void)setContext:(id)arg0;
- (void)setStatusBarStyle:(long long)arg0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })arg0 withTransitionCoordinator:(id)arg1;
- (id)config;
- (double)topPadding;
- (void)viewWillDisappear:(BOOL)arg0;
- (long long)preferredStatusBarStyle;
- (void)viewDidDisappear:(BOOL)arg0;
- (id)shareInfo;
- (void)scrollViewDidScroll:(id)arg0;
- (void)setStatusBarBackgroundView:(id)arg0;
- (void)setShareInfo:(id)arg0;
- (id)delegate;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (BOOL)showingKeyboard;
- (void)addChildViewController:(id)arg0;
- (id)context;
- (void)setShowingKeyboard:(BOOL)arg0;
- (id)navigationBar;
- (void)setNavigationBar:(id)arg0;
- (BOOL)prefersStatusBarHidden;
- (void)viewWillAppear:(BOOL)arg0;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (id)titleString;
- (void)setTitleString:(id)arg0;
- (BOOL)hideStatusBar;
- (void)setTopPadding:(double)arg0;
- (void)setHideStatusBar:(BOOL)arg0;
- (void)updateTitle:(id)arg0;

@end
