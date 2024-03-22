//
//     Generated by private class-dump
//

@class RxScheduler;
@protocol RxSchedulerCancellable;

@interface __RxRunLoopSchedulerTimerTask : NSObject {
    RxScheduler *_scheduler;
    id<RxSchedulerCancellable> _token;
    id /* block */ _block;
}

@property (readonly, nonatomic) RxScheduler *scheduler;
@property (readonly, nonatomic) id<RxSchedulerCancellable> token;
@property (readonly, copy, nonatomic) id /* block */ block;

- (id)initWithScheduler:(id)arg0 token:(id)arg1 block:(id /* block */)arg2;
- (void).cxx_destruct;
- (id)scheduler;
- (id)token;
- (id /* block */)block;
- (void)invoke;

@end
