//
//     Generated by private class-dump
//

@protocol IESIMFTSDataServiceProtocol <NSObject>

@property (copy, nonatomic) id /* block */ userSortOrderBlock;
@property (copy, nonatomic) id /* block */ conversationSortOrderBlock;
@property (copy, nonatomic) id /* block */ messageSortOrderBlock;
@property (copy, nonatomic) id /* block */ participantSortOrderBlock;

- (void)executeCheckpointWithCompletion:(id /* block */)arg0;
- (id)initWithSetUpConfig:(id)arg0;
- (id /* block */)userSortOrderBlock;
- (void)setUserSortOrderBlock:(id /* block */)arg0;
- (id /* block */)conversationSortOrderBlock;
- (void)setConversationSortOrderBlock:(id /* block */)arg0;
- (id /* block */)messageSortOrderBlock;
- (void)setMessageSortOrderBlock:(id /* block */)arg0;
- (id /* block */)participantSortOrderBlock;
- (void)setParticipantSortOrderBlock:(id /* block */)arg0;
- (void)insertOrUpdateUserDatas:(id)arg0 completion:(id /* block */)arg1;
- (void)deleteUserDatasWithUid:(id)arg0 completion:(id /* block */)arg1;
- (void)deleteAllUserDatasWithCompletion:(id /* block */)arg0;
- (void)recalculateAllUserDatasSortOrderWithCompletion:(id /* block */)arg0;
- (id)queryUsersWithKeywords:(id)arg0 contentTypes:(id)arg1 beforeSortOrder:(long long)arg2 limit:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)insertOrUpdateConversationDatas:(id)arg0 completion:(id /* block */)arg1;
- (void)deleteConversationDatasWithConvIds:(id)arg0 completion:(id /* block */)arg1;
- (id)queryConversationsWithKeywords:(id)arg0 contentTypes:(id)arg1 beforeSortOrder:(long long)arg2 limit:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)insertOrUpdateMessageDatas:(id)arg0 completion:(id /* block */)arg1;
- (void)deleteMessageDatasWithMsgIds:(id)arg0 completion:(id /* block */)arg1;
- (void)deleteMessageDatasWithConvIds:(id)arg0 completion:(id /* block */)arg1;
- (id)queryMessagesWithKeywords:(id)arg0 contentTypes:(id)arg1 inConversation:(id)arg2 beforeSortOrder:(long long)arg3 limit:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (void)insertOrUpdateParticipantDatas:(id)arg0 withConversationId:(id)arg1 completion:(id /* block */)arg2;
- (void)updateParticipantDatasWithUid:(id)arg0 newContentDict:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteParticipantDatasWithUids:(id)arg0 completion:(id /* block */)arg1;
- (void)deleteParticipantDatasWithConvIds:(id)arg0 completion:(id /* block */)arg1;
- (void)deleteAllParticipantDatasWithCompletion:(id /* block */)arg0;
- (id)queryParticipantsWithKeywords:(id)arg0 contentTypes:(id)arg1 beforeSortOrder:(long long)arg2 limit:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (BOOL)cancelTask:(id)arg0;
- (void)clearWithCompletion:(id /* block */)arg0;

@end