//
//     Generated by private class-dump
//

@class NSString, WKWebView;

@interface TCWebViewLoadJs : NSObject <WKNavigationDelegate> {
    NSString *_key;
    NSString *_openId;
    NSString *_appId;
    WKWebView *_webView;
}

@property (retain, nonatomic) WKWebView *webView;
@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSString *openId;
@property (retain, nonatomic) NSString *appId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)clear;
+ (id)getInstance;

- (id)openId;
- (void)setOpenId:(id)arg0;
- (void)loadJS:(id)arg0 openId:(id)arg1 andKey:(id)arg2;
- (id)key;
- (void)setAppId:(id)arg0;
- (void)setWebView:(id)arg0;
- (id)webView;
- (void).cxx_destruct;
- (void)webView:(id)arg0 decidePolicyForNavigationAction:(id)arg1 decisionHandler:(id /* block */)arg2;
- (void)webView:(id)arg0 didFinishNavigation:(id)arg1;
- (void)webView:(id)arg0 didFailNavigation:(id)arg1 withError:(id)arg2;
- (void)setKey:(id)arg0;
- (void)dealloc;
- (id)appId;
- (void)webView:(id)arg0 didStartProvisionalNavigation:(id)arg1;

@end
