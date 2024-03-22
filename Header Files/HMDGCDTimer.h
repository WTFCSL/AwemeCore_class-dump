//
//     Generated by private class-dump
//

@class NSObject;
@protocol OS_dispatch_source;

@interface HMDGCDTimer : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    NSObject<OS_dispatch_source> *_timer;
}

@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;

- (void)scheduledDispatchTimerWithInterval:(double)arg0 queue:(id)arg1 repeats:(BOOL)arg2 action:(id /* block */)arg3;
- (BOOL)existTimer;
- (id)timer;
- (id)init;
- (void).cxx_destruct;
- (void)cancelTimer;
- (void)setTimer:(id)arg0;

@end