//
//     Generated by private class-dump
//

@class __CMCLifeObserver, CMCEvent;

@interface CMCSubscription : NSObject {
    CMCEvent *_event;
    unsigned long long _numberOfTimes;
    id _keeper;
    id /* block */ _handler;
    unsigned long long _subscribingState;
    __CMCLifeObserver *_currentKeeperLifeObserver;
}

@property (copy, nonatomic) id /* block */ handler;
@property (nonatomic) unsigned long long subscribingState;
@property (retain, nonatomic) __CMCLifeObserver *currentKeeperLifeObserver;
@property (readonly, nonatomic) CMCEvent *event;
@property (nonatomic) unsigned long long numberOfTimes;
@property (weak, nonatomic) id keeper;

- (BOOL)isSubscribing:(id)arg0;
- (void)feedWithEvent:(id)arg0;
- (void)setSubscribingState:(unsigned long long)arg0;
- (void)setNumberOfTimes:(unsigned long long)arg0;
- (unsigned long long)subscribingState;
- (id)currentKeeperLifeObserver;
- (void)setCurrentKeeperLifeObserver:(id)arg0;
- (void)setKeeper:(id)arg0;
- (id)keeper;
- (id)event;
- (void).cxx_destruct;
- (id)initWithEvent:(id)arg0;
- (void)setHandler:(id /* block */)arg0;
- (void)unsubscribe;
- (id /* block */)handler;
- (unsigned long long)numberOfTimes;

@end