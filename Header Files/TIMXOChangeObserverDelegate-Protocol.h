//
//     Generated by private class-dump
//

@protocol TIMXOChangeObserverDelegate <NSObject>

@optional

- (void)conversationUpdated:(id)arg0;
- (void)conversationDidDissolved:(id)arg0;
- (void)fileUpdated:(id)arg0;
- (void)strangerConversationUpdated:(id)arg0;
- (void)onMessagesNewPropertiesUpdated:(id)arg0 inConversation:(id)arg1 messageOldPropertiesMap:(id)arg2 messageNewPropertiesMap:(id)arg3 reason:(unsigned long long)arg4;
- (void)onSilentConversation:(id)arg0 silentStatus:(long long)arg1;
- (void)newP2PMessageNotifyConversation:(id)arg0 message:(id)arg1;
- (void)conversationsUpdated:(id)arg0;
- (void)strangerConversationsUpdated:(id)arg0;
- (void)messageUpdated:(id)arg0 inConversation:(id)arg1 reason:(long long)arg2;
- (void)didInsertNewMessagesWithMessageIdentifiers:(id)arg0 belongingConversationMap:(id)arg1 reason:(unsigned long long)arg2 context:(id)arg3;
- (void)onSilentMembers:(id)arg0 silentStatus:(long long)arg1 silentMembers:(id)arg2 silentEndTime:(long long)arg3;
- (void)onStrangerConversationChange:(id)arg0 isNewPositive:(BOOL)arg1;
- (void)didReceiveRTVCommandMessage:(id)arg0;
- (void)didReceiveGroupSPCommandMessage:(id)arg0;
- (void)didReceiveBackpackSPCommandMessage:(id)arg0;
- (void)conversationsCreated:(id)arg0;

@end
