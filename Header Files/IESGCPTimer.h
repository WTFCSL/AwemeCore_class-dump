//
//     Generated by private class-dump
//

@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface IESGCPTimer : NSObject {
    BOOL _repeats;
    id _userInfo;
    double _timeInterval;
    id _target;
    SEL _selector;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    id /* block */ _block;
    NSObject<OS_dispatch_source> *_timer;
}

@property (nonatomic) double timeInterval;
@property (weak, nonatomic) id target;
@property (nonatomic) SEL selector;
@property (retain, nonatomic) id userInfo;
@property (nonatomic) BOOL repeats;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ block;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (readonly, nonatomic) NSObject<OS_dispatch_source> *realTimer;

+ (double)live_adaptTimeInterval:(double)arg0;
+ (id)scheduledTimerWithTimeInterval:(double)arg0 queue:(id)arg1 repeats:(BOOL)arg2 block:(id /* block */)arg3;
+ (id)scheduledTimerWithTimeInterval:(double)arg0 target:(id)arg1 selector:(SEL)arg2 userInfo:(id)arg3 repeats:(BOOL)arg4 dispatchQueue:(id)arg5;

- (id)realTimer;
- (id)initWithTimeInterval:(double)arg0 target:(id)arg1 selector:(SEL)arg2 userInfo:(id)arg3 repeats:(BOOL)arg4 dispatchQueue:(id)arg5;
- (id)initWithTimeInterval:(double)arg0 queue:(id)arg1 repeats:(BOOL)arg2 block:(id /* block */)arg3;
- (void)schedule;
- (id)timer;
- (double)timeInterval;
- (void).cxx_destruct;
- (void)setTimeInterval:(double)arg0;
- (void)fire;
- (void)setRepeats:(BOOL)arg0;
- (void)setUserInfo:(id)arg0;
- (void)setTarget:(id)arg0;
- (void)suspend;
- (void)setBlock:(id /* block */)arg0;
- (void)setDispatchQueue:(id)arg0;
- (id)target;
- (void)setSelector:(SEL)arg0;
- (void)invalidate;
- (void)setTimer:(id)arg0;
- (BOOL)repeats;
- (id)userInfo;
- (id)dispatchQueue;
- (void)timerFired;
- (void)dealloc;
- (SEL)selector;
- (id /* block */)block;

@end