//
//     Generated by private class-dump
//

@class UIView, BDPAddShortcutGuideTimer, NSString, BDPOnlineTimeReporter, BDPUniqueID, BDPVConsole, UIButton, BDPFloatingViewController_HG, NSDictionary, BDPWKGamePage, NSNumber;
@protocol BDPLoadingViewProtocol, BDPToolBarViewProtocol;

@interface BDPWKGameController : BDPBusinessXScreenViewController <BDPWarmBootMessage, BDPOnlineTimeReporterDelegate, BDPAppInterfaceOrientationChangeMessage, BDPPageDiagnoseProtocol, BDPNativeGameBaseControllerProtocol> {
    BOOL _isCompositeVideo;
    BOOL _isGameContentLoaded;
    BOOL _isGameFirstFrameDidDraw;
    BOOL _hasEnteredBg;
    BOOL _enableNativeStyle;
    BOOL _viewDidLoadExecuted;
    BOOL _disableOrientationFix;
    BDPUniqueID *_uniqueID;
    double _lastTapTime;
    BDPWKGamePage *_wkGamePage;
    BDPOnlineTimeReporter *_timeReporter;
    UIView<BDPLoadingViewProtocol> *_loadingView;
    BDPVConsole *_vConsole;
    BDPFloatingViewController_HG *_floatingVC;
    UIView<BDPToolBarViewProtocol> *_toolBarView;
    id /* block */ _viewDidLoadCompletion;
    UIButton *_anchorShareButton;
    NSNumber *_gameStatus;
    BDPAddShortcutGuideTimer *_addShortcutGuideTimer;
    NSDictionary *_enterPerformanceDict;
    NSDictionary *_leavePerformanceDict;
}

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) UIView<BDPLoadingViewProtocol> *loadingView;
@property (retain, nonatomic) BDPVConsole *vConsole;
@property (retain, nonatomic) BDPFloatingViewController_HG *floatingVC;
@property (nonatomic) BOOL enableNativeStyle;
@property (nonatomic) BOOL viewDidLoadExecuted;
@property (weak, nonatomic) UIView<BDPToolBarViewProtocol> *toolBarView;
@property (copy, nonatomic) id /* block */ viewDidLoadCompletion;
@property (retain, nonatomic) UIButton *anchorShareButton;
@property (retain, nonatomic) NSNumber *gameStatus;
@property (nonatomic) BOOL disableOrientationFix;
@property (retain, nonatomic) BDPAddShortcutGuideTimer *addShortcutGuideTimer;
@property (retain, nonatomic) NSDictionary *enterPerformanceDict;
@property (retain, nonatomic) NSDictionary *leavePerformanceDict;
@property (retain, nonatomic) BDPWKGamePage *wkGamePage;
@property (retain, nonatomic) BDPOnlineTimeReporter *timeReporter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double lastTapTime;
@property (nonatomic) BOOL isCompositeVideo;

- (void)closeByOnlineTimeReporter;
- (void)pauseByOnlineTimeReporter;
- (void)resumeByOnlineTimeReporter;
- (void)interfaceOrientationChange:(id)arg0 targetOrientation:(long long)arg1 uniqueID:(id)arg2;
- (BOOL)canBeActive;
- (void)onAppEnterBackground;
- (void)onAppEnterForeground;
- (id)toolBarView;
- (void)setToolBarView:(id)arg0;
- (void)forceStopRunning;
- (void)setupLoadingView;
- (void)cleanWarmCacheWithUniqueID:(id)arg0;
- (unsigned long long)popGestureSwipeBackMode;
- (void)setGameStatus:(id)arg0;
- (void)setIsCompositeVideo:(BOOL)arg0;
- (void)setVConsole:(id)arg0;
- (void)setEnableNativeStyle:(BOOL)arg0;
- (void)setTimeReporter:(id)arg0;
- (id)timeReporter;
- (void)setDisableOrientationFix:(BOOL)arg0;
- (void)addRootNaviGestureDelegate;
- (void)handleGameFirstFrameDidDraw:(id)arg0;
- (void)onOrientationChange;
- (void)removeRootNaviGestureDelegate;
- (BOOL)disableOrientationFix;
- (id)vConsole;
- (void)setViewDidLoadExecuted:(BOOL)arg0;
- (id /* block */)viewDidLoadCompletion;
- (void)setViewDidLoadCompletion:(id /* block */)arg0;
- (void)onViewLongPressed:(id)arg0;
- (void)windowBecomeKey:(id)arg0;
- (void)startOnlineReport;
- (void)setupFloatingViewIfNeeded;
- (void)setAddShortcutGuideTimer:(id)arg0;
- (void)setFloatingVC:(id)arg0;
- (id)floatingVC;
- (void)setGamePause:(BOOL)arg0;
- (BOOL)viewDidLoadExecuted;
- (id)getOnShowParams;
- (id)gameStatus;
- (id)addShortcutGuideTimer;
- (BOOL)isCompositeVideo;
- (BOOL)enableNativeStyle;
- (BOOL)shouldUseLandscape:(id)arg0;
- (void)stopExceptionMonitor;
- (BOOL)shouldHandleNavi:(id)arg0 gestureRecognizer:(id)arg1 otherGestureRecognizer:(id)arg2 withHandleResult:(BOOL *)arg3;
- (void)startExceptionMonitor;
- (id)getOnAppEnterForegroundParams;
- (id)anchorShareButton;
- (void)setAnchorShareButton:(id)arg0;
- (id)enterPerformanceDict;
- (id)leavePerformanceDict;
- (void)setEnterPerformanceDict:(id)arg0;
- (void)setLeavePerformanceDict:(id)arg0;
- (void)gatherDiagnoseInfo:(id)arg0 triggerType:(id)arg1;
- (void)gatherDiagnoseInfo:(id)arg0 webview:(id)arg1 triggerType:(id)arg2;
- (id)getCurrentGameView;
- (void)reportResponseJsonString:(id)arg0 appID:(id)arg1 urlStr:(id)arg2 dataLength:(long long)arg3 pagePath:(id)arg4;
- (void)setWkGamePage:(id)arg0;
- (void)processGameJSLoadedEvent;
- (id)wkGamePage;
- (BOOL)shouldAutorotate;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (id)uniqueID;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)setUniqueID:(id)arg0;
- (void)viewWillDisappear:(BOOL)arg0;
- (BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
- (long long)preferredStatusBarStyle;
- (void)viewDidDisappear:(BOOL)arg0;
- (BOOL)prefersStatusBarHidden;
- (void)viewWillAppear:(BOOL)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (BOOL)navigationBarHidden;
- (void)_showLoadingView;
- (id)initWithUniqueID:(id)arg0;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (double)lastTapTime;
- (void)setLastTapTime:(double)arg0;
- (void)hideLoadingView;

@end
