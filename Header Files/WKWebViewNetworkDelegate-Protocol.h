//
//     Generated by private class-dump
//

@protocol WKWebViewNetworkDelegate <NSObject>

- (void)webView:(id)arg0 willStartLoadURL:(id)arg1;
- (id)webview:(id)arg0 extraHeaderDictionaryForRequest:(id)arg1;
- (BOOL)webView:(id)arg0 shouldUsePrefetchResponse:(id)arg1 withRequest:(id)arg2;
- (float)webView:(id)arg0 priorityForRequest:(id)arg1;
- (void)webView:(id)arg0 didStartLoadURL:(id)arg1;
- (void)webView:(id)arg0 didReceiveResponse:(id)arg1;
- (void)webView:(id)arg0 didReceiveData:(id)arg1 forURL:(id)arg2;
- (void)webView:(id)arg0 didFailLoadURL:(id)arg1 withError:(id)arg2;
- (void)webView:(id)arg0 didFinishLoadURL:(id)arg1;
- (void)webView:(id)arg0 didPerformRedirection:(id)arg1 newRequest:(id)arg2;

@end
