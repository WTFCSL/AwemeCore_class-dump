//
//     Generated by private class-dump
//

@class TIMXPBResponseLongConnectionCallback, TIMXStrangerConversationModel, NSArray, NSString, NSMutableDictionary, NSMutableArray, NSObject, TIMXThreadSafeMutableDictionary, TIMXSDKInstance;
@protocol TIMXMessageStoreProtocol, OS_dispatch_queue, TIMXStrangerConversationFetcherProtocolDelegate;

@interface TIMXStrangerConversationsFetcher : NSObject <TIMXMessageStoreChangesObserver, TIMXNotifierDelegate, TIMXInstanceScopeAlwaysNewDIComponent, TIMXStrangerConversationFetcherProtocol> {
    BOOL _hasMore;
    BOOL _fetching;
    BOOL _isInStrangerList;
    BOOL _allNotBottomConvHasBeenLoaded;
    BOOL _isStrangerListFirstLoad;
    int _inbox;
    int _count;
    long long _unreadCount;
    id<TIMXStrangerConversationFetcherProtocolDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    TIMXSDKInstance *_r;
    NSMutableArray *_currentConversations;
    TIMXStrangerConversationModel *_currentMixHighWeightConv;
    TIMXStrangerConversationModel *_currentHighWeightConv;
    TIMXStrangerConversationModel *_currentHighUpdateDateConv;
    NSMutableDictionary *_currentConversationsDict;
    long long _cursor;
    id<TIMXMessageStoreProtocol> _db;
    TIMXPBResponseLongConnectionCallback *_callback;
    TIMXThreadSafeMutableDictionary *_p_sharedMessagesInConversation;
}

@property (nonatomic) BOOL fetching;
@property (retain) NSMutableArray *currentConversations;
@property (retain) TIMXStrangerConversationModel *currentMixHighWeightConv;
@property (retain) TIMXStrangerConversationModel *currentHighWeightConv;
@property (retain) TIMXStrangerConversationModel *currentHighUpdateDateConv;
@property (retain) NSMutableDictionary *currentConversationsDict;
@property (nonatomic) long long cursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) int count;
@property (retain, nonatomic) id<TIMXMessageStoreProtocol> db;
@property long long unreadCount;
@property (nonatomic) int inbox;
@property (retain, nonatomic) TIMXPBResponseLongConnectionCallback *callback;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic) BOOL isInStrangerList;
@property (nonatomic) BOOL allNotBottomConvHasBeenLoaded;
@property (nonatomic) BOOL isStrangerListFirstLoad;
@property (readonly, weak, nonatomic) TIMXThreadSafeMutableDictionary *p_sharedMessagesInConversation;
@property (readonly, copy) NSArray *currentStrangerConversations;
@property (weak, nonatomic) id<TIMXStrangerConversationFetcherProtocolDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onStrangerConversationChange:(id)arg0 isNewPositive:(BOOL)arg1;
- (void)markAllConversationReadWithCompletion:(id /* block */)arg0;
- (void)applyReferMessageKVForMessages:(id)arg0;
- (void)deleteConversation:(id)arg0 completion:(id /* block */)arg1;
- (void)onStrangerMessageRealTimeUpdated:(id)arg0;
- (void)onStrangerConversationRealTimeUpdated:(id)arg0;
- (void)onStrangerConversationRealTimeUpdated:(id)arg0 withReason:(long long)arg1;
- (void)onStrangerConversationRealTimeDeleted:(id)arg0;
- (void)fetchNextPageWithBizInfo:(id)arg0 completion:(id /* block */)arg1;
- (void)loadRemedialyStrangerConversationsWithBizInfo:(id)arg0 completion:(id /* block */)arg1;
- (void)markConversationAsRead:(id)arg0 completion:(id /* block */)arg1;
- (void)fetchMessagesInConversation:(id)arg0 completion:(id /* block */)arg1;
- (void)deleteMessage:(long long)arg0 inConversation:(id)arg1 sendToServer:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)deleteMessageNew:(id)arg0 inConversation:(id)arg1 sendToServer:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)strangerConversationCountAfterDate:(id)arg0 completion:(id /* block */)arg1;
- (void)strangerMessageCountAfterDate:(id)arg0 completion:(id /* block */)arg1;
- (id)getStrangerBizInfo;
- (void)deleteAllConversationWithCompletion:(id /* block */)arg0;
- (void)loadNewestNoTrashStrangerConvWithCompletion:(id /* block */)arg0;
- (int)getCurrentStrangerBoxOptType;
- (BOOL)enableTrashTest;
- (void)pullOfflineStrangerMessageManuallyWithIsFirstLoad:(BOOL)arg0 completion:(id /* block */)arg1;
- (id)initWithRootObject:(id)arg0 inbox:(int)arg1 countPerPage:(int)arg2 isInStrangerList:(BOOL)arg3 callbackQueue:(id)arg4;
- (void)fetchFirstPageAndReorderWithCompletion:(id /* block */)arg0;
- (void)markConversationAsReadWithShortID:(long long)arg0 completion:(id /* block */)arg1;
- (id)getHighWeightStrangerConversationWithCons:(id)arg0;
- (int)getCurrentStrangerMessagesOptStyle;
- (id)currentStrangerConversations;
- (BOOL)isTrashStrangerConversationWithStrangerModel:(id)arg0;
- (void)setIsInStrangerList:(BOOL)arg0;
- (void)setIsStrangerListFirstLoad:(BOOL)arg0;
- (void)setCurrentConversationsDict:(id)arg0;
- (BOOL)isInStrangerList;
- (id)currentConversationsDict;
- (void)applyUpdateConversationIdentifiers:(id)arg0 reason:(long long)arg1;
- (void)applyNewResult:(id)arg0 updateConversationIdentifiers:(id)arg1 reason:(long long)arg2;
- (void)appendConversations:(id)arg0;
- (void)fetchLatesetStrangerConversationFromDBWithNotify:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)p_loadRemedialyStrangerConversationsPriorityUseDBWithBizInfo:(id)arg0 completion:(id /* block */)arg1;
- (BOOL)isStrangerListFirstLoad;
- (BOOL)allNotBottomConvHasBeenLoaded;
- (void)setAllNotBottomConvHasBeenLoaded:(BOOL)arg0;
- (long long)__getMinVersionOfCurrentConvs;
- (id)loadStrangersFromDBWithVersion:(long long)arg0 shouldContainBoundaryStranger:(BOOL)arg1;
- (id)__filterLoadedStrangerConvs:(id)arg0;
- (id)__convertStrangerConvsModel:(id)arg0;
- (void)__appendConversationsOrderedByStrangerVersion:(id)arg0;
- (void)__logLoadingStrangerConvs:(id)arg0 withTag:(id)arg1;
- (void)p_async_on_db_shared_read_queue:(id /* block */)arg0;
- (void)p_checkStrangersContinousAndLoadCompleteStrangersWithStrangerConvs:(id)arg0 version:(long long)arg1 updatedAt:(id)arg2 bizInfo:(id)arg3 isFirstLoad:(BOOL)arg4 completion:(id /* block */)arg5;
- (id)loadStrangersFromDBWithUpdatedAt:(id)arg0;
- (BOOL)checkContinousInStrangerConversationRangeWithMinVersion:(long long)arg0 maxVersion:(long long)arg1 emptyMinVersion:(long long *)arg2 emptyMaxVersion:(long long *)arg3;
- (void)p_insertNewConv:(id)arg0;
- (void)toNotifyCurrentHighWeightAndUpdateConversation;
- (id)currentHighWeightConv;
- (void)setCurrentHighWeightConv:(id)arg0;
- (void)setCurrentMixHighWeightConv:(id)arg0;
- (void)clearConvUnreadCountWithConvID:(id)arg0;
- (void)p_reloadConv:(id)arg0;
- (void)p_async_on_db_shared_writable_queue:(id /* block */)arg0;
- (void)batchClearAllStrangerConversationUnreadCount;
- (id)currentMixHighWeightConv;
- (void)clearHighWeightAndUpdateStrangerConversationWithCid:(id)arg0;
- (id)currentHighUpdateDateConv;
- (void)setCurrentHighUpdateDateConv:(id)arg0;
- (void)clearAllHighWeightConversation;
- (id)p_sharedMessagesInConversation;
- (void)p_deleteDbMessage:(long long)arg0 inConversation:(id)arg1 withConversationID:(id)arg2 completion:(id /* block */)arg3;
- (void)p_onStrangersRealTimeUpdated:(id)arg0 withReason:(long long)arg1;
- (id)getFirstNotTrashStrangerConversation:(id)arg0;
- (BOOL)enableFilterHighWeightStrangerConversations;
- (long long)allStrangerUnreadCount;
- (id)checkHasStrangerListsIfHasTrash;
- (void)p_moveToNewIndexWithConv:(id)arg0 oldIndex:(long long)arg1;
- (BOOL)enableUseStrangerConversationOpt;
- (BOOL)isTrashStrangerConversation:(id)arg0 dbCon:(id)arg1;
- (BOOL)enableFilterStrangerWeightModel:(id)arg0;
- (void)checkCurrentHighWeightConsIsTrashOrBottom;
- (void)getHighWeightConWithTmpHighWeightCon:(id *)arg0 tmpHighUpdateDateCon:(id *)arg1 withCurrentCon:(id)arg2;
- (id)compareAndFindHighWeightStrangerConversation:(id)arg0;
- (id)compareAndFindHighUpdateDateStrangerConversation:(id)arg0;
- (id)compareAndFindNewestHighWeightStrangerConversation:(id)arg0;
- (id)analysisExt:(id)arg0;
- (void)overwriteCurrentHighWeightConvWithCurrentConv:(id)arg0;
- (BOOL)enableFilterStrangerWeightModelForStrangerBoxOptTwo:(id)arg0;
- (BOOL)enableFilterStrangerWeightModelForStrangerBoxOptOne:(id)arg0;
- (BOOL)isLessThenThreeDaysWithStrangerModel:(id)arg0;
- (BOOL)isGreaterThanLatestEnterStrangerBoxTimeWithStrangerModel:(id)arg0;
- (long long)p_locationOfStrangerConv:(id)arg0;
- (void)didLogOut;
- (void)pullOfflineStrangerConversationsWithCompletion:(id /* block */)arg0;
- (void)setCount:(int)arg0;
- (long long)cursor;
- (void)setDb:(id)arg0;
- (id)callbackQueue;
- (id)db;
- (void)setCallbackQueue:(id)arg0;
- (void).cxx_destruct;
- (void)setCallback:(id)arg0;
- (id)conversationWithIdentifier:(id)arg0;
- (id)callback;
- (void)setUnreadCount:(long long)arg0;
- (id)delegate;
- (int)count;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (void)setDelegate:(id)arg0;
- (long long)unreadCount;
- (void)dealloc;
- (void)setCursor:(long long)arg0;
- (id)currentConversations;
- (void)setCurrentConversations:(id)arg0;
- (int)inbox;
- (BOOL)fetching;
- (void)setFetching:(BOOL)arg0;
- (id)initWithRootObject:(id)arg0;
- (void)setInbox:(int)arg0;

@end
