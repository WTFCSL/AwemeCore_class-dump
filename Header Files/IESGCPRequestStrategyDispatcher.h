//
//     Generated by private class-dump
//

@class NSTimer, IESGCPRequestDispatchStrategy;

@interface IESGCPRequestStrategyDispatcher : NSObject {
    long long _currentTriggerCount;
    IESGCPRequestDispatchStrategy *_strategy;
    NSTimer *_triggedTimer;
}

@property (nonatomic) long long currentTriggerCount;
@property (retain, nonatomic) IESGCPRequestDispatchStrategy *strategy;
@property (retain, nonatomic) NSTimer *triggedTimer;

- (long long)arc4randomFrom:(long long)arg0 to:(long long)arg1;
- (void)refreshStrategy:(id)arg0;
- (void)invalidateDispatcher;
- (long long)currentTriggerCount;
- (void)resetTryCount;
- (BOOL)scheduledDispatchWithTriggerHandler:(id /* block */)arg0;
- (void)setCurrentTriggerCount:(long long)arg0;
- (void)setTriggedTimer:(id)arg0;
- (id)triggedTimer;
- (id)strategy;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setStrategy:(id)arg0;

@end