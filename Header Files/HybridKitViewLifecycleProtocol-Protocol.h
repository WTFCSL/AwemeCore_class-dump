//
//     Generated by private class-dump
//

@protocol HybridKitViewLifecycleProtocol <NSObject>

@optional

- (void)viewWillStartLoading:(id)arg0;
- (void)view:(id)arg0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })arg1;
- (void)viewDidStartLoading:(id)arg0;
- (void)view:(id)arg0 didStartFetchResourceWithURL:(id)arg1;
- (void)view:(id)arg0 didFetchedResource:(id)arg1 error:(id)arg2;
- (void)viewDidFirstScreen:(id)arg0;
- (void)view:(id)arg0 didFinishLoadWithURL:(id)arg1;
- (void)viewDidUpdate:(id)arg0;
- (void)view:(id)arg0 didRecieveError:(id)arg1;
- (void)view:(id)arg0 didReceivePerformance:(id)arg1;
- (void)viewDidPageUpdate:(id)arg0;
- (void)viewDidConstructJSRuntime:(id)arg0;
- (void)view:(id)arg0 updateTitle:(id)arg1;
- (void)viewWillDealloc:(id)arg0;
- (void)viewDidCreate:(id)arg0;
- (void)view:(id)arg0 willLoadRequest:(id)arg1;
- (void)view:(id)arg0 didLoadFailedWithURL:(id)arg1 error:(id)arg2;
- (void)view:(id)arg0 willStartUpdateWithURL:(id)arg1;
- (void)view:(id)arg0 updateSubTitle:(id)arg1;
- (void)view:(id)arg0 didReceivedUnsupportedSchema:(id)arg1;

@end
