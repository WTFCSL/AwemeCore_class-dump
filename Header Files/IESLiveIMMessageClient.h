//
//     Generated by private class-dump
//

@class IESLiveIMWebSocketFetcher, NSString, NSDictionary, IESLiveIMMessageChannel, IESLiveIMConfig;
@protocol IESLiveIMMessageReciever, IESLiveMessageConfig;

@interface IESLiveIMMessageClient : NSObject <IESLiveIMChannelDelegate> {
    BOOL _noMoreHistoryMessage;
    BOOL _enableStartEarlier;
    BOOL _isStarted;
    BOOL _isFirstFetch;
    id /* block */ _httpFetchParamsCallback;
    id /* block */ _wsFetchParamsCallback;
    id /* block */ _heartbeatData;
    id /* block */ _firstFetchProcess;
    NSString *_cursor;
    long long _totalReceiveCount;
    long long _totalParseCount;
    id<IESLiveMessageConfig> _bizConfig;
    id<IESLiveIMMessageReciever> _receiver;
    IESLiveIMConfig *_imConfig;
    IESLiveIMMessageChannel *_channel;
    IESLiveIMWebSocketFetcher *_webSocketFetcher;
    NSString *_pushServer;
    NSString *_internalExt;
    NSDictionary *_routeParams;
    double _firstWsTimeout;
    double _initTime;
    double _startTime;
    double _firstBatchTime;
    NSString *_firstBatchType;
}

@property (nonatomic) long long totalReceiveCount;
@property (nonatomic) long long totalParseCount;
@property (retain, nonatomic) id<IESLiveMessageConfig> bizConfig;
@property (retain, nonatomic) id<IESLiveIMMessageReciever> receiver;
@property (retain, nonatomic) IESLiveIMConfig *imConfig;
@property (nonatomic) BOOL isStarted;
@property (retain, nonatomic) IESLiveIMMessageChannel *channel;
@property (retain, nonatomic) IESLiveIMWebSocketFetcher *webSocketFetcher;
@property (retain, nonatomic) NSString *cursor;
@property (nonatomic) BOOL noMoreHistoryMessage;
@property (retain, nonatomic) NSString *pushServer;
@property (retain, nonatomic) NSString *internalExt;
@property (retain, nonatomic) NSDictionary *routeParams;
@property (nonatomic) BOOL isFirstFetch;
@property (nonatomic) double firstWsTimeout;
@property (nonatomic) double initTime;
@property (nonatomic) double startTime;
@property (nonatomic) double firstBatchTime;
@property (retain, nonatomic) NSString *firstBatchType;
@property (copy, nonatomic) id /* block */ httpFetchParamsCallback;
@property (copy, nonatomic) id /* block */ wsFetchParamsCallback;
@property (copy, nonatomic) id /* block */ heartbeatData;
@property (copy, nonatomic) id /* block */ firstFetchProcess;
@property (nonatomic) BOOL enableStartEarlier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setRouteParams:(id)arg0;
- (id)routeParams;
- (id)bizConfig;
- (void)setBizConfig:(id)arg0;
- (void)setIsFirstFetch:(BOOL)arg0;
- (BOOL)noMoreHistoryMessage;
- (void)setNoMoreHistoryMessage:(BOOL)arg0;
- (void)setEnableStartEarlier:(BOOL)arg0;
- (BOOL)enableStartEarlier;
- (id)initWithConfig:(id)arg0 receiver:(id)arg1;
- (id)webSocketFetcher;
- (id)pushServer;
- (void)setPushServer:(id)arg0;
- (void)channel:(id)arg0 received:(id)arg1;
- (void)channel:(id)arg0 closed:(id)arg1;
- (void)setWebSocketFetcher:(id)arg0;
- (id)imConfig;
- (void)setImConfig:(id)arg0;
- (void)setInternalExt:(id)arg0;
- (id)internalExt;
- (void)setHeartbeatData:(id /* block */)arg0;
- (void)setHttpFetchParamsCallback:(id /* block */)arg0;
- (void)setWsFetchParamsCallback:(id /* block */)arg0;
- (void)setFirstFetchProcess:(id /* block */)arg0;
- (void)updateMessageDecodeQueueIfMediaRoom;
- (id)readLastHttpUrl;
- (id /* block */)httpFetchParamsCallback;
- (id)readLastWebsocketUrl;
- (double)firstWsTimeout;
- (long long)getCurrentRoomType;
- (void)trackParseRate;
- (id)messageFetchPath;
- (long long)totalReceiveCount;
- (void)setTotalReceiveCount:(long long)arg0;
- (long long)totalParseCount;
- (void)setTotalParseCount:(long long)arg0;
- (void)setFirstBatchTime:(double)arg0;
- (void)setFirstBatchType:(id)arg0;
- (void)trackEnterToFirstMessageArrive;
- (void)firstFetch:(id)arg0;
- (id /* block */)firstFetchProcess;
- (double)firstBatchTime;
- (id)firstBatchType;
- (id /* block */)wsFetchParamsCallback;
- (void)setFirstWsTimeout:(double)arg0;
- (void)setInitTime:(double)arg0;
- (void)setReceiver:(id)arg0;
- (id)cursor;
- (id)channel;
- (id)receiver;
- (void)setStartTime:(double)arg0;
- (BOOL)isStarted;
- (void).cxx_destruct;
- (void)reconnect;
- (void)setChannel:(id)arg0;
- (void)stop;
- (double)startTime;
- (void)start;
- (void)setCursor:(id)arg0;
- (double)initTime;
- (id /* block */)heartbeatData;
- (BOOL)isFirstFetch;
- (void)setIsStarted:(BOOL)arg0;

@end
