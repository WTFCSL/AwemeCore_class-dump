//
//     Generated by private class-dump
//

@protocol ECOMTIMOChangeObserverDelegate <NSObject>

@optional

- (void)didInsertNewMessagesWithMessageIdentifiers:(id)arg0 belongingConversationMap:(id)arg1 reason:(unsigned long long)arg2;
- (void)messageUpdated:(id)arg0 inConversation:(id)arg1;
- (void)conversationUpdated:(id)arg0;
- (void)conversationDidDissolved:(id)arg0;
- (void)fileUpdated:(id)arg0;
- (void)strangerConversationUpdated:(id)arg0;
- (void)onMessagesNewPropertiesUpdated:(id)arg0 inConversation:(id)arg1 messageOldPropertiesMap:(id)arg2 messageNewPropertiesMap:(id)arg3 reason:(unsigned long long)arg4;
- (void)onSilentMembers:(id)arg0 silentStatus:(long long)arg1 silentMembers:(id)arg2;
- (void)onSilentConversation:(id)arg0 silentStatus:(long long)arg1;
- (void)onStrangerConversationChange:(id)arg0;
- (void)newP2PMessageNotifyConversation:(id)arg0 message:(id)arg1;
- (void)onDatabaseDamageWithError:(id)arg0 accountID:(long long)arg1;

@end
