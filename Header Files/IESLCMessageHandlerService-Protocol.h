//
//     Generated by private class-dump
//

@protocol IESLCMessageHandlerProtocol;

@protocol IESLCMessageHandlerService <NSObject>

@property (nonatomic, weak) id<IESLCMessageHandlerProtocol> messageHandler;

@optional

- (void)ieslc_messageHandler:(id)arg0 didReceiveMsg:(id)arg1;
- (void)ieslc_messageHandler:(id)arg0 didSendMsg:(id)arg1 success:(BOOL)arg2;
- (void)ieslc_messageHandler:(id)arg0 didReceiveMsg:(id)arg1 receivedTimestamp:(double)arg2;
- (id)messageHandler;
- (void)setMessageHandler:(id)arg0;

@end
