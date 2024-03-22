//
//     Generated by private class-dump
//

@class NSMutableDictionary, RxScheduler, RTVInteractionOperationController, NSString, RTVInteractionWebService;
@protocol RxInjector, RTVUserProfileManagerInterface, RTVInteractionMonitorInterface;

@interface RTVInteractionClient : NSObject <RTVInteractionClientInterface, RTVInteractionServiceInterface> {
    id<RxInjector> _injector;
    RxScheduler *_scheduler;
    id<RTVUserProfileManagerInterface> _profileManager;
    RTVInteractionWebService *_webService;
    RTVInteractionOperationController *_operationDataController;
    id<RTVInteractionMonitorInterface> _monitor;
    long long _lastestOperationID;
    NSMutableDictionary *_observers;
    NSMutableDictionary *_operationRequestInfos;
}

@property (readonly, nonatomic) RxScheduler *scheduler;
@property (retain, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (retain, nonatomic) RTVInteractionWebService *webService;
@property (retain, nonatomic) RTVInteractionOperationController *operationDataController;
@property (retain, nonatomic) id<RTVInteractionMonitorInterface> monitor;
@property (nonatomic) long long lastestOperationID;
@property (retain, nonatomic) NSMutableDictionary *observers;
@property (retain, nonatomic) NSMutableDictionary *operationRequestInfos;
@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (void)setProfileManager:(id)arg0;
- (void)didReceiveOpeartionDictionary:(id)arg0;
- (void)didReceiveReplyOperationDictionary:(id)arg0;
- (void)ackMessageWithSequenceID:(id)arg0;
- (void)pullReceiveOperationsWithRoomID:(long long)arg0;
- (void)addOperationObserver:(id)arg0 forBusinessTypes:(id)arg1;
- (void)removeOperationObserver:(id)arg0;
- (id)executeOperationWithoutReplyWait:(id)arg0;
- (id)replyOperation:(id)arg0 replyContentString:(id)arg1 result:(BOOL)arg2;
- (id)isTheLastestOperationWithOperationID:(long long)arg0;
- (id)__requestTaskWithOperation:(id)arg0;
- (id)__cancelExecuteRequestTask:(id)arg0;
- (id)__executeOperation:(id)arg0 needReply:(BOOL)arg1;
- (id)operationDataController;
- (long long)lastestOperationID;
- (void)setLastestOperationID:(long long)arg0;
- (id)__tryToExecuteRequestTask:(id)arg0;
- (id)operationRequestInfos;
- (id)__executeRequestTaskImmediately:(id)arg0;
- (void)__handleReceiveOperation:(id)arg0;
- (void)__handleReceiveReplyOperation:(id)arg0;
- (void)setOperationDataController:(id)arg0;
- (void)setOperationRequestInfos:(id)arg0;
- (void).cxx_destruct;
- (id)monitor;
- (void)setMonitor:(id)arg0;
- (id)observers;
- (id)scheduler;
- (id)injector;
- (void)setObservers:(id)arg0;
- (id)cancelOperation:(id)arg0;
- (id)webService;
- (void)setWebService:(id)arg0;
- (id)profileManager;
- (id)executeOperation:(id)arg0;

@end
