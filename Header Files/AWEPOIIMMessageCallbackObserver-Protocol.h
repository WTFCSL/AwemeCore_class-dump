//
//     Generated by private class-dump
//

@protocol AWEPOIIMMessageCallbackObserver <NSObject>

@optional

- (void)readMessageDidUpdateWithBizConversationID:(id)arg0 indexOfRead:(id)arg1;
- (void)conversationDidUpdateWithBizConversationID:(id)arg0;
- (void)conversationsDidChangeWithNew:(id)arg0;
- (void)conversationsDidDeleted:(id)arg0;
- (void)messageDidInsert;
- (void)messageDidUpdateWithMessage:(id)arg0;
- (void)didReceiveWsMessage:(id)arg0 method:(long long)arg1;

@end
