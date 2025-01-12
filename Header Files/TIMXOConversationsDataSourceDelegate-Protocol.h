//
//     Generated by private class-dump
//

@protocol TIMXOConversationsDataSourceDelegate <NSObject>

- (void)conversationDataSource:(id)arg0 didUpdateWithUpdate:(id)arg1 updateReason:(long long)arg2;
- (void)conversationDataSource:(id)arg0 totalUnreadCountFirstCaculatedWithMonitorArray:(id)arg1 boxType:(long long)arg2;

@optional

- (long long)conversationDataSource:(id)arg0 compareConversationA:(id)arg1 withConversationB:(id)arg2;
- (void)conversationDataSource:(id)arg0 conversationUpdate:(id)arg1;
- (void)conversationDataSource:(id)arg0 didLoadAllConversations:(id)arg1;
- (long long)conversationDataSource:(id)arg0 customUnreadCountForConversation:(id)arg1;
- (long long)conversationDataSource:(id)arg0 anotherUnreadCountForConversation:(id)arg1;
- (void)onConversationDataSourceConversationsDeleted:(id)arg0;
- (void)onConversationDataSourceMessagesCreated:(id)arg0 belongingConversationMap:(id)arg1 reason:(id)arg2;
- (void)onConversationDataSourceMessagesUpdated:(id)arg0 belongingConversationMap:(id)arg1;
- (void)onConversationDataSourceMessagesDeleted:(id)arg0 belongingConversationMap:(id)arg1;
- (void)onConversationDataSourceConversationCleared:(id)arg0;
- (BOOL)conversationDataSourceNeedUpdateSortOrder:(id)arg0;
- (void)conversationDataSource:(id)arg0 didEndUpdateSortOrderWithMonitor:(id)arg1 error:(id)arg2;
- (BOOL)conversationDataSource:(id)arg0 shouldShowConversation:(id)arg1;
- (BOOL)conversationDataSource:(id)arg0 shouldIgnoreUnreadCountForConversation:(id)arg1;
- (void)conversationDataSource:(id)arg0 unreadCountV2Update:(int)arg1;
- (void)conversationDataSource:(id)arg0 unreadMentionedCountV2Update:(int)arg1;
- (void)onBoxTypeConvUpdatedWithBoxType:(long long)arg0;
- (BOOL)conversationDataSource:(id)arg0 shouldIgnoreFilterCacheWithConversation:(id)arg1;

@end
