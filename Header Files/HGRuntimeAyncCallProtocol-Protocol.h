//
//     Generated by private class-dump
//

@protocol HGRuntimeAyncCallProtocol <NSObject>

- (void)setupClearBlockWithoutStop:(id /* block */)arg0;
- (BOOL)isContextThreadForceStopped;
- (void)dispatchAsyncInContextThread:(id /* block */)arg0;
- (void)stopDispatchAsyncWith:(id /* block */)arg0;
- (void)logException:(id)arg0 exception:(id)arg1;
- (void)loadScript:(id)arg0 withFileSource:(id)arg1 completion:(id /* block */)arg2;
- (void)cancelAllPendingAsyncDispatch;
- (void)enableAcceptAsyncDispatch:(BOOL)arg0;
- (void)logExceptionWithJSC:(id)arg0 exception:(id)arg1;
- (void)loadScriptWithURL:(id)arg0 completion:(id /* block */)arg1;

@optional

- (void)dispatchAsyncInContextThreadImmediately:(id /* block */)arg0;

@end