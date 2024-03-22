//
//     Generated by private class-dump
//

@class HTSEventContext, NSString, HTSLiveMessageListFilter, IESLiveIMMessageDecoderAdapter, HTSLiveApi, NSDictionary, HTSLiveMessageListNode, IESLivePSComponentConfigModel, IESLiveComponentContext;
@protocol IESLiveMessageListMonitorService, IESLiveMIFullLinkIndexMonitor, IESLivePublicScreenNodeManagerProtocol, IESLiveRoomServiceAdapter, HTSLiveMessageListReactions;

@interface IESLiveMessageListStore : NSObject <HTSLiveMessageListActions, HTSLiveMessageSubscriber, IESVSMessageSubscriber, HTSLiveFeedScrollActions, IESLiveMessageInteractionModuleCommentAction, IESLiveRoomWatchTimeDelegate, IESLivePublicScreenNodeManagerDelegate, IESLiveDataSyncDelegate, IESLiveMessageInteractionStrategyResultSubscriber, IESLiveMessageListStoreProtocol, IESLivePublicScreenAttachSubjectProtocol> {
    BOOL _usePinManager;
    BOOL _hideMessageListView;
    BOOL _disableAnimation;
    BOOL _reachLowMemmoryThreshold;
    BOOL _feedGesScrolling;
    BOOL _messageListEnableSlide;
    BOOL _loadMoreMessageTipShow;
    BOOL _enableFirstFetchHistoryMessage;
    BOOL _enableLoadMoreHistoryMessage;
    BOOL _enableUpdateDataSource;
    BOOL _didStopRefresh;
    BOOL _hasFakedEnterMessage;
    BOOL _hasFakedLikeMessage;
    BOOL _isCommentIntercom;
    BOOL _abEnableFirstPatchHistoryUseSelfApi;
    BOOL _isFirstPatchHistoryMessage;
    BOOL _didSeeMoreMessageTipShowBefore;
    BOOL _noMoreHistoryMessage;
    BOOL _didUpdateHistoryMessageWhenFirstFetch;
    BOOL _dynamicLoadMoreHistoryMessageOpened;
    BOOL _isFirstDataCommit;
    BOOL _enableFloat;
    id<IESLivePublicScreenNodeManagerProtocol> _nodeManager;
    id<HTSLiveMessageListReactions> _reactions;
    id<IESLiveRoomServiceAdapter> _room;
    IESLiveComponentContext *_componentContext;
    HTSEventContext *_eventContext;
    HTSLiveMessageListNode *_stickToBottomNode;
    HTSLiveMessageListNode *_pinnedNode;
    long long _unreadMessageCount;
    long long _orientation;
    double _intercomDuration;
    HTSLiveMessageListFilter *_messageFilter;
    long long _scene;
    HTSLiveApi *_clientApi;
    IESLiveIMMessageDecoderAdapter *_messageDecoder;
    double _intercomTimeStamp;
    double _lastMessageListWidth;
    double _firstPatchHistoryRequestTimeout;
    double _firstPatchHistoryMessageFetchTime;
    NSString *_nextLoadMoreHistoryMessageCursor;
    NSDictionary *_dynamicLoadMoreHistoryStrategy;
    long long _numberOfLoadMoreHistoryMessage;
    IESLivePSComponentConfigModel *_riskAdviseModel;
    double _floatDurationForHot;
    double _floatDurationForCold;
    long long _floatHeatThreshold;
    id<IESLiveMIFullLinkIndexMonitor> _fullLinkIndexMonitor;
    id<IESLiveMessageListMonitorService> _monitor;
}

@property (retain, nonatomic) HTSLiveMessageListFilter *messageFilter;
@property (nonatomic) BOOL enableUpdateDataSource;
@property (nonatomic) long long unreadMessageCount;
@property (nonatomic) BOOL hideMessageListView;
@property (retain, nonatomic) id<IESLiveRoomServiceAdapter> room;
@property (nonatomic) long long scene;
@property (nonatomic) BOOL didStopRefresh;
@property (retain, nonatomic) HTSLiveApi *clientApi;
@property (retain, nonatomic) IESLiveIMMessageDecoderAdapter *messageDecoder;
@property (nonatomic) BOOL feedGesScrolling;
@property (nonatomic) BOOL hasFakedEnterMessage;
@property (nonatomic) BOOL hasFakedLikeMessage;
@property (nonatomic) BOOL isCommentIntercom;
@property (nonatomic) double intercomTimeStamp;
@property (nonatomic) double intercomDuration;
@property (nonatomic) double lastMessageListWidth;
@property (nonatomic) BOOL abEnableFirstPatchHistoryUseSelfApi;
@property (nonatomic) double firstPatchHistoryRequestTimeout;
@property (nonatomic) double firstPatchHistoryMessageFetchTime;
@property (nonatomic) BOOL isFirstPatchHistoryMessage;
@property (nonatomic) BOOL enableFirstFetchHistoryMessage;
@property (nonatomic) BOOL enableLoadMoreHistoryMessage;
@property (nonatomic) BOOL loadMoreMessageTipShow;
@property (nonatomic) BOOL didSeeMoreMessageTipShowBefore;
@property (copy, nonatomic) NSString *nextLoadMoreHistoryMessageCursor;
@property (nonatomic) BOOL noMoreHistoryMessage;
@property (nonatomic) BOOL didUpdateHistoryMessageWhenFirstFetch;
@property (nonatomic) BOOL dynamicLoadMoreHistoryMessageOpened;
@property (retain, nonatomic) NSDictionary *dynamicLoadMoreHistoryStrategy;
@property (nonatomic) long long numberOfLoadMoreHistoryMessage;
@property (nonatomic) BOOL isFirstDataCommit;
@property (retain, nonatomic) IESLivePSComponentConfigModel *riskAdviseModel;
@property (nonatomic) BOOL enableFloat;
@property (nonatomic) double floatDurationForHot;
@property (nonatomic) double floatDurationForCold;
@property (nonatomic) long long floatHeatThreshold;
@property (retain, nonatomic) id<IESLiveMIFullLinkIndexMonitor> fullLinkIndexMonitor;
@property (retain, nonatomic) id<IESLiveMessageListMonitorService> monitor;
@property (weak, nonatomic) id<HTSLiveMessageListReactions> reactions;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) HTSEventContext *eventContext;
@property (readonly, nonatomic) HTSLiveMessageListNode *stickToBottomNode;
@property (retain, nonatomic) HTSLiveMessageListNode *pinnedNode;
@property (nonatomic) BOOL usePinManager;
@property (nonatomic) BOOL disableAnimation;
@property (nonatomic) BOOL reachLowMemmoryThreshold;
@property (nonatomic) long long orientation;
@property (readonly, nonatomic) double currentListWidth;
@property (nonatomic) BOOL messageListEnableSlide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<IESLivePublicScreenNodeManagerProtocol> nodeManager;

- (id)componentContext;
- (void)setComponentContext:(id)arg0;
- (void)didMount;
- (void)feedCollectionViewWillBeginDragging:(id)arg0;
- (void)feedCollectionViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (void)feedCollectionViewDidEndDecelerating:(id)arg0;
- (void)feedCollectionViewScrollBack;
- (void)setEventContext:(id)arg0;
- (void)clearUnreadCount;
- (BOOL)convergedModule;
- (void)onStreamPause;
- (void)subscribedSyncDataWithValue:(id)arg0 version:(long long)arg1;
- (void)subscribedSyncDataUpdatedWithValue:(id)arg0 oldVersion:(long long)arg1 newVersion:(long long)arg2;
- (void)onStreamPlay;
- (id)clientApi;
- (void)setClientApi:(id)arg0;
- (id)messageFilter;
- (void)setMessageFilter:(id)arg0;
- (void)willUnmount;
- (void)didUpdateRoom:(id)arg0;
- (BOOL)hideMessageListView;
- (void)beautyPanelShow:(BOOL)arg0;
- (void)liveThermalStateSeriousNotification:(id)arg0;
- (void)dispatchMessage:(id)arg0 completion:(id /* block */)arg1;
- (void)enableUpdateDataSource:(BOOL)arg0 withReason:(id)arg1;
- (double)currentRefreshDuration;
- (long long)currentRefreshCount;
- (void)liveRoomWatchMinitTick:(unsigned long long)arg0;
- (void)messageReceived:(id)arg0 source:(id)arg1;
- (void)cleanMessageWithSeekByUser;
- (void)decision:(id)arg0 result:(id)arg1;
- (void)strategyResultChange:(long long)arg0 withStrategyKey:(id)arg1 withChangeReason:(id)arg2;
- (double)lastMessageListWidth;
- (void)updateMessageListWidth:(double)arg0;
- (void)setLastMessageListWidth:(double)arg0;
- (void)nodeManager:(id)arg0 didCommitData:(id)arg1;
- (void)setUnreadMessageCount:(long long)arg0;
- (id)nodeManager;
- (BOOL)didStopRefresh;
- (BOOL)enableUpdateDataSource;
- (void)detectedStrategyEventWith:(id)arg0 result:(long long)arg1;
- (BOOL)enableRoomDigg;
- (void)nativeGiftEndWith:(id)arg0;
- (id)initWith:(id)arg0 trackContext:(id)arg1 componentContext:(id)arg2;
- (void)setUsePinManager:(BOOL)arg0;
- (id)pinnedNode;
- (void)checkMessagelistHiddenStatus;
- (void)startRefreshMessageList;
- (void)refreshDegrade:(BOOL)arg0;
- (void)stopRefreshMessageList;
- (void)updateMessageListFontSize:(unsigned long long)arg0;
- (void)disableHostFontSizeScaleMode;
- (BOOL)loadMoreMessageTipShow;
- (void)resetLoadMoreMessageTipStatus;
- (BOOL)feedGesScrolling;
- (BOOL)messageListEnableSlide;
- (void)setMessageListEnableSlide:(BOOL)arg0;
- (BOOL)noMoreHistoryMessage;
- (void)reloadMessageListNode:(id)arg0;
- (BOOL)usePinManager;
- (void)setPinnedNode:(id)arg0;
- (void)setNoMoreHistoryMessage:(BOOL)arg0;
- (long long)getUnreadMessageCount;
- (double)intercomDuration;
- (void)clearMessageList;
- (BOOL)enableLoadMoreHistoryMessage;
- (void)showHistoryMessage:(id /* block */)arg0;
- (void)reportForRoomHeatState:(long long)arg0;
- (void)receivedMessageCountIn30Seconds:(long long)arg0;
- (void)liveRoomHeatChanged:(long long)arg0;
- (BOOL)abEnableFirstPatchHistoryUseSelfApi;
- (BOOL)nodeManager:(id)arg0 reloadSingleNode:(id)arg1;
- (BOOL)enableFirstFetchHistoryMessage;
- (void)setAbEnableFirstPatchHistoryUseSelfApi:(BOOL)arg0;
- (void)setEnableFirstFetchHistoryMessage:(BOOL)arg0;
- (id)historyMessageDynamicLoadStrategy;
- (void)checkMemoryUsageIfNeededWithCommitCount:(long long)arg0;
- (void)updateHistoryMessageConfigWithRoom:(id)arg0;
- (void)fetchNextPatchHistoryMessages;
- (void)notifyNodeManagerFirstBatchHistoryMessageArrived;
- (void)logFirstBatchHistoryMessageState:(id)arg0;
- (void)liveThermalStateCriticalNotification:(id)arg0;
- (void)updateUserPublicScreenInfoIfNeeded;
- (BOOL)dynamicLoadMoreHistoryMessageOpened;
- (void)setDidStopRefresh:(BOOL)arg0;
- (BOOL)isCommentIntercom;
- (double)intercomTimeStamp;
- (void)setIntercomDuration:(double)arg0;
- (void)fakeRoomMessageWhenRoomAuthChatChanged:(BOOL)arg0;
- (void)handleIntercomChangeSyncData:(id)arg0;
- (void)handleRiskAdvise:(id)arg0;
- (void)handlePlatformAdviseV2:(id)arg0;
- (void)p_filterMessage:(id)arg0;
- (void)fakeMemberMessage;
- (void)updateHistoryMessageWhenFirstFetch;
- (void)handleRoomVerifyMessage:(id)arg0;
- (BOOL)hasFakedLikeMessage;
- (void)setHasFakedLikeMessage:(BOOL)arg0;
- (void)fakeLikeMessage;
- (void)handleAudioChatMessage:(id)arg0;
- (void)_handleMessages:(id)arg0;
- (void)updatePublicScreenSpeedStrategyFactorWithMessageListWidth:(double)arg0;
- (void)reloadMessagesForFontSizeChange;
- (void)setEnableUpdateDataSource:(BOOL)arg0;
- (void)setNumberOfLoadMoreHistoryMessage:(long long)arg0;
- (long long)numberOfLoadMoreHistoryMessage;
- (BOOL)isFirstDataCommit;
- (void)setIsFirstDataCommit:(BOOL)arg0;
- (void)p_delayHideMessageListView;
- (void)countFullLinkSelfChatWithNodes:(id)arg0;
- (BOOL)enableFloat;
- (long long)floatHeatThreshold;
- (double)floatDurationForCold;
- (double)floatDurationForHot;
- (void)setHideMessageListView:(BOOL)arg0;
- (void)setEnableLoadMoreHistoryMessage:(BOOL)arg0;
- (void)setDynamicLoadMoreHistoryMessageOpened:(BOOL)arg0;
- (BOOL)didSeeMoreMessageTipShowBefore;
- (void)setLoadMoreMessageTipShow:(BOOL)arg0;
- (BOOL)didUpdateHistoryMessageWhenFirstFetch;
- (void)setNextLoadMoreHistoryMessageCursor:(id)arg0;
- (id)nextLoadMoreHistoryMessageCursor;
- (void)fetchNextLoadMoreMessages;
- (void)setDidUpdateHistoryMessageWhenFirstFetch:(BOOL)arg0;
- (void)setDidSeeMoreMessageTipShowBefore:(BOOL)arg0;
- (void)trackLoadMoreHistoryMessageShowWithCount:(long long)arg0;
- (BOOL)isFirstPatchHistoryMessage;
- (double)firstPatchHistoryMessageFetchTime;
- (double)firstPatchHistoryRequestTimeout;
- (id)messageDecoder;
- (id)handleFirstFetchHistoryMessage:(id)arg0;
- (void)handleLoadMoreHistorMessage:(id)arg0;
- (void)setFirstPatchHistoryMessageFetchTime:(double)arg0;
- (BOOL)isMyHistoryMessage:(id)arg0;
- (id)decideHistoryMessageType:(id)arg0;
- (void)setIsFirstPatchHistoryMessage:(BOOL)arg0;
- (id)riskAdviseModel;
- (void)loadImageForDisplayText:(id)arg0 completion:(id /* block */)arg1;
- (void)setRiskAdviseModel:(id)arg0;
- (BOOL)hasFakedEnterMessage;
- (void)setHasFakedEnterMessage:(BOOL)arg0;
- (void)setReachLowMemmoryThreshold:(BOOL)arg0;
- (BOOL)shouldUpdateUserInfo;
- (void)setIsCommentIntercom:(BOOL)arg0;
- (void)setIntercomTimeStamp:(double)arg0;
- (id)fullLinkIndexMonitor;
- (double)getCurrentListWidth;
- (BOOL)isDisableAnimation;
- (void)setNodeManager:(id)arg0;
- (void)p_removeMessageListNodes:(id)arg0;
- (double)currentListWidth;
- (void)dispatchRoomMessage;
- (id)stickToBottomNode;
- (BOOL)reachLowMemmoryThreshold;
- (void)setFeedGesScrolling:(BOOL)arg0;
- (void)setMessageDecoder:(id)arg0;
- (void)setFirstPatchHistoryRequestTimeout:(double)arg0;
- (id)dynamicLoadMoreHistoryStrategy;
- (void)setDynamicLoadMoreHistoryStrategy:(id)arg0;
- (void)setEnableFloat:(BOOL)arg0;
- (void)setFloatDurationForHot:(double)arg0;
- (void)setFloatDurationForCold:(double)arg0;
- (void)setFloatHeatThreshold:(long long)arg0;
- (void)setFullLinkIndexMonitor:(id)arg0;
- (void)setScene:(long long)arg0;
- (void).cxx_destruct;
- (id)monitor;
- (void)setMonitor:(id)arg0;
- (long long)orientation;
- (void)setup;
- (void)keyboardWillHide;
- (void)setOrientation:(long long)arg0;
- (id)eventContext;
- (void)keyboardWillShow;
- (void)dealloc;
- (long long)scene;
- (BOOL)disableAnimation;
- (id)room;
- (void)setRoom:(id)arg0;
- (void)messageReceived:(id)arg0;
- (long long)unreadMessageCount;
- (id)reactions;
- (void)setReactions:(id)arg0;
- (void)changeOrientation:(long long)arg0;
- (void)setDisableAnimation:(BOOL)arg0;

@end
