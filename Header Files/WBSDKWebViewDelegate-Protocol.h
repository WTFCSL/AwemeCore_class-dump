//
//     Generated by private class-dump
//

@protocol WBSDKWebViewDelegate <NSObject>

@optional

- (void)wbsdk_webView:(id)arg0 decidePolicyForNavigationAction:(id)arg1 decisionHandler:(id /* block */)arg2;
- (void)wbsdk_webViewDidStartLoad:(id)arg0;
- (void)wbsdk_webViewDidFinishLoad:(id)arg0;
- (void)wbsdk_webView:(id)arg0 didFailLoadWithError:(id)arg1;
- (void)wbsdk_webView:(id)arg0 didPressErrorViewReloadButton:(id)arg1;

@end
