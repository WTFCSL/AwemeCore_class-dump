//
//     Generated by private class-dump
//

@protocol CJPayLynxViewDelegate <NSObject>

@optional

- (void)viewDidChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })arg0;
- (void)viewDidStartLoading;
- (void)viewDidFirstScreen;
- (void)viewDidFinishLoadWithURL:(id)arg0;
- (void)viewDidUpdate;
- (void)viewDidPageUpdate;
- (void)viewDidRecieveError:(id)arg0;
- (void)viewDidLoadFailedWithUrl:(id)arg0 error:(id)arg1;
- (void)viewDidConstructJSRuntime;
- (void)viewWillCreated;
- (void)viewDidCreated;
- (void)viewDidFinishLoadWithError:(id)arg0;
- (void)lynxView:(id)arg0 receiveEvent:(id)arg1 withData:(id)arg2;

@end
