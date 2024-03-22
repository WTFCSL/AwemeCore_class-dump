//
//     Generated by private class-dump
//

@class NSMapTable, NSString, NSOperationQueue, NSObject;
@protocol OS_dispatch_queue, IESIMFTSStoreServiceProtocol;

@interface IESIMFTSDataModuleService : NSObject <IESIMFTSDataServiceProtocol> {
    id /* block */ _userSortOrderBlock;
    id /* block */ _conversationSortOrderBlock;
    id /* block */ _messageSortOrderBlock;
    id /* block */ _participantSortOrderBlock;
    id<IESIMFTSStoreServiceProtocol> _store;
    NSMapTable *_taskMap;
    NSObject<OS_dispatch_queue> *_writeUserQueue;
    NSOperationQueue *_searchUserQueue;
    NSObject<OS_dispatch_queue> *_writeMessageQueue;
    NSOperationQueue *_searchMessageQueue;
    NSObject<OS_dispatch_queue> *_writeParticipantQueue;
    NSOperationQueue *_searchParticipantQueue;
    NSObject<OS_dispatch_queue> *_writeConversationQueue;
    NSOperationQueue *_searchConversationQueue;
}

@property (retain, nonatomic) id<IESIMFTSStoreServiceProtocol> store;
@property (retain, nonatomic) NSMapTable *taskMap;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *writeUserQueue;
@property (retain) NSOperationQueue *searchUserQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *writeMessageQueue;
@property (retain) NSOperationQueue *searchMessageQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *writeParticipantQueue;
@property (retain) NSOperationQueue *searchParticipantQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *writeConversationQueue;
@property (retain) NSOperationQueue *searchConversationQueue;
@property (copy, nonatomic) id /* block */ userSortOrderBlock;
@property (copy, nonatomic) id /* block */ conversationSortOrderBlock;
@property (copy, nonatomic) id /* block */ messageSortOrderBlock;
@property (copy, nonatomic) id /* block */ participantSortOrderBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)movePathIfNeeded:(id)arg0;
- (void)executeCheckpointWithCompletion:(id /* block */)arg0;
- (id)pathOfCurrentUser:(id)arg0;
- (id)initWithSetUpConfig:(id)arg0;
- (id)ftsPathOfCurrentUser:(id)arg0;
- (id)newDocumentFTSPathOfCurrentUser:(id)arg0;
- (id)oldDirectoryPath;
- (id)newDirectoryPath;
- (id /* block */)userSortOrderBlock;
- (void)setUserSortOrderBlock:(id /* block */)arg0;
- (id)writeUserQueue;
- (id)generateTaskId;
- (void)setOperation:(id)arg0 forTaskId:(id)arg1;
- (id)searchUserQueue;
- (id /* block */)conversationSortOrderBlock;
- (void)setConversationSortOrderBlock:(id /* block */)arg0;
- (id)writeConversationQueue;
- (id)searchConversationQueue;
- (id /* block */)messageSortOrderBlock;
- (void)setMessageSortOrderBlock:(id /* block */)arg0;
- (id)writeMessageQueue;
- (id)searchMessageQueue;
- (id /* block */)participantSortOrderBlock;
- (void)setParticipantSortOrderBlock:(id /* block */)arg0;
- (id)writeParticipantQueue;
- (id)searchParticipantQueue;
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
- (void)setWriteUserQueue:(id)arg0;
- (void)setSearchUserQueue:(id)arg0;
- (void)setWriteMessageQueue:(id)arg0;
- (void)setSearchMessageQueue:(id)arg0;
- (void)setWriteParticipantQueue:(id)arg0;
- (void)setSearchParticipantQueue:(id)arg0;
- (void)setWriteConversationQueue:(id)arg0;
- (void)setSearchConversationQueue:(id)arg0;
- (BOOL)cancelTask:(id)arg0;
- (void).cxx_destruct;
- (id)store;
- (void)setStore:(id)arg0;
- (void)setTaskMap:(id)arg0;
- (id)taskMap;
- (void)clearWithCompletion:(id /* block */)arg0;

@end