//
//     Generated by private class-dump
//

@class NSArray, NSString, TIMXSDKInstance;
@protocol TIMXStrangerConversationFetcherProtocol, TIMXOStrangerConversationDataSourceDelegate;

@interface TIMXOStrangerConversationDataSource : NSObject <IESIMSDKStrangerConversationDataSource, TIMXStrangerConversationFetcherProtocolDelegate> {
    id<TIMXOStrangerConversationDataSourceDelegate> _delegate;
    TIMXSDKInstance *_r;
    id<TIMXStrangerConversationFetcherProtocol> _fetcher;
    id<TIMXOStrangerConversationDataSourceDelegate> _internalDelegate;
}

@property (readonly, copy, nonatomic) NSArray *currentConversations;
@property (readonly, nonatomic) BOOL hasMore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<TIMXStrangerConversationFetcherProtocol> fetcher;
@property (weak, nonatomic) id<TIMXOStrangerConversationDataSourceDelegate> internalDelegate;
@property (readonly, copy, nonatomic) NSArray *currentConversations;
@property (readonly, nonatomic) BOOL hasMore;
@property (readonly, nonatomic) unsigned long long unreadCount;
@property (weak, nonatomic) id<TIMXOStrangerConversationDataSourceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

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
- (id)initWithRootObject:(id)arg0 inbox:(int)arg1 countPerPage:(int)arg2;
- (id)analysisStrangerConversationWeightWithExt:(id)arg0 whiteList:(id)arg1;
- (BOOL)enableGetHighWeightStrangerConversationWhenFansCountEnable;
- (id)getStrangerBizInfo;
- (id)fetchLatestEnterStrangerBoxTime;
- (void)deleteAllConversationWithCompletion:(id /* block */)arg0;
- (void)markConversationAsReadWithShortID:(long long)arg0 completion:(id /* block */)arg1;
- (void)strangerConversationFetcherDidUpdate:(id)arg0 updateConversationIdentifiers:(id)arg1 reason:(long long)arg2;
- (void)fetchNextPageWithCompletion:(id /* block */)arg0;
- (void).cxx_destruct;
- (id)delegate;
- (BOOL)hasMore;
- (id)internalDelegate;
- (void)setInternalDelegate:(id)arg0;
- (void)setDelegate:(id)arg0;
- (unsigned long long)unreadCount;
- (id)fetcher;
- (id)currentConversations;
- (int)inbox;
- (void)setFetcher:(id)arg0;

@end
