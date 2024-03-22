//
//     Generated by private class-dump
//

@protocol ECOMTIMMessageMarkAsReadProtocol <NSObject>

- (void)markAllConversationsAsReadWithSendToServerFlag:(BOOL)arg0;
- (void)markConversationAsRead:(id)arg0 tillPullIndex:(id)arg1 tillBadgeCount:(id)arg2 sendToServer:(BOOL)arg3;
- (void)markConversationAsRead:(id)arg0 tillPullIndex:(id)arg1 tillBadgeCount:(id)arg2 convUnreadUnion:(id)arg3 sendToServer:(BOOL)arg4;
- (BOOL)bumpReadIndexTo:(long long)arg0 forConversation:(id)arg1;
- (long long)readIndexForConversation:(id)arg0;
- (BOOL)bumpReadIndexV2To:(long long)arg0 forConversation:(id)arg1;
- (long long)readIndexV2ForConversation:(id)arg0;
- (BOOL)bumpReadBadgeCountTo:(int)arg0 forConversation:(id)arg1;
- (int)readBadgeCountForConversation:(id)arg0;
- (void)unreadCountReport:(id)arg0 inbox:(int)arg1;

@end