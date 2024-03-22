//
//     Generated by private class-dump
//

@class NSDictionary, RTVVoipViewControllerContext, RxScheduler, UIViewController, RTVInteractionTransitionMaskView, RTVVoIPPiPContentView, RTVVoipUnobtrusiveMonitor, NSString, RTVVoipViewsController, RTVVoipToastHandler, NSMutableArray, RTVVoipControlView, RTVVoipAuthorizationViewController, RTVVoipSession, NSObject, RxDeferred, UIView, RTVVoipPrepareControlView, RTVVoipUnitedPreviewContainer, RTVVoipMonitor, RTVVoipTracker, __RTVXRBusinessRoomContextManager;
@protocol RTVInteractionServiceInterface, RTVCallObserver, RTVVoipConfigureManagerInterface, RTVPIPControllerInterface, RTVXRStateRecorder, RTVXRControllerInjector, RTVXRBusinessSessionController, RTVDynamicResolutionManagerInterface, RxInjector, RTVUserProfileManagerInterface, RTVVoipAudioCoordinatorProtocol, RTVVoIPCamDegradeControllerProtocol, RTVVoipPublisherBeautyResourceServiceInterface, RTVXRInteractionController, RTVXRSettingsInterface, RTVXRBusinessContextDelegate, RTVVoipPerformanceMonitor, RTVXRBusinessSessionActionController, RTVXRCaptureController, RTVVoipControlStateRecorder, RTVVoipFlowerController, RTVComposerBeautyPannelWrapperInterface, RTVUtilizationMonitor, RTVAuthCheckerInterface, RTVVoipStreamExceptionMonitor, RTVVoipProximityMonitorInterface, RTVComposerBeautyEffectCategoryWrapper, RTVStateMachineInterface, __RTVVoipContextManagerPrivateInterface, RTVVoipSessionStoreInterface, RTVVoipModelStoreInterface, RTVVoipFeatureCheckController, RTVVoipStickerPanelControllerInterface, RTVRoomSyncController, RTVVoipSettingManagerInterface, RTVVoipManagerInterface;

@interface RTVVoipViewController : UIViewController <RTVAccountStateObserver, RTVVoipStickerPaneControllerDelegate, RTVVoipProximityMonitorDelegate, UIGestureRecognizerDelegate, RTVVoipControlViewDelegate, RTVComposerBeautyPannelWrapperDelegate, RTVVoipSessionObserver, RTVVoipSessionDelegate, RTVXREngineDelegate, RTVVoipPrepareControlViewDelegate, RTVUtilizationMonitorDelegate, RTVStateMachineDelegate, RTVVoipObserver, RTVXRInteractionObserver, RTVCallObserverDelegate, RTVXRBusinessContextSessionObserver, RTVXRBusinessSessionActionControllerObserver, RTVPiPControllerDelegate, RTVXRCaptureControllerObserver, AWEIMProximityStateObserver, RTVXRContainer> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    BOOL isActive;
    BOOL _hadNotifyPrepareControlViewShow;
    BOOL _isSwitchPreviewAnimating;
    BOOL _previousNetworkIsReachable;
    BOOL _previousNetworkConnected;
    BOOL _preventInitialSwitchToNarrow;
    BOOL _stickerButtonHasShown;
    BOOL _vcHadAppear;
    BOOL _needCheckFeedShare;
    BOOL _disableVoipSessionMuteOnVideoKVO;
    BOOL _handsfreeBefore;
    id<RTVXRBusinessContextDelegate> _delegate;
    id<RxInjector> _injector;
    id<RTVXRControllerInjector> _controllerInjector;
    id<RTVUserProfileManagerInterface> _profileManager;
    id<RTVVoipManagerInterface> _voipManager;
    id<RTVInteractionServiceInterface> _interactionService;
    id<RTVAuthCheckerInterface> _authChecker;
    id<RTVDynamicResolutionManagerInterface> _dynamicResolutionManager;
    RTVVoipTracker *_voipTracker;
    id<RTVVoipConfigureManagerInterface> _configureManager;
    id<RTVVoipModelStoreInterface> _voipStore;
    RTVVoipViewsController *_viewsController;
    id<RTVVoipAudioCoordinatorProtocol> _audioSessionCoordinator;
    RTVVoipToastHandler *_toastHandler;
    RTVVoipMonitor *_voipMonitor;
    RTVVoipUnobtrusiveMonitor *_voipUnobtrusiveMonitor;
    id<RTVVoipPerformanceMonitor> _performanceMonitor;
    id<RTVVoipProximityMonitorInterface> _proximityMonitor;
    id<RTVStateMachineInterface> _stateMachine;
    id<RTVVoipPublisherBeautyResourceServiceInterface> _beautyResourceService;
    id<RTVXRInteractionController> _interactionController;
    id<RTVVoipStreamExceptionMonitor> _streamExceptionMonitor;
    id<RTVVoipControlStateRecorder> _voipControlStateRecorder;
    id<RTVXRStateRecorder> _xrStateRecorder;
    UIView *_backgroundView;
    RxScheduler *_readScheduler;
    id<RTVVoipSessionStoreInterface> _sessionStore;
    id<__RTVVoipContextManagerPrivateInterface> _voipContextCenter;
    NSString *_userId;
    RTVVoipSession *_voipSession;
    RTVVoipViewControllerContext *_viewControllerContext;
    RTVVoipAuthorizationViewController *_authorizationViewController;
    UIView *_controlContainerView;
    RTVVoipControlView *_waitingReceiveControlView;
    RTVVoipPrepareControlView *_prepareControlView;
    RTVVoipUnitedPreviewContainer *_unitedPreviewContainer;
    UIView<RTVVoipStickerPanelControllerInterface> *_stickerController;
    id<RTVComposerBeautyPannelWrapperInterface> _beautyPanel;
    id<RTVComposerBeautyEffectCategoryWrapper> _currentBeautyCategory;
    id<RTVUtilizationMonitor> _bdhUTMonitor;
    RxDeferred *_hasAcceptedDefer;
    NSDictionary *_networkQualities;
    UIView *_networkQualityToastView;
    NSString *_networkQualityTip;
    long long _removeNetworkQualityIndex;
    RxDeferred *_viewDidAppearDeferred;
    RxDeferred *_renderFinishDeferred;
    RxDeferred *_authorizationDeferred;
    RxDeferred *_initialActionDeferred;
    RxDeferred *_vcReadyDeferred;
    RxDeferred *_firstCaptureVideoFrameRenderDeferred;
    NSString *_firstFrameMonitorMarkedToken;
    id<RTVVoipSettingManagerInterface> _settingManager;
    id<RTVXRCaptureController> _captureController;
    id<RTVXRSettingsInterface> _xrSettings;
    id<RTVVoipFeatureCheckController> _featureChecker;
    id<RTVRoomSyncController> _roomSyncController;
    id<RTVVoipFlowerController> _flowerController;
    id<RTVVoIPCamDegradeControllerProtocol> _degradeController;
    id<RTVCallObserver> _callObserver;
    NSMutableArray *_runningTaskTokens;
    id<RTVXRBusinessSessionController> _businessSessionController;
    __RTVXRBusinessRoomContextManager *_xrRoomContextManager;
    id<RTVXRBusinessSessionActionController> _actionController;
    UIViewController *_voipServiceIMViewController;
    id<RTVPIPControllerInterface> _PiPController;
    NSObject *_deactiveResumeCameraToken;
    RTVVoIPPiPContentView *_PiPContentView;
    UIView *_PiPMaskView;
    RTVInteractionTransitionMaskView *_interactionTransitionMaskView;
    long long _cellularNotifyInterval;
    long long _lastNotifyUseCellularWhileWiFiTimestamp;
    NSObject *_rtvActiveResumeCameraToken;
}

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (readonly, nonatomic) id<RTVVoipManagerInterface> voipManager;
@property (readonly, nonatomic) id<RTVInteractionServiceInterface> interactionService;
@property (readonly, nonatomic) id<RTVAuthCheckerInterface> authChecker;
@property (readonly, nonatomic) id<RTVDynamicResolutionManagerInterface> dynamicResolutionManager;
@property (readonly, nonatomic) RTVVoipTracker *voipTracker;
@property (readonly, nonatomic) id<RTVVoipConfigureManagerInterface> configureManager;
@property (readonly, nonatomic) id<RTVVoipModelStoreInterface> voipStore;
@property (readonly, weak, nonatomic) RTVVoipViewsController *viewsController;
@property (readonly, nonatomic) id<RTVVoipAudioCoordinatorProtocol> audioSessionCoordinator;
@property (readonly, nonatomic) RTVVoipToastHandler *toastHandler;
@property (readonly, nonatomic) RTVVoipMonitor *voipMonitor;
@property (readonly, nonatomic) RTVVoipUnobtrusiveMonitor *voipUnobtrusiveMonitor;
@property (readonly, nonatomic) id<RTVVoipPerformanceMonitor> performanceMonitor;
@property (readonly, nonatomic) id<RTVVoipProximityMonitorInterface> proximityMonitor;
@property (readonly, nonatomic) id<RTVStateMachineInterface> stateMachine;
@property (readonly, nonatomic) id<RTVVoipPublisherBeautyResourceServiceInterface> beautyResourceService;
@property (readonly, weak, nonatomic) id<RTVXRInteractionController> interactionController;
@property (readonly, weak, nonatomic) id<RTVVoipStreamExceptionMonitor> streamExceptionMonitor;
@property (readonly, weak, nonatomic) id<RTVVoipControlStateRecorder> voipControlStateRecorder;
@property (readonly, weak, nonatomic) id<RTVXRStateRecorder> xrStateRecorder;
@property (readonly, nonatomic) UIView *backgroundView;
@property (readonly, nonatomic) RxScheduler *readScheduler;
@property (readonly, nonatomic) id<RTVVoipSessionStoreInterface> sessionStore;
@property (readonly, nonatomic) id<__RTVVoipContextManagerPrivateInterface> voipContextCenter;
@property (copy, nonatomic) NSString *userId;
@property (weak, nonatomic) RTVVoipSession *voipSession;
@property (retain, nonatomic) RTVVoipViewControllerContext *viewControllerContext;
@property (readonly, nonatomic) RTVVoipAuthorizationViewController *authorizationViewController;
@property (readonly, nonatomic) UIView *controlContainerView;
@property (readonly, nonatomic) RTVVoipControlView *waitingReceiveControlView;
@property (readonly, nonatomic) RTVVoipPrepareControlView *prepareControlView;
@property (nonatomic) BOOL hadNotifyPrepareControlViewShow;
@property (readonly, nonatomic) BOOL isSwitchPreviewAnimating;
@property (readonly, nonatomic) RTVVoipUnitedPreviewContainer *unitedPreviewContainer;
@property (readonly, nonatomic) UIView<RTVVoipStickerPanelControllerInterface> *stickerController;
@property (readonly, nonatomic) id<RTVComposerBeautyPannelWrapperInterface> beautyPanel;
@property (retain, nonatomic) id<RTVComposerBeautyEffectCategoryWrapper> currentBeautyCategory;
@property (readonly, nonatomic) id<RTVUtilizationMonitor> bdhUTMonitor;
@property (retain, nonatomic) RxDeferred *hasAcceptedDefer;
@property (nonatomic) BOOL previousNetworkIsReachable;
@property (copy, nonatomic) NSDictionary *networkQualities;
@property (retain, nonatomic) UIView *networkQualityToastView;
@property (copy, nonatomic) NSString *networkQualityTip;
@property (nonatomic) long long removeNetworkQualityIndex;
@property (nonatomic) BOOL previousNetworkConnected;
@property (nonatomic) BOOL preventInitialSwitchToNarrow;
@property (nonatomic) BOOL stickerButtonHasShown;
@property (nonatomic) BOOL vcHadAppear;
@property (retain, nonatomic) RxDeferred *viewDidAppearDeferred;
@property (retain, nonatomic) RxDeferred *renderFinishDeferred;
@property (retain, nonatomic) RxDeferred *authorizationDeferred;
@property (retain, nonatomic) RxDeferred *initialActionDeferred;
@property (retain, nonatomic) RxDeferred *vcReadyDeferred;
@property (retain, nonatomic) RxDeferred *firstCaptureVideoFrameRenderDeferred;
@property (copy, nonatomic) NSString *firstFrameMonitorMarkedToken;
@property (readonly, nonatomic) id<RTVVoipSettingManagerInterface> settingManager;
@property (readonly, weak, nonatomic) id<RTVXRCaptureController> captureController;
@property (nonatomic) BOOL needCheckFeedShare;
@property (readonly, nonatomic) id<RTVXRSettingsInterface> xrSettings;
@property (weak, nonatomic) id<RTVVoipFeatureCheckController> featureChecker;
@property (nonatomic) BOOL disableVoipSessionMuteOnVideoKVO;
@property (weak, nonatomic) id<RTVRoomSyncController> roomSyncController;
@property (readonly, weak, nonatomic) id<RTVVoipFlowerController> flowerController;
@property (readonly, weak, nonatomic) id<RTVVoIPCamDegradeControllerProtocol> degradeController;
@property (readonly, nonatomic) id<RTVCallObserver> callObserver;
@property (readonly, nonatomic) NSMutableArray *runningTaskTokens;
@property (readonly, weak, nonatomic) id<RTVXRBusinessSessionController> businessSessionController;
@property (readonly, nonatomic) __RTVXRBusinessRoomContextManager *xrRoomContextManager;
@property (readonly, weak, nonatomic) id<RTVXRBusinessSessionActionController> actionController;
@property (retain, nonatomic) UIViewController *voipServiceIMViewController;
@property (readonly, nonatomic) id<RTVPIPControllerInterface> PiPController;
@property (retain, nonatomic) NSObject *deactiveResumeCameraToken;
@property (weak, nonatomic) RTVVoIPPiPContentView *PiPContentView;
@property (weak, nonatomic) UIView *PiPMaskView;
@property (weak, nonatomic) RTVInteractionTransitionMaskView *interactionTransitionMaskView;
@property (nonatomic) long long cellularNotifyInterval;
@property (nonatomic) long long lastNotifyUseCellularWhileWiFiTimestamp;
@property (retain, nonatomic) NSObject *rtvActiveResumeCameraToken;
@property (nonatomic) BOOL handsfreeBefore;
@property (weak, nonatomic) id<RTVXRBusinessContextDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isActive;

- (void)rxAwakeFromPropertyInjection;
- (void)rtv_awakeFromControllerInjector;
- (void)rtv_prepareRemoveFromControllerInjector;
- (void)accountDidLogout;
- (void)accountSessionExpired;
- (id)extraInfoDict;
- (void)__createComponents;
- (void)selectCategory:(id)arg0;
- (id)PiPController;
- (void)PiPControllerWillStartPiP:(id)arg0;
- (void)PiPControllerDidStartPiP:(id)arg0;
- (void)PiPController:(id)arg0 failedToStartPiPWithError:(id)arg1;
- (id)interactionService;
- (id)voipMonitor;
- (void)voipServiceRequireToAutoAccept:(id)arg0 voip:(id)arg1;
- (id)controllerInjector;
- (id)voipManager;
- (id)voipTracker;
- (id)audioSessionCoordinator;
- (id)configureManager;
- (id)__logTag;
- (id)xrSettings;
- (id)sessionStore;
- (id)xrStateRecorder;
- (void)notifyChangeActive:(BOOL)arg0;
- (void)notifyDidChangeActive:(BOOL)arg0;
- (void)voipSession:(id)arg0 typeDidChangeTo:(long long)arg1 fromType:(long long)arg2;
- (void)rtvSession:(id)arg0 statusDidChangeTo:(long long)arg1 fromStatus:(long long)arg2;
- (void)voipSession:(id)arg0 prepareTimeDidChange:(double)arg1;
- (void)rtvSession:(id)arg0 contextKeyPathChange:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3;
- (void)voipSessionVoipInfoPrepareReady:(id)arg0;
- (void)stateMachine:(id)arg0 didTransferFrom:(id)arg1 to:(id)arg2 context:(id)arg3;
- (void)renderWithBusinessHandler:(id)arg0 context:(id)arg1;
- (void)switchFullScreenWithAnimator:(id)arg0;
- (void)switchNarrowWithAnimator:(id)arg0;
- (id)layoutTransitionDelegate;
- (id)customPreview;
- (id)isReadyPromise;
- (id)extraBusinessInfoWithNavigateTransitionType:(unsigned long long)arg0;
- (unsigned long long)rtv_supportedInterfaceOrientations;
- (id)voipSession;
- (id)featureChecker;
- (void)__showToastWith:(id)arg0;
- (void)__handleActionButtonWithType:(long long)arg0;
- (void)__inviteParticipants;
- (void)__directInviteParticipants:(id)arg0;
- (void)__forceStopWithSessionStatus:(long long)arg0;
- (BOOL)__needSwitchToFullScreenWhenOnTheCall;
- (id)__requestCameraAuthorization;
- (id)readScheduler;
- (void)beautyComposerViewControllerDidDismissed;
- (void)selectComposerBeautyEffect:(id)arg0 ratio:(float)arg1 oldEffect:(id)arg2;
- (void)applyComposerBeautyEffect:(id)arg0 ratio:(float)arg1 gender:(long long)arg2;
- (void)selectComposerBeautyEffect:(id)arg0 ratio:(float)arg1 oldEffect:(id)arg2 gender:(long long)arg3;
- (void)deselectComposerBeautyEffect:(id)arg0;
- (void)applyComposerBeautyEffect:(id)arg0 ratio:(float)arg1;
- (void)xrEngine:(id)arg0 didReceiveFirstRemoteVideoFrameOfUid:(id)arg1 size:(struct CGSize { double x0; double x1; })arg2;
- (void)xrEngine:(id)arg0 onRoomStats:(id)arg1;
- (void)xrEngine:(id)arg0 networkQualityDidChange:(id)arg1;
- (void)xrEngine:(id)arg0 onLocalVideoStateChanged:(long long)arg1 streamState:(long long)arg2 withStreamError:(long long)arg3;
- (void)__configureComponents;
- (void)__tryToAccept;
- (void)onProximityStateChanged:(BOOL)arg0;
- (void)__removeObserver;
- (id)beautyPanel;
- (id)toastHandler;
- (void)sessionProvider:(id)arg0 willFinishSession:(id)arg1;
- (void)sessionProvider:(id)arg0 didFinishSession:(id)arg1;
- (id)dynamicResolutionManager;
- (BOOL)__enableRoomResolutionOpt;
- (id)roomSyncController;
- (void)setRoomSyncController:(id)arg0;
- (id)authChecker;
- (void)voipSession:(id)arg0 didReceiveEvent:(id)arg1;
- (void)voipSession:(id)arg0 didReceiveToastCommand:(id)arg1;
- (void)voipSession:(id)arg0 showToast:(id)arg1;
- (id)performanceMonitor;
- (id)flowerController;
- (void)sessionActionController:(id)arg0 requestTransactionWithAction:(id)arg1;
- (BOOL)previousNetworkConnected;
- (void)setPreviousNetworkConnected:(BOOL)arg0;
- (void)xrCaptureController:(id)arg0 didChangeToCameraOff:(BOOL)arg1;
- (void)interactionController:(id)arg0 willStartInteractionType:(unsigned long long)arg1 withBusinessModel:(id)arg2;
- (void)interactionController:(id)arg0 willFinishInteractionType:(unsigned long long)arg1 withBusinessModel:(id)arg2 reason:(long long)arg3;
- (void)interactionController:(id)arg0 didFinishInteractionType:(unsigned long long)arg1 withBusinessModel:(id)arg2;
- (void)setVoipSession:(id)arg0;
- (id)__isControlActionEnable:(long long)arg0;
- (void)__createPreviewContainer;
- (id)voipContextCenter;
- (id)contentViewForPiPController:(id)arg0;
- (BOOL)isPlayingForPiPController:(id)arg0;
- (double)rateForPiPController:(id)arg0;
- (double)durationForPiPController:(id)arg0;
- (struct CGSize { double x0; double x1; })videoFrameSizeForPiPController:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })videoPlaceholderFrameForPiPController:(id)arg0;
- (id)captureControllerForPiPController:(id)arg0;
- (void)PiPController:(id)arg0 restoreContentView:(id)arg1;
- (void)PiPControllerWillStopPiP:(id)arg0;
- (void)PiPControllerDidStopPiP:(id)arg0;
- (void)__checkAuthorization;
- (id)authorizationDeferred;
- (void)setAuthorizationDeferred:(id)arg0;
- (id)viewsController;
- (id)beautyResourceService;
- (void)__updateControlViewAlpha:(double)arg0;
- (id)voipControlStateRecorder;
- (void)__createBackgroundView;
- (BOOL)isInRecallPage;
- (BOOL)isCanAutoHiddenControlView:(id)arg0;
- (id)voipControlView:(id)arg0 isCanInvokeAction:(long long)arg1;
- (void)voipControlView:(id)arg0 actionButtonClickedWithType:(long long)arg1;
- (id)voipStore;
- (id)degradeController;
- (void)setDeactiveResumeCameraToken:(id)arg0;
- (id)deactiveResumeCameraToken;
- (void)__registerPiP:(BOOL)arg0;
- (id)PiPContentView;
- (void)setPiPContentView:(id)arg0;
- (void)__enableVideoWhenPiP:(BOOL)arg0;
- (void)voipPrepareControlView:(id)arg0 actionButtonClickedWithType:(long long)arg1;
- (long long)currentPreviewLayout;
- (id)voipUnobtrusiveMonitor;
- (void)__handleSessionStatus:(long long)arg0 changeTo:(long long)arg1;
- (id)streamExceptionMonitor;
- (void)stickerControllerDidDismiss:(id)arg0;
- (id)getStickerControllerLoadingShowOnView;
- (BOOL)currentIsPrepareVoipState;
- (void)stickerController:(id)arg0 didSelectSticker:(id)arg1 inCategory:(id)arg2;
- (id)stickerController;
- (void)__firstFrameArrived;
- (void)setPreviousNetworkIsReachable:(BOOL)arg0;
- (id)bdhUTMonitor;
- (id)viewDidAppearDeferred;
- (id)waitingReceiveControlView;
- (void)__handleRTVWillResignActive;
- (void)__handleRTVDidBecomeActive;
- (id)businessSessionController;
- (void)__setupComponentsLayout;
- (void)__addObserves;
- (void)setDisableVoipSessionMuteOnVideoKVO:(BOOL)arg0;
- (void)__prepareVoipInfoIfNeed;
- (void)__prepareEngineIfNeed;
- (BOOL)vcHadAppear;
- (void)setVcHadAppear:(BOOL)arg0;
- (void)__showNetworkTipIfNeeded;
- (id)interactionTransitionMaskView;
- (id)unitedPreviewContainer;
- (void)__dismissSelfWithAnimated:(BOOL)arg0 force:(BOOL)arg1 delay:(double)arg2 completion:(id /* block */)arg3;
- (id)firstCaptureVideoFrameRenderDeferred;
- (id)vcReadyDeferred;
- (void)__createBeautyPanel;
- (id)viewControllerContext;
- (void)__resumeInteractionIfNeeded;
- (id)renderFinishDeferred;
- (id)xrRoomContextManager;
- (void)__triggerInitialActionsIfNeeded;
- (void)__showJoinToastIfNeeded;
- (void)__showLastToastIfNeededWhenDismiss;
- (id)proximityMonitor;
- (id)prepareControlView;
- (void)__createVideoComponents;
- (void)__createControlView;
- (void)__createPrepareControlView;
- (void)__createStickerController;
- (void)__refreshHorizontalStickerPanelHiddenStatus;
- (BOOL)hadNotifyPrepareControlViewShow;
- (void)setHadNotifyPrepareControlViewShow:(BOOL)arg0;
- (void)__changeToOnTheCall;
- (void)__configStickerPanelController;
- (void)__recreateCallbackDeferreds;
- (id)initialActionDeferred;
- (void)__resolveCallbackDeferred:(id)arg0;
- (void)handleApplicationEnterForebackgroundNotification:(id)arg0;
- (void)handleApplicationEnterBackgroundNotification:(id)arg0;
- (void)__handleScreenSnapshotNotification:(id)arg0;
- (void)__laterDismissSelfIfNeededWtihAnimated:(BOOL)arg0;
- (void)__releaseVideoComponent:(id)arg0;
- (BOOL)__isNeedRecallWhileVoipEnd;
- (id)__requestAsyncTaskToken;
- (BOOL)__checkAsynTaskValid:(id)arg0;
- (void)__laterDismissAnimated:(BOOL)arg0;
- (id)runningTaskTokens;
- (id)hasAcceptedDefer;
- (void)__startFirstFrameMonitorIfNeeded;
- (void)__notifyCallerAcceptdIfNeeded;
- (void)__switchToFullScreen:(BOOL)arg0;
- (BOOL)__checkVoipAuthorizationIsEnable;
- (BOOL)preventInitialSwitchToNarrow;
- (void)setRtvActiveResumeCameraToken:(id)arg0;
- (id)rtvActiveResumeCameraToken;
- (id)networkQualities;
- (void)setNetworkQualities:(id)arg0;
- (void)__removeNetworkQualityToast:(BOOL)arg0;
- (void)__showNetworkQualityToast:(id)arg0;
- (long long)cellularNotifyInterval;
- (long long)lastNotifyUseCellularWhileWiFiTimestamp;
- (void)setLastNotifyUseCellularWhileWiFiTimestamp:(long long)arg0;
- (BOOL)previousNetworkIsReachable;
- (void)__emptyExistToastAndShowToastWith:(id)arg0;
- (long long)removeNetworkQualityIndex;
- (id)networkQualityToastView;
- (void)setNetworkQualityToastView:(id)arg0;
- (void)setNetworkQualityTip:(id)arg0;
- (void)setRemoveNetworkQualityIndex:(long long)arg0;
- (id)networkQualityTip;
- (void)setPreventInitialSwitchToNarrow:(BOOL)arg0;
- (void)__handleActionButtonRejectOrCancel;
- (void)__handleActionButtonAccept;
- (void)__handleActionButtonFinish;
- (void)__handleActionButtonSwitchCamera;
- (void)__handleActionButtonEnableCamera;
- (void)__handleActionButtonMute;
- (void)__handleActionButtonHandsFree;
- (void)__handleActionButtonSwitchAudio;
- (void)__handleActionButtonFold;
- (void)__handleActionButtonBeautyTool;
- (void)__handleActionButtonBeautyPanel;
- (void)__handleActionButtonExit;
- (void)__handleActionButtonRecall;
- (void)__handleActionButtonFeed;
- (void)__handleActionButtonGame;
- (void)__handleActionButtonVoIPServiceDialPanel;
- (void)__handleActionButtonVoIPServiceIMEntrance;
- (void)__createIMViewControllerIfNeeded;
- (id)voipServiceIMViewController;
- (void)setVoipServiceIMViewController:(id)arg0;
- (id)__recallVoipOperationWithSession:(id)arg0;
- (void)__navigateToInteractionType:(unsigned long long)arg0;
- (id)firstFrameMonitorMarkedToken;
- (void)setFirstFrameMonitorMarkedToken:(id)arg0;
- (void)__acceptVoip:(id)arg0 switchToAudio:(BOOL)arg1;
- (void)__openBeautyTool;
- (BOOL)__currentIsPrepareState;
- (void)__openBeautyPanel;
- (id)currentBeautyCategory;
- (BOOL)__isNarrowVisible;
- (BOOL)__checkHasOperationPanlAboveContentView;
- (id)__canInvokeAction:(long long)arg0;
- (id)__handleDisableControlAction:(long long)arg0;
- (BOOL)__isBaseControlAction:(long long)arg0;
- (id)__toastTextForDisableControlAction:(long long)arg0;
- (void)__resolveHasAcceptedDefer;
- (void)__switchToInitialNarrowStateIfNeeded;
- (void)__checkAndAdjustCameraStateIfNeed;
- (void)__showRoomTerminalToast:(id)arg0;
- (void)setCurrentBeautyCategory:(id)arg0;
- (void)__dismissPanelIfNeeded;
- (void)__releaseVideoComponents;
- (void)__renderVoIPServiceSession;
- (void)__micOffChangeTo:(BOOL)arg0;
- (BOOL)disableVoipSessionMuteOnVideoKVO;
- (void)__cameraOffChangeTo:(BOOL)arg0;
- (void)__handleLeaveCallEvent:(id)arg0;
- (void)__handleRoomDestoryEvent:(id)arg0;
- (BOOL)__canHandleLeaveEvent:(id)arg0;
- (void)setRenderFinishDeferred:(id)arg0;
- (void)setViewControllerContext:(id)arg0;
- (void)__invalidAllSyncTaskToken;
- (void)__setAutoAccept;
- (void)__setupVoipDidBeginTasks;
- (id)__track_hasAcceptedPromiseForFirstFrame;
- (id)__track_firstFrameArrivedPromise;
- (void)__prepareBasicConfig;
- (void)__dismissPresentedViewControllerIfNeeded;
- (void)__track_videoCallShowEffectButtonWithSession:(id)arg0;
- (void)setNeedCheckFeedShare:(BOOL)arg0;
- (void)__refreshBackgrondViewStateWithAnimated:(BOOL)arg0;
- (void)setHasAcceptedDefer:(id)arg0;
- (BOOL)stickerButtonHasShown;
- (void)setStickerButtonHasShown:(BOOL)arg0;
- (BOOL)needCheckFeedShare;
- (BOOL)__canEnterInteraction;
- (void)setInteractionTransitionMaskView:(id)arg0;
- (void)__handleShareFeedAction:(id)arg0;
- (void)setPiPMaskView:(id)arg0;
- (id)PiPMaskView;
- (void)setHandsfreeBefore:(BOOL)arg0;
- (BOOL)handsfreeBefore;
- (BOOL)isNeedRecallWhileVoipEndForControlView:(id)arg0;
- (void)refuseWithReply:(id)arg0;
- (BOOL)isSwitchPreviewAnimating;
- (void)setViewDidAppearDeferred:(id)arg0;
- (void)setInitialActionDeferred:(id)arg0;
- (void)setVcReadyDeferred:(id)arg0;
- (void)setFirstCaptureVideoFrameRenderDeferred:(id)arg0;
- (void)setFeatureChecker:(id)arg0;
- (void)setCellularNotifyInterval:(long long)arg0;
- (void)callObserver:(id)arg0 callChanged:(id)arg1;
- (id)callObserver;
- (id)backgroundView;
- (void)viewDidAppear:(BOOL)arg0;
- (id)stateMachine;
- (void).cxx_destruct;
- (void)setIsActive:(BOOL)arg0;
- (BOOL)prefersHomeIndicatorAutoHidden;
- (long long)preferredStatusBarStyle;
- (id)userId;
- (id)injector;
- (id)delegate;
- (id)captureController;
- (id)interactionController;
- (void)connectionChanged:(id)arg0;
- (BOOL)isActive;
- (BOOL)prefersStatusBarHidden;
- (void)viewWillAppear:(BOOL)arg0;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)loadView;
- (void)setUserId:(id)arg0;
- (void)dismissViewControllerAnimated:(BOOL)arg0 completion:(id /* block */)arg1;
- (long long)containerType;
- (id)actionController;
- (id)settingManager;
- (id)authorizationViewController;
- (id)profileManager;
- (id)controlContainerView;
- (id)voip;

@end
