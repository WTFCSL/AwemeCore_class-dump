//
//     Generated by private class-dump
//

@class NSObject;
@protocol OS_dispatch_queue;

@interface RxQueueScheduler : RxScheduler {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (unsigned long long)wallTimeWithDate:(id)arg0;

- (id)after:(id)arg0 schedule:(id /* block */)arg1;
- (id)after:(id)arg0 repeatingEvery:(double)arg1 withLeeway:(double)arg2 schedule:(id /* block */)arg3;
- (void).cxx_destruct;
- (id)initWithName:(id)arg0 queue:(id)arg1;
- (id)schedule:(id /* block */)arg0;
- (id)queue;
- (void)dealloc;

@end