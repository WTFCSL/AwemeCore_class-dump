//
//     Generated by private class-dump
//

@class NSArray, TIMXThreadSafeMutableDictionary, NSString, TIMXPBResponseLongConnectionCallback, NSObject, TIMXSDKInstance;
@protocol TIMXMessageStoreProtocol, OS_dispatch_queue, TIMXStrangerConversationFetcherProtocolDelegate;

@interface TIMXStrangerConversationsOldFetcher : NSObject <TIMXMessageStoreChangesObserver, TIMXNotifierDelegate, TIMXInstanceScopeAlwaysNewDIComponent, TIMXStrangerConversationFetcherOldProtocol> {
    BOOL _hasMore;
    BOOL _fetching;
    int _inbox;
    int _count;
    NSArray *_currentStrangerConversations;
    NSArray *_currentConversations;
    long long _unreadCount;
    id<TIMXStrangerConversationFetcherProtocolDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    TIMXSDKInstance *_r;
    long long _cursor;
    id<TIMXMessageStoreProtocol> _db;
    TIMXPBResponseLongConnectionCallback *_callback;
    TIMXThreadSafeMutableDictionary *_p_sharedMessagesInConversation;
}

@property (nonatomic) BOOL fetching;
@property (copy, nonatomic) NSArray *currentConversations;
@property (nonatomic) long long cursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) int count;
@property (retain, nonatomic) id<TIMXMessageStoreProtocol> db;
@property (nonatomic) long long unreadCount;
@property (nonatomic) int inbox;
@property (retain, nonatomic) TIMXPBResponseLongConnectionCallback *callback;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly, weak, nonatomic) TIMXThreadSafeMutableDictionary *p_sharedMessagesInConversation;
@property (weak, nonatomic) id<TIMXStrangerConversationFetcherProtocolDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSArray *currentStrangerConversations;

- (void)onStrangerConversationChange:(id)arg0;
- (void)markAllConversationReadWithCompletion:(id /* block */)arg0;
- (void)deleteConversation:(id)arg0 completion:(id /* block */)arg1;
- (void)fetchNextPageWithBizInfo:(id)arg0 completion:(id /* block */)arg1;
- (void)markConversationAsRead:(id)arg0 completion:(id /* block */)arg1;
- (void)fetchMessagesInConversation:(id)arg0 completion:(id /* block */)arg1;
- (void)deleteAllConversationWithCompletion:(id /* block */)arg0;
- (id)initWithRootObject:(id)arg0 inbox:(int)arg1 countPerPage:(int)arg2 isInStrangerList:(BOOL)arg3 callbackQueue:(id)arg4;
- (void)fetchFirstPageAndReorderWithCompletion:(id /* block */)arg0;
- (void)markConversationAsReadWithShortID:(long long)arg0 completion:(id /* block */)arg1;
- (id)currentStrangerConversations;
- (void)fetchNextPageWithCompletion:(id /* block */)arg0;
- (void)applyNewResult:(id)arg0 updateConversationIdentifiers:(id)arg1 reason:(long long)arg2;
- (id)p_sharedMessagesInConversation;
- (void)deleteMessage:(long long)arg0 inConversation:(id)arg1 completion:(id /* block */)arg2;
- (void)setCount:(int)arg0;
- (long long)cursor;
- (void)setDb:(id)arg0;
- (id)callbackQueue;
- (id)db;
- (void)setCallbackQueue:(id)arg0;
- (void).cxx_destruct;
- (void)setCallback:(id)arg0;
- (id)callback;
- (void)setUnreadCount:(long long)arg0;
- (id)delegate;
- (int)count;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (void)setDelegate:(id)arg0;
- (long long)unreadCount;
- (void)setCursor:(long long)arg0;
- (id)currentConversations;
- (void)setCurrentConversations:(id)arg0;
- (int)inbox;
- (BOOL)fetching;
- (void)setFetching:(BOOL)arg0;
- (id)initWithRootObject:(id)arg0;
- (void)setInbox:(int)arg0;

@end
