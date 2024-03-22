//
//     Generated by private class-dump
//

@protocol TIMXMessageMarkAsReadProtocol <NSObject>

@property (copy, nonatomic) id /* block */ unreadCountReportFilterBlock;

- (void)markAllConversationsAsReadWithSendToServerFlag:(BOOL)arg0;
- (BOOL)bumpReadIndexTo:(long long)arg0 forConversation:(id)arg1;
- (long long)readIndexForConversation:(id)arg0;
- (BOOL)bumpReadIndexV2To:(long long)arg0 forConversation:(id)arg1;
- (long long)readIndexV2ForConversation:(id)arg0;
- (BOOL)bumpReadBadgeCountTo:(int)arg0 forConversation:(id)arg1;
- (id)readBadgeCountForConversation:(id)arg0;
- (void)setUnreadCountReportFilterBlock:(id /* block */)arg0;
- (void)markStrangerBoxConversationsAsReadWithSendToServerFlag:(BOOL)arg0;
- (void)ecom_markConversationAsRead:(id)arg0 tillPullIndex:(id)arg1 tillBadgeCount:(id)arg2 convUnreadUnion:(id)arg3 sendToServer:(BOOL)arg4;
- (void)markConversationAsRead:(id)arg0 tillPullIndex:(id)arg1 tillBadgeCount:(id)arg2 tillMuteReadBadgeCountInfos:(id)arg3 sendToServer:(BOOL)arg4;
- (BOOL)bumpReadBadgeCountTo:(int)arg0 forConversation:(id)arg1 forbidCheck:(BOOL)arg2;
- (void)unreadCountReport:(id)arg0 inbox:(int)arg1 needCheck:(BOOL)arg2;
- (BOOL)bumpMuteBadgeCountsForConversation:(id)arg0 infos:(id)arg1;
- (BOOL)bumpMuteReadBadgeCountsForConversation:(id)arg0 infos:(id)arg1;
- (id)muteBadgeCountInfosForConversation:(id)arg0;
- (id)muteReadBadgeCountInfosForConversation:(id)arg0;
- (id)calculateSubscribeUnreadCountsOnMuteForConversation:(id)arg0;
- (unsigned long long)calculateSubscribeUnreadCountOnMuteForConversation:(id)arg0 muteConfigString:(id)arg1;
- (id)muteReadBadgeCountInfosFromMuteBadgeCountInfosForConversation:(id)arg0;
- (id)muteReadBadgeCountInfosFromArray:(id)arg0;
- (id /* block */)unreadCountReportFilterBlock;

@end