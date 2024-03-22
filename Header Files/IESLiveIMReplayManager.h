//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSMapTable, IESLiveIMReplayBuffer;

@interface IESLiveIMReplayManager : NSObject {
    BOOL _replayRunning;
    long long _bufferSize;
    IESLiveIMReplayBuffer *_replayBuffer;
    NSMapTable *_subscribers;
    NSMutableDictionary *_messageSubscribersDic;
}

@property (nonatomic) BOOL replayRunning;
@property (nonatomic) long long bufferSize;
@property (retain, nonatomic) IESLiveIMReplayBuffer *replayBuffer;
@property (retain, nonatomic) NSMapTable *subscribers;
@property (retain, nonatomic) NSMutableDictionary *messageSubscribersDic;

- (void)startReplay;
- (void)stopReplay;
- (void)putMessagesToReplayBuffer:(id)arg0;
- (BOOL)replayRunning;
- (void)addReplaySubscriber:(id)arg0;
- (void)setReplayRunning:(BOOL)arg0;
- (void)setReplayBuffer:(id)arg0;
- (void)setMessageSubscribersDic:(id)arg0;
- (id)messageSubscribersDic;
- (id)replayBuffer;
- (void)removeReplaySubscriber:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)subscribers;
- (long long)bufferSize;
- (void)setBufferSize:(long long)arg0;
- (id)replay;
- (id)initWithBufferSize:(long long)arg0;
- (void)setSubscribers:(id)arg0;

@end