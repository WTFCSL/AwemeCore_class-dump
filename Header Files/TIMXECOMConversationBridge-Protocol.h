//
//     Generated by private class-dump
//

@protocol TIMXECOMConversationBridge <NSObject>

+ (void)markAllConversationsAsReadWithMode:(unsigned long long)arg0 completion:(id /* block */)arg1;

- (void)updateSubConversation:(long long)arg0 parentConversationID:(id)arg1 inInbox:(int)arg2;
- (void)updateConversation:(id)arg0 completion:(id /* block */)arg1;
- (void)fetchConversationInfo:(long long)arg0 conversationID:(id)arg1 type:(int)arg2 inInbox:(int)arg3 completion:(id /* block */)arg4;
- (void)createConversationWithOtherParticipants:(id)arg0 participantsBizRoleObjects:(id)arg1 type:(int)arg2 name:(id)arg3 inInbox:(int)arg4 idempotentID:(id)arg5 bizExtension:(id)arg6 completion:(id /* block */)arg7;
- (void)createSubConversationWithParentConvShortID:(long long)arg0 parentConvID:(id)arg1 inInbox:(int)arg2 participantsObjects:(id)arg3 bizExtension:(id)arg4 completion:(id /* block */)arg5;
- (void)upsertWithLocalConversationSettingsObject:(id)arg0 completion:(id /* block */)arg1;
- (void)upsertWithLocalConversationObject:(id)arg0 inbox:(int)arg1 completion:(id /* block */)arg2;
- (void)upsertWithLocalSubConversationObject:(id)arg0 completion:(id /* block */)arg1;
- (void)hardDeleteConversation:(id)arg0 withOptions:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)markAllMessagesAsReadWithMode:(unsigned long long)arg0 completion:(id /* block */)arg1;
- (void)setMute:(BOOL)arg0 onConversation:(id)arg1 completion:(id /* block */)arg2;
- (void)setStickOnTop:(BOOL)arg0 onConversation:(id)arg1 completion:(id /* block */)arg2;
- (long long)minIndexV2ForConversation:(id)arg0 useDefaultValue:(BOOL)arg1;
- (BOOL)setLocalRealDeleteIndex:(long long)arg0 forConversation:(id)arg1;
- (long long)localRealDeleteIndexForConversation:(id)arg0;
- (BOOL)clearConversationUnreadCountDataSheet;
- (id)conversationUnreadCountModelsWithIdentifier:(id)arg0;
- (id)convUnreadUnionWithIdentifier:(id)arg0;
- (BOOL)markConversationNewUnreadModelReadWithConversationID:(id)arg0;
- (BOOL)updateConversationUnreadCountModelWithConversationID:(id)arg0 convUnreadUnion:(id)arg1;

@end
