//
//     Generated by private class-dump
//

@protocol TIMXBroadCastProtocol <NSObject>

- (void)broadCastRecvMessageConversationId:(id)arg0 inbox:(int)arg1 cursor:(long long)arg2 limit:(long long)arg3 reverse:(BOOL)arg4 pullType:(int)arg5 completion:(id /* block */)arg6;
- (id)messageModelFromPBMessage:(id)arg0;
- (void)broadCastSendMessage:(id)arg0 inbox:(int)arg1 conversationId:(id)arg2 completion:(id /* block */)arg3;
- (void)broadCastReverseRecvMessageConversationId:(id)arg0 inbox:(int)arg1 cursor:(long long)arg2 limit:(long long)arg3 pullType:(int)arg4 completion:(id /* block */)arg5;
- (void)broadCastUserCounter:(id)arg0 inbox:(int)arg1 completion:(id /* block */)arg2;

@end