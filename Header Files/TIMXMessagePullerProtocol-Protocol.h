//
//     Generated by private class-dump
//

@protocol TIMXMessagePullerProtocol <NSObject>

- (void)setNeedPullMessageInInboxType:(int)arg0;
- (BOOL)couldUseNewPullerRefactor:(id)arg0;
- (void)kickoffPullerInInboxType:(int)arg0 needResetInitPuller:(BOOL)arg1;
- (void)checkDatabaseValidWithLastConversationCountAtLogout:(long long)arg0 currentConversationCount:(long long)arg1;
- (void)continueFetchPullInInboxType:(int)arg0 completion:(id /* block */)arg1;
- (BOOL)hasFinishInitAllConversations:(int)arg0;
- (void)resetForRebuildMessageDB;
- (void)resetForRecoverMessageDB;
- (BOOL)hasInitSucessWithInbox:(int)arg0;
- (BOOL)hasInitOverWithInbox:(int)arg0;
- (void)fetchAllRebuildedMessagesWithInbox:(int)arg0 isFromBackup:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)cancelPullingAllMessagesWithInbox:(int)arg0;
- (void)clearAllfailedRebuildConvs;
- (void)clearAllLiveConsultFailedRebuildConvs;

@end