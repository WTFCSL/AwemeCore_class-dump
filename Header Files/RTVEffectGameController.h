//
//     Generated by private class-dump
//

@class NSString, RxScheduler, NSMutableSet, RTVEffectGameTracker, RTVCompactStateMachine;
@protocol RTVInteractionConfigurator, RTVEffectGameSession, RTVMultipleDelegateInterface, RTVXRRoomSessionControllerInterface, RTVEffectGameMonitor, RTVEffectGameObserver, RTVEffectGameManager, RTVUserProfileManagerInterface, RTVXRControllerInjector, RTVInteractionConfigureManagerInterface, RxInjector, RTVEffectGameScopeController, RTVXRRoomMessageSender;

@interface RTVEffectGameController : NSObject <RTVCompactStateMachineDelegate, RTVEffectGameController, RTVEffectGameSessionObserver, RTVXRRoomMessageSenderObserver, RTVXRRoomSessionControllerDelegate, RTVCompactStateMachineDelegate> {
    id<RTVEffectGameSession> _gameSession;
    BOOL _isPreparing;
    id<RTVInteractionConfigurator> _interactionConfigurator;
    id<RxInjector> _injector;
    id<RTVXRRoomSessionControllerInterface> _roomController;
    id<RTVXRControllerInjector> _controllerInjector;
    id<RTVEffectGameScopeController> _scopeController;
    id<RTVUserProfileManagerInterface> _profileManager;
    id<RTVEffectGameMonitor> _monitor;
    id<RTVXRRoomMessageSender> _messageSender;
    id<RTVEffectGameManager> _effectGameManager;
    id<RTVMultipleDelegateInterface, RTVEffectGameObserver> _observers;
    RTVEffectGameTracker *_tracker;
    NSMutableSet *_gameRoomNotifiedType;
    RxScheduler *_scheduler;
    RTVCompactStateMachine *_stateMachine;
    id<RTVInteractionConfigureManagerInterface> _interactionConfigureManager;
    NSString *_startedGameRoom;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVXRRoomSessionControllerInterface> roomController;
@property (readonly, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, nonatomic) id<RTVEffectGameScopeController> scopeController;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (readonly, nonatomic) id<RTVEffectGameMonitor> monitor;
@property (readonly, nonatomic) id<RTVEffectGameSession> gameSession;
@property (readonly, nonatomic) id<RTVXRRoomMessageSender> messageSender;
@property (readonly, nonatomic) id<RTVEffectGameManager> effectGameManager;
@property (readonly, nonatomic) id<RTVMultipleDelegateInterface, RTVEffectGameObserver> observers;
@property (readonly, nonatomic) RTVEffectGameTracker *tracker;
@property (readonly, nonatomic) NSMutableSet *gameRoomNotifiedType;
@property (readonly, nonatomic) RxScheduler *scheduler;
@property (readonly, nonatomic) RTVCompactStateMachine *stateMachine;
@property (readonly, nonatomic) id<RTVInteractionConfigureManagerInterface> interactionConfigureManager;
@property (readonly, copy, nonatomic) NSString *currentProfileIMID;
@property (readonly, copy, nonatomic) NSString *startedGameRoom;
@property (nonatomic) BOOL isPreparing;
@property (readonly, nonatomic) id<RTVInteractionConfigurator> interactionConfigurator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rtv_awakeFromControllerInjector;
- (void)__createComponents;
- (void)__configComponents;
- (id)controllerInjector;
- (id)currentProfileIMID;
- (void)renderBusinessHandler:(id)arg0 context:(id)arg1;
- (id)scopeKey;
- (BOOL)needPreResumeInteraction;
- (id)scopeInjector;
- (id)interactionSession;
- (id)interactiontTracker;
- (id)roomController;
- (id)interactionConfigureManager;
- (void)messageSender:(id)arg0 didReceiveMessage:(id)arg1;
- (void)stateMachine:(id)arg0 didFireEvent:(id)arg1 result:(BOOL)arg2 transition:(id)arg3;
- (id)effectGameManager;
- (BOOL)isFromInteractionTypeChange;
- (id)currentOwnerIdentifier;
- (void)__finishEffectGameWithReason:(unsigned long long)arg0;
- (void)effectGameSession:(id)arg0 willFinishWithReason:(unsigned long long)arg1;
- (void)effectGameSession:(id)arg0 didFinishWithReason:(unsigned long long)arg1;
- (id)gameSession;
- (void)__makeStateMachine:(id)arg0;
- (void)__effectGameSession:(id)arg0 willFinishWithReason:(unsigned long long)arg1;
- (void)configInterationViewController:(id)arg0;
- (id)joinWithModel:(id)arg0 context:(id)arg1;
- (id)invokeWithModel:(id)arg0 context:(id)arg1;
- (id)startedGameRoom;
- (BOOL)joinInteractionWithModel:(id)arg0;
- (id)gameRoomNotifiedType;
- (void)autoDownloadGameIfNeed:(id)arg0;
- (BOOL)enterInteractionWithModel:(id)arg0 context:(id)arg1;
- (id)stopInteractionWithReason:(unsigned long long)arg0;
- (id)createInterationViewController;
- (id)createNarrowInterationViewController;
- (id)interactionConfigurator;
- (id)currentInteractionIconString;
- (void)markInteractionStartWithID:(id)arg0;
- (void)voipSession:(id)arg0 didReceiveGameNotify:(id)arg1;
- (id)scopeController;
- (id)tracker;
- (id)interactionType;
- (id)stateMachine;
- (id)messageSender;
- (void).cxx_destruct;
- (id)monitor;
- (id)observers;
- (id)scheduler;
- (BOOL)isInteracting;
- (id)injector;
- (void)addObserver:(id)arg0;
- (void)dealloc;
- (id)sessionController;
- (void)removeObserver:(id)arg0;
- (id)profileManager;
- (BOOL)isPreparing;
- (void)setIsPreparing:(BOOL)arg0;

@end
