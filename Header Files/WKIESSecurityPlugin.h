//
//     Generated by private class-dump
//

@class NSString;

@interface WKIESSecurityPlugin : IWKPluginObject <IWKInstancePlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isStartWithSusPrefix:(id)arg0;
+ (id)susPrefixList;
+ (void)injectToWebView:(id)arg0;

- (id)webView:(id)arg0 decidePolicyForNavigationAction:(id)arg1 decisionHandler:(id /* block */)arg2;

@end