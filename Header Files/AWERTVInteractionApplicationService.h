//
//     Generated by private class-dump
//

@class NSString, NSMutableSet, UIWindow;
@protocol RTVInteractionServiceInterface, RxInjector;

@interface AWERTVInteractionApplicationService : NSObject <RTVJetWebNotifyMessageHandlerInterface, RTVApplicationService> {
    id<RxInjector> _injector;
    id<RTVInteractionServiceInterface> _interactionService;
    NSMutableSet *_receivedPushSequenceIDs;
}

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVInteractionServiceInterface> interactionService;
@property (readonly, nonatomic) NSMutableSet *receivedPushSequenceIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIWindow *window;

- (void)rxAwakeFromPropertyInjection;
- (id)interactionService;
- (void)__handlePushMessage:(id)arg0;
- (id)__sequenceIDWithPushMessage:(id)arg0;
- (id)receivedPushSequenceIDs;
- (void)__ackWithPushMessage:(id)arg0;
- (void)__handleInteractionPushMessage:(id)arg0;
- (id)__pushMessageDataDic:(id)arg0;
- (BOOL)handleReceivedMessage:(id)arg0;
- (void).cxx_destruct;
- (id)injector;

@end
