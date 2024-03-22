//
//     Generated by private class-dump
//

@class NSString, TIMXSDKInstance;
@protocol TIMXStrangerConversationFetcherProtocol, TIMXOStrangerExplicitDelegate;

@interface TIMXOStrangerExplicit : NSObject <IESIMSDKStrangerExplicit, TIMXStrangerConversationFetcherProtocolDelegate, TIMXOStrangerConversationDataSourceDelegate, TIMXInstanceScopeSingleton> {
    BOOL _enableOfflinePullerOptimize;
    BOOL _isFirstPullAfterWebSocketConnected;
    id<TIMXOStrangerExplicitDelegate> _delegate;
    TIMXSDKInstance *_r;
    id<TIMXStrangerConversationFetcherProtocol> _fetcher;
    double _lastPullTimestamp;
    double _pullInterval;
}

@property (readonly, nonatomic) unsigned long long unreadCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<TIMXStrangerConversationFetcherProtocol> fetcher;
@property (nonatomic) BOOL enableOfflinePullerOptimize;
@property (nonatomic) BOOL isFirstPullAfterWebSocketConnected;
@property (nonatomic) double lastPullTimestamp;
@property (nonatomic) double pullInterval;
@property (weak, nonatomic) id<TIMXOStrangerExplicitDelegate> delegate;
@property (readonly, nonatomic) unsigned long long unreadCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)__addObserver;
- (double)pullInterval;
- (void)strangerConversationDataSourceDidUpdate:(id)arg0 updateConversationIdentifiers:(id)arg1 reason:(long long)arg2;
- (id)analysisStrangerConversationWeightWithExt:(id)arg0 whiteList:(id)arg1;
- (BOOL)enableGetHighWeightStrangerConversationWhenFansCountEnable;
- (id)getStrangerBizInfo;
- (id)fetchLatestEnterStrangerBoxTime;
- (void)fetchStrangerInboxWithCompletion:(id /* block */)arg0;
- (void)pullOfflineStrangerMessageManuallyyWithIsFirstLoad:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)deleteAllConversationWithCompletion:(id /* block */)arg0;
- (void)loadNewestNoTrashStrangerConvWithCompletion:(id /* block */)arg0;
- (void)strangerConversationFetcherDidUpdate:(id)arg0 updateConversationIdentifiers:(id)arg1 reason:(long long)arg2;
- (void)strangerConversationFetcher:(id)arg0 didRefetchFirstPageWithBatch:(id)arg1;
- (void)strangerConversationFetcher:(id)arg0 didRefetchFirstPageWithBatch:(id)arg1 realTimeUpdatedTrashConvIds:(id)arg2 reason:(long long)arg3;
- (void)strangerConversationFetcher:(id)arg0 didRefreshHighUpdateConversation:(id)arg1;
- (void)strangerConversationFetcher:(id)arg0 didRefreshHighWeightConversation:(id)arg1;
- (void)p_replaceInnerFetcherWithInbox:(int)arg0;
- (void)resetStrangerPullerFlag:(id)arg0;
- (BOOL)enableOfflinePullerOptimize;
- (double)lastPullTimestamp;
- (BOOL)isFirstPullAfterWebSocketConnected;
- (void)setIsFirstPullAfterWebSocketConnected:(BOOL)arg0;
- (void)setLastPullTimestamp:(double)arg0;
- (void)p_dropDelegateIfNecessary;
- (id)getNewestStrangerConvWithDataSource:(id)arg0;
- (id)getFirstWeightStrangerConvWithDataSource:(id)arg0;
- (id)getNewestStrangerConvWithoutOrderWithDataSource:(id)arg0;
- (BOOL)isTrashStrangerConversationWithStrangerModel:(id)arg0;
- (void)setEnableOfflinePullerOptimize:(BOOL)arg0;
- (void)setPullInterval:(double)arg0;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (unsigned long long)unreadCount;
- (void)dealloc;
- (id)fetcher;
- (void)setFetcher:(id)arg0;
- (id)initWithRootObject:(id)arg0;

@end
