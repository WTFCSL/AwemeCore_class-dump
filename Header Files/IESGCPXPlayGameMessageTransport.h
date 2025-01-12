//
//     Generated by private class-dump
//

@class NSLock, NSMutableDictionary, NSString;

@interface IESGCPXPlayGameMessageTransport : NSObject <IESGCPDIContextSubscriber, IESGCPXPlayGameMessageService> {
    NSMutableDictionary *_sendingMessageDict;
    NSLock *_lock;
}

@property (retain, nonatomic) NSMutableDictionary *sendingMessageDict;
@property (retain, nonatomic) NSLock *lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetGameCPDIContext;
- (void)receiveAckMessage:(id)arg0 code:(int)arg1 seq:(id)arg2;
- (void)didReceiveCloudMessage:(id)arg0;
- (id)sendingMessageDict;
- (void)messagePackTimeout:(id)arg0;
- (void)retrySendMessage:(id)arg0;
- (void)didReceivePaymentRequestWithOutOrderId:(id)arg0;
- (void)didReceiveGameCustomActionWithBody:(id)arg0;
- (void)didReceiveCommercializeMessage;
- (void)didReceiveInternalSDKEvent:(id)arg0;
- (void)setSendingMessageDict:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)lock;
- (void)sendMessage:(id)arg0 completion:(id /* block */)arg1;
- (void)reset;
- (void)setLock:(id)arg0;

@end
