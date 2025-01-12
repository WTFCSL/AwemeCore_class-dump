//
//     Generated by private class-dump
//

@class RTVXRCallKitSessionControllerContext, NSString, RTVVoipEnginePreloader, NSTimer, CXCallController, NSMutableDictionary, NSUUID, RTVVoipTracker, RTVVoipMonitor, CXProvider, RxScheduler, RTVVoipModel;
@protocol RTVSettingsManager, RTVUserProfileInterface, RTVVoipAudioCoordinatorProtocol, RTVXRCallKitSessionControllerDelegate, RTVVoipManagerInterface, RTVVoipTrackerHelperInterface, RTVCoordinator, RTVXRCaptureController, RTVAccountServiceInterface, RTVVoipSessionStoreInterface, RTVStateTransferActionHandlerManagerInterface, RTVVoipConfigureManagerInterface, RTVUserProfileManagerInterface, RTVXRRoomActionController, RTVAuthCheckerInterface, RTVCallKitStateRecorder, RTVVoipContextManagerInterface, RxInjector, __RTVVoipContextManagerPrivateInterface, RTVVoipService;

@interface RTVXRCallKitSessionController : NSObject <RTVStateMachineDelegate, RTVVoipObserver, RTVAccountStateObserver> {
    BOOL _needAdjustHandsfreeStatus;
    BOOL _callKitCallSucceed;
    NSUUID *_callUUID;
    RTVVoipModel *_voip;
    id<RTVXRCallKitSessionControllerDelegate> _delegate;
    id<RxInjector> _injector;
    id<RTVVoipManagerInterface> _voipManager;
    id<RTVStateTransferActionHandlerManagerInterface> _stateActionHandlerManager;
    id<RTVVoipService> _voipService;
    id<RTVVoipContextManagerInterface> _voipContextManager;
    id<RTVXRRoomActionController> _voipSessionController;
    id<RTVVoipConfigureManagerInterface> _voipConfigureManager;
    RTVVoipTracker *_voipTracker;
    RTVVoipMonitor *_voipMonitor;
    id<RTVVoipTrackerHelperInterface> _voipTrackerHelper;
    id<RTVAuthCheckerInterface> _authChecker;
    id<RTVUserProfileManagerInterface> _profileManager;
    RxScheduler *_commonScheduler;
    RTVVoipEnginePreloader *_enginePreloader;
    id<RTVVoipAudioCoordinatorProtocol> _audioCoordinator;
    id<RTVSettingsManager> _settingManager;
    id<RTVAccountServiceInterface> _accountService;
    id<RTVCoordinator> _coordinator;
    id<RTVCallKitStateRecorder> _stateRecorder;
    id<RTVXRCaptureController> _captureController;
    id<__RTVVoipContextManagerPrivateInterface> _contextManager;
    id<RTVVoipSessionStoreInterface> _sessionStore;
    RTVXRCallKitSessionControllerContext *_context;
    id<RTVUserProfileInterface> _displayProfile;
    NSString *_otherUserID;
    NSTimer *_waittingTimer;
    long long _waittingTimeCount;
    CXProvider *_provider;
    CXCallController *_callController;
    NSMutableDictionary *_ignoreActionMapper;
}

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVVoipManagerInterface> voipManager;
@property (readonly, nonatomic) id<RTVStateTransferActionHandlerManagerInterface> stateActionHandlerManager;
@property (readonly, nonatomic) id<RTVVoipService> voipService;
@property (readonly, nonatomic) id<RTVVoipContextManagerInterface> voipContextManager;
@property (readonly, nonatomic) id<RTVXRRoomActionController> voipSessionController;
@property (readonly, nonatomic) id<RTVVoipConfigureManagerInterface> voipConfigureManager;
@property (readonly, nonatomic) RTVVoipTracker *voipTracker;
@property (readonly, nonatomic) RTVVoipMonitor *voipMonitor;
@property (readonly, nonatomic) id<RTVVoipTrackerHelperInterface> voipTrackerHelper;
@property (readonly, nonatomic) id<RTVAuthCheckerInterface> authChecker;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (readonly, nonatomic) RxScheduler *commonScheduler;
@property (readonly) RTVVoipEnginePreloader *enginePreloader;
@property (readonly, nonatomic) id<RTVVoipAudioCoordinatorProtocol> audioCoordinator;
@property (readonly, nonatomic) id<RTVSettingsManager> settingManager;
@property (readonly, nonatomic) id<RTVAccountServiceInterface> accountService;
@property (readonly, nonatomic) id<RTVCoordinator> coordinator;
@property (readonly, nonatomic) id<RTVCallKitStateRecorder> stateRecorder;
@property (readonly, nonatomic) id<RTVXRCaptureController> captureController;
@property (readonly, nonatomic) id<__RTVVoipContextManagerPrivateInterface> contextManager;
@property (readonly, nonatomic) id<RTVVoipSessionStoreInterface> sessionStore;
@property (retain) RTVVoipModel *voip;
@property (retain, nonatomic) RTVXRCallKitSessionControllerContext *context;
@property (retain) id<RTVUserProfileInterface> displayProfile;
@property (copy, nonatomic) NSString *otherUserID;
@property (retain, nonatomic) NSTimer *waittingTimer;
@property (nonatomic) long long waittingTimeCount;
@property (nonatomic) BOOL needAdjustHandsfreeStatus;
@property (readonly, nonatomic) CXProvider *provider;
@property (readonly, nonatomic) CXCallController *callController;
@property (readonly, nonatomic) NSMutableDictionary *ignoreActionMapper;
@property (nonatomic) BOOL callKitCallSucceed;
@property (readonly, nonatomic) NSUUID *callUUID;
@property (weak, nonatomic) id<RTVXRCallKitSessionControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)aesEncrypt:(id)arg0;
+ (id)aesDecrypt:(id)arg0;

- (void)rxAwakeFromPropertyInjection;
- (id)renderModel:(id)arg0 context:(id)arg1;
- (void)__logEvent:(id)arg0 params:(id)arg1;
- (void)accountDidLogout;
- (void)teenModeDidChange:(BOOL)arg0 isLogout:(BOOL)arg1;
- (id)voipMonitor;
- (void)voipService:(id)arg0 didPerformAction:(id)arg1 voip:(id)arg2;
- (id)voipContextManager;
- (id)voipManager;
- (id)voipService;
- (id)voipTracker;
- (id)sessionStore;
- (id)stateRecorder;
- (void)stateMachine:(id)arg0 didTransferFrom:(id)arg1 to:(id)arg2 context:(id)arg3;
- (id)voipSessionController;
- (id)voipConfigureManager;
- (void)__startWaittingTimer;
- (long long)waittingTimeCount;
- (void)setWaittingTimeCount:(long long)arg0;
- (id)enginePreloader;
- (id)audioCoordinator;
- (id)authChecker;
- (id)commonScheduler;
- (void)__handleEnterBackgroundNotification:(id)arg0;
- (id)stateActionHandlerManager;
- (void)__preJoinRoom;
- (void)__addKVO;
- (BOOL)handleVideoCallActivityWithSchema:(id)arg0;
- (void)updateVoipByVoIPPush:(id)arg0;
- (id)__logParamsWithCXAction:(id)arg0;
- (id)__logParamsWithCXTransation:(id)arg0;
- (id)providerDidReset;
- (id)performanceAnswerAction:(id)arg0;
- (id)performEndAction:(id)arg0;
- (id)performMuteAction:(id)arg0;
- (id)didActivateAudioSession:(id)arg0;
- (id)didDeactivateAudioSession:(id)arg0;
- (id)waittingTimer;
- (void)setWaittingTimer:(id)arg0;
- (void)setNeedAdjustHandsfreeStatus:(BOOL)arg0;
- (void)setOtherUserID:(id)arg0;
- (void)__updateIncludeCallInRecents:(BOOL)arg0;
- (id)__basicLogInfo;
- (id)otherUserID;
- (id)__openSchemaWithVoip:(id)arg0 userID:(id)arg1;
- (id)__displayNameWithVoip:(id)arg0;
- (id)__inviterName:(id)arg0 withVoip:(id)arg1;
- (id)__performAction:(id)arg0;
- (id)__defaultCXUpdate;
- (id)__updateDisplayNameIfNeeded;
- (id)__occupyIfNeededForLive;
- (id)__logParamsWithError:(id)arg0;
- (void)__updateVoipInfoReason:(id)arg0;
- (void)setCallKitCallSucceed:(BOOL)arg0;
- (BOOL)callKitCallSucceed;
- (void)__notifyPassAuthorizationIfNeeded;
- (id)voipTrackerHelper;
- (id)__terminalCurrentActiveVoipIfNeeded;
- (id)__terminalCurrentSession;
- (id)ignoreActionMapper;
- (void)__handleAudioRouteChangeNotification:(id)arg0;
- (void)__adjustAudioSessionOptionsIfNeeded;
- (BOOL)needAdjustHandsfreeStatus;
- (void)adjustAudioSessionOptionsIfNeeded;
- (void)__preJoinRoomIfNeeded;
- (id)coordinator;
- (id)provider;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)callController;
- (id)injector;
- (id)delegate;
- (id)captureController;
- (id)context;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (id)callUUID;
- (id)accountService;
- (id)displayProfile;
- (void)setDisplayProfile:(id)arg0;
- (id)settingManager;
- (id)contextManager;
- (id)profileManager;
- (id)voip;
- (void)setVoip:(id)arg0;

@end
