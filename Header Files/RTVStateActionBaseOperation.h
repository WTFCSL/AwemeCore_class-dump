//
//     Generated by private class-dump
//

@class NSArray, NSMutableArray, NSObject;
@protocol OS_dispatch_semaphore;

@interface RTVStateActionBaseOperation : NSOperation {
    BOOL _executing;
    BOOL _finished;
    NSMutableArray *_observers;
    NSMutableArray *_conditions;
    NSArray *_innerError;
    NSObject<OS_dispatch_semaphore> *_lock;
    id /* block */ _completionCallback;
}

@property (readonly, nonatomic) NSMutableArray *observers;
@property (readonly, nonatomic) NSMutableArray *conditions;
@property (retain, nonatomic) NSArray *innerError;
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *lock;
@property (copy, nonatomic) id /* block */ completionCallback;

- (id)executeTask;
- (BOOL)addOperationObserver:(id)arg0;
- (void)__notifyExecuteFinishWithError:(id)arg0;
- (void)__evaluateConditions;
- (id)innerError;
- (void)__notifyWillExecute;
- (void)setInnerError:(id)arg0;
- (BOOL)addOperationCondition:(id)arg0;
- (void)setFinished:(BOOL)arg0;
- (BOOL)isFinished;
- (id)init;
- (void)main;
- (void).cxx_destruct;
- (BOOL)isExecuting;
- (id)initWithCompletionBlock:(id /* block */)arg0;
- (id)observers;
- (int)timeoutInterval;
- (id)lock;
- (id)conditions;
- (void)start;
- (void)setCompletionCallback:(id /* block */)arg0;
- (void)setExecuting:(BOOL)arg0;
- (void)finishWithError:(id)arg0;
- (id /* block */)completionCallback;
- (void)callCompletionWithSuccess:(BOOL)arg0 error:(id)arg1;

@end
