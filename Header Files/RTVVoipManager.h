//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, RTVVoipWebService, RTVVoipTracker, RTVVoipMonitor, NSObject, RxScheduler, RTVVoipStateManager;
@protocol RTVVoipGeneralValueTransformerInterface, RTVFeedQosMonitorInterface, RTVVoipSessionStoreInterface, OS_dispatch_semaphore, RTVStateTransferActionHandlerManagerInterface, RTVCallObserver, RTVVoipMonitorHelperInterface, RTVVoipConfigureManagerInterface, RTVUserProfileManagerInterface, RTVAuthorizationInterface, RxInjector, RTVVoipModelStoreInterface, RTVSettingsManager;

@interface RTVVoipManager : NSObject <RTVCallObserverDelegate, RTVVoipManagerInterface> {
    id<RTVVoipMonitorHelperInterface> _monitorHelper;
    id<RTVVoipModelStoreInterface> _voipStore;
    id<RTVVoipSessionStoreInterface> _sessionStore;
    id<RTVStateTransferActionHandlerManagerInterface> _actionManager;
    id<RTVVoipGeneralValueTransformerInterface> _generalValueTransformer;
    NSMutableDictionary *_stashUpdatedVoipMap;
    NSObject<OS_dispatch_semaphore> *_stashMapLock;
    id<RTVCallObserver> _callObserver;
    id<RTVAuthorizationInterface> _authorization;
    id<RTVFeedQosMonitorInterface> _feedQosMonitor;
    id<RxInjector> _injector;
    RTVVoipWebService *_webService;
    id<RTVUserProfileManagerInterface> _profileManager;
    id<RTVVoipConfigureManagerInterface> _voipConfigureManager;
    id<RTVSettingsManager> _settingManager;
    RTVVoipStateManager *_voipStateManager;
    RTVVoipTracker *_voipTracker;
    RTVVoipMonitor *_voipMonitor;
    RxScheduler *_readScheduler;
    RxScheduler *_writeScheduler;
}

@property (readonly, nonatomic) id<RTVVoipMonitorHelperInterface> monitorHelper;
@property (readonly, nonatomic) id<RTVVoipModelStoreInterface> voipStore;
@property (readonly, nonatomic) id<RTVVoipSessionStoreInterface> sessionStore;
@property (readonly, nonatomic) id<RTVStateTransferActionHandlerManagerInterface> actionManager;
@property (readonly, nonatomic) id<RTVVoipGeneralValueTransformerInterface> generalValueTransformer;
@property (readonly, nonatomic) NSMutableDictionary *stashUpdatedVoipMap;
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *stashMapLock;
@property (readonly, nonatomic) id<RTVCallObserver> callObserver;
@property (readonly, nonatomic) id<RTVAuthorizationInterface> authorization;
@property (readonly, nonatomic) id<RTVFeedQosMonitorInterface> feedQosMonitor;
@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) RTVVoipWebService *webService;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (readonly, nonatomic) id<RTVVoipConfigureManagerInterface> voipConfigureManager;
@property (readonly, nonatomic) id<RTVSettingsManager> settingManager;
@property (readonly, nonatomic) RTVVoipStateManager *voipStateManager;
@property (readonly, nonatomic) RTVVoipTracker *voipTracker;
@property (readonly, nonatomic) RTVVoipMonitor *voipMonitor;
@property (readonly, nonatomic) RxScheduler *readScheduler;
@property (readonly, nonatomic) RxScheduler *writeScheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (id)voipMonitor;
- (BOOL)isCTCallActive;
- (id)currentActiveVoip;
- (id)voipModelWithCallID:(id)arg0;
- (id)checkCanInvokeVoipWithUserIMID:(id)arg0 voipType:(long long)arg1 enterFrom:(unsigned long long)arg2;
- (id)isCanReceiveVoip:(id)arg0;
- (id)updateActiveVoip:(id)arg0 withMergeStrategy:(long long)arg1;
- (BOOL)voipStateIsEnableChangeFrom:(long long)arg0 to:(long long)arg1;
- (id)voipPullRequestWithContext:(id)arg0 triggerReason:(id)arg1;
- (id)voipPullRequestWithRoomID:(id)arg0 triggerReason:(id)arg1 ignoreErrorTips:(BOOL)arg2;
- (id)pullAllUnHandleVoipWithMethod:(long long)arg0;
- (id)keepaliveWithCallID:(id)arg0;
- (id)ackWithCallID:(id)arg0 sequenceID:(id)arg1;
- (id)ackV2WithSequenceID:(id)arg0;
- (id)pullRoomInfoWithRoomID:(id)arg0;
- (id)pullRoomInfoWithRoomID:(id)arg0 roomVersion:(id)arg1;
- (id)distributeRoom:(id)arg0;
- (id)hangUpWithModel:(id)arg0 sessionStatus:(long long)arg1;
- (id)securityAcceptWithModel:(id)arg0;
- (id)refuseWithModel:(id)arg0;
- (id)hangUpWithModel:(id)arg0;
- (id)participatorHangUpWithModel:(id)arg0;
- (id)participatorOfflineWithModel:(id)arg0;
- (id)acceptWithModel:(id)arg0 switchToAudio:(BOOL)arg1;
- (id)onTheCallWithModel:(id)arg0 actionType:(long long)arg1;
- (id)cancelWithModel:(id)arg0;
- (id)refuseSecurityCall:(id)arg0;
- (id)cancelSilentlyWithModel:(id)arg0;
- (id)callOverTime:(id)arg0;
- (id)ringingWithModel:(id)arg0;
- (id)forceRingingWithModel:(id)arg0;
- (id)notAnswerWithModel:(id)arg0;
- (id)occupiedWithModel:(id)arg0;
- (id)forceStopWithModel:(id)arg0 sessionStatus:(long long)arg1;
- (id)voipEngineErrorWithModel:(id)arg0;
- (id)serverErrorWithModel:(id)arg0;
- (id)stopRingingWithModel:(id)arg0 sessionStatus:(long long)arg1;
- (id)switchToAudioWithModel:(id)arg0;
- (id)firstFrameTimeOutWithVoip:(id)arg0;
- (id)joinRoomTimeOutWithVoip:(id)arg0;
- (id)toggleCameraOff:(BOOL)arg0 withModel:(id)arg1;
- (id)toggleMicOff:(BOOL)arg0 withModel:(id)arg1;
- (id)fetchMissCalls;
- (id)joinGroupRoomWithID:(id)arg0 voip:(id)arg1;
- (id)inviteParticipators:(id)arg0 groups:(id)arg1 joinRoom:(id)arg2 voip:(id)arg3;
- (id)reportRecorderActionWithStart:(BOOL)arg0 callID:(id)arg1 callType:(long long)arg2;
- (id)observeRoom:(BOOL)arg0 withRoomID:(id)arg1;
- (id)checkVoipRoomAliveWithID:(id)arg0;
- (id)fetchSecurityCallAlertInfo:(id)arg0 conversationID:(id)arg1 conversationType:(long long)arg2 dialogCode:(id)arg3;
- (int)cleanFDIfNeeded;
- (id)performOperationRequest:(id)arg0;
- (id)calleeIsEnablePreJoinRoomWithVoip:(id)arg0;
- (id)voipTracker;
- (id)sessionStore;
- (id)readScheduler;
- (id)voipConfigureManager;
- (void)addNotify;
- (id)feedQosMonitor;
- (id)voipStore;
- (void)__handleTerminateNotification:(id)arg0;
- (void)__forceStopVoipWithSessionStatus:(long long)arg0;
- (id)voipModelWithRoomID:(id)arg0;
- (void)__stashVoip:(id)arg0;
- (id)__switchToAudioWithModel:(id)arg0;
- (id)voipStateManager;
- (id)__errorWithCode:(long long)arg0 reason:(id)arg1;
- (id)__checkInvokeVoipWithUserImID:(id)arg0;
- (id)__voipPullRequestWithRoomID:(id)arg0 ignoreErrorTips:(BOOL)arg1;
- (id)__errorWithCode:(long long)arg0 reason:(id)arg1 extra:(id)arg2;
- (BOOL)__isSupportForVoip:(id)arg0;
- (BOOL)__voipStateIsEnableChangeFrom:(long long)arg0 to:(long long)arg1;
- (long long)__simpleStatusWithVoipStatus:(long long)arg0;
- (id)stashMapLock;
- (id)stashUpdatedVoipMap;
- (id)__roomABConfig;
- (id)__updateVoipStatus:(id)arg0 withAction:(id)arg1;
- (id)__acceptWithModel:(id)arg0;
- (BOOL)__cameraOffWithVoipType:(long long)arg0;
- (long long)__bizTypeWithActions:(long long)arg0;
- (id)__extWithOperation:(id)arg0;
- (id)__fetchAndRemoveStashVoipModel:(id)arg0;
- (id)generalValueTransformer;
- (id)__voipsFilter:(id)arg0;
- (id)joinGroupRoomWithID:(id)arg0 voip:(id)arg1 bizType:(id)arg2;
- (id)monitorHelper;
- (id)voipPutRequestWithOperation:(id)arg0;
- (id)invokeGroupVoipWithOperation:(id)arg0;
- (BOOL)__isOnlySelfInVoip:(id)arg0;
- (id)cancelWhenJoinRoomRtcInfoEmptyWithModel:(id)arg0;
- (id)groupVoipMerge:(id)arg0;
- (id)__voipInfoV1WithDictionary:(id)arg0;
- (void)callObserver:(id)arg0 callChanged:(id)arg1;
- (id)callObserver;
- (id)authorization;
- (id)actionManager;
- (void).cxx_destruct;
- (id)injector;
- (BOOL)isInCall;
- (void)dealloc;
- (BOOL)isHolding;
- (id)webService;
- (id)settingManager;
- (id)profileManager;
- (id)writeScheduler;

@end
