//
//     Generated by private class-dump
//

@class UIProgressView, NSString, BDPAppPageURL, NSURL, NSMutableDictionary, BDPUniqueID;
@protocol BDPPageProtocol;

@interface BDPWebViewComponent : BDPBridgeWebView <BDPAppRouteChangeMessage, BDPWebViewImplInterface, BDPKeyboardResponderDelegate, BDPPageDiagnoseProtocol, WKNavigationDelegate, WKUIDelegate, WKScriptMessageHandler, BDPWebViewComponentProtocol> {
    id /* block */ _publishCallBack;
    id /* block */ _canGoBackCallBack;
    long long _pageID;
    NSURL *_lastValidURL;
    NSString *_componentID;
    BDPAppPageURL *_appPageURL;
    id<BDPPageProtocol> _page;
    NSMutableDictionary *_unfinishedRequestMap;
    NSMutableDictionary *_failedReqeustMap;
    UIProgressView *_progressView;
    BDPUniqueID *_uniqueID;
    struct CGPoint { double x; double y; } _keyBoardPoint;
}

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (nonatomic) struct CGPoint { double x; double y; } keyBoardPoint;
@property (copy, nonatomic) id /* block */ publishCallBack;
@property (copy, nonatomic) id /* block */ canGoBackCallBack;
@property (nonatomic) long long pageID;
@property (retain, nonatomic) NSURL *lastValidURL;
@property (copy, nonatomic) NSString *componentID;
@property (retain, nonatomic) BDPAppPageURL *appPageURL;
@property (weak, nonatomic) id<BDPPageProtocol> page;
@property (retain, nonatomic) NSMutableDictionary *unfinishedRequestMap;
@property (retain, nonatomic) NSMutableDictionary *failedReqeustMap;
@property (retain, nonatomic) UIProgressView *progressView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)uploadOrderInfoWithAppID:(id)arg0;
+ (void)enableInterceptorForConfiguration:(id)arg0;
+ (void)registerSchemeHandlerClassForWebView:(id)arg0;
+ (id)errorPageURL;

- (void)setupObserver;
- (void)onKeyboardWillShow:(id)arg0;
- (void)onKeyboardWillHide:(id)arg0;
- (void)setPublishCallBack:(id /* block */)arg0;
- (void)webView:(id)arg0 invoke:(id)arg1 completion:(id /* block */)arg2;
- (id /* block */)publishCallBack;
- (void)webView:(id)arg0 publish:(id)arg1 completion:(id /* block */)arg2;
- (void)subscribeHandler:(id)arg0 data:(id)arg1;
- (void)onAppRouteChangePageDidEnterWithPageID:(long long)arg0 pageURL:(id)arg1 uniqueID:(id)arg2;
- (void)setupUserAgent;
- (void)gatherDiagnoseInfo:(id)arg0 triggerType:(id)arg1;
- (void)gatherDiagnoseInfo:(id)arg0 webview:(id)arg1 triggerType:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 configuration:(id)arg1 pageID:(long long)arg2 uniqueID:(id)arg3 progressBarColor:(id)arg4;
- (void)setAppPageURL:(id)arg0;
- (void)setCanGoBackCallBack:(id /* block */)arg0;
- (void)updateWithURL:(id)arg0 progressBar:(id)arg1;
- (id)unfinishedRequestMap;
- (void)setUnfinishedRequestMap:(id)arg0;
- (id)failedReqeustMap;
- (void)setFailedReqeustMap:(id)arg0;
- (void)setupCustomAPI;
- (void)setupUserScript;
- (void)setupProgressBar:(id)arg0;
- (void)removeCustomAPI;
- (void)setLastValidURL:(id)arg0;
- (void)openInOuterBrowser;
- (id)lastValidURL;
- (void)updateProgressBar:(double)arg0;
- (id /* block */)canGoBackCallBack;
- (void)subscribeHandler:(id)arg0 dest:(unsigned long long)arg1 data:(id)arg2;
- (void)applicationDidChangeStatus:(id)arg0;
- (BOOL)isURLInternal:(id)arg0;
- (unsigned long long)p_checkURL:(id)arg0 uniqueID:(id)arg1 isSubFrame:(BOOL)arg2;
- (void)setupWebviewComponentApiScript;
- (id)onWebviewErrorWithURL:(id)arg0 andErrorType:(unsigned long long)arg1;
- (id)getRedirectedURL:(id)arg0 checkResult:(unsigned long long)arg1;
- (id)onWebviewErrorWithError:(id)arg0;
- (void)loadFailedPage;
- (id)onWebviewErrorMsgWithURL:(id)arg0 andErrorType:(unsigned long long)arg1;
- (void)setKeyBoardPoint:(struct CGPoint { double x0; double x1; })arg0;
- (struct CGPoint { double x0; double x1; })keyBoardPoint;
- (void)callbackInvoke:(long long)arg0 data:(id)arg1 fromH5:(BOOL)arg2;
- (void)injectJSWithPath:(id)arg0;
- (id)appPageURL;
- (void)p_gatherUnfinishedReqeusts:(id)arg0 routeID:(id)arg1 webViewID:(long long)arg2 diagnoseType:(id)arg3;
- (void)p_gatherFailedReqeusts:(id)arg0 routeID:(id)arg1 webViewID:(long long)arg2 diagnoseType:(id)arg3;
- (id)p_diagnosePointsWithName:(id)arg0 diagnoseType:(id)arg1 params:(id)arg2;
- (id)reload;
- (void)webView:(id)arg0 didFailProvisionalNavigation:(id)arg1 withError:(id)arg2;
- (void)webView:(id)arg0 runJavaScriptAlertPanelWithMessage:(id)arg1 initiatedByFrame:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)page;
- (void).cxx_destruct;
- (id)uniqueID;
- (void)setPage:(id)arg0;
- (void)webView:(id)arg0 decidePolicyForNavigationAction:(id)arg1 decisionHandler:(id /* block */)arg2;
- (void)setPageID:(long long)arg0;
- (void)webView:(id)arg0 didFinishNavigation:(id)arg1;
- (void)setUniqueID:(id)arg0;
- (long long)pageID;
- (void)webView:(id)arg0 didFailNavigation:(id)arg1 withError:(id)arg2;
- (void)setNavigationTitle:(id)arg0;
- (id)webView:(id)arg0 createWebViewWithConfiguration:(id)arg1 forNavigationAction:(id)arg2 windowFeatures:(id)arg3;
- (id)progressView;
- (void)setProgressView:(id)arg0;
- (void)webView:(id)arg0 decidePolicyForNavigationResponse:(id)arg1 decisionHandler:(id /* block */)arg2;
- (void)dealloc;
- (void)setHidden:(BOOL)arg0;
- (void)webView:(id)arg0 didStartProvisionalNavigation:(id)arg1;
- (id)componentID;
- (void)setComponentID:(id)arg0;
- (void)userContentController:(id)arg0 didReceiveScriptMessage:(id)arg1;

@end
