//
//     Generated by private class-dump
//

@interface WBSDKAuthorizeWebViewController : WBSDKBasicWebViewController

- (id)fixedUrlStringFromURL:(id)arg0 withSplitString:(id)arg1;
- (void)authorizeDidFinishWithResponseCode:(long long)arg0 info:(id)arg1;
- (id)urlRequestFromWeiboSDKRequest:(id)arg0 andExtraPara:(id)arg1;
- (void)wbsdk_webView:(id)arg0 decidePolicyForNavigationAction:(id)arg1 decisionHandler:(id /* block */)arg2;
- (void)viewDidLoad;

@end
