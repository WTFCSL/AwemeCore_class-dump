//
//     Generated by private class-dump
//

@class HTSLiveMessageDuplicatedFilter, HTSLiveMessageFakedFilter, NSString;
@protocol IESLiveIMFilter;

@interface IESLiveIMBaseDispatcher : IESLiveIMMessageNormalDispatcher <IESLIveMessageDelayProvider, IESLiveMessageProcesserProvider> {
    BOOL noMoreHistoryMessage;
    BOOL _isAnchor;
    BOOL _isFirstReceive;
    long long firstFetchHistoryMessageCount;
    NSString *firstFetchCursor;
    unsigned long long _decoderSceneType;
    HTSLiveMessageDuplicatedFilter *_messageDuplicatedFilter;
    HTSLiveMessageFakedFilter<IESLiveIMFilter> *_messageFakedFilter;
}

@property (nonatomic) BOOL isFirstReceive;
@property (retain, nonatomic) HTSLiveMessageDuplicatedFilter *messageDuplicatedFilter;
@property (retain, nonatomic) HTSLiveMessageFakedFilter<IESLiveIMFilter> *messageFakedFilter;
@property (nonatomic) BOOL isAnchor;
@property (nonatomic) unsigned long long decoderSceneType;
@property (nonatomic) long long ntpDiffTime;
@property (nonatomic) BOOL useHeartBeatSEI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long firstFetchHistoryMessageCount;
@property (copy, nonatomic) NSString *firstFetchCursor;
@property (nonatomic) BOOL noMoreHistoryMessage;

- (void)setIsAnchor:(BOOL)arg0;
- (void)setDecoderSceneType:(unsigned long long)arg0;
- (void)didRecieveMessages:(id)arg0;
- (void)startDispatch;
- (void)stopDispatch;
- (id)messageFakedFilter;
- (void)setMessageFakedFilter:(id)arg0;
- (BOOL)noMoreHistoryMessage;
- (void)setNoMoreHistoryMessage:(BOOL)arg0;
- (long long)firstFetchHistoryMessageCount;
- (void)setFirstFetchHistoryMessageCount:(long long)arg0;
- (id)firstFetchCursor;
- (void)setFirstFetchCursor:(id)arg0;
- (long long)decideMessageCacheType:(id)arg0;
- (double)decideDelayMessageDispatchTime:(id)arg0;
- (BOOL)filterBeforeDispatchMessage:(id)arg0;
- (unsigned long long)decoderSceneType;
- (void)cleanCaches;
- (void)enableLinkMessageDelay:(BOOL)arg0;
- (id)setupFakedFilter;
- (id)setupDuplicatedFilter;
- (BOOL)shouldDispatchMessageAfterFakedFilter:(id)arg0;
- (void)didReceiveFirstBatchMessages:(id)arg0;
- (id)messageDuplicatedFilter;
- (BOOL)isFirstReceive;
- (void)setIsFirstReceive:(BOOL)arg0;
- (void)setMessageDuplicatedFilter:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isAnchor;

@end