//
//     Generated by private class-dump
//

@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface UATimer : NSObject {
    BOOL _isCounting;
    double _duration;
    id /* block */ _completeBlock;
    NSObject<OS_dispatch_queue> *_timerQueue;
    NSObject<OS_dispatch_source> *_timerSource;
}

@property (nonatomic) double duration;
@property (copy, nonatomic) id /* block */ completeBlock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *timerQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timerSource;
@property (nonatomic) BOOL isCounting;

- (void)setCompleteBlock:(id /* block */)arg0;
- (id /* block */)completeBlock;
- (BOOL)isCounting;
- (void)setIsCounting:(BOOL)arg0;
- (id)initWithDuration:(double)arg0 completeBlock:(id /* block */)arg1;
- (void)invalidateTimer;
- (void)startTimer;
- (void).cxx_destruct;
- (void)setTimerSource:(id)arg0;
- (id)timerSource;
- (id)timerQueue;
- (void)fire;
- (void)stopTimer;
- (double)duration;
- (void)dealloc;
- (void)setDuration:(double)arg0;
- (void)createTimer;
- (void)releaseTimer;
- (void)setTimerQueue:(id)arg0;

@end