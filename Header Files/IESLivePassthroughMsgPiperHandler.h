//
//     Generated by private class-dump
//

@class NSArray, NSString, NSHashTable;
@protocol IESLivePiperProtocol;

@interface IESLivePassthroughMsgPiperHandler : NSObject <HTSLiveMessageSubscriber, IESLivePreStreamIMMessageSubscriber, IESLivePiperHandlerProtocol> {
    NSArray *_messageTypes;
    id<IESLivePiperProtocol> _piper;
    NSHashTable *_registeredMessages;
}

@property (retain, nonatomic) NSArray *messageTypes;
@property (weak, nonatomic) id<IESLivePiperProtocol> piper;
@property (retain, nonatomic) NSHashTable *registeredMessages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)piper;
- (void)registerHandlerWithBridge:(id)arg0;
- (void)setPiper:(id)arg0;
- (void)onMessageReceivce:(id)arg0 withDict:(id)arg1;
- (void)setupMessage;
- (void)setMessageTypes:(id)arg0;
- (id)registeredMessages;
- (id)messageTypes;
- (void)setRegisteredMessages:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)messageReceived:(id)arg0;

@end