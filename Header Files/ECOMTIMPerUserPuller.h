//
//     Generated by private class-dump
//

@class NSTimer, ECOMTIMGCDTimer;

@interface ECOMTIMPerUserPuller : ECOMTIMSingleStrategyPuller {
    BOOL _needsPull;
    BOOL _pulling;
    NSTimer *_timer;
    ECOMTIMGCDTimer *_pullTimer;
    long long _pullMessageCount;
}

@property (retain, nonatomic) NSTimer *timer;
@property BOOL needsPull;
@property BOOL pulling;
@property (retain) ECOMTIMGCDTimer *pullTimer;
@property double pullStartTime;
@property long long pullMessageCount;

+ (id)sharedOperationQueue;

- (void)setPullMessageCount:(long long)arg0;
- (long long)pullMessageCount;
- (void)setNeedsPullWithReason:(long long)arg0;
- (void)appEnterForeground:(id)arg0;
- (void)tokenChanged:(id)arg0;
- (id)pullTimer;
- (void)setPullTimer:(id)arg0;
- (void)pollingPull:(BOOL)arg0;
- (void)wsStateChangedToConnected:(id)arg0;
- (void)pullFired:(id)arg0;
- (void)setNeedsPull:(BOOL)arg0;
- (BOOL)needsPull;
- (void)pull;
- (void)updatePullerCursorWithResponse:(id)arg0 context:(id)arg1;
- (id)timer;
- (void).cxx_destruct;
- (void)setTimer:(id)arg0;
- (void)dealloc;
- (void)kickoff;
- (void)setPulling:(BOOL)arg0;
- (BOOL)pulling;

@end
