//
//     Generated by private class-dump
//

@class NSString;

@interface BDWebInterceptorPluginObject : IWKPluginObject <IWKClassPlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)webView:(id)arg0 willInitWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1 configuration:(id)arg2;
- (id)webView:(id)arg0 decidePolicyForNavigationAction:(id)arg1 decisionHandler:(id /* block */)arg2;
- (id)webView:(id)arg0 didFinishNavigation:(id)arg1;
- (id)webView:(id)arg0 didReceiveServerRedirectForProvisionalNavigation:(id)arg1;
- (id)webView:(id)arg0 didCommitNavigation:(id)arg1;
- (id)webView:(id)arg0 decidePolicyForNavigationResponse:(id)arg1 decisionHandler:(id /* block */)arg2;
- (id)webView:(id)arg0 didStartProvisionalNavigation:(id)arg1;

@end
