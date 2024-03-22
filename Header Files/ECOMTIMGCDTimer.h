//
//     Generated by private class-dump
//

@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ECOMTIMGCDTimer : NSObject {
    struct { unsigned int timerIsInvalidated; } _timerFlags;
    BOOL _repeats;
    double _tolerance;
    double _timeInterval;
    id _target;
    SEL _selector;
    id _userInfo;
    NSObject<OS_dispatch_queue> *_privateSerialQueue;
    NSObject<OS_dispatch_source> *_timer;
}

@property (nonatomic) double timeInterval;
@property (weak, nonatomic) id target;
@property (nonatomic) SEL selector;
@property (retain, nonatomic) id userInfo;
@property (nonatomic) BOOL repeats;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *privateSerialQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property double tolerance;

+ (id)scheduledTimerWithTimeInterval:(double)arg0 target:(id)arg1 selector:(SEL)arg2 userInfo:(id)arg3 repeats:(BOOL)arg4 dispatchQueue:(id)arg5;

- (void)setPrivateSerialQueue:(id)arg0;
- (id)initWithTimeInterval:(double)arg0 target:(id)arg1 selector:(SEL)arg2 userInfo:(id)arg3 repeats:(BOOL)arg4 dispatchQueue:(id)arg5;
- (void)resetTimerProperties;
- (void)schedule;
- (id)timer;
- (void)setTolerance:(double)arg0;
- (id)init;
- (double)timeInterval;
- (double)tolerance;
- (void).cxx_destruct;
- (void)setTimeInterval:(double)arg0;
- (void)fire;
- (void)setRepeats:(BOOL)arg0;
- (void)setUserInfo:(id)arg0;
- (void)setTarget:(id)arg0;
- (id)target;
- (void)setSelector:(SEL)arg0;
- (void)invalidate;
- (void)setTimer:(id)arg0;
- (BOOL)repeats;
- (id)userInfo;
- (void)timerFired;
- (id)description;
- (void)dealloc;
- (SEL)selector;
- (id)privateSerialQueue;

@end
