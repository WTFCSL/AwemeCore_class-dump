//
//     Generated by private class-dump
//

@protocol TIMXOStrangerExplicitDelegate <NSObject>

- (id)analysisStrangerConversationWeightWithExt:(id)arg0 whiteList:(id)arg1;
- (BOOL)enableGetHighWeightStrangerConversationWhenFansCountEnable;
- (id)getStrangerBizInfo;
- (id)fetchLatestEnterStrangerBoxTime;
- (void)strangerInboxDidUpdate:(id)arg0 shouldClearUnreadCount:(BOOL)arg1;
- (void)strangerInboxDidUpdateWithConv:(id)arg0 shouldClearUnreadCount:(BOOL)arg1 realTimeUpdatedTrashConvIds:(id)arg2 reason:(long long)arg3;
- (void)strangerInboxDidUpdate:(id)arg0;
- (void)strangerConversationInBoxDidRefreshHighUpdateConversation:(id)arg0;
- (void)strangerConversationInBoxDidRefreshHighWeightConversation:(id)arg0;

@end
