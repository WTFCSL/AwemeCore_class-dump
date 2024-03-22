//
//     Generated by private class-dump
//

@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_semaphore;

@interface RTVOperationBlockObserver : NSObject <RTVOperationObserver> {
    NSMutableArray *_willExecuteCallbacks;
    NSMutableArray *_executeFinishCallbacks;
    NSObject<OS_dispatch_semaphore> *_lock;
}

@property (readonly, nonatomic) NSMutableArray *willExecuteCallbacks;
@property (readonly, nonatomic) NSMutableArray *executeFinishCallbacks;
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)willExecuteCallbacks;
- (id)executeFinishCallbacks;
- (void)operationWillExecute:(id)arg0;
- (void)operation:(id)arg0 didFinishWithError:(id)arg1;
- (BOOL)addStartExecuteCallback:(id /* block */)arg0;
- (BOOL)addFinishExecuteCallback:(id /* block */)arg0;
- (id)initWithOperation:(id)arg0;
- (void).cxx_destruct;
- (id)lock;

@end
