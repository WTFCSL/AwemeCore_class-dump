//
//     Generated by private class-dump
//

@class NSArray, NSObject;
@protocol OS_dispatch_queue, TIMXStrangerConversationFetcherProtocolDelegate;

@protocol TIMXStrangerConversationFetcherProtocol <NSObject>

+ (id)new;

@property (readonly) NSArray *currentStrangerConversations;
@property (readonly, nonatomic) BOOL hasMore;
@property (readonly, nonatomic) long long unreadCount;
@property (readonly, nonatomic) int inbox;
@property (weak, nonatomic) id<TIMXStrangerConversationFetcherProtocolDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;

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
- (void)deleteAllConversationWithCompletion:(id /* block */)arg0;
- (void)loadNewestNoTrashStrangerConvWithCompletion:(id /* block */)arg0;
- (void)pullOfflineStrangerMessageManuallyWithIsFirstLoad:(BOOL)arg0 completion:(id /* block */)arg1;
- (id)initWithRootObject:(id)arg0 inbox:(int)arg1 countPerPage:(int)arg2 isInStrangerList:(BOOL)arg3 callbackQueue:(id)arg4;
- (void)fetchFirstPageAndReorderWithCompletion:(id /* block */)arg0;
- (void)markConversationAsReadWithShortID:(long long)arg0 completion:(id /* block */)arg1;
- (id)getHighWeightStrangerConversationWithCons:(id)arg0;
- (int)getCurrentStrangerMessagesOptStyle;
- (id)currentStrangerConversations;
- (id)callbackQueue;
- (id)init;
- (id)delegate;
- (BOOL)hasMore;
- (void)setDelegate:(id)arg0;
- (long long)unreadCount;
- (int)inbox;

@end
