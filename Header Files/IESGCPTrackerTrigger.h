//
//     Generated by private class-dump
//

@class NSTimer;

@interface IESGCPTrackerTrigger : NSObject {
    struct __CFRunLoopObserver { } *_observerRef;
    BOOL _defaultRunloopEnable;
    BOOL _trackingTimerEnable;
    id /* block */ _triggerBlock;
    double _triggerInterval;
    NSTimer *_timer;
}

@property (nonatomic) BOOL defaultRunloopEnable;
@property (nonatomic) BOOL trackingTimerEnable;
@property (retain, nonatomic) NSTimer *timer;
@property (copy, nonatomic) id /* block */ triggerBlock;
@property (nonatomic) double triggerInterval;

- (void)startRunloop;
- (id /* block */)triggerBlock;
- (void)setTriggerBlock:(id /* block */)arg0;
- (void)setTriggerInterval:(double)arg0;
- (double)triggerInterval;
- (void)timerTrigger;
- (id)initWithDefaultRunloopEnable:(BOOL)arg0 trackingTimerEnable:(BOOL)arg1;
- (BOOL)defaultRunloopEnable;
- (void)stopRunloop;
- (BOOL)trackingTimerEnable;
- (void)runloopTrigger;
- (void)setDefaultRunloopEnable:(BOOL)arg0;
- (void)setTrackingTimerEnable:(BOOL)arg0;
- (id)timer;
- (void)startTimer;
- (void).cxx_destruct;
- (void)stopTimer;
- (void)stop;
- (void)setTimer:(id)arg0;
- (void)start;
- (void)dealloc;

@end