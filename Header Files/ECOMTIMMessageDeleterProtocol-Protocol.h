//
//     Generated by private class-dump
//

@protocol ECOMTIMMessageDeleterProtocol <NSObject>

- (void)softDeleteMessage:(id)arg0 inConversation:(id)arg1 sendToServer:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)hardDeleteAllMessagesInConversation:(id)arg0 completion:(id /* block */)arg1;
- (void)hardDeleteConversation:(id)arg0 options:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)hardDeleteConversationsBeforeTime:(id)arg0 minRemain:(unsigned long long)arg1 completion:(id /* block */)arg2;

@end
