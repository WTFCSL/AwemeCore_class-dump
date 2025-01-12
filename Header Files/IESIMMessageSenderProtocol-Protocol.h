//
//     Generated by private class-dump
//

@protocol IESIMSendMessageLoggerProtocol;

@protocol IESIMMessageSenderProtocol <NSObject>

@property (retain, nonatomic) id<IESIMSendMessageLoggerProtocol> logger;

- (void)asyncSendMessage:(id)arg0 completion:(id /* block */)arg1;
- (void)resendMessage:(id)arg0 inConversation:(id)arg1;
- (void)asyncResendMessage:(id)arg0 inConversation:(id)arg1;
- (id)logger;
- (void)addDelegate:(id)arg0;
- (id)sendMessage:(id)arg0;
- (void)removeDelegate:(id)arg0;
- (void)setLogger:(id)arg0;

@end
