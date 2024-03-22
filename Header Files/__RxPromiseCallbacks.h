//
//     Generated by private class-dump
//

@class RxScheduler, RxPromise;

@interface __RxPromiseCallbacks : NSObject {
    id /* block */ _fulfilledCallback;
    id /* block */ _errorCallback;
    RxScheduler *_scheduler;
    RxPromise *_childPromise;
}

@property (copy, nonatomic) id /* block */ fulfilledCallback;
@property (copy, nonatomic) id /* block */ errorCallback;
@property (retain, nonatomic) RxScheduler *scheduler;
@property (retain, nonatomic) RxPromise *childPromise;

- (void)setFulfilledCallback:(id /* block */)arg0;
- (id)initWithFulfilledCallback:(id /* block */)arg0 errorCallback:(id /* block */)arg1 cancellable:(id)arg2 scheduler:(id)arg3;
- (id /* block */)fulfilledCallback;
- (void).cxx_destruct;
- (id)scheduler;
- (void)setScheduler:(id)arg0;
- (id)childPromise;
- (void)setChildPromise:(id)arg0;
- (id /* block */)errorCallback;
- (void)setErrorCallback:(id /* block */)arg0;

@end