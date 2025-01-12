//
//     Generated by private class-dump
//

@class NSURL, NSString;

@interface IWKPiperPluginObject : IWKPluginObject <WKScriptMessageHandler, IWKInstancePlugin> {
    BOOL _protocolV1Enabled;
    BOOL _userScriptInjectSucceeded;
    BOOL _isCheckingUserScriptInject;
    NSURL *_commitURL;
}

@property (nonatomic) BOOL userScriptInjectSucceeded;
@property (nonatomic) BOOL isCheckingUserScriptInject;
@property (nonatomic) BOOL protocolV1Enabled;
@property (retain, nonatomic) NSURL *commitURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)assertIfOldTTEngineExistForWebView:(id)arg0;
- (void)_doAddScriptIfNeeded:(id)arg0;
- (BOOL)protocolV1Enabled;
- (BOOL)userScriptInjectSucceeded;
- (BOOL)isCheckingUserScriptInject;
- (void)setIsCheckingUserScriptInject:(BOOL)arg0;
- (void)setUserScriptInjectSucceeded:(BOOL)arg0;
- (void)setProtocolV1Enabled:(BOOL)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)webView:(id)arg0 decidePolicyForNavigationAction:(id)arg1 decisionHandler:(id /* block */)arg2;
- (id)webView:(id)arg0 didFinishNavigation:(id)arg1;
- (id)webView:(id)arg0 runJavaScriptTextInputPanelWithPrompt:(id)arg1 defaultText:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)webView:(id)arg0 didCommitNavigation:(id)arg1;
- (void)userContentController:(id)arg0 didReceiveScriptMessage:(id)arg1;
- (id)commitURL;
- (void)onLoad:(id)arg0;
- (void)setCommitURL:(id)arg0;

@end
