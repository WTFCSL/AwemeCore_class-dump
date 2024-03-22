//
//     Generated by private class-dump
//

@protocol TIMXConversationInfoUpdaterProtocol <NSObject>

- (void)updateConversation:(id)arg0 completion:(id /* block */)arg1;
- (void)updateConversation:(id)arg0;
- (void)upsertWithLocalObject:(id)arg0 inInbox:(int)arg1;
- (void)upsertWithLocalObject:(id)arg0 inInbox:(int)arg1 completion:(id /* block */)arg2;
- (void)upsertWithLocalObject:(id)arg0 inInbox:(int)arg1 forceSave:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)updateConversationSettingsSyncedExtEntries:(id)arg0 onConversation:(id)arg1 completion:(id /* block */)arg2;
- (void)updateConversationCoreInfoSyncedExtEntries:(id)arg0 onConversation:(id)arg1 completion:(id /* block */)arg2;
- (void)updateConversationSettingsEntries:(id)arg0 onConversation:(id)arg1 completion:(id /* block */)arg2;
- (void)updateConversationCoreInfoEntries:(id)arg0 ext:(id)arg1 onConversation:(id)arg2 completion:(id /* block */)arg3;
- (void)updateConversation:(id)arg0 convInfoUpateType:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)updateConversation:(id)arg0 convInfoUpateType:(unsigned long long)arg1 userIDs:(id)arg2 completion:(id /* block */)arg3;
- (void)updateConversationSettingsSyncedExtEntries:(id)arg0 shouldRequest:(BOOL)arg1 onConversation:(id)arg2 completion:(id /* block */)arg3;
- (void)upsertWithLocalConversationObject:(id)arg0 inInbox:(int)arg1 forbidNotify:(BOOL)arg2 forceSave:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)updateDBConvInfoWithPBConvInfo:(id)arg0 hasCoreInfo:(BOOL)arg1 hasUserInfo:(BOOL)arg2 hasSettinginfo:(BOOL)arg3 hasAllInfo:(BOOL)arg4 forbidNotify:(BOOL)arg5 inbox:(int)arg6 completion:(id /* block */)arg7;
- (void)batchUpdateConversationSettingsSyncedExtEntries:(id)arg0 conversationIDs:(id)arg1 retryCount:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)batchUpdateConversationSettingsSyncedExtEntries:(id)arg0 shouldRequest:(BOOL)arg1 conversationIDs:(id)arg2 retryCount:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)updateConversationParticipant:(long long)arg0 entries:(id)arg1 onConversation:(id)arg2 completion:(id /* block */)arg3;
- (void)updateConversationBatchParticipants:(id)arg0 entries:(id)arg1 onConversation:(id)arg2 bizExt:(id)arg3 completion:(id /* block */)arg4;
- (void)setConversationSilent:(id)arg0 silentStatus:(long long)arg1 silentNormalOnly:(BOOL)arg2 complection:(id /* block */)arg3;
- (void)setMemberSilent:(id)arg0 silentStatus:(long long)arg1 members:(id)arg2 bizExtension:(id)arg3 complection:(id /* block */)arg4;
- (void)batchFetchConvInfosWithConvIds:(id)arg0;

@end