//
//     Generated by private class-dump
//

@protocol TIMXMessageStoreConversationDefaultProtocol <NSObject>

- (id)conversationWithShortID:(long long)arg0;
- (id)conversationsByPageNumber:(long long)arg0 pageIndex:(long long)arg1;
- (id)conversationsByPageNumber:(long long)arg0 pageIndex:(long long)arg1 inboxes:(id)arg2;
- (void)markAllConversationsAsReadWithDicmChangedConversation:(id)arg0 dicmLastMessage:(id)arg1;
- (void)hardDeleteConversationsBeforeTime:(id)arg0 minRemain:(unsigned long long)arg1;

@end
