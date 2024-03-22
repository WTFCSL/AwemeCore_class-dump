//
//     Generated by private class-dump
//

@class NSString, ECOMTIMPBNRequest;

@interface ECOMTIMPBAutoFallbackRequest : ECOMTIMAutoFallbackRequest {
    BOOL _enableHTTP;
    BOOL _enableWebSocket;
    ECOMTIMPBNRequest *_requestObject;
    NSString *_httpPath;
    id /* block */ _additionalErrorInResponseBlock;
}

@property (retain, nonatomic) ECOMTIMPBNRequest *requestObject;
@property (nonatomic) BOOL enableHTTP;
@property (nonatomic) BOOL enableWebSocket;
@property (copy, nonatomic) NSString *httpPath;
@property (copy, nonatomic) id /* block */ additionalErrorInResponseBlock;

+ (void)fetchMessagesWithConversationShortID:(long long)arg0 messageIndex:(long long)arg1 direction:(int)arg2 limit:(int)arg3 completion:(id /* block */)arg4;
+ (void)fetchMessageWithConversationShortID:(long long)arg0 messageServerID:(long long)arg1 completion:(id /* block */)arg2;
+ (void)ackMessageWithReportType:(int)arg0 cmd:(int)arg1 logId:(id)arg2 startTimeStamp:(long long)arg3 messageServerID:(long long)arg4 completion:(id /* block */)arg5;
+ (void)batchAckMessagesWithReportType:(int)arg0 cmd:(int)arg1 logId:(id)arg2 startTimeStamp:(long long)arg3 arrMessageServerID:(id)arg4 completion:(id /* block */)arg5;
+ (int)networkType;

- (void)pullOfflineMessagesInInbox:(int)arg0 version:(id)arg1 cmdIndex:(id)arg2 strangerVersion:(id)arg3 readVersion:(id)arg4 consultVersion:(id)arg5 notifyVersion:(id)arg6 source:(id)arg7;
- (void)clientMetric:(id)arg0 inbox:(int)arg1;
- (void)getConfigs:(int)arg0;
- (void)fetchAllConversationForUserInInboxNew:(int)arg0 lastVersion:(long long)arg1 page:(int)arg2;
- (void)fetchAllOpenConversationsForUserInInbox:(int)arg0 version:(long long)arg1 limit:(int)arg2;
- (void)fetchMessagesInInbox:(int)arg0 conversationID:(id)arg1 conversationType:(unsigned long long)arg2 conversationShortID:(long long)arg3 minIndex:(long long)arg4 maxIndex:(long long)arg5 direction:(unsigned long long)arg6;
- (void)fetchMessagesInInbox:(int)arg0 conversationID:(id)arg1 conversationType:(int)arg2 conversationShortID:(long long)arg3 beforeIndex:(long long)arg4;
- (void)markConversation:(long long)arg0 conversationID:(id)arg1 conversationType:(int)arg2 inInbox:(int)arg3 readIndex:(long long)arg4 readIndexV2:(long long)arg5 readBadgeCount:(int)arg6 unreadCount:(id)arg7 totalUnreadCount:(id)arg8 serverMessageID:(long long)arg9 ticket:(id)arg10 subConversationID:(long long)arg11 convUnreadUnion:(id)arg12;
- (void)sendMessage:(id)arg0 conversationType:(int)arg1 conversationShortID:(long long)arg2 conversationID:(id)arg3 inInbox:(int)arg4 ticket:(id)arg5 clientExt:(id)arg6 subConversationShortId:(long long)arg7;
- (id)httpPath;
- (id)requestObject;
- (void)beforeErrorCompletion:(id)arg0;
- (void)configureHTTPRequest:(id)arg0;
- (void)configureWSRequest:(id)arg0;
- (id)errorInResponseObject:(id)arg0;
- (void)createConversationWithType:(int)arg0 inInbox:(int)arg1 participants:(id)arg2 isPersistent:(BOOL)arg3 idempotentID:(id)arg4 bizExtension:(id)arg5;
- (void)createConversationWithType:(int)arg0 inInbox:(int)arg1 name:(id)arg2 participants:(id)arg3 participantsObjects:(id)arg4 isPersistent:(BOOL)arg5 idempotentID:(id)arg6 bizExtension:(id)arg7;
- (void)createSubConversationWithParentConvShortID:(long long)arg0 parentConvID:(id)arg1 inInbox:(int)arg2 participantsObjects:(id)arg3 bizExtension:(id)arg4;
- (void)updateConversationSettingsSyncedExtEntries:(id)arg0 onConversation:(long long)arg1 conversationID:(id)arg2 type:(int)arg3 inInbox:(int)arg4;
- (void)updateConversationCoreInfoSyncedExtEntries:(id)arg0 onConversation:(long long)arg1 conversationID:(id)arg2 type:(int)arg3 inInbox:(int)arg4;
- (void)updateConversationSettingsEntries:(id)arg0 onConversation:(long long)arg1 conversationID:(id)arg2 type:(int)arg3 inInbox:(int)arg4;
- (void)updateConversationCoreInfoEntries:(id)arg0 ext:(id)arg1 onConversation:(long long)arg2 conversationID:(id)arg3 type:(int)arg4 inInbox:(int)arg5;
- (void)fetchConversationInfo:(long long)arg0 conversationID:(id)arg1 type:(int)arg2 inInbox:(int)arg3;
- (void)addParticipants:(id)arg0 toConversation:(long long)arg1 conversationID:(id)arg2 type:(int)arg3 inInbox:(int)arg4 bizExtension:(id)arg5;
- (void)removeParticipants:(id)arg0 fromConversation:(long long)arg1 conversationID:(id)arg2 type:(int)arg3 inInbox:(int)arg4 bizExtension:(id)arg5;
- (void)leaveConversation:(long long)arg0 conversationID:(id)arg1 type:(int)arg2 inInbox:(int)arg3;
- (void)dismissConversation:(long long)arg0 conversationID:(id)arg1 type:(int)arg2 inInbox:(int)arg3;
- (void)fetchParticipantsForConversation:(long long)arg0 conversationID:(id)arg1 type:(int)arg2 inInbox:(int)arg3 fromCursor:(long long)arg4;
- (void)fetchFavoritedConversationsInInbox:(int)arg0 fromCursor:(long long)arg1;
- (void)fetchStickedOnTopConversationsInInbox:(int)arg0 fromCursor:(long long)arg1;
- (void)fetchAllConversationsInInbox:(int)arg0 cursor:(long long)arg1 conversationType:(int)arg2 extEntries:(id)arg3;
- (void)fetchInfoForConversations:(id)arg0 shortIDs:(id)arg1 types:(id)arg2 inInbox:(int)arg3;
- (void)checkInfoConversationsInbox:(int)arg0;
- (void)deleteConversation:(long long)arg0 conversationID:(id)arg1 conversationType:(int)arg2 inbox:(int)arg3 lastMessageIndex:(long long)arg4 lastMessageIndexV2:(long long)arg5 badgeCount:(int)arg6 convUnreadUnion:(id)arg7;
- (void)fetchSubConversationInfo:(long long)arg0 parentConvID:(id)arg1 subConversationShortID:(long long)arg2 inInbox:(int)arg3;
- (void)batchFetchSubConversationsInfo:(id)arg0 inbox:(int)arg1;
- (void)getMessagesCheckInfoInInbox:(int)arg0 conversationShortId:(long long)arg1 conversationId:(id)arg2 conversationType:(int)arg3 cursorReverseBegin:(long long)arg4 cursorReverseEnd:(long long)arg5 expectMsgTotalCount:(int)arg6;
- (void)getMessagesWithIndexV2s:(id)arg0 Inbox:(int)arg1 conversationShortId:(long long)arg2 conversationId:(id)arg3 conversationType:(int)arg4;
- (void)fetchMessagesInInbox:(int)arg0 conversationID:(id)arg1 conversationType:(int)arg2 conversationShortID:(long long)arg3 afterIndex:(long long)arg4;
- (void)deleteMessageWithServerMessageID:(long long)arg0 inConversation:(long long)arg1 conversationID:(id)arg2 conversationType:(int)arg3 inbox:(int)arg4;
- (void)deleteConversation:(long long)arg0 conversationID:(id)arg1 conversationType:(int)arg2 inbox:(int)arg3 lastMessageIndex:(long long)arg4 lastMessageIndexV2:(long long)arg5 badgeCount:(int)arg6;
- (void)markConversation:(long long)arg0 conversationID:(id)arg1 conversationType:(int)arg2 inInbox:(int)arg3 readIndex:(long long)arg4 readIndexV2:(long long)arg5 readBadgeCount:(int)arg6 unreadCount:(id)arg7 totalUnreadCount:(id)arg8 serverMessageID:(long long)arg9 ticket:(id)arg10 subConversationID:(long long)arg11;
- (void)markConversationsReadWithArrConversation:(id)arg0 dicLastMessage:(id)arg1;
- (void)unreadCountReport:(long long)arg0 convUnreadCountArray:(id)arg1 convUnreadCountByGroup:(id)arg2 inbox:(int)arg3;
- (void)getMessageByMessageServerID:(long long)arg0 conversationShortID:(long long)arg1;
- (void)checkInbox:(id)arg0;
- (void)fetchMessageReadsWithArrConversationID:(id)arg0 arrConversationShortID:(id)arg1 inbox:(int)arg2 needMinIndex:(BOOL)arg3 requestFrom:(id)arg4;
- (void)fetchMessageReadsWithArrConversationID:(id)arg0 arrConversationShortID:(id)arg1 needMinIndex:(BOOL)arg2 requestFrom:(id)arg3;
- (void)fetchMessageReadsWithArrConversationID:(id)arg0 arrConversationShortID:(id)arg1 arrUserID:(id)arg2 inbox:(int)arg3 needMinIndex:(BOOL)arg4 requestFrom:(id)arg5;
- (void)sendUserActionMessageWithActionType:(int)arg0 extra:(id)arg1 conversationType:(int)arg2 conversationShortID:(long long)arg3 conversationID:(id)arg4 inInbox:(int)arg5;
- (void)sendInputStatusMessageWithStatus:(int)arg0 extra:(id)arg1 conversationType:(int)arg2 conversationShortID:(long long)arg3 conversationID:(id)arg4 inInbox:(int)arg5;
- (void)sendMessageP2P:(int)arg0 conversationType:(int)arg1 conversationShortID:(long long)arg2 conversationID:(id)arg3 visibleUser:(id)arg4 messageType:(long long)arg5 content:(id)arg6 ext:(id)arg7 clientMessageId:(id)arg8 inInbox:(int)arg9;
- (void)recallMessage:(id)arg0 conversation:(long long)arg1 conversationID:(id)arg2 conversationType:(int)arg3 inInbox:(int)arg4;
- (void)setPropertyItemForItems:(id)arg0 messageID:(id)arg1 serverMessageID:(long long)arg2 conversationID:(id)arg3 conversationType:(int)arg4 conversationShortID:(long long)arg5 inInbox:(int)arg6 ticket:(id)arg7;
- (int)pbConversationTypeFromSDKType:(int)arg0;
- (void)setRequestObject:(id)arg0;
- (void)setAdditionalErrorInResponseBlock:(id /* block */)arg0;
- (void)setHttpPath:(id)arg0;
- (void)sendOnline;
- (void)sendOffline;
- (void)fetchMessagesInInbox:(int)arg0 conversationID:(id)arg1 conversationType:(int)arg2 conversationShortID:(long long)arg3 anchorIndex:(long long)arg4 direction:(unsigned long long)arg5;
- (void)pullPerUserMessagesInInbox:(int)arg0 cursor:(long long)arg1 interval:(long long)arg2 isNewUser:(int)arg3;
- (void)pullOfflineConversationsInInbox:(int)arg0 version:(long long)arg1 isNewUser:(int)arg2;
- (void)pullOfflineCmdMessagesInInbox:(int)arg0 index:(long long)arg1 isNewUser:(int)arg2;
- (void)fetchAllConversationForUserInInbox:(int)arg0 lastCursor:(long long)arg1 isNewUser:(int)arg2 initSubType:(int)arg3;
- (void)fetchHotConversationListInInbox:(int)arg0 cursor:(long long)arg1;
- (void)fetchAllConversationListInInbox:(int)arg0 cursor:(long long)arg1;
- (void)fetchLatestMessagesInInbox:(int)arg0 conversationID:(id)arg1 conversationType:(int)arg2 conversationShortID:(long long)arg3;
- (void)setEnableHTTP:(BOOL)arg0;
- (void)setEnableWebSocket:(BOOL)arg0;
- (BOOL)enableHTTP;
- (BOOL)enableWebSocket;
- (id /* block */)additionalErrorInResponseBlock;
- (void)_addEventExtraInfo:(id)arg0 requestObject:(id)arg1;
- (void)send;
- (id)init;
- (void).cxx_destruct;

@end
