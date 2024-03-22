//
//     Generated by private class-dump
//

@class BUStaticPlugin, NSString, NSPointerArray, NSURL, UIScrollView, BUJSInjector, UIViewController;

@interface BUWKWebView : WKWebView <WKNavigationDelegate, BUWebView> {
    BOOL _reallySuccess;
    BOOL _hasInjectedScript;
    UIViewController *_ttr_sourceController;
    BUStaticPlugin *_tt_staticPlugin;
    NSPointerArray *_slaveDelates;
    UIScrollView *_ttr_scrollView;
    BUJSInjector *_ttr_injector;
}

@property (retain, nonatomic) NSPointerArray *slaveDelates;
@property (retain, nonatomic) UIScrollView *ttr_scrollView;
@property (retain, nonatomic) BUJSInjector *ttr_injector;
@property (nonatomic) BOOL hasInjectedScript;
@property (nonatomic) BOOL reallySuccess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) UIViewController *ttr_sourceController;
@property (retain, nonatomic) BUStaticPlugin *ttr_staticPlugin;
@property (readonly, nonatomic) NSURL *ttr_url;

+ (id)shareProcessPool;

- (id)slaveDelates;
- (void)setSlaveDelates:(id)arg0;
- (id)ttr_url;
- (void)setTtr_staticPlugin:(id)arg0;
- (void)setTtr_injector:(id)arg0;
- (BOOL)hasInjectedScript;
- (void)setHasInjectedScript:(BOOL)arg0;
- (id)ttr_injector;
- (id)ttr_sourceController;
- (void)setReallySuccess:(BOOL)arg0;
- (void)injectScriptIfNeed;
- (BOOL)checkIfAddToShow;
- (BOOL)checkWebContentBlank:(id)arg0 withBlankColor:(id)arg1;
- (void)bu_oldDetectBlankWebViewCompleteBlock:(id /* block */)arg0;
- (void)bu_detectBlankWebViewWithColor:(id)arg0 completeBlock:(id /* block */)arg1;
- (double)checkWebContentBlankPercent:(id)arg0;
- (void)bu_oldDetectBlankWebViewPercentCompleteBlock:(id /* block */)arg0;
- (void)setTtr_sourceController:(id)arg0;
- (void)ttr_loadHTMLString:(id)arg0 baseURL:(id)arg1;
- (void)ttr_loadFileURL:(id)arg0 allowingReadAccessToURL:(id)arg1;
- (void)ttr_stopLoading;
- (BOOL)ttr_canGoForward;
- (void)ttr_goForward;
- (void)ttr_removeDelegate:(id)arg0;
- (void)ttr_removeAllDelegate;
- (void)ttr_fireEvent:(id)arg0 data:(id)arg1 completion:(id /* block */)arg2;
- (void)setTtr_scrollView:(id)arg0;
- (void)ttr_fireEvent:(id)arg0 data:(id)arg1;
- (void)ttr_loadRequest:(id)arg0;
- (void)bu_detectBlankWebViewCompleteBlock:(id /* block */)arg0;
- (void)ttr_evaluateJavaScript:(id)arg0 completionHandler:(id /* block */)arg1;
- (void)ttr_addDelegate:(id)arg0;
- (id)ttr_staticPlugin;
- (BOOL)reallySuccess;
- (void)bu_detectBlankPercentWithImageStr:(id)arg0 completeBlock:(id /* block */)arg1;
- (void)bu_detectBlankPercentCompleteBlock:(id /* block */)arg0;
- (BOOL)ttr_canGoBack;
- (void)ttr_goBack;
- (id)ttr_scrollView;
- (void)ttr_reload;
- (void)webView:(id)arg0 didFailProvisionalNavigation:(id)arg1 withError:(id)arg2;
- (void).cxx_destruct;
- (void)webView:(id)arg0 decidePolicyForNavigationAction:(id)arg1 decisionHandler:(id /* block */)arg2;
- (void)webView:(id)arg0 didFinishNavigation:(id)arg1;
- (void)webView:(id)arg0 didFailNavigation:(id)arg1 withError:(id)arg2;
- (void)webView:(id)arg0 decidePolicyForNavigationResponse:(id)arg1 decisionHandler:(id /* block */)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 configuration:(id)arg1;
- (void)webView:(id)arg0 didStartProvisionalNavigation:(id)arg1;
- (void)webViewWebContentProcessDidTerminate:(id)arg0;

@end
