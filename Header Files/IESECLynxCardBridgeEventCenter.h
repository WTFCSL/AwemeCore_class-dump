//
//     Generated by private class-dump
//

@class NSMutableArray, NSMutableDictionary, NSArray, NSLock;

@interface IESECLynxCardBridgeEventCenter : NSObject {
    id /* block */ _receiveBroadcastHandler;
    NSArray *_eventDenyList;
    double _effectiveDuration;
    NSMutableDictionary *_eventSubscribers;
    NSLock *_eventSubscribersLock;
    NSMutableArray *_eventQueue;
    NSLock *_eventQueueLock;
}

@property (class, readonly, nonatomic) IESECLynxCardBridgeEventCenter *sharedCenter;

@property (retain, nonatomic) NSMutableDictionary *eventSubscribers;
@property (retain, nonatomic) NSLock *eventSubscribersLock;
@property (retain, nonatomic) NSMutableArray *eventQueue;
@property (retain, nonatomic) NSLock *eventQueueLock;
@property (copy, nonatomic) id /* block */ receiveBroadcastHandler;
@property (copy, nonatomic) NSArray *eventDenyList;
@property (nonatomic) double effectiveDuration;

+ (id)sharedCenter;

- (void)publishEvent:(id)arg0;
- (void)subscribeEventNamed:(id)arg0 withSubscriber:(id)arg1;
- (void)unsubscribeEventNamed:(id)arg0 withSubscriber:(id)arg1;
- (void)cleanExpiredEvent;
- (void)setEffectiveDuration:(double)arg0;
- (id /* block */)receiveBroadcastHandler;
- (void)setReceiveBroadcastHandler:(id /* block */)arg0;
- (id)eventSubscribersLock;
- (id)eventSubscribers;
- (id)eventQueueLock;
- (void)setEventSubscribers:(id)arg0;
- (void)setEventSubscribersLock:(id)arg0;
- (void)setEventQueueLock:(id)arg0;
- (id)eventDenyList;
- (void)setEventDenyList:(id)arg0;
- (void)clearEvent:(id)arg0 isSticky:(id)arg1 timestampLower:(id)arg2 timestampUpper:(id)arg3;
- (void)cleanEventWith:(id)arg0;
- (void)setEventQueue:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)eventQueue;
- (double)effectiveDuration;

@end
