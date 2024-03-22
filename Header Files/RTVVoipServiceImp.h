//
//     Generated by private class-dump
//

@class NSMutableDictionary, RTVVoipEventHandler, RTVVoipConfigureManager, RTVVoipInvokeController, RTVCompoundEventObserver, NSMutableArray, RTVVoipManager, RxScheduler, RTVVoipMonitor, RTVVoipInvokeOperation, RTVVoipStateManager, RxMultipleDelegate, RTVVoipViewsController, RTVVoipTracker, NSString, RTVVoipExceptionCheckTool;
@protocol RTVReachabilityManagerInterface, RTVVoipModelStoreInterface, RTVVoIPReceiver, __RTVVoipContextManagerPrivateInterface, RTVSettingsManager, RTVCoordinator, RTVVoipPerformanceMonitor, RTVPushServiceInterface, RTVVoipObserver, RxInjector, RTVAuthCheckerInterface, RTVXRSettingsInterface, RTVVoipSettingManagerInterface, RTVStateTransferActionHandlerManagerInterface, RTVUserProfileManagerInterface, RTVXRRoomActionController, RTVVoipContextManagerInterface, RTVVoipTrackerHelperInterface, RTVVoipServiceProcessorInterface, RTVVoipRoomService, RTVAccountManagerInterface, RTVIMConversationServiceInterface;

@interface RTVVoipServiceImp : NSObject <RTVStateMachineLogService, RTVXRRoomServiceObserver, RTVVoipService> {
    BOOL _canPullStoreVoip;
    id<RxInjector> _injector;
    RTVVoipTracker *_voipTracker;
    id<RTVVoipTrackerHelperInterface> _trackerHelper;
    RTVVoipManager *_voipManager;
    id<RTVAccountManagerInterface> _accountManager;
    id<RTVUserProfileManagerInterface> _profileManager;
    RTVVoipViewsController *_viewsController;
    RTVVoipStateManager *_stateManager;
    RTVVoipEventHandler *_eventHandler;
    RTVVoipConfigureManager *_configureManager;
    RTVVoipMonitor *_monitor;
    id<RTVVoipPerformanceMonitor> _performanceMonitor;
    id<RTVVoipRoomService> _roomInfoService;
    id<RTVCoordinator> _rtvCoordinator;
    id<__RTVVoipContextManagerPrivateInterface, RTVVoipContextManagerInterface> _voipContextManager;
    id<RTVXRRoomActionController> _actionController;
    id<RTVIMConversationServiceInterface> _imManager;
    id<RTVPushServiceInterface> _pushService;
    RxMultipleDelegate<RTVVoipObserver> *_multipleDelegate;
    id<RTVReachabilityManagerInterface> _reachabilityManager;
    id<RTVAuthCheckerInterface> _authChecker;
    id<RTVVoipServiceProcessorInterface> _serviceProcessor;
    RxScheduler *_readScheduler;
    RTVVoipInvokeController *_voipInvokeController;
    RTVVoipExceptionCheckTool *_voipExceptionCheckTool;
    id<RTVXRSettingsInterface> _settings;
    id<RTVVoipSettingManagerInterface> _settingManager;
    id<RTVSettingsManager> _rtvSettingsManager;
    NSMutableDictionary *_historyVoipInfo;
    NSMutableDictionary *_receivedPushResponses;
    NSMutableArray *_receivedPushSequenceIDs;
    NSMutableDictionary *_hadHandleReceiveCalls;
    id<RTVStateTransferActionHandlerManagerInterface> _stateActionHandlerManager;
    id<RTVVoipModelStoreInterface> _voipStore;
    id<RTVVoIPReceiver> _voipReceiver;
    RTVCompoundEventObserver *_stateObserver;
    RTVVoipInvokeOperation *_invokingOperation;
    double _latestInvokingVoipTime;
}

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) RTVVoipTracker *voipTracker;
@property (readonly, nonatomic) id<RTVVoipTrackerHelperInterface> trackerHelper;
@property (readonly, nonatomic) RTVVoipManager *voipManager;
@property (readonly, nonatomic) id<RTVAccountManagerInterface> accountManager;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (readonly, nonatomic) RTVVoipViewsController *viewsController;
@property (readonly, nonatomic) RTVVoipStateManager *stateManager;
@property (readonly, nonatomic) RTVVoipEventHandler *eventHandler;
@property (readonly, nonatomic) RTVVoipConfigureManager *configureManager;
@property (readonly, nonatomic) RTVVoipMonitor *monitor;
@property (readonly, nonatomic) id<RTVVoipPerformanceMonitor> performanceMonitor;
@property (readonly, nonatomic) id<RTVVoipRoomService> roomInfoService;
@property (readonly, nonatomic) id<RTVCoordinator> rtvCoordinator;
@property (readonly, nonatomic) id<__RTVVoipContextManagerPrivateInterface, RTVVoipContextManagerInterface> voipContextManager;
@property (readonly, nonatomic) id<RTVXRRoomActionController> actionController;
@property (readonly, nonatomic) id<RTVIMConversationServiceInterface> imManager;
@property (readonly, nonatomic) id<RTVPushServiceInterface> pushService;
@property (readonly, nonatomic) RxMultipleDelegate<RTVVoipObserver> *multipleDelegate;
@property (readonly, nonatomic) id<RTVReachabilityManagerInterface> reachabilityManager;
@property (readonly, nonatomic) id<RTVAuthCheckerInterface> authChecker;
@property (readonly, nonatomic) id<RTVVoipServiceProcessorInterface> serviceProcessor;
@property (readonly, nonatomic) RxScheduler *readScheduler;
@property (readonly, nonatomic) RTVVoipInvokeController *voipInvokeController;
@property (readonly, nonatomic) RTVVoipExceptionCheckTool *voipExceptionCheckTool;
@property (readonly, nonatomic) id<RTVXRSettingsInterface> settings;
@property (readonly, nonatomic) id<RTVVoipSettingManagerInterface> settingManager;
@property (readonly, nonatomic) id<RTVSettingsManager> rtvSettingsManager;
@property (readonly, nonatomic) NSMutableDictionary *historyVoipInfo;
@property (readonly, nonatomic) NSMutableDictionary *receivedPushResponses;
@property (readonly, nonatomic) NSMutableArray *receivedPushSequenceIDs;
@property (readonly, nonatomic) NSMutableDictionary *hadHandleReceiveCalls;
@property (readonly, nonatomic) id<RTVStateTransferActionHandlerManagerInterface> stateActionHandlerManager;
@property (readonly, nonatomic) id<RTVVoipModelStoreInterface> voipStore;
@property (readonly, nonatomic) id<RTVVoIPReceiver> voipReceiver;
@property (retain, nonatomic) RTVCompoundEventObserver *stateObserver;
@property (retain) RTVVoipInvokeOperation *invokingOperation;
@property (nonatomic) double latestInvokingVoipTime;
@property (nonatomic) BOOL canPullStoreVoip;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (id)trackerHelper;
- (id)multipleDelegate;
- (id)invokeVoIPWithTargetUserID:(id)arg0 targetStickerID:(id)arg1 selfStickerID:(id)arg2 enterFrom:(unsigned long long)arg3 trackDict:(id)arg4;
- (id)inviteUser:(id)arg0 inActiveRoom:(id)arg1;
- (BOOL)ignoreRelationCheckWithInvokeVoipWithUserID:(id)arg0;
- (BOOL)isInVoip;
- (BOOL)inPrepareOrRecall;
- (long long)currentVoipType;
- (id)currentVoipRoomID;
- (id)refuseSecurityCall:(id)arg0;
- (id)voipContextManager;
- (id)voipManager;
- (id)rtvSettingsManager;
- (id)invokeVoipWithOperation:(id)arg0;
- (id)invokeVoipWithTargetUserID:(id)arg0 voipType:(long long)arg1 enterFrom:(unsigned long long)arg2 trackDict:(id)arg3;
- (id)acceptWithJoinOperation:(id)arg0;
- (id)refuseVoip:(id)arg0;
- (id)ringingVoip:(id)arg0;
- (id)occupyVoip:(id)arg0 occupyReason:(id)arg1;
- (id)showVoipFullScreenViewWithVoip:(id)arg0 enterFrom:(unsigned long long)arg1;
- (id)invokeNewVoipWithEnterFrom:(unsigned long long)arg0;
- (id)handleReceivePushResponse:(id)arg0;
- (id)invokeGroupVoipWithParticipatorIMIDs:(id)arg0 conversationID:(id)arg1 type:(long long)arg2 enterFrom:(unsigned long long)arg3 selfStickerID:(id)arg4;
- (id)joinGroupVoipWithRoomID:(id)arg0 cameraOff:(id)arg1 source:(long long)arg2 enterFrom:(unsigned long long)arg3 bizType:(id)arg4 trackContext:(id)arg5;
- (id)joinGroupWithOperation:(id)arg0;
- (id)hangUpActiveVoipIfNeeded;
- (id)refuseRingingVoipIfNeeded;
- (id)ignoreNotifyVoip:(id)arg0;
- (id)handleReceiveVoip:(id)arg0 method:(long long)arg1;
- (BOOL)inVoipRecordSession;
- (BOOL)inVoipSession;
- (BOOL)isInVoipWithIMID:(id)arg0;
- (id)invokingOperation;
- (void)rtvWindowNeedHide:(BOOL)arg0 needUpgradeWindowLevel:(BOOL)arg1;
- (BOOL)__enableIncallPush;
- (id)rtvCoordinator;
- (id)voipTracker;
- (id)configureManager;
- (void)handleRoomsFromPullRequest:(id)arg0 roomType:(long long)arg1 pullReason:(long long)arg2;
- (void)handlePullResult:(id)arg0 key:(id)arg1 pullReason:(long long)arg2;
- (id)receivedPushSequenceIDs;
- (id)readScheduler;
- (id)voipReceiver;
- (id)roomInfoService;
- (void)__trackVideoCallReceiveCallWithModel:(id)arg0 enterFrom:(id)arg1;
- (id)authChecker;
- (id)performanceMonitor;
- (id)imManager;
- (void)trackStateMachineEventKey:(id)arg0 trackInfo:(id)arg1;
- (id)viewsController;
- (id)voipStore;
- (id)voipInvokeController;
- (id)historyVoipInfo;
- (id)stateActionHandlerManager;
- (id)pushService;
- (id)__checkEnableReceiveVoip:(id)arg0;
- (id)hadHandleReceiveCalls;
- (id)__occupyVoip:(id)arg0 occupyReason:(id)arg1 dev_reason:(id)arg2;
- (id)__checkIsValidForReceivedVoip:(id)arg0;
- (id)__uniteIfNeededTheComingVoip:(id)arg0 callingVoip:(id)arg1;
- (void)setCanPullStoreVoip:(BOOL)arg0;
- (id)receivedPushResponses;
- (id)__handlePullVoips:(id)arg0 method:(long long)arg1;
- (BOOL)canPullStoreVoip;
- (void)__addStateMachineObserver;
- (id)stateObserver;
- (void)setStateObserver:(id)arg0;
- (void)__handleTransferToCallingFrom:(id)arg0 toState:(id)arg1 context:(id)arg2;
- (void)__handleTransferToAcceptFrom:(id)arg0 toState:(id)arg1 context:(id)arg2;
- (void)__handleTransferToLiveVideoChatFrom:(id)arg0 toState:(id)arg1 context:(id)arg2;
- (id)__invoke1v1VoipWithOperation:(id)arg0;
- (void)__deferDecisionActionWithInvokeOperation:(id)arg0;
- (id)__invokeGroupVoipWithOperation:(id)arg0;
- (id)__invokeVoipWithTargetUserID:(id)arg0 voipType:(long long)arg1 targetStickerID:(id)arg2 selfStickerID:(id)arg3 enterFrom:(unsigned long long)arg4 trackDict:(id)arg5;
- (id)__checkEnableInvokeVoipWithOperation:(id)arg0;
- (void)__markInvokingOperation:(id)arg0;
- (id)__callingActionWithInvokeOperation:(id)arg0;
- (void)__showIndicator:(id)arg0;
- (void)__trackVideoCallAnswerWithModel:(id)arg0 enterFrom:(unsigned long long)arg1 extra:(id)arg2;
- (id)__checkAuthWithVoip:(id)arg0 cameraOff:(id)arg1;
- (id)__showVoipViewControllerWithVoip:(id)arg0 enterFrom:(unsigned long long)arg1 trackDict:(id)arg2;
- (id)__showVoipViewControllerWithVoip:(id)arg0 context:(id)arg1;
- (id)__handleReceiveWithVoip:(id)arg0 method:(long long)arg1 event:(id)arg2;
- (id)__devideVoips:(id)arg0 currentVoip:(id)arg1;
- (id)__cancelVoips:(id)arg0;
- (id)__handleReceiveWithVoip:(id)arg0 event:(id)arg1;
- (id)__buildVoipModelWithInvokeOperation:(id)arg0;
- (id)__checkAuthWithVoipType:(long long)arg0 cameraOff:(id)arg1 initialActions:(long long)arg2 initialBizAction:(long long)arg3;
- (id)__checkAuthWithAuthCheckerOptionsType:(unsigned long long)arg0;
- (void)setInvokingOperation:(id)arg0;
- (void)setLatestInvokingVoipTime:(double)arg0;
- (id)__joinGroupVoipWithRoomID:(id)arg0 cameraOff:(id)arg1 source:(long long)arg2 enterFrom:(unsigned long long)arg3 bizType:(id)arg4 trackContext:(id)arg5 followUser:(id)arg6 voipInitialAction:(id)arg7;
- (id)__checkEnableJoinVoip:(id)arg0;
- (BOOL)__checkCanBackToActiveGroupVoipWithInvokeOperationGroup:(id)arg0;
- (id)__groupVoipInvokePreparationPromiseWithOperationGroup:(id)arg0;
- (double)latestInvokingVoipTime;
- (id)__checkNetworkIsAvaiable;
- (id)serviceProcessor;
- (void)__showAlertWithTtitle:(id)arg0 message:(id)arg1 confirmTitle:(id)arg2;
- (BOOL)__checkCanBackToActiveVoipWithDeferDecisionOperation:(id)arg0;
- (id)__createGroupIfNeededWithDeferDecisionInvokeOperation:(id)arg0;
- (void)__showJoinOthersRoomTipsWhenCreateDistributableRoomIfNeededWithVoipModel:(id)arg0;
- (long long)__receiveMethodWithPullReason:(long long)arg0;
- (void)logStateMachineInfo:(id)arg0;
- (id)__canHandleStoreVoip;
- (id)__updateSelfCameraOff:(BOOL)arg0 ofVoip:(id)arg1;
- (id)voipExceptionCheckTool;
- (id)eventHandler;
- (void).cxx_destruct;
- (id)monitor;
- (id)accountManager;
- (id)settings;
- (id)injector;
- (BOOL)isInCall;
- (id)stateManager;
- (void)dealloc;
- (id)reachabilityManager;
- (id)actionController;
- (id)settingManager;
- (id)profileManager;

@end