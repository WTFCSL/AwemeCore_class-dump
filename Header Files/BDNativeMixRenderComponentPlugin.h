//
//     Generated by private class-dump
//

@class NSString;

@interface BDNativeMixRenderComponentPlugin : IWKPluginObject <IWKClassPlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)enableNative:(id)arg0;
- (void)check:(id)arg0 withURL:(id)arg1;
- (id)webView:(id)arg0 decidePolicyForNavigationAction:(id)arg1 decisionHandler:(id /* block */)arg2;
- (long long)priority;

@end
