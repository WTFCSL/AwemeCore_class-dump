//
//     Generated by private class-dump
//

@protocol BDLynxClientViewDelegate <NSObject>

@optional

- (id /* block */)loadImageWithURL:(id)arg0 size:(struct CGSize { double x0; double x1; })arg1 contextInfo:(id)arg2 completion:(id /* block */)arg3;
- (id)redirectURL:(id)arg0;
- (void)viewDidChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })arg0;
- (void)viewDidStartLoading;
- (void)viewDidFirstScreen;
- (void)viewDidFinishLoadWithURL:(id)arg0;
- (void)viewDidUpdate;
- (void)viewDidPageUpdate;
- (void)viewDidRecieveError:(id)arg0;
- (void)viewDidLoadFailedWithUrl:(id)arg0 error:(id)arg1;
- (void)viewDidConstructJSRuntime;
- (void)bdlynxViewLoadUrlFailed:(id)arg0;
- (void)bdlynxViewloadTemplateWithUrl:(id)arg0 onComplete:(id /* block */)arg1;
- (void)cancelRequestWithURL:(id)arg0;

@end