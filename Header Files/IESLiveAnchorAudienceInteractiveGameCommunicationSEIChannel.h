//
//     Generated by private class-dump
//

@class NSMutableDictionary, IESLiveGCDTimer;
@protocol IESLiveRealStreamingProvider;

@interface IESLiveAnchorAudienceInteractiveGameCommunicationSEIChannel : NSObject {
    IESLiveGCDTimer *_timer;
    double _timeVal;
    NSMutableDictionary *_loopSEIKeyMap;
    id<IESLiveRealStreamingProvider> _realStreamingProvider;
}

@property (retain, nonatomic) IESLiveGCDTimer *timer;
@property (nonatomic) double timeVal;
@property (retain, nonatomic) NSMutableDictionary *loopSEIKeyMap;
@property (retain, nonatomic) id<IESLiveRealStreamingProvider> realStreamingProvider;

- (void)doTimerAction;
- (id)loopSEIKeyMap;
- (double)timeVal;
- (void)sendSingleSEIMsgWithKey:(id)arg0 model:(id)arg1;
- (void)setTimeVal:(double)arg0;
- (id)realStreamingProvider;
- (void)sendSEIMsgWithKey:(id)arg0 value:(id)arg1 interval:(long long)arg2 updateSEIInfoBlock:(id /* block */)arg3;
- (void)stopSEIChannelCommunication;
- (void)setLoopSEIKeyMap:(id)arg0;
- (void)setRealStreamingProvider:(id)arg0;
- (id)timer;
- (void).cxx_destruct;
- (void)stopTimer;
- (void)setTimer:(id)arg0;
- (void)startTimerWithInterval:(double)arg0;

@end
