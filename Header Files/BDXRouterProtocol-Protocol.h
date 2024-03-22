//
//     Generated by private class-dump
//

@protocol BDXRouterProtocol <BDXServiceProtocol>

+ (id)sharedInstance;

- (void)openWithUrl:(id)arg0 context:(id)arg1 completion:(id /* block */)arg2;
- (void)openWithUrl:(id)arg0 context:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)closeWithContainerID:(id)arg0 params:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)closeWithContainerID:(id)arg0 params:(id)arg1 completion:(id /* block */)arg2;
- (id)containerWithUrl:(id)arg0 context:(id)arg1 autoPush:(BOOL)arg2;
- (id)containerWithUrl:(id)arg0 context:(id)arg1 autoPush:(BOOL)arg2;
- (id)routeStack;
- (id)createContainerWithUrl:(id)arg0 context:(id)arg1 error:(id *)arg2;
- (id)createContainerWithUrl:(id)arg0 context:(id)arg1 error:(id *)arg2;

@optional

- (id)containerWithUrl:(id)arg0 context:(id)arg1 autoPush:(BOOL)arg2 error:(id *)arg3;
- (id)containerWithUrl:(id)arg0 context:(id)arg1 autoPush:(BOOL)arg2 error:(id *)arg3;

@end