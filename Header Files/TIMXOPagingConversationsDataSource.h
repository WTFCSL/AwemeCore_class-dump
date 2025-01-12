//
//     Generated by private class-dump
//

@class NSArray, NSTimer, NSString, TIMXSDKInstance, NSMutableArray, NSCache;
@protocol TIMXMessageStoreProtocol, TIMXOPagingConversationsChangeObserver;

@interface TIMXOPagingConversationsDataSource : NSObject <TIMXMessageStoreChangesObserver> {
    BOOL _includeEmptyConversation;
    BOOL _needsRefresh;
    BOOL _refreshing;
    id<TIMXOPagingConversationsChangeObserver> _delegate;
    TIMXSDKInstance *_r;
    NSArray *_arrInboxType;
    id /* block */ _filterBlock;
    NSMutableArray *_currentConversations;
    id<TIMXMessageStoreProtocol> _db;
    NSCache *_filterResultCache;
    NSTimer *_refreshTimer;
    NSString *_refreshingToken;
}

@property (retain, nonatomic) NSArray *arrInboxType;
@property (copy, nonatomic) id /* block */ filterBlock;
@property (nonatomic) BOOL includeEmptyConversation;
@property (retain, nonatomic) NSMutableArray *currentConversations;
@property (retain, nonatomic) id<TIMXMessageStoreProtocol> db;
@property (retain, nonatomic) NSCache *filterResultCache;
@property (retain) NSTimer *refreshTimer;
@property (nonatomic) BOOL needsRefresh;
@property (nonatomic) BOOL refreshing;
@property (copy) NSString *refreshingToken;
@property (weak, nonatomic) id<TIMXOPagingConversationsChangeObserver> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setArrInboxType:(id)arg0;
- (BOOL)includeEmptyConversation;
- (void)setIncludeEmptyConversation:(BOOL)arg0;
- (void)onMessagesCreated:(id)arg0 belongingConversationMap:(id)arg1 reason:(id)arg2;
- (void)onMessagesDeleted:(id)arg0 belongingConversationMap:(id)arg1;
- (void)onConversationsCreated:(id)arg0;
- (void)onConversationsUpdated:(id)arg0;
- (void)onConversationsDeleted:(id)arg0;
- (void)onConversationCleared:(id)arg0;
- (void)setFilterResultCache:(id)arg0;
- (void)setRefreshingToken:(id)arg0;
- (id)refreshingToken;
- (id)arrInboxType;
- (id)filterResultCache;
- (void)invalidConversationFilterResult:(id)arg0;
- (void)dealWithUpdate:(id)arg0;
- (id)initWithRootObject:(id)arg0 filter:(id /* block */)arg1 includeEmpty:(BOOL)arg2 inbox:(id)arg3;
- (id)conversationByPageNumbers:(long long)arg0 pageIndex:(long long)arg1;
- (void)asyncGetUnreadCountWithInboxes:(id)arg0 handler:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)setDb:(id)arg0;
- (id)db;
- (void).cxx_destruct;
- (id /* block */)filterBlock;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (BOOL)needsRefresh;
- (BOOL)refreshing;
- (void)setRefreshing:(BOOL)arg0;
- (id)currentConversations;
- (void)setCurrentConversations:(id)arg0;
- (void)setFilterBlock:(id /* block */)arg0;
- (void)setNeedsRefresh:(BOOL)arg0;
- (id)refreshTimer;
- (void)setRefreshTimer:(id)arg0;

@end
