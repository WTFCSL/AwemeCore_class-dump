//
//     Generated by private class-dump
//

@protocol TIMXMessageUpdaterProtocol <NSObject>

- (void)recallMessage:(id)arg0 inConversation:(id)arg1 role:(long long)arg2 completion:(id /* block */)arg3;
- (void)requestAllFailedMessageProperty;
- (void)requestAllMessageProperty;
- (void)modifyPropertyItemsForMessage:(id)arg0 inConversation:(id)arg1 modifyProperties:(id)arg2 force:(BOOL)arg3 onCompletion:(id /* block */)arg4;
- (void)markMessageInConversation:(id)arg0 serverMessageId:(long long)arg1 doAction:(BOOL)arg2 actionType:(unsigned long long)arg3 sortTime:(long long)arg4 completion:(id /* block */)arg5;
- (void)modifyMessageWithRequestModel:(id)arg0 completion:(id /* block */)arg1;

@end
