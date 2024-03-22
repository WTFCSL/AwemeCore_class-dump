//
//     Generated by private class-dump
//

@class NSArray;

@protocol IESIMSDKStrangerConversationDataSource <NSObject>

@property (readonly, copy, nonatomic) NSArray *currentConversations;
@property (readonly, nonatomic) BOOL hasMore;

- (void)markAllConversationReadWithCompletion:(id /* block */)arg0;
- (void)deleteConversation:(id)arg0 completion:(id /* block */)arg1;
- (void)fetchNextPageWithBizInfo:(id)arg0 completion:(id /* block */)arg1;
- (void)loadRemedialyStrangerConversationsWithBizInfo:(id)arg0 completion:(id /* block */)arg1;
- (void)markConversationAsRead:(id)arg0 completion:(id /* block */)arg1;
- (void)fetchMessagesInConversation:(id)arg0 completion:(id /* block */)arg1;
- (void)deleteMessage:(long long)arg0 inConversation:(id)arg1 sendToServer:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)deleteMessageNew:(id)arg0 inConversation:(id)arg1 sendToServer:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)strangerConversationCountAfterDate:(id)arg0 completion:(id /* block */)arg1;
- (void)strangerMessageCountAfterDate:(id)arg0 completion:(id /* block */)arg1;
- (BOOL)hasMore;
- (id)currentConversations;

@end