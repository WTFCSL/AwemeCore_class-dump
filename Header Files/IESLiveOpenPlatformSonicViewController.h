//
//     Generated by private class-dump
//

@class IESLiveOpenPlatformSonicFuncPopView, IESLiveOpenPlatformSonicOrientationServiceImpl, UINavigationController, NSDictionary, IESLiveOpenPlatformSonicPanelModel, UITapGestureRecognizer, MASConstraint, RACDisposable, UIView, IESLiveOpenPlatformShareScreenModel, IESLiveGameOpenPlatformSonicMessageAdaptor, IESLiveAnchorAudienceInteractiveGameModel, IESLiveOpenPlatformSonicPanel, BDLOCSonicInstance, IESLiveGameOpenPlatformSonicBridge, NSString, UIImageView;

@interface IESLiveOpenPlatformSonicViewController : UIViewController <IESLiveOpenPlatformMorePanelDelegate, IESLiveOpenPlatformPaymentActions, HTSLiveAnchorActions, IESLiveAnchorRoomStatusChangeEvents, IESLiveOpenPlatformSonicOrientationServiceImplDelegate, IESLiveGameOpenPlatformContainerServiceObserver, IESLiveGameOpenPlatformAppInstanceLifeCycleObserver, UIGestureRecognizerDelegate, IESLiveGameOpenPlatformShareScreenActions, BDLOCNativeAppPigeonMessageForwardDelegate> {
    BOOL _isShowing;
    BOOL _hasDestroyed;
    IESLiveOpenPlatformSonicPanel *_panel;
    IESLiveOpenPlatformSonicPanelModel *_panelModel;
    IESLiveAnchorAudienceInteractiveGameModel *_gameModel;
    NSDictionary *_params;
    BDLOCSonicInstance *_sonicGameInstance;
    UIView *_containerView;
    double _startTimeInterval;
    IESLiveOpenPlatformSonicFuncPopView *_authContainerView;
    IESLiveOpenPlatformSonicFuncPopView *_alertContainerView;
    UINavigationController *_popupNavigationController;
    UITapGestureRecognizer *_dismissViewTap;
    IESLiveOpenPlatformSonicOrientationServiceImpl *_orientationService;
    UIView *_castContainerView;
    UIImageView *_castBgView;
    UIView *_castBgAlphaView;
    IESLiveGameOpenPlatformSonicMessageAdaptor *_messageAdaptor;
    IESLiveGameOpenPlatformSonicBridge *_bridge;
    RACDisposable *_disposable;
    MASConstraint *_yCons;
    IESLiveOpenPlatformShareScreenModel *_openPlatformShareScreenModel;
    long long _currentFPS;
    long long _skipRunningInForeground;
}

@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) BOOL hasDestroyed;
@property (nonatomic) double startTimeInterval;
@property (retain, nonatomic) IESLiveOpenPlatformSonicPanel *panel;
@property (retain, nonatomic) IESLiveOpenPlatformSonicPanelModel *panelModel;
@property (retain, nonatomic) IESLiveOpenPlatformSonicFuncPopView *authContainerView;
@property (retain, nonatomic) IESLiveOpenPlatformSonicFuncPopView *alertContainerView;
@property (retain, nonatomic) UINavigationController *popupNavigationController;
@property (retain, nonatomic) UITapGestureRecognizer *dismissViewTap;
@property (retain, nonatomic) IESLiveOpenPlatformSonicOrientationServiceImpl *orientationService;
@property (readonly, nonatomic) unsigned long long currentStyle;
@property (retain, nonatomic) UIView *castContainerView;
@property (retain, nonatomic) UIImageView *castBgView;
@property (retain, nonatomic) UIView *castBgAlphaView;
@property (retain, nonatomic) IESLiveGameOpenPlatformSonicMessageAdaptor *messageAdaptor;
@property (retain, nonatomic) IESLiveGameOpenPlatformSonicBridge *bridge;
@property (retain, nonatomic) RACDisposable *disposable;
@property (retain, nonatomic) MASConstraint *yCons;
@property (retain, nonatomic) IESLiveOpenPlatformShareScreenModel *openPlatformShareScreenModel;
@property (nonatomic) long long currentFPS;
@property (nonatomic) long long skipRunningInForeground;
@property (readonly, nonatomic) IESLiveAnchorAudienceInteractiveGameModel *gameModel;
@property (readonly, copy, nonatomic) NSDictionary *params;
@property (weak, nonatomic) BDLOCSonicInstance *sonicGameInstance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setIsShowing:(BOOL)arg0;
- (void)didSetAttachingDIContext;
- (void)hideErrorView;
- (void)setHasDestroyed:(BOOL)arg0;
- (BOOL)hasDestroyed;
- (void)setDisposable:(id)arg0;
- (id)disposable;
- (void)setCurrentFPS:(long long)arg0;
- (long long)currentFPS;
- (void)reloadWithParams:(id)arg0;
- (void)destroyContainer;
- (void)liveWillEndWithReason:(unsigned long long)arg0;
- (void)willStopLive;
- (void)willStopAnchorLive;
- (void)showContainer;
- (id)panelModel;
- (void)hideContainer;
- (void)setPanelModel:(id)arg0;
- (void)app:(id)arg0 didReceiveMessage:(id)arg1 fromNativeAppWithCallback:(id /* block */)arg2;
- (void)resumeLiveWindow;
- (void)attachSmallWindow;
- (void)shareScreenDidStartWithAppId:(id)arg0 containerType:(long long)arg1 strategy:(unsigned long long)arg2 extra:(id)arg3;
- (void)shareScreenDidStopWithAppId:(id)arg0 containerType:(long long)arg1 strategy:(unsigned long long)arg2 extra:(id)arg3;
- (void)shareScreen:(id)arg0 containerType:(long long)arg1 screenCastWillChangeUIState:(BOOL)arg2;
- (void)trackShowDuration;
- (void)appInstance:(id)arg0 didSwitchStateFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (void)handleSonicOrientationChanged:(unsigned long long)arg0;
- (void)containerCommunicationService:(id)arg0 notifyContainerWithEvent:(id)arg1 params:(id)arg2;
- (void)appDidPaySuccess:(id)arg0;
- (void)setAuthContainerView:(id)arg0;
- (id)authContainerView;
- (id)sonicGameInstance;
- (void)setSonicGameInstance:(id)arg0;
- (id)initWithGameModel:(id)arg0 params:(id)arg1 DIContext:(id)arg2;
- (void)showErrorViewWithRetryBlock:(id /* block */)arg0;
- (void)_handleShowAuthActionWithCompletion:(id /* block */)arg0;
- (void)reloadWithSonicConfig:(id)arg0;
- (void)reloadInternalView;
- (void)startShareScreenWhenLaunchFinished;
- (void)setMessageAdaptor:(id)arg0;
- (id)messageAdaptor;
- (void)orientationService:(id)arg0 switchOrientation:(unsigned long long)arg1 fromOrientation:(unsigned long long)arg2;
- (void)portraitFullToLandscapeFull;
- (void)openPlatformMorePanelDidClickItemType:(unsigned long long)arg0;
- (id)orientationService;
- (id)dismissViewTap;
- (id)alertContainerView;
- (void)trackHalfScreenShow;
- (void)trackFullScreenShow;
- (void)_initBridgeWithInterceptor:(id)arg0;
- (void)destroySonicResource;
- (void)_showContainerWithCompletion:(id /* block */)arg0;
- (void)_hideContainerWithCompletion:(id /* block */)arg0;
- (void)setupCastBgView;
- (BOOL)canBeContinue;
- (long long)skipRunningInForeground;
- (void)setSkipRunningInForeground:(long long)arg0;
- (void)_stopShareScreen;
- (void)_handleFeedbackAction;
- (void)_handleReportAction;
- (void)_handleConsumeRecordAction;
- (void)_handleRewardNoticeAction;
- (void)_handleStartShareScreenAction;
- (void)_handleStopShareScreenAction;
- (void)_trackShareScreenClick;
- (void)_startShareScreen;
- (unsigned long long)_shareScreenStrategy;
- (id)openPlatformShareScreenModel;
- (void)_trackStopShareScreenClick;
- (void)buildOpenPlatformShareScreenModelWithBgImage:(id)arg0;
- (void)trueStartScreenCast;
- (void)_onStartShareScreenSuccess;
- (void)_onStartShareScreenFail;
- (void)setOpenPlatformShareScreenModel:(id)arg0;
- (void)_onStopShareScreenSuccess;
- (void)_onStopShareScreenFail;
- (void)changeLayoutWhenScreenCast:(BOOL)arg0;
- (id)castContainerView;
- (id)castBgView;
- (void)setCastContainerView:(id)arg0;
- (void)setCastBgView:(id)arg0;
- (void)setCastBgAlphaView:(id)arg0;
- (void)blockTap:(id)arg0;
- (void)setAlertContainerView:(id)arg0;
- (id)popupNavigationController;
- (void)setPopupNavigationController:(id)arg0;
- (void)setDismissViewTap:(id)arg0;
- (void)setOrientationService:(id)arg0;
- (id)castBgAlphaView;
- (id)yCons;
- (void)setYCons:(id)arg0;
- (void)_setupObserver;
- (unsigned long long)currentStyle;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)initializeContainer;
- (void)handleSingleTap:(id)arg0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })arg0 withTransitionCoordinator:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)setContainerView:(id)arg0;
- (BOOL)isShowing;
- (BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1;
- (id)containerView;
- (id)params;
- (void)viewWillAppear:(BOOL)arg0;
- (id)bridge;
- (void)dealloc;
- (void)viewDidLoad;
- (id)panel;
- (void)setBridge:(id)arg0;
- (void)showLoadingView;
- (void)hideLoadingView;
- (void)setPanel:(id)arg0;
- (double)startTimeInterval;
- (void)setStartTimeInterval:(double)arg0;
- (id)gameModel;

@end
