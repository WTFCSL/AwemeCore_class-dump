//
//     Generated by private class-dump
//

@class HGRightAgeView, HGPresentAnimation, HGLightBoardViewController, UIView, HGTimorLaunchParam, NSString, HGSchema, HGBaseSubContainerViewController, HGDirectionPanGestureRecognizer, HGToolBarView, HGUniqueID, HGFavoritesTipBubble, HGFavoritesTipFloating, HGLoadingView, HGBootManager;
@protocol HGContainerAnimatedTransitioning, HGSubContainerVCProtocol;

@interface HGContainerController : UIViewController <UIGestureRecognizerDelegate, HGLoadingViewDelegate, HGRightAgeViewDelegate, HGPlatformContainerProtocol, HGBaseVCProtocol, HGBaseVCUIStateUpdateProtocol, HGCustomTransitioningContainer> {
    BOOL _backFromOtherMiniProgram;
    BOOL _isEnterBackground;
    BOOL _isAdaptingOrientation;
    BOOL _originIdleTimerDisabled;
    BOOL _originNavigationBarHidden;
    BOOL _originStatusBarHidden;
    BOOL _hasOpenLoadFailedPageForChannel;
    BOOL _didClose;
    BOOL _hasEnterBG;
    id<HGContainerAnimatedTransitioning> containerTransitioningDelegate;
    long long _containerTransitionState;
    HGUniqueID *_uniqueID;
    HGTimorLaunchParam *_launchParam;
    HGTimorLaunchParam *_preLaunchParam;
    HGUniqueID *_preUniqueID;
    HGToolBarView *_toolBarView;
    HGLoadingView *_loadingView;
    long long _openType;
    HGBootManager *_bootManager;
    HGBaseSubContainerViewController<HGSubContainerVCProtocol> *_subContainerVC;
    HGLightBoardViewController *_ligthBoardContainerVC;
    HGPresentAnimation *_screenEdgePopAnimation;
    HGDirectionPanGestureRecognizer *_popGesture;
    long long _originStatusBarStyle;
    long long _originInterfaceOrientation;
    UIView *_customLoadingView;
    HGFavoritesTipBubble *_tipBubble;
    HGFavoritesTipFloating *_tipFloating;
    long long _viewControllerStatus;
    HGRightAgeView *_rightAgeView;
    NSString *_rightAgeViewTips;
}

@property (retain, nonatomic) HGUniqueID *uniqueID;
@property (retain, nonatomic) HGLoadingView *loadingView;
@property (retain, nonatomic) HGToolBarView *toolBarView;
@property (retain, nonatomic) HGBaseSubContainerViewController<HGSubContainerVCProtocol> *subContainerVC;
@property (retain, nonatomic) HGDirectionPanGestureRecognizer *popGesture;
@property (retain, nonatomic) HGTimorLaunchParam *launchParam;
@property (nonatomic) long long viewControllerStatus;
@property (nonatomic) BOOL didClose;
@property (retain, nonatomic) HGRightAgeView *rightAgeView;
@property (copy, nonatomic) NSString *rightAgeViewTips;
@property (nonatomic) BOOL hasEnterBG;
@property (readonly, copy, nonatomic) HGSchema *schema;
@property (retain, nonatomic) HGTimorLaunchParam *preLaunchParam;
@property (retain, nonatomic) HGUniqueID *preUniqueID;
@property (nonatomic) long long openType;
@property (readonly, copy, nonatomic) NSString *launchFrom;
@property (retain, nonatomic) HGBootManager *bootManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HGContainerAnimatedTransitioning> containerTransitioningDelegate;
@property (readonly, nonatomic) long long containerTransitionState;

- (id)launchFrom;
- (long long)openType;
- (void)setOpenType:(long long)arg0;
- (void)setLaunchParam:(id)arg0;
- (id)initWithLaunchParam:(id)arg0;
- (void)workBeforeClose:(id)arg0;
- (id)bootManager;
- (void)updateSchema:(id)arg0;
- (id)initWithLaunchParam:(id)arg0 uniqueID:(id)arg1;
- (void)setBootManager:(id)arg0;
- (id)launchParam;
- (id)subContainerVC;
- (id)subNavi;
- (void)updateLoadingViewModel:(id)arg0;
- (void)requestAnnouncementVC;
- (void)setSubContainerVC:(id)arg0;
- (void)setHasEnterBG:(BOOL)arg0;
- (void)setViewControllerStatus:(long long)arg0;
- (id)popGesture;
- (void)setupObserveForFrame;
- (BOOL)hasEnterBG;
- (long long)containerTransitionState;
- (void)restoreOriginStatus;
- (void)layoutRightAgeView;
- (BOOL)canBeActive;
- (void)onAppEnterBackground;
- (void)onAppEnterForeground;
- (void)handleSnapshotReadyNotification;
- (void)handleSignificantTimeChangedNotif:(id)arg0;
- (id)toolBarView;
- (void)requestRightAgeInfo;
- (void)hideToolBarView;
- (void)forceReboot;
- (void)closeContainer:(id)arg0;
- (void)setToolBarView:(id)arg0;
- (void)dismissContainer;
- (long long)viewControllerStatus;
- (void)setupLoadingView;
- (void)updateLoadingViewFailState:(long long)arg0 withInfo:(id)arg1;
- (void)setupToolBarView;
- (BOOL)didClose;
- (void)setDidClose:(BOOL)arg0;
- (void)dismissContainer:(id /* block */)arg0 animated:(BOOL)arg1;
- (void)debugForceFetchAndDownload;
- (void)closeContainer:(id)arg0 completion:(id /* block */)arg1;
- (void)closeContainer:(id)arg0 animated:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)pr_viewAbnormalDetection;
- (id)preUniqueID;
- (id)preLaunchParam;
- (void)setPreUniqueID:(id)arg0;
- (void)setPreLaunchParam:(id)arg0;
- (id)containerTransitioningDelegate;
- (void)edgePanGesture:(id)arg0;
- (id)rightAgeView;
- (id)rightAgeViewTips;
- (void)setRightAgeView:(id)arg0;
- (void)setRightAgeViewTips:(id)arg0;
- (void)bdpLoadingViewReloadActionImmediately:(BOOL)arg0;
- (void)bdpLoadingViewDebugAction;
- (void)showRightAgeView;
- (void)closeLandscapeContainer:(id)arg0 animated:(BOOL)arg1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getToolBarRect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getLeftToolBarRect;
- (void)startAdaptOrientation;
- (void)endAdaptOrientation;
- (void)imitateRestart;
- (void)detectFirstPageBlankScreenWithWebView:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getNavigationBarFrame;
- (void)setupSubContainerWithModel:(id)arg0 subNavi:(id)arg1 isColdBoot:(BOOL)arg2;
- (void)loadFailedViewWithError:(id)arg0 failState:(long long)arg1 content:(id)arg2 extraParams:(id)arg3;
- (void)updateLoadingViewPercent:(double)arg0;
- (void)addAnnouncementVCIfNeed;
- (void)hideLoadingViewAndShowToolBarForDebug;
- (void)beginInteractiveTransitioningWithOptions:(unsigned long long)arg0 fromOuterViewController:(id)arg1;
- (void)cancelInteractiveTransitioningWithOptions:(unsigned long long)arg0 fromOuterViewController:(id)arg1;
- (void)finishInteractiveTransitioningWithOptions:(unsigned long long)arg0 fromOuterViewController:(id)arg1;
- (void)updateInteractiveTransitioningPercentProgress:(double)arg0 options:(unsigned long long)arg1 fromOuterViewController:(id)arg2;
- (void)setContainerTransitioningDelegate:(id)arg0;
- (void)detectBlankScreenWithWebView:(id)arg0 detectRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1 needReboot:(BOOL)arg2;
- (void)setPopGesture:(id)arg0;
- (BOOL)applyUpdateIfNeed;
- (unsigned long long)preferredScreenEdgesDeferringSystemGestures;
- (BOOL)shouldAutorotate;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (id)uniqueID;
- (void)presentViewController:(id)arg0 animated:(BOOL)arg1 completion:(id /* block */)arg2;
- (BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)setUniqueID:(id)arg0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })arg0 withTransitionCoordinator:(id)arg1;
- (void)handleInterruption:(id)arg0;
- (long long)type;
- (BOOL)gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1;
- (long long)preferredStatusBarUpdateAnimation;
- (void)viewWillDisappear:(BOOL)arg0;
- (id)initWithURL:(id)arg0;
- (long long)preferredStatusBarStyle;
- (void)viewDidDisappear:(BOOL)arg0;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (void)didReceiveMemoryWarning;
- (BOOL)prefersStatusBarHidden;
- (void)viewWillAppear:(BOOL)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)schema;
- (id)topView;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (void)loadSuccess;
- (void)forceClose;

@end
