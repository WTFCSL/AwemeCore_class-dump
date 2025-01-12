//
//     Generated by private class-dump
//

@protocol ECOMTIMHistoryMessagePullerProtocol <NSObject>

- (void)loadOlderMsgesRemedialyFromConversationId:(id)arg0 anchorMsgId:(id)arg1 msgesCount:(long long)arg2 priorityUseDB:(BOOL)arg3 forcePullRemote:(BOOL)arg4 currentMinIndexV2:(long long)arg5 currentMaxIndexV2:(long long)arg6 completionBlock:(id /* block */)arg7;
- (void)remoteLoadMessagesBetweenMinIndexV2:(long long)arg0 maxIndexV2:(long long)arg1 direction:(unsigned long long)arg2 inConversation:(id)arg3 completionBlock:(id /* block */)arg4;
- (BOOL)checkContinousInRangeWithMinIndexV2:(long long)arg0 maxIndexV2:(long long)arg1 inConversation:(id)arg2 emptyRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)arg3 includeRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)arg4;
- (void)fetchAllMessagesFromConversationIdentifier:(id)arg0 minIndexV2:(long long)arg1 maxIndexV2:(long long)arg2 shouldCancelBlock:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)loadHistoryForConversation:(id)arg0 beforeMessage:(id)arg1 visibleLimit:(unsigned long long)arg2 completionBlock:(id /* block */)arg3;
- (void)loadHistoryForConversation:(id)arg0 beforeMessage:(id)arg1 limit:(unsigned long long)arg2 completionBlock:(id /* block */)arg3;
- (void)loadHistoryForConversation:(id)arg0 beforeIndex:(long long)arg1 totalCount:(unsigned long long)arg2 completionBlock:(id /* block */)arg3;
- (void)loadMessagesForConversation:(id)arg0 anchorMessage:(id)arg1 visibleLimit:(unsigned long long)arg2 direction:(unsigned long long)arg3 shouldContainBoundaryMessage:(BOOL)arg4 completionBlock:(id /* block */)arg5;
- (BOOL)checkContinousInRangeWithMinIndexV1:(long long)arg0 maxIndexV1:(long long)arg1 inConversation:(id)arg2;
- (void)getMessagesCheckInfoInInbox:(int)arg0 conversationShortId:(long long)arg1 conversationId:(id)arg2 conversationType:(int)arg3 cursorReverseBegin:(long long)arg4 cursorReverseEnd:(long long)arg5 expectMsgTotalCount:(int)arg6 completionBlock:(id /* block */)arg7;
- (void)getMessageByMessageServerID:(long long)arg0 conversationShortID:(long long)arg1 completionBlock:(id /* block */)arg2;
- (void)fetchMessagesForConversation:(id)arg0 completionBlock:(id /* block */)arg1;
- (void)getMessagesWithIndexV2s:(id)arg0 Inbox:(int)arg1 conversationShortId:(long long)arg2 conversationId:(id)arg3 conversationType:(int)arg4 completionBlock:(id /* block */)arg5;

@end
