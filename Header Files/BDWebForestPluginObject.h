//
//     Generated by private class-dump
//

@class NSString;

@interface BDWebForestPluginObject : IWKPluginObject <IWKClassPlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)webViewWillDealloc:(id)arg0;
- (id)webView:(id)arg0 loadRequest:(id)arg1;
- (id)webView:(id)arg0 didInitWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1 configuration:(id)arg2;
- (id)convertToWaitFixRequest:(id)arg0;
- (id)webView:(id)arg0 decidePolicyForNavigationAction:(id)arg1 decisionHandler:(id /* block */)arg2;
- (id)webView:(id)arg0 didCommitNavigation:(id)arg1;

@end
