//
//     Generated by private class-dump
//

@class IESLiveMessageListHeatConfig, IESLiveMessageListValueStrategyConfig, IESLivePublicScreenSEIDelayCalculator, IESLiveGCDTimer, NSMutableSet, NSMutableArray, IESLiveMessageListValuePriorityQueue;
@protocol IESLiveMessageListMonitorService;

@interface IESLiveMessageListValueNodeManager : IESLiveMessageListNodeManager {
    BOOL _hasUsedCommentCount;
    BOOL _enableChatAlignStream;
    id<IESLiveMessageListMonitorService> _messageListMonitor;
    NSMutableArray *_systemMessageBuffer;
    IESLiveMessageListValuePriorityQueue *_commentMessagePriorityQueue;
    IESLiveMessageListValuePriorityQueue *_businessMessagePriorityQueue;
    IESLiveMessageListValuePriorityQueue *_basicMessagePriorityQueue;
    NSMutableArray *_refreshMessageConsumeBuffer;
    NSMutableArray *_foldMessageConsumeBuffer;
    NSMutableArray *_systemMessageNodeBuffer;
    IESLiveMessageListValuePriorityQueue *_commentMessageNodePriorityQueue;
    IESLiveMessageListValuePriorityQueue *_businessMessageNodePriorityQueue;
    IESLiveMessageListValuePriorityQueue *_basicMessageNodePriorityQueue;
    NSMutableArray *_refreshMessageNodeConsumeBuffer;
    NSMutableArray *_foldMessageNodeConsumeBuffer;
    IESLiveGCDTimer *_heatTimer;
    unsigned long long _realMessageListHeat;
    IESLiveMessageListHeatConfig *_heatConfig;
    long long _middleHeatCount;
    long long _highHeatCount;
    long long _lowHeatCount;
    long long _receivedCommentCountInCountDuration;
    long long _receivedCommentCountInJudgeDuration;
    NSMutableArray *_receivedCommentCountArray;
    NSMutableSet *_blocklist;
    IESLiveMessageListValueStrategyConfig *_ratioConfig;
    IESLivePublicScreenSEIDelayCalculator *_seiDelayCalculator;
    double _anchorMsgDisplayDelayTime;
    double _commentDelayMaxTime;
    long long _enableAlignSEIReceivedCount;
    double _calculateOffset;
}

@property (retain, nonatomic) NSMutableArray *systemMessageBuffer;
@property (retain, nonatomic) IESLiveMessageListValuePriorityQueue *commentMessagePriorityQueue;
@property (retain, nonatomic) IESLiveMessageListValuePriorityQueue *businessMessagePriorityQueue;
@property (retain, nonatomic) IESLiveMessageListValuePriorityQueue *basicMessagePriorityQueue;
@property (retain, nonatomic) NSMutableArray *refreshMessageConsumeBuffer;
@property (retain, nonatomic) NSMutableArray *foldMessageConsumeBuffer;
@property (retain, nonatomic) NSMutableArray *systemMessageNodeBuffer;
@property (retain, nonatomic) IESLiveMessageListValuePriorityQueue *commentMessageNodePriorityQueue;
@property (retain, nonatomic) IESLiveMessageListValuePriorityQueue *businessMessageNodePriorityQueue;
@property (retain, nonatomic) IESLiveMessageListValuePriorityQueue *basicMessageNodePriorityQueue;
@property (retain, nonatomic) NSMutableArray *refreshMessageNodeConsumeBuffer;
@property (retain, nonatomic) NSMutableArray *foldMessageNodeConsumeBuffer;
@property (retain, nonatomic) IESLiveGCDTimer *heatTimer;
@property (nonatomic) unsigned long long realMessageListHeat;
@property (retain, nonatomic) IESLiveMessageListHeatConfig *heatConfig;
@property (nonatomic) BOOL hasUsedCommentCount;
@property (nonatomic) long long middleHeatCount;
@property (nonatomic) long long highHeatCount;
@property (nonatomic) long long lowHeatCount;
@property (nonatomic) long long receivedCommentCountInCountDuration;
@property (nonatomic) long long receivedCommentCountInJudgeDuration;
@property (retain, nonatomic) NSMutableArray *receivedCommentCountArray;
@property (retain, nonatomic) NSMutableSet *blocklist;
@property (retain, nonatomic) IESLiveMessageListValueStrategyConfig *ratioConfig;
@property (nonatomic) BOOL enableChatAlignStream;
@property (retain, nonatomic) IESLivePublicScreenSEIDelayCalculator *seiDelayCalculator;
@property (nonatomic) double anchorMsgDisplayDelayTime;
@property (nonatomic) double commentDelayMaxTime;
@property (nonatomic) long long enableAlignSEIReceivedCount;
@property (nonatomic) double calculateOffset;

- (id)refreshMessageNodeBuffer;
- (id)refreshMessagesBuffer;
- (void)addMessageToBuffer:(id)arg0;
- (BOOL)isSendByCurrentUser:(id)arg0;
- (id)initWithRoom:(id)arg0 refreshConfig:(id)arg1;
- (void)removeAllBuffer;
- (void)roomUpdated:(id)arg0;
- (double)calculateOffset;
- (id)foldMessageNodeBuffer;
- (id)foldMessagesBuffer;
- (id)p_consumeNodesFromNodeBuffer:(id)arg0;
- (id)messageListMonitor;
- (BOOL)p_deleteMessageFromBufferWithMessageId:(id)arg0;
- (BOOL)p_deleteMessageFromNodeBufferWithMessageId:(id)arg0;
- (BOOL)needRefreshTimerWhenAddToMessageNodeBufferWithNode:(id)arg0;
- (BOOL)enableCreateNodesByRefreshMessage;
- (id)consumeMessageWithCount:(long long)arg0;
- (void)setMessageListMonitor:(id)arg0;
- (void)setupPriorityQueueWithConfig:(id)arg0;
- (void)setupHeatTimer;
- (void)setupBlocklist;
- (void)setupCommentAlignStreamConfig;
- (id)heatConfig;
- (void)calculateHeatWithCommentCountInDuration;
- (void)setBlocklist:(id)arg0;
- (void)setEnableChatAlignStream:(BOOL)arg0;
- (void)setSeiDelayCalculator:(id)arg0;
- (void)setAnchorMsgDisplayDelayTime:(double)arg0;
- (void)setCommentDelayMaxTime:(double)arg0;
- (void)setEnableAlignSEIReceivedCount:(long long)arg0;
- (void)setCalculateOffset:(double)arg0;
- (BOOL)enableChatAlignStream;
- (unsigned long long)realMessageListHeat;
- (id)seiDelayCalculator;
- (long long)enableAlignSEIReceivedCount;
- (double)commentDelayMaxTime;
- (double)anchorMsgDisplayDelayTime;
- (id)commentMessageNodePriorityQueue;
- (id)businessMessageNodePriorityQueue;
- (id)basicMessageNodePriorityQueue;
- (id)systemMessageBuffer;
- (BOOL)filterMessageInBlockList:(id)arg0;
- (void)countCommentActionWithMessage:(id)arg0;
- (id)foldMessageConsumeBuffer;
- (BOOL)needAddToSystemMessageBuffer:(id)arg0;
- (void)addMessageToSystemMessageBuffer:(id)arg0;
- (void)addMessageToStrategyMessagePriorityQueue:(id)arg0;
- (id)commentMessagePriorityQueue;
- (id)businessMessagePriorityQueue;
- (id)basicMessagePriorityQueue;
- (void)dealMessageWithUnexpectedActionType:(id)arg0;
- (id)getFoldMessagesFromPriorityQueue;
- (id)refreshMessageConsumeBuffer;
- (id)getRefreshMessagesFromPriorityQueue;
- (id)ratioConfig;
- (id)foldMessageNodeConsumeBuffer;
- (id)systemMessageNodeBuffer;
- (void)addToStrategyMessagePriorityQueueWithMessageNode:(id)arg0;
- (id)getFoldMessageNodesFromPriorityQueue;
- (void)setFoldMessageNodeConsumeBuffer:(id)arg0;
- (id)refreshMessageNodeConsumeBuffer;
- (id)getRefreshMessageNodesFromPriorityQueue;
- (BOOL)enableChatAlignStreamInCurrentContext;
- (id)consumeAlignStreamNodesWithBuffer:(id)arg0 count:(long long)arg1;
- (long long)receivedCommentCountInCountDuration;
- (void)setReceivedCommentCountInCountDuration:(long long)arg0;
- (long long)receivedCommentCountInJudgeDuration;
- (void)setReceivedCommentCountInJudgeDuration:(long long)arg0;
- (id)receivedCommentCountArray;
- (void)switchMessageListHeatIfNeed;
- (id)logHeat:(unsigned long long)arg0;
- (BOOL)hasUsedCommentCount;
- (void)setRealMessageListHeat:(unsigned long long)arg0;
- (void)setHasUsedCommentCount:(BOOL)arg0;
- (void)setMiddleHeatCount:(long long)arg0;
- (void)setHighHeatCount:(long long)arg0;
- (void)setLowHeatCount:(long long)arg0;
- (long long)middleHeatCount;
- (long long)highHeatCount;
- (long long)lowHeatCount;
- (void)setSystemMessageBuffer:(id)arg0;
- (void)setCommentMessagePriorityQueue:(id)arg0;
- (void)setBusinessMessagePriorityQueue:(id)arg0;
- (void)setBasicMessagePriorityQueue:(id)arg0;
- (void)setRefreshMessageConsumeBuffer:(id)arg0;
- (void)setFoldMessageConsumeBuffer:(id)arg0;
- (void)setSystemMessageNodeBuffer:(id)arg0;
- (void)setCommentMessageNodePriorityQueue:(id)arg0;
- (void)setBusinessMessageNodePriorityQueue:(id)arg0;
- (void)setBasicMessageNodePriorityQueue:(id)arg0;
- (void)setRefreshMessageNodeConsumeBuffer:(id)arg0;
- (id)heatTimer;
- (void)setHeatTimer:(id)arg0;
- (void)setHeatConfig:(id)arg0;
- (void)setReceivedCommentCountArray:(id)arg0;
- (void)setRatioConfig:(id)arg0;
- (void).cxx_destruct;
- (id)blocklist;
- (void)dealloc;

@end
