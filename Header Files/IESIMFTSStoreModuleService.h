//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary;

@interface IESIMFTSStoreModuleService : NSObject <IESIMFTSStoreServiceProtocol> {
    BOOL _hasClosed;
    BOOL _appWillTerminate;
    id /* block */ userSortOrderBlock;
    id /* block */ conversationSortOrderBlock;
    id /* block */ messageSortOrderBlock;
    id /* block */ participantSortOrderBlock;
    NSString *_curUid;
    NSMutableDictionary *_databases;
}

@property BOOL hasClosed;
@property (copy, nonatomic) NSString *curUid;
@property BOOL appWillTerminate;
@property (retain, nonatomic) NSMutableDictionary *databases;
@property (copy, nonatomic) id /* block */ userSortOrderBlock;
@property (copy, nonatomic) id /* block */ conversationSortOrderBlock;
@property (copy, nonatomic) id /* block */ messageSortOrderBlock;
@property (copy, nonatomic) id /* block */ participantSortOrderBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)appWillTerminate;
- (void)setCurUid:(id)arg0;
- (id)curUid;
- (void)handleAppWillTerminateNotification:(id)arg0;
- (void)p_trackLanchIO:(unsigned long long)arg0;
- (void)setAppWillTerminate:(BOOL)arg0;
- (void)calculateSortOrderForConversation:(id)arg0;
- (void)executeCheckpointWithCompletion:(id /* block */)arg0;
- (id)initWithSetUpConfig:(id)arg0;
- (id /* block */)userSortOrderBlock;
- (void)setUserSortOrderBlock:(id /* block */)arg0;
- (void)insertOrUpdateUserDatas:(id)arg0;
- (void)deleteUserDatasWithUid:(id)arg0;
- (void)deleteAllUserDatas;
- (void)recalculateAllUserDatasSortOrder;
- (id)queryUsersWithKeywords:(id)arg0 contentTypes:(id)arg1 beforeSortOrder:(long long)arg2 limit:(unsigned long long)arg3;
- (id /* block */)conversationSortOrderBlock;
- (void)setConversationSortOrderBlock:(id /* block */)arg0;
- (void)insertOrUpdateConversationDatas:(id)arg0;
- (void)deleteConversationDatasWithConvIds:(id)arg0;
- (id)queryConversationsWithKeywords:(id)arg0 contentTypes:(id)arg1 beforeSortOrder:(long long)arg2 limit:(unsigned long long)arg3;
- (id /* block */)messageSortOrderBlock;
- (void)setMessageSortOrderBlock:(id /* block */)arg0;
- (void)insertOrUpdateMessageDatas:(id)arg0;
- (void)deleteMessageDatasWithMsgIds:(id)arg0;
- (void)deleteMessageDatasWithConvIds:(id)arg0;
- (id)queryMessagesWithKeywords:(id)arg0 contentTypes:(id)arg1 inConversation:(id)arg2 beforeSortOrder:(long long)arg3 limit:(unsigned long long)arg4;
- (id /* block */)participantSortOrderBlock;
- (void)setParticipantSortOrderBlock:(id /* block */)arg0;
- (void)insertOrUpdateParticipantDatas:(id)arg0 withConversationId:(id)arg1;
- (void)updateParticipantDatasWithUid:(id)arg0 newContentDict:(id)arg1;
- (void)deleteParticipantDatasWithUids:(id)arg0;
- (void)deleteParticipantDatasWithConvIds:(id)arg0;
- (void)deleteAllParticipantDatas;
- (id)queryParticipantsWithKeywords:(id)arg0 contentTypes:(id)arg1 beforeSortOrder:(long long)arg2 limit:(unsigned long long)arg3;
- (void)setUpAllDBWithPath:(id)arg0;
- (BOOL)canMakeDBOperation;
- (id)getUserDatasInTableWithDatas:(id)arg0;
- (void)calculateSortOrderForUser:(id)arg0;
- (id)getTransactionWithTableName:(id)arg0;
- (BOOL)insertNewUserDatas:(id)arg0 inTransaction:(id)arg1;
- (BOOL)updateUserDatas:(id)arg0 skipVirtualTableWrite:(BOOL)arg1 inTransaction:(id)arg2;
- (BOOL)updateUserDataProperty:(const void *)arg0 withValue:(id)arg1 WithCondition:(struct WCTExpr { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x0; struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x0; Class x1; struct shared_ptr<WCTColumnBinding> { struct WCTColumnBinding *x0; struct __shared_weak_count *x1; } x2; Class x3; })arg2 inTransaction:(id)arg3;
- (BOOL)deleteAllDatasWithTableName:(id)arg0 virtualTableName:(id)arg1 inTransaction:(id)arg2;
- (void)batchRecalculateAllUserDatasSortOrder;
- (void)recalculateUserDatasSortOrder:(id)arg0;
- (id)convertRowsToFTSDatas:(id)arg0 dataClass:(Class)arg1 rowList:(struct WCTResultList { struct __list_node_base<const WCTResult, void *> { void *x0; void *x1; } x0; struct __compressed_pair<unsigned long, std::allocator<std::__list_node<const WCTResult, void *>>> { unsigned long long x0; } x1; BOOL x2; })arg2;
- (id)getConversationDatasInTableWithDatas:(id)arg0;
- (BOOL)insertNewConversationDatas:(id)arg0 inTransaction:(id)arg1;
- (BOOL)updateConversationDatas:(id)arg0 skipVirtualTableWrite:(BOOL)arg1 inTransaction:(id)arg2;
- (id)getMessageDatasInTableWithDatas:(id)arg0;
- (void)calculateSortOrderForMessage:(id)arg0;
- (BOOL)insertNewMessageDatas:(id)arg0 inTransaction:(id)arg1;
- (BOOL)updateMessageDatas:(id)arg0 skipVirtualTableWrite:(BOOL)arg1 inTransaction:(id)arg2;
- (BOOL)deleteMessageWithCondition:(struct WCTExpr { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x0; struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x0; Class x1; struct shared_ptr<WCTColumnBinding> { struct WCTColumnBinding *x0; struct __shared_weak_count *x1; } x2; Class x3; })arg0 inTransaction:(id)arg1;
- (id)getParticipantDatasInTableWithConversationId:(id)arg0;
- (void)calculateSortOrderForParticipant:(id)arg0;
- (BOOL)insertNewParticipantDatas:(id)arg0 inTransaction:(id)arg1;
- (BOOL)updateParticipantDatas:(id)arg0 skipVirtualTableWrite:(BOOL)arg1 inTransaction:(id)arg2;
- (BOOL)deleteParticipantWithCondition:(struct WCTExpr { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x0; struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x0; Class x1; struct shared_ptr<WCTColumnBinding> { struct WCTColumnBinding *x0; struct __shared_weak_count *x1; } x2; Class x3; })arg0 inTransaction:(id)arg1;
- (id)getParticipantDatasInTableWithCondition:(struct WCTExpr { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x0; struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x0; Class x1; struct shared_ptr<WCTColumnBinding> { struct WCTColumnBinding *x0; struct __shared_weak_count *x1; } x2; Class x3; })arg0;
- (void)setUpDBWithPath:(id)arg0 tableClass:(Class)arg1 virtualTableClass:(Class)arg2;
- (BOOL)setUpDBTables:(id)arg0 withTableClass:(Class)arg1 virtualTableClass:(Class)arg2 error:(id *)arg3;
- (void)setCheckPoint:(id)arg0 withTableName:(id)arg1;
- (BOOL)isCorruptedError:(id)arg0;
- (void).cxx_destruct;
- (void)clear;
- (void)setHasClosed:(BOOL)arg0;
- (BOOL)hasClosed;
- (id)databases;
- (void)setDatabases:(id)arg0;

@end
