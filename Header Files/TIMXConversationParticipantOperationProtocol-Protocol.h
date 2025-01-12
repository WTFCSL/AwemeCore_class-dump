//
//     Generated by private class-dump
//

@protocol TIMXConversationParticipantOperationProtocol <NSObject>

- (void)addParticipants:(id)arg0 toConversation:(id)arg1 bizExtension:(id)arg2 completion:(id /* block */)arg3;
- (void)removeParticipants:(id)arg0 fromConversation:(id)arg1 bizExtension:(id)arg2 completion:(id /* block */)arg3;
- (void)leaveConversation:(id)arg0 withCompletion:(id /* block */)arg1;
- (void)dismissConversation:(id)arg0 withCompletion:(id /* block */)arg1;
- (void)enterConversation:(id)arg0 conversationType:(int)arg1 shortID:(long long)arg2 inbox:(int)arg3 bizExtension:(id)arg4 completion:(id /* block */)arg5;
- (void)addBots:(id)arg0 toConversation:(id)arg1 bizExtension:(id)arg2 completion:(id /* block */)arg3;
- (void)removeBots:(id)arg0 fromConversation:(id)arg1 bizExtension:(id)arg2 completion:(id /* block */)arg3;

@end
