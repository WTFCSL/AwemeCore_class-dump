//
//     Generated by private class-dump
//

@class DIRSConcurrentCollection, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface DIRSGlobalTimer : NSObject {
    NSObject<OS_dispatch_queue> *global_timer_queue;
    NSObject<OS_dispatch_source> *global_timer;
    DIRSConcurrentCollection *holder;
}

+ (id)globalTimer;

- (id)init;
- (void)startTimer;
- (void).cxx_destruct;
- (void)stopTimer;
- (void)addTimer:(id)arg0;
- (void)removeTimer:(id)arg0;
- (void)_timerTick;

@end
