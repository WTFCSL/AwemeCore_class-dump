//
//     Generated by private class-dump
//

@class NSString, TIMXPBResponseLongConnectionCallback, TIMXSimplePullerStatusObserver, TIMXMulticastDelegate, NSDictionary, TIMXOfflineConversationPollingPullerManager, TIMXGCDTimer, TIMXSDKInstance;

@interface TIMXMessagePuller : NSObject <IESIMDBRebuildPuller, TIMXStartUpTaskProtocol, TIMXHistoryMessagePullerProtocol, TIMXPullerStatusObserver, TIMXMessagePullerProtocol, TIMXNewMessageNotifyProtocol, TIMXAckMessagesProtocol, TIMXInstanceScopeSingleton> {
    BOOL _checkingInbox;
    BOOL _needResetInitPullerBeforeKickoff;
    TIMXSDKInstance *_r;
    TIMXPBResponseLongConnectionCallback *_longConnectCallback;
    NSDictionary *_inboxPullerGroups;
    TIMXMulticastDelegate *_observerMulticast;
    TIMXSimplePullerStatusObserver *_statusObserver;
    TIMXGCDTimer *_pullTimer;
    long long _lastPullReason;
    TIMXOfflineConversationPollingPullerManager *_offlineConvPollingPullerManager;
    TIMXGCDTimer *_wsStatusTimer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) TIMXPBResponseLongConnectionCallback *longConnectCallback;
@property (retain) NSDictionary *inboxPullerGroups;
@property (retain, nonatomic) TIMXMulticastDelegate *observerMulticast;
@property (retain, nonatomic) TIMXSimplePullerStatusObserver *statusObserver;
@property (retain, nonatomic) TIMXGCDTimer *pullTimer;
@property BOOL checkingInbox;
@property long long lastPullReason;
@property BOOL needResetInitPullerBeforeKickoff;
@property (retain, nonatomic) TIMXOfflineConversationPollingPullerManager *offlineConvPollingPullerManager;
@property (retain) TIMXGCDTimer *wsStatusTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)startUpOrder;
+ (void)startUpWithRootObject:(id)arg0;

- (void)setNeedPullMessageInInboxType:(int)arg0;
- (BOOL)couldUseNewPullerRefactor:(id)arg0;
- (void)removeObserverWithIdentifier:(id)arg0;
- (id)addWeakChangesObserver:(id)arg0 onQueue:(id)arg1;
- (long long)currentStatusForInbox:(int)arg0;
- (void)userDidLogin:(id)arg0;
- (void)userDidLogout:(id)arg0;
- (void)appEnterForeground:(id)arg0;
- (void)tokenChanged:(id)arg0;
- (id)pullTimer;
- (void)setPullTimer:(id)arg0;
- (void)loadOlderMsgesRemedialyFromConversationId:(id)arg0 anchorMsgId:(id)arg1 msgesCount:(long long)arg2 priorityUseDB:(BOOL)arg3 forcePullRemote:(BOOL)arg4 currentMinIndexV2:(long long)arg5 currentMaxIndexV2:(long long)arg6 completionBlock:(id /* block */)arg7;
- (void)remoteLoadMessagesBetweenMinIndexV2:(long long)arg0 maxIndexV2:(long long)arg1 direction:(unsigned long long)arg2 inConversation:(id)arg3 completionBlock:(id /* block */)arg4;
- (BOOL)checkContinousInRangeWithMinIndexV2:(long long)arg0 maxIndexV2:(long long)arg1 inConversation:(id)arg2 emptyRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)arg3 includeRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)arg4;
- (void)fetchAllMessagesFromConversationIdentifier:(id)arg0 minIndexV2:(long long)arg1 maxIndexV2:(long long)arg2 shouldCancelBlock:(id /* block */)arg3 completion:(id /* block */)arg4;
- (id)observerMulticast;
- (BOOL)checkContinousInRangeWithMinIndexV1:(long long)arg0 maxIndexV1:(long long)arg1 inConversation:(id)arg2;
- (void)getMessagesCheckInfoInInbox:(int)arg0 conversationShortId:(long long)arg1 conversationId:(id)arg2 conversationType:(int)arg3 cursorReverseBegin:(long long)arg4 cursorReverseEnd:(long long)arg5 expectMsgTotalCount:(int)arg6 completionBlock:(id /* block */)arg7;
- (void)fetchMessagesForConversation:(id)arg0 completionBlock:(id /* block */)arg1;
- (void)getMessageByServerMessageID:(long long)arg0 conversationShortId:(long long)arg1 conversationId:(id)arg2 conversationType:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)responseServerLongConnectACK:(id)arg0;
- (void)setLongConnectCallback:(id)arg0;
- (id)longConnectCallback;
- (void)setObserverMulticast:(id)arg0;
- (id)inboxPullerGroups;
- (void)setInboxPullerGroups:(id)arg0;
- (void)wsStateChangedToConnected:(id)arg0;
- (void)checkInboxStatusWithReason:(long long)arg0;
- (id)wsStatusTimer;
- (void)setWsStatusTimer:(id)arg0;
- (void)wsStatusTimerFired:(id)arg0;
- (id)_conversationFromDBWithID:(id)arg0;
- (void)setLastPullReason:(long long)arg0;
- (void)pullFired:(id)arg0;
- (BOOL)checkingInbox;
- (void)setCheckingInbox:(BOOL)arg0;
- (void)retryCheckInbox;
- (long long)lastPullReason;
- (void)batchAckMessagesLongConnectionWithArrPbMessage:(id)arg0 response:(id)arg1;
- (void)batchAckMessagesRequestWithReportType:(int)arg0 arrPbMessage:(id)arg1 response:(id)arg2;
- (void)batchAckMessagesShowWithArrDbMessage:(id)arg0;
- (void)kickoffPullerInInboxType:(int)arg0 needResetInitPuller:(BOOL)arg1;
- (void)checkDatabaseValidWithLastConversationCountAtLogout:(long long)arg0 currentConversationCount:(long long)arg1;
- (void)continueFetchPullInInboxType:(int)arg0 completion:(id /* block */)arg1;
- (BOOL)hasFinishInitAllConversations:(int)arg0;
- (void)resetForRebuildMessageDB;
- (void)resetForRecoverMessageDB;
- (BOOL)hasInitSucessWithInbox:(int)arg0;
- (BOOL)hasInitOverWithInbox:(int)arg0;
- (void)fetchAllRebuildedMessagesWithInbox:(int)arg0 isFromBackup:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)cancelPullingAllMessagesWithInbox:(int)arg0;
- (void)clearAllfailedRebuildConvs;
- (void)clearAllLiveConsultFailedRebuildConvs;
- (void)fetchSpecifiedMessageWithConversationID:(id)arg0 ConversationShortID:(long long)arg1 specifiedMessageListType:(unsigned long long)arg2 offset:(long long)arg3 pageLimit:(unsigned long long)arg4 completionBlock:(id /* block */)arg5;
- (void)fetchMarkMessagesWithConversationID:(id)arg0 offset:(long long)arg1 limit:(unsigned long long)arg2 ascending:(BOOL)arg3 actionType:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (void)loadHistoryForConversationId:(id)arg0 beforeMessage:(id)arg1 visibleLimit:(unsigned long long)arg2 inRange:(id)arg3 skipRanges:(id)arg4 completionBlock:(id /* block */)arg5;
- (void)loadHistoryForConversationId:(id)arg0 beforeMessage:(id)arg1 limit:(unsigned long long)arg2 includeInvisable:(BOOL)arg3 completionBlock:(id /* block */)arg4;
- (void)loadHistoryForConversationId:(id)arg0 beforeIndex:(long long)arg1 totalCount:(unsigned long long)arg2 completionBlock:(id /* block */)arg3;
- (void)loadMessagesForConversationId:(id)arg0 anchorMessage:(id)arg1 visibleLimit:(unsigned long long)arg2 direction:(unsigned long long)arg3 shouldContainBoundaryMessage:(BOOL)arg4 completionBlock:(id /* block */)arg5;
- (void)loadHistoryRemedialyForConversationId:(id)arg0 beforeMessage:(id)arg1 visibleLimit:(unsigned long long)arg2 priorityUseDB:(BOOL)arg3 completionBlock:(id /* block */)arg4;
- (void)loadHistoryRemedialyForConversationId:(id)arg0 beforeMessage:(id)arg1 visibleLimit:(unsigned long long)arg2 priorityUseDB:(BOOL)arg3 forcePullRemote:(BOOL)arg4 completionBlock:(id /* block */)arg5;
- (void)loadHistoryMessagesFromConversation:(id)arg0 anchorMsgId:(id)arg1 direction:(unsigned long long)arg2 limit:(long long)arg3 completionBlock:(id /* block */)arg4;
- (void)loadHistoryMessagesFromConversationV2:(id)arg0 inbox:(long long)arg1 anchorMsgId:(id)arg2 direction:(unsigned long long)arg3 limit:(long long)arg4 completionBlock:(id /* block */)arg5;
- (void)loadNewerMsgesRemedialyFromConversationId:(id)arg0 anchorMsgId:(id)arg1 msgesCount:(long long)arg2 currentMinIndexV2:(long long)arg3 currentMaxIndexV2:(long long)arg4 shouldContainBoundaryMessage:(BOOL)arg5 completionBlock:(id /* block */)arg6;
- (void)getMessagesCheckInfoInInbox:(int)arg0 conversationShortId:(long long)arg1 conversationId:(id)arg2 conversationType:(int)arg3 minIndexV2:(long long)arg4 maxIndexV2:(long long)arg5 completionBlock:(id /* block */)arg6;
- (void)loadNewerRemedialyForConversation:(id)arg0 afterMessage:(id)arg1 visibleLimit:(unsigned long long)arg2 shouldContainBoundaryMessage:(BOOL)arg3 completionBlock:(id /* block */)arg4;
- (void)loadNewerRemoteMessageForConversation:(id)arg0 afterIndex:(long long)arg1 inRange:(id)arg2 completionBlock:(id /* block */)arg3;
- (int)enableUserChainBoxType;
- (void)setNeedResetInitPullerBeforeKickoff:(BOOL)arg0;
- (BOOL)needResetInitPullerBeforeKickoff;
- (id)offlineConvPollingPullerManager;
- (id)_pullerWithConversation:(id)arg0;
- (void)notifyNewMessage:(id)arg0 inInboxType:(int)arg1;
- (id)_pullerWithConversationID:(id)arg0;
- (void)setOfflineConvPollingPullerManager:(id)arg0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithRootObject:(id)arg0;
- (id)statusObserver;
- (void)setStatusObserver:(id)arg0;

@end
