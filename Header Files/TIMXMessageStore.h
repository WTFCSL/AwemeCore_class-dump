//
//     Generated by private class-dump
//

@class NSString, NSDictionary, TIMXMulticastDelegate, TIMXDatabaseMigrator, NSObject, TIMXSDKInstance;
@protocol OS_os_log, OS_dispatch_queue, TIMXCurrentUserCredentialProtocol;

@interface TIMXMessageStore : NSObject <IESIMDBRebuildStore, TIMXMessageStoreProtocol, TIMXMessageDBDelegate, TIMXInstanceScopeSingleton> {
    struct shared_ptr<WCDB::TimedQueue<std::string>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } p_db_wal_queue_ptr;
    struct once_flag { unsigned long long __state_; } p_db_wal_thread_create_flag;
    BOOL p_db_wal_allow_check_point;
    int _errorReportToken;
    id /* block */ sortOrderBlock;
    id /* block */ notUpdateConversationTimeBlock;
    id<TIMXCurrentUserCredentialProtocol> _currentUserImp;
    NSDictionary *_openedDatabases;
    NSDictionary *_encryptHelpers;
    TIMXMulticastDelegate *_observerMulticast;
    NSObject<OS_os_log> *_slog;
    TIMXDatabaseMigrator *_migrator;
    id /* block */ _errorReportTokenFix;
    NSString *_latestOpenDBPath;
    NSObject<OS_dispatch_queue> *_sharedReadQueue;
    NSObject<OS_dispatch_queue> *_sharedWritableQueue;
    NSObject<OS_dispatch_queue> *_sharedNotifyQueue;
    TIMXSDKInstance *_r;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<TIMXCurrentUserCredentialProtocol> currentUserImp;
@property (copy, nonatomic) NSDictionary *openedDatabases;
@property (copy, nonatomic) NSDictionary *encryptHelpers;
@property (retain, nonatomic) TIMXMulticastDelegate *observerMulticast;
@property (retain, nonatomic) NSObject<OS_os_log> *slog;
@property (retain, nonatomic) TIMXDatabaseMigrator *migrator;
@property (nonatomic) int errorReportToken;
@property (copy, nonatomic) id /* block */ errorReportTokenFix;
@property (retain) NSString *latestOpenDBPath;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *sharedReadQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *sharedWritableQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *sharedNotifyQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ sortOrderBlock;
@property (copy, nonatomic) id /* block */ notUpdateConversationTimeBlock;

+ (id)p_tableNameOfRootObject:(id)arg0 fromORMClass:(Class)arg1;
+ (BOOL)isMentioned:(id)arg0 withUserID:(id)arg1;

- (id)allConfigs;
- (void)removeObserverWithIdentifier:(id)arg0;
- (id)addWeakChangesObserver:(id)arg0 onQueue:(id)arg1;
- (id)configForKey:(id)arg0;
- (id)sharedNotifyQueue;
- (id)sharedWritableQueue;
- (id)sharedReadQueue;
- (id)currentUserDatabase;
- (void)removeDatabaseInstanceForUser:(long long)arg0 completion:(id /* block */)arg1;
- (unsigned long long)currentDataBaseWALFileSize;
- (BOOL)trimCurrentWALFileIfBiggerThan:(unsigned long long)arg0;
- (id)addWeakChangesObserver:(id)arg0 onQueue:(id)arg1 priority:(int)arg2;
- (id)addSyncWeakChangesObserver:(id)arg0 priority:(int)arg1;
- (void)setCalculateSortOrderHandler:(id /* block */)arg0;
- (void)insertConversationWithIdentifier:(id)arg0 type:(int)arg1 configBlock:(id /* block */)arg2;
- (void)insertFile:(id)arg0;
- (void)overrideAllParticipantsInConversation:(id)arg0 participants:(id)arg1;
- (void)insertParticipantsInConversation:(id)arg0 participants:(id)arg1;
- (void)insertOrUpdateMessageNewProperty:(id)arg0 needNotify:(BOOL)arg1;
- (void)insertOrUpdateIndexRangeWithMinIndexV2:(long long)arg0 maxIndexV2:(long long)arg1 inConversation:(id)arg2;
- (void)insertOrUpdateIndexRangeWithMinIndexV1:(long long)arg0 maxIndexV1:(long long)arg1 inConversation:(id)arg2;
- (id)messageWithIndexV2:(long long)arg0 inConversationWithIdentifier:(id)arg1;
- (id)messagesInConversation:(id)arg0 baseIndexV2:(long long)arg1 limit:(unsigned long long)arg2 pullDirection:(unsigned long long)arg3;
- (id)messageWithServerMessageID:(long long)arg0;
- (id)messageWithServerMessageID:(long long)arg0 inConversationWithIdentifier:(id)arg1;
- (id)messageKVObjectForMessageID:(id)arg0 key:(id)arg1;
- (id)messageKVObjectsForkey:(id)arg0 limit:(long long)arg1;
- (id)messageKVObjectsForMessageIDs:(id)arg0;
- (long long)maxOrderIndexInConversationWithIdentifier:(id)arg0;
- (long long)maxPullIndexInConversationWithIdentifier:(id)arg0;
- (long long)minPullIndexInConversationWithIdentifier:(id)arg0;
- (long long)minIndexInConversationV2WithIdentifier:(id)arg0;
- (long long)maxIndexInConversationV2WithIdentifier:(id)arg0;
- (int)badgeCountInConversationWithIdentifier:(id)arg0;
- (long long)maxOrderIndex;
- (long long)minOrderIndex;
- (id)messagesBeforeOrderIndex:(long long)arg0 limit:(unsigned long long)arg1 includeSoftDeleted:(BOOL)arg2;
- (id)firstVisibleUnreadMessageInConversation:(id)arg0;
- (id)firstVisibleUnreadMentionedMessageInConversation:(id)arg0;
- (id)deleteAnchorMessagesInConversation:(id)arg0;
- (id)unreadMessagesInConversation:(id)arg0 sender:(long long)arg1 limit:(unsigned long long)arg2 includeSoftDeleted:(BOOL)arg3;
- (id)messagesInConversation:(id)arg0 beforeMessage:(id)arg1 limit:(unsigned long long)arg2 includeSoftDeleted:(BOOL)arg3;
- (id)messagesInConversation:(id)arg0 afterMessage:(id)arg1 limit:(unsigned long long)arg2 includeSoftDeleted:(BOOL)arg3;
- (id)messagesInConversation:(id)arg0 afterMessage:(id)arg1 limit:(unsigned long long)arg2 includeSoftDeleted:(BOOL)arg3 shouldContainBoundaryMessage:(BOOL)arg4;
- (id)messagesInConversation:(id)arg0 baseMessage:(id)arg1 limit:(unsigned long long)arg2 InMessageTypes:(id)arg3 slideDirection:(unsigned long long)arg4;
- (id)messagesInConversation:(id)arg0 startPullIndex:(long long)arg1 endPullIndex:(long long)arg2 includeSoftDeleted:(BOOL)arg3;
- (id)messagesInConversation:(id)arg0 betweenMinIndexV2:(long long)arg1 maxIndexV2:(long long)arg2 includeSoftDeleted:(BOOL)arg3;
- (id)messagesInConversation:(id)arg0 beforePullIndex:(long long)arg1 limit:(unsigned long long)arg2 includeSoftDeleted:(BOOL)arg3;
- (id)messagesInConversation:(id)arg0 anchorPullIndex:(long long)arg1 limit:(unsigned long long)arg2 includeSoftDeleted:(BOOL)arg3 direction:(unsigned long long)arg4 shouldContainBoundaryMessage:(BOOL)arg5;
- (id)lastLocalReadMessageInConversation:(id)arg0;
- (id)messagesInConversation:(id)arg0 messageTypes:(id)arg1 afterIndex:(long long)arg2 limit:(unsigned long long)arg3;
- (id)messagesWithoutPullIndexInConversation:(id)arg0 afterOrderIndex:(long long)arg1;
- (id)conversationsWithInboxes:(id)arg0;
- (id)strangerConversations:(int)arg0 updatedAt:(id)arg1 limit:(int)arg2;
- (id)conversationWithShortID:(long long)arg0;
- (id)conversationCoreInfoWithIdentifier:(id)arg0;
- (id)conversationSettingsInfoWithIdentifier:(id)arg0;
- (id)subConversationWithShortIdentifier:(long long)arg0;
- (id)subConversationWithIdentifier:(id)arg0;
- (id)conversationsByPageNumber:(long long)arg0 pageIndex:(long long)arg1;
- (id)conversationsByPageNumber:(long long)arg0 pageIndex:(long long)arg1 inboxes:(id)arg2;
- (BOOL)pagingConversationValid;
- (id)fileWithIdentifier:(id)arg0;
- (id)filesBelongToMessage:(id)arg0 InConversation:(id)arg1;
- (id)participantsInConversation:(id)arg0;
- (id)participantsWithBizRole:(id)arg0 conversationID:(id)arg1;
- (id)maxSortOrderParticipantInConversation:(id)arg0;
- (id)participantWithUserID:(long long)arg0 conversationID:(id)arg1;
- (id)participantReadReceipts;
- (id)participantReadReceiptsInConversation:(id)arg0;
- (id)neverUpdatedTicketConversations;
- (id)getMessageNewPropertyKey:(id)arg0 messageID:(id)arg1 conversationID:(id)arg2 idempotentID:(id)arg3;
- (id)batchGetMessageNewPropertyWithStatus:(id)arg0;
- (id)getIntersectionIndexRangeWithMinIndex:(long long)arg0 maxIndex:(long long)arg1 inConversation:(id)arg2;
- (id)getIntersectionIndexRangeWithMinIndexV1:(long long)arg0 maxIndexV1:(long long)arg1 inConversation:(id)arg2;
- (id)searchMessagesInConversation:(id)arg0 query:(id)arg1 fuzzySearch:(BOOL)arg2;
- (void)updateMessage:(id)arg0 inConversationWithIdentifier:(id)arg1 alterBlock:(id /* block */)arg2;
- (void)handleRecallMessageLocal:(id)arg0 belogningConversationID:(id)arg1 role:(long long)arg2 recallUserID:(id)arg3;
- (void)updateConversationInfo:(id)arg0 alterBlock:(id /* block */)arg1;
- (void)updateConversationSettingInfo:(id)arg0 alterBlock:(id /* block */)arg1;
- (void)updateConversationCoreInfo:(id)arg0 alterBlock:(id /* block */)arg1;
- (void)updateConversation:(id)arg0 alterBlock:(id /* block */)arg1;
- (void)softDeleteMessageWithIdentifier:(id)arg0 serverMessageID:(long long)arg1 inConversationWithIdentifier:(id)arg2;
- (void)markAllConversationsAsReadWithDicmChangedConversation:(id)arg0 dicmLastMessage:(id)arg1;
- (void)updateFile:(id)arg0 alterBlock:(id /* block */)arg1;
- (void)hardDeleteConversation:(id)arg0;
- (void)hardDeleteConversation:(id)arg0 withOptions:(unsigned long long)arg1;
- (void)hardDeleteConversationsBeforeTime:(id)arg0 minRemain:(unsigned long long)arg1;
- (void)hardDeleteFilesBelongToMessage:(id)arg0 InConversation:(id)arg1;
- (void)hardDeleteFilesInConversation:(id)arg0;
- (void)hardDeleteMessagesInConversation:(id)arg0 beforeOrderIndex:(long long)arg1;
- (void)hardDeleteMessagesWithArrMessageID:(id)arg0 conversationID:(id)arg1 shouldNotify:(BOOL)arg2;
- (void)hardDeleteAllMessagesInConversation:(id)arg0 withNotify:(BOOL)arg1;
- (void)removeAllParticipantsInConversation:(id)arg0;
- (void)removeParticipants:(id)arg0 participantCount:(id)arg1 inConversation:(id)arg2;
- (void)removeAllParticipantReadReceiptsInConversation:(id)arg0;
- (void)deleteMessageNewPropertyKey:(id)arg0 messageID:(id)arg1 conversationID:(id)arg2 idempotentID:(id)arg3;
- (void)deleteCascadeConfigOfConversation:(id)arg0;
- (id)indexV2ArrOfMessagesInConversation:(id)arg0 betweenMinOrderIndex:(long long)arg1 maxOrderIndex:(long long)arg2 shouldFilterInvalidIndexV2:(BOOL)arg3 includeSoftDeleted:(BOOL)arg4;
- (void)userDidLogout:(id)arg0;
- (void)warnMainThreadWritingIOIfNeeded;
- (id)getTransactionFromDatabase:(id)arg0;
- (void)handleInsertMessageNewProperty:(id)arg0 withTransaction:(id)arg1 withUpdate:(id)arg2;
- (void)notifyWithUpdate:(id)arg0;
- (void)trackMsgInsert:(id)arg0;
- (void)batchUpdateReferMessageStatus:(int)arg0 serverMessageID:(long long)arg1 withTransaction:(id)arg2 updater:(id)arg3 inConversationWithIdentifier:(id)arg4;
- (void)handleReferRootMessageChildrenWithMessage:(id)arg0 transaction:(id)arg1 update:(id)arg2;
- (id)currentUserImp;
- (long long)maxOrderIndexInConversationWithIdentifier:(id)arg0 withTransaction:(id)arg1;
- (id)observerMulticast;
- (long long)unreadCountV1WithConversationID:(id)arg0 readIndex:(long long)arg1 transaction:(id)arg2;
- (void)calculateSortOrderForConversation:(id)arg0;
- (void)warnMainThreadReadingIOIfNeeded;
- (void)statisticConversationAction:(BOOL)arg0 interval:(long long)arg1;
- (void)deleteConversationAllNewProperty:(id)arg0 withTransaction:(id)arg1;
- (void)setText:(id)arg0 forKey:(id)arg1;
- (void)removeConfigForKey:(id)arg0;
- (void)setCurrentUserImp:(id)arg0;
- (void)setObserverMulticast:(id)arg0;
- (void)trackReceiveMsg:(id)arg0;
- (void)trackLoadMsg:(id)arg0;
- (id)openedDatabases;
- (void)setOpenedDatabases:(id)arg0;
- (void)markAllSendingAsFailed:(id)arg0;
- (BOOL)shouldMarkAsReadAfterVersionChange:(id)arg0;
- (void)applyDBPropertyToMessageArray:(id)arg0;
- (void)deleteMessageAllNewProperty:(id)arg0 withTransaction:(id)arg1;
- (void)applyPropertyMapToMessageArray:(id)arg0;
- (void)applyReferMessageKVForMessages:(id)arg0;
- (id)batchGetMessageAllNewProperty:(id)arg0 withTransaction:(id)arg1;
- (id)getMessageAllNewProperty:(id)arg0 withTransaction:(id)arg1;
- (void)modifyParticipantsInConversation:(id)arg0 participants:(id)arg1;
- (void)removeParticipantsInConversation:(id)arg0 participantUserIDs:(id)arg1;
- (id)participantUidsInConversation:(id)arg0;
- (id)participantInConversation:(id)arg0 userID:(long long)arg1;
- (id)participantsListOfParticipantsInAnyLocalConversationWithUidList:(id)arg0;
- (id)participantsListOfConversationsContainAnyUserInUidList:(id)arg0;
- (void)insertParticipantReadReceipts:(id)arg0;
- (void)deleteIndexRangeInConversation:(id)arg0;
- (long long)allMessagesCount;
- (id)messageWithIdentifier:(id)arg0 inConversationWithIdentifier:(id)arg1 transaction:(id)arg2;
- (id)messageWithIdentifier:(id)arg0 inConversationWithIdentifier:(id)arg1 referPropertyInfo:(BOOL)arg2;
- (id)messageWithPullIndex:(long long)arg0 inConversationWithIdentifier:(id)arg1 referPropertyInfo:(BOOL)arg2;
- (id)messagesBelongingInMessageTypes:(id)arg0 inConversation:(id)arg1;
- (id)unreadMessagesInConversation:(id)arg0 hintType:(long long)arg1 limit:(unsigned long long)arg2 includeSoftDeleted:(BOOL)arg3;
- (id)messagesInConversation:(id)arg0 afterIndex:(long long)arg1 fromSender:(long long)arg2 limit:(unsigned long long)arg3;
- (id)mentionedMessagesInConversation:(id)arg0 afterIndex:(long long)arg1 limit:(unsigned long long)arg2;
- (id)messagesAfterIndexInConversation:(id)arg0 hintType:(long long)arg1 limit:(unsigned long long)arg2 includeSoftDeleted:(BOOL)arg3;
- (id)messagesAfterIndexInConversation:(id)arg0 hintTypes:(id)arg1 limit:(long long)arg2 includeSoftDeleted:(BOOL)arg3;
- (id)messagesInConversation:(id)arg0 beforeMessage:(id)arg1 limit:(unsigned long long)arg2 includeSoftDeleted:(BOOL)arg3 transaction:(id)arg4;
- (id)messagesInConversation:(id)arg0 beforeMessage:(id)arg1 inPullIndexRange:(id)arg2 notBetweenPullIndexRange:(id)arg3 limit:(unsigned long long)arg4 includeSoftDeleted:(BOOL)arg5;
- (id)messagesInConversation:(id)arg0 afterMessage:(id)arg1 inPullIndexRange:(id)arg2 notBetweenPullIndexRange:(id)arg3 limit:(unsigned long long)arg4 includeSoftDeleted:(BOOL)arg5 shouldContainBoundaryMessage:(BOOL)arg6;
- (id)messagesInConversation:(id)arg0 betweenMinOrderIndex:(long long)arg1 maxOrderIndex:(long long)arg2 includeSoftDeleted:(BOOL)arg3;
- (id)messagesInConversation:(id)arg0 excludeMessageTypes:(id)arg1 includeSoftDeleted:(BOOL)arg2 limit:(unsigned long long)arg3;
- (id)messagesInConversationV2:(id)arg0 baseMessage:(id)arg1 limit:(unsigned long long)arg2 InMessageTypes:(id)arg3 slideDirection:(unsigned long long)arg4;
- (BOOL)hasSendMessagesInConversation:(id)arg0 userID:(long long)arg1 intervalSinceNow:(double)arg2 belongingInMessageTypes:(id)arg3;
- (BOOL)hasSendMessagesInConversation:(id)arg0 userID:(long long)arg1 intervalSinceNow:(double)arg2 excludeMessageTypes:(id)arg3;
- (void)updateMessage:(id)arg0 inConversationWithIdentifier:(id)arg1 toStatus:(long long)arg2;
- (void)updateMessage:(id)arg0 inConversationWithIdentifier:(id)arg1 alterBlock:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)updateMessage:(id)arg0 inConversationWithIdentifier:(id)arg1 alterBlockWithForbidNotifyChanged:(id /* block */)arg2 completion:(id /* block */)arg3;
- (id)conversationIDWithCoreInfoOwnerID:(id)arg0 spUid:(id)arg1;
- (void)batchUpdateConversationSettingInfos:(id)arg0 alterBlock:(id /* block */)arg1 completion:(id /* block */)arg2;
- (BOOL)isConversationExistWithIdentifier:(id)arg0;
- (id)conversationsWithBelongedAcquaintanceTypes:(id)arg0;
- (id)conversationsWithInboxes:(id)arg0 withBelongedAcquaintanceTypes:(id)arg1;
- (id)conversationsBySortOrderWithInboxes:(id)arg0;
- (id)conversationsBySortOrderWithInboxes:(id)arg0 withBelongedAcquaintanceTypes:(id)arg1;
- (id)conversationsBySortOrderWithInboxes:(id)arg0 withBelongedAcquaintanceTypes:(id)arg1 paticipantsCountBelowNumber:(long long)arg2 lastMessageDateAfter:(id)arg3;
- (id)conversationsWithBoxTypeMask:(long long)arg0 shouldNotContainedBoxTypeMask:(long long)arg1 containMaskZero:(BOOL)arg2 beforeSortOrder:(id)arg3 limit:(id)arg4;
- (id)unreadConversationsWithInboxes:(id)arg0 withBelongedAcquaintanceTypes:(id)arg1 limit:(unsigned long long)arg2;
- (id)unreadConversationsWithInboxes:(id)arg0 withBelongedAcquaintanceTypes:(id)arg1 limit:(unsigned long long)arg2 convTypes:(id)arg3;
- (id)unreadConvsOrderedByUpdatedAtWithConvTypes:(id)arg0 containStrangerConv:(BOOL)arg1 limit:(long long)arg2;
- (id)conversationsBeforeSortOrder:(long long)arg0 limit:(unsigned long long)arg1 inboxes:(id)arg2;
- (id)conversationsBeforeSortOrder:(long long)arg0 limit:(unsigned long long)arg1 inboxes:(id)arg2 withBelongedAcquaintanceTypes:(id)arg3;
- (id)conversationsBeforeSortOrder:(long long)arg0 limit:(unsigned long long)arg1 inboxes:(id)arg2 withBelongedAcquaintanceTypes:(id)arg3 convTypes:(id)arg4;
- (id)unreadConversationsWithMask:(long long)arg0 shouldNotContainedBoxTypeMask:(long long)arg1 containMaskZero:(BOOL)arg2 demoteUnreadCountTimestamp:(double)arg3 unreadNeglectMask:(long long)arg4 convTypes:(id)arg5;
- (int)conversationCountWithMask:(long long)arg0 shouldNotContainedBoxTypeMask:(long long)arg1 containMaskZero:(BOOL)arg2 demoteUnreadCountTimestamp:(double)arg3 unreadNeglectMask:(long long)arg4 convTypes:(id)arg5;
- (id)conversationsWithMask:(long long)arg0 shouldNotContainedBoxTypeMask:(long long)arg1 containMaskZero:(BOOL)arg2 demoteUnreadCountTimestamp:(double)arg3 unreadNeglectMask:(long long)arg4 convTypes:(id)arg5;
- (id)batchUpdateConversationInfos:(id)arg0 alterBlock:(id /* block */)arg1;
- (void)updateConversationInfo:(id)arg0 alterBlock:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)updateConversation:(id)arg0 forbidNotify:(BOOL)arg1 alterBlock:(id /* block */)arg2;
- (void)updateConversation:(id)arg0 forbidNotify:(BOOL)arg1 alterBlock:(id /* block */)arg2 completion:(id /* block */)arg3;
- (id)insertConversationWithIdentifier:(id)arg0 type:(int)arg1 forbidNotify:(BOOL)arg2 configBlock:(id /* block */)arg3;
- (void)insertOrUpdateConversationWithIdentifier:(id)arg0 type:(int)arg1 forbidNotify:(BOOL)arg2 configBlock:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)overrideAllBots:(id)arg0 inConversation:(id)arg1;
- (void)insertBots:(id)arg0 toConversation:(id)arg1;
- (void)removeBotUserIDs:(id)arg0 inConversation:(id)arg1;
- (id)botsInConversation:(id)arg0;
- (id)botsInConversation:(id)arg0 userID:(long long)arg1;
- (id)messageWithServerMessageID:(long long)arg0 conversationShortID:(long long)arg1;
- (id)lastMessageInConversation:(id)arg0;
- (id)strangerMessageCountAfterDate:(id)arg0;
- (double)maxMessageServerCreateTime:(long long)arg0;
- (id)messagesWithType:(long long)arg0 sinceTime:(double)arg1;
- (id)messagesBeforeTime:(double)arg0 inTypes:(id)arg1 limit:(unsigned long long)arg2;
- (void)hardDeleteMessagesInConversation:(id)arg0 fromIndex:(long long)arg1 toIndex:(long long)arg2 completion:(id /* block */)arg3;
- (id)unreadMentionMessagesInConversation:(id)arg0;
- (void)updateMessageForSendMsgResponse:(id)arg0 inConversationWithIdentifier:(id)arg1 alterBlock:(id /* block */)arg2;
- (void)insertMessages:(id)arg0 conversationExtraMap:(id)arg1 files:(id)arg2 inbox:(int)arg3 reason:(id)arg4 context:(id)arg5 completion:(id /* block */)arg6;
- (id)conversationsWithIdentifiers:(id)arg0;
- (void)markConversationAsRead:(id)arg0 tillIndex:(id)arg1 tillBadgeCont:(id)arg2 completion:(id /* block */)arg3;
- (void)markAllConversationsAsRead:(id)arg0 readIndexChangedConversationModels:(id)arg1;
- (id)unreadStrangerConversationsWithInboxes:(id)arg0 limit:(unsigned long long)arg1;
- (long long)allUnreadCountOfStrangers:(int)arg0;
- (id)strangerConversationsInInbox:(int)arg0 beforeStrangerVersion:(long long)arg1 limit:(int)arg2 shouldContainOldStrangers:(BOOL)arg3 shouldContainBottomStrangers:(BOOL)arg4 shouldContainBoundaryStranger:(BOOL)arg5;
- (id)strangerConversationsInInbox:(int)arg0 afterStrangerVersion:(long long)arg1 limit:(int)arg2 shouldContainOldStrangers:(BOOL)arg3 shouldContainBottomStrangers:(BOOL)arg4 shouldContainBoundaryStranger:(BOOL)arg5;
- (id)strangerConversationsInInbox:(int)arg0 strangerVersion:(long long)arg1 direction:(unsigned long long)arg2 limit:(int)arg3 shouldContainOldStrangers:(BOOL)arg4 shouldContainBottomStrangers:(BOOL)arg5 shouldContainBoundaryStranger:(BOOL)arg6;
- (void)deleteStrangerConversationsInInbox:(int)arg0 beforeStrangerVersion:(long long)arg1;
- (id)getAllUnreadStrangerConversationsWithInbox:(int)arg0;
- (void)batchClearAllStrangerConversationUnreadCountWithInbox:(int)arg0 shouldNotify:(BOOL)arg1;
- (void)markStrangerBoxConversationsAsRead:(id)arg0 readIndexChangedConversationModels:(id)arg1;
- (id)strangerConversationCountAfterDate:(id)arg0;
- (long long)allConversationsCountWithIsStranger:(BOOL)arg0;
- (id /* block */)sortOrderBlock;
- (void)setSortOrderBlock:(id /* block */)arg0;
- (id /* block */)notUpdateConversationTimeBlock;
- (void)setNotUpdateConversationTimeBlock:(id /* block */)arg0;
- (void)removeDatabaseInstanceForUser:(long long)arg0 isRebuild:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)truncateWalFileWithCompletion:(id /* block */)arg0;
- (id)allErrorCode;
- (void)recoverDBWithBlock:(id /* block */)arg0;
- (BOOL)isRecoverFromBackup;
- (void)resetRecoverType;
- (id)lastBackupMessageIndexs;
- (void)insertOrUpdateStrangerConversationRangeWithMinVersion:(long long)arg0 maxVersion:(long long)arg1;
- (void)updateStrangerConversationRangeWithOldestVersion:(long long)arg0;
- (id)getIntersectionStrangerConversationRangeWithMinVersion:(long long)arg0 maxVersion:(long long)arg1;
- (void)ecomInsertConversationWithIdentifier:(id)arg0 type:(int)arg1 configBlock:(id /* block */)arg2;
- (id)ecomInsertConversationWithIdentifier:(id)arg0 type:(int)arg1 forbidNotify:(BOOL)arg2 configBlock:(id /* block */)arg3;
- (void)ecomInsertOrUpdateConversationWithIdentifier:(id)arg0 type:(int)arg1 forbidNotify:(BOOL)arg2 configBlock:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)ecomUpdateConversation:(id)arg0 alterBlock:(id /* block */)arg1;
- (void)ecomUpdateConversation:(id)arg0 forbidNotify:(BOOL)arg1 alterBlock:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)ecomUpdateConversation:(id)arg0 forbidNotify:(BOOL)arg1 alterBlock:(id /* block */)arg2;
- (BOOL)isTrashStrangerConversation:(id)arg0;
- (BOOL)enableTrashTest;
- (id)groupManagementInfoWithIdentifier:(id)arg0;
- (void)insertOrReplaceGroupManagementInfoWithConversationIdentifier:(id)arg0 alterBlock:(id /* block */)arg1;
- (void)insertOrReplaceGroupManagementInfoWithConversationIdentifier:(id)arg0 alterBlock:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)updateConversationSettingInfo:(id)arg0 alterBlock:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)updateConversationCoreInfo:(id)arg0 alterBlock:(id /* block */)arg1 completion:(id /* block */)arg2;
- (long long)maxSortOrderValueParticipantInConversation:(id)arg0;
- (id)p_tableNameFromORMClass:(Class)arg0;
- (void)batchUpdateConversationInfos:(id)arg0 alterBlock:(id /* block */)arg1 sync:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)participantReadReceiptsWithBlock:(id /* block */)arg0;
- (void)updateMessageNewPropertyStatus:(long long)arg0 key:(id)arg1 messageID:(id)arg2 conversationID:(id)arg3 idempotentID:(id)arg4;
- (id)messageWithoutPropertyWithIndexV2:(long long)arg0 inConversationWithIdentifier:(id)arg1;
- (id)messagesPullOrderIndexInConversation:(id)arg0 baseIndexV2:(long long)arg1 pullDirection:(unsigned long long)arg2;
- (void)batchUpdateConversationInfosWithConversationIdentifierAlterBlocks:(id)arg0 completion:(id /* block */)arg1;
- (id)firstVisibleUnreadPartMessageInConversation:(id)arg0;
- (id)unreadMentionMessageSenderSecIDInConversation:(id)arg0;
- (id)oldestUnreadMentionMsgIdentifierWithConversationIdentifier:(id)arg0;
- (void)markAllConversationsAsReadWithCompletionBlock:(id /* block */)arg0;
- (void)markStrangerBoxConversationsAsReadWithCompletionBlock:(id /* block */)arg0;
- (id /* block */)errorReportTokenFix;
- (int)errorReportToken;
- (void)setErrorReportTokenFix:(id /* block */)arg0;
- (void)setErrorReportToken:(int)arg0;
- (void)msgDB_getDBOperationLock:(id /* block */)arg0;
- (id)msgDB_getDatabase;
- (void)msgDB_cleanDatabaseWithUserId:(id)arg0;
- (id)addMonitorInToArray:(id)arg0 event:(id)arg1;
- (void)WCDBGlobalErrorReportProcess:(id)arg0;
- (void)setSlog:(id)arg0;
- (void)handleApplicationProtectedDataWillBecomeUnavailable;
- (id)latestOpenDBPath;
- (id)encryptHelpers;
- (id)p_currentUserDatabase_DouYinIMP;
- (id)p_currentUserDatabase_DefaultIMP;
- (void)setEncryptHelpers:(id)arg0;
- (BOOL)p_databaseRecover:(id)arg0 encryptHelper:(id)arg1 encKey:(id)arg2 error:(id *)arg3;
- (void)p_createAndDetachManuallyCheckPointThreadWithEncKey:(id)arg0;
- (void)setLatestOpenDBPath:(id)arg0;
- (id)getTransactionFromCurrentUserDatabase;
- (id)p_msgLinkTrackerBeginWithMessages:(id)arg0 reason:(id)arg1 context:(id)arg2;
- (Class)getMessageORMClassWithConID:(id)arg0;
- (BOOL)shouldVisibleWithMessage:(id)arg0;
- (void)batchRollBackReferMessageHintWithReason:(id)arg0 serverMessageID:(long long)arg1 withTransaction:(id)arg2 updater:(id)arg3 inConversationWithIdentifier:(id)arg4;
- (void)batchRollBackReferMessageHintWithReason:(id)arg0 serverMessageID:(long long)arg1 withTransaction:(id)arg2 updater:(id)arg3 inConversationWithIdentifier:(id)arg4 msg:(id)arg5;
- (void)updateSavedMessage:(id)arg0 withMessage:(id)arg1 transaction:(id)arg2 update:(id)arg3;
- (long long)unreadCountOfMessagesWithoutIndexV2InConversation:(id)arg0 afterPullIndex:(long long)arg1 transaction:(id)arg2;
- (long long)unreadCountOfMessagesWithoutIndexV2InConversation:(id)arg0 afterPullIndex:(long long)arg1;
- (void)p_msgLinkTrackerEndWithReason:(id)arg0 mutableContext:(id)arg1;
- (void)notifyWithUpdate:(id)arg0 context:(id)arg1;
- (void)notifyStrangerWithUpdate:(id)arg0;
- (void)p_simpleUpdateMessage:(id)arg0 inProperties:(const void *)arg1 conversationID:(id)arg2;
- (void)notifyStrangerWithUpdate:(id)arg0 withReason:(long long)arg1;
- (void)batchUpdateReferMessageWithserverMessageID:(long long)arg0 transaction:(id)arg1 updater:(id)arg2 inConversationWithIdentifier:(id)arg3 alterBlock:(id /* block */)arg4;
- (id)messagesInConversation:(id)arg0 beforeMessage:(id)arg1 inPullIndexRange:(id)arg2 notBetweenPullIndexRange:(id)arg3 limit:(unsigned long long)arg4 includeSoftDeleted:(BOOL)arg5 transaction:(id)arg6;
- (void)__batchDeleteConversationsAllNewProperty:(id)arg0 withTransaction:(id)arg1;
- (void)__batchDeleteCascadeConfigOfConversations:(id)arg0;
- (void)logParamsWithBadgeCount:(id)arg0 conversationID:(id)arg1 monitorsArray:(id)arg2 pullIndex:(id)arg3;
- (void)p_markConversationsAsReadWithConversations:(id)arg0 readIndexChangedConversations:(id)arg1 readIndexChangedConversationModels:(id)arg2;
- (BOOL)hasSendMessagesInConversation:(id)arg0 userID:(long long)arg1 intervalSinceNow:(double)arg2 belongingInMessageTypes:(id)arg3 excludeMessageTypes:(id)arg4;
- (id)conversationsWithDatabase:(id)arg0 withBelongedAcquaintanceTypes:(id)arg1;
- (struct WCTExpr { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x0; struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x0; Class x1; struct shared_ptr<WCTColumnBinding> { struct WCTColumnBinding *x0; struct __shared_weak_count *x1; } x2; Class x3; })__assembleCondition:(struct WCTExpr { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x0; struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x0; Class x1; struct shared_ptr<WCTColumnBinding> { struct WCTColumnBinding *x0; struct __shared_weak_count *x1; } x2; Class x3; })arg0 withBelongedAcquaintanceTypes:(id)arg1;
- (id)conversationsBySortOrderWithInboxes:(id)arg0 withBelongedAcquaintanceTypes:(id)arg1 convTypes:(id)arg2 paticipantsCountBelowNumber:(long long)arg3 lastMessageDateAfter:(id)arg4;
- (id)conversationsBySortOrderWithInboxes:(id)arg0 withBelongedAcquaintanceTypes:(id)arg1 convTypes:(id)arg2;
- (void)__batchHardDeleteConversations:(id)arg0 isStranger:(BOOL)arg1 withTransaction:(id)arg2;
- (id)messagesInConversation:(id)arg0 baseMessage:(id)arg1 closeBaseMessage:(BOOL)arg2 limit:(unsigned long long)arg3 InMessageTypes:(id)arg4 slideDirection:(unsigned long long)arg5;
- (void)p_calculateSortOrderForConversation_DouYinIMP:(id)arg0;
- (void)p_calculateSortOrderForConversation_DefaultIMP:(id)arg0;
- (void)p_applyReferMessageKVForMessages_DouYinIMP:(id)arg0;
- (void)p_applyReferMessageKVForMessages_DefaultIMP:(id)arg0;
- (void)updateSavedMessageReferDict:(id)arg0 withMessage:(id)arg1 transaction:(id)arg2 update:(id)arg3;
- (void)updateSavedMessageUnreadMention:(id)arg0 withMessage:(id)arg1 update:(id)arg2;
- (id)currentEncryptHelper;
- (void)insertParticipantReadReceipts:(id)arg0 inConversation:(id)arg1;
- (void)participantInConversation:(id)arg0 userID:(long long)arg1 completion:(id /* block */)arg2;
- (id)slog;
- (id)counts;
- (void)setInteger:(long long)arg0 forKey:(id)arg1;
- (void)setData:(id)arg0 forKey:(id)arg1;
- (id)dataForKey:(id)arg0;
- (void).cxx_destruct;
- (id)conversationWithIdentifier:(id)arg0;
- (id)conversations;
- (id)migrator;
- (void)dealloc;
- (void)setMigrator:(id)arg0;
- (id).cxx_construct;
- (id)initWithRootObject:(id)arg0;
- (void)setTexts:(id)arg0;
- (id)textForKey:(id)arg0;

@end
