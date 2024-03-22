//
//     Generated by private class-dump
//

@class NSString, TIMXSDKInstance;

@interface TIMXOConversationManager : NSObject <TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)otherUserIDFor1to1ChatWithConversationID:(id)arg0;
- (void)deleteConversationsBeforeTime:(id)arg0 minRemain:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)fetchConversationInfoWithShortID:(long long)arg0 conversationID:(id)arg1 type:(unsigned long long)arg2 inInbox:(int)arg3 completion:(id /* block */)arg4;
- (void)markAllConversationsAsReadWithMode:(unsigned long long)arg0 completion:(id /* block */)arg1;
- (void)fetchAllFavoritedConversationsInInbox:(int)arg0 completion:(id /* block */)arg1;
- (BOOL)conversationExitsInDB:(id)arg0;
- (id)conversationIDFor1to1ChatWithOtherUserID:(long long)arg0 inbox:(int)arg1;
- (id)conversationIDForGroupChatWithConversationShortID:(long long)arg0;
- (void)fetchAllStickOnTopConversationsInInbox:(int)arg0 completion:(id /* block */)arg1;
- (void)fetchCreateConversationsInInbox:(int)arg0 cursor:(long long)arg1 conversationType:(unsigned long long)arg2 sortType:(long long)arg3 completion:(id /* block */)arg4;
- (void)fetchJoinedConversationsInInbox:(int)arg0 cursor:(long long)arg1 conversationType:(unsigned long long)arg2 sortType:(long long)arg3 completion:(id /* block */)arg4;
- (void)fetchAllConversationsByLocalDBInInbox:(int)arg0 beforeSortOrder:(long long)arg1 conversationType:(unsigned long long)arg2 pageCount:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)fetchAllConversationsInInbox:(int)arg0 cursor:(long long)arg1 conversationType:(unsigned long long)arg2 pageCount:(unsigned long long)arg3 sortType:(id)arg4 includeRemovedGroup:(id)arg5 completion:(id /* block */)arg6;
- (void)sendMessageP2PWithsendType:(long long)arg0 conversationId:(id)arg1 visibleUser:(id)arg2 messageType:(long long)arg3 content:(id)arg4 ext:(id)arg5 complection:(id /* block */)arg6;
- (id)fetchConversationsWithIdentifiers:(id)arg0;
- (id)conversationIdentifierWithOwnerID:(id)arg0 spUid:(id)arg1;
- (BOOL)doesDBHaveConversationWithBoxType:(long long)arg0;
- (BOOL)doesDBHaveConversationWithBoxTypeMask:(long long)arg0;
- (void)batchSetSyncedExtWithEntries:(id)arg0 conversationIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)batchSetSyncedExtWithEntries:(id)arg0 shouldRequest:(BOOL)arg1 conversationIDs:(id)arg2 completion:(id /* block */)arg3;
- (void)p_async_on_request_queue:(id /* block */)arg0;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)arg0;

@end
