//
//     Generated by private class-dump
//

@class NSDictionary, NSString, WKUserContentController;
@protocol WKScriptMessageHandler, AWETimorWebViewDelegate;

@interface AWETimorWebView : WKWebView <WKUIDelegate, WKNavigationDelegate, WKScriptMessageHandler, UIScrollViewDelegate> {
    long long _webViewID;
    id<AWETimorWebViewDelegate> _commonWebViewDelegate;
    long long _terminatedCount;
    id<WKScriptMessageHandler> _messageHandlerProxy;
    WKUserContentController *_userContentController;
    NSDictionary *_param;
}

@property (nonatomic) long long terminatedCount;
@property (retain, nonatomic) id<WKScriptMessageHandler> messageHandlerProxy;
@property (weak, nonatomic) WKUserContentController *userContentController;
@property (retain, nonatomic) NSDictionary *param;
@property (nonatomic) long long webViewID;
@property (weak, nonatomic) id<AWETimorWebViewDelegate> commonWebViewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)webViewConfiguration:(id)arg0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 param:(id)arg1;
- (void)evaluateScript:(id)arg0 completion:(id /* block */)arg1;
- (void)callbackInvoke:(long long)arg0 data:(id)arg1;
- (long long)webViewID;
- (void)setWebViewID:(long long)arg0;
- (void)setupAPIFunctions;
- (void)removeAPIFunctions;
- (void)setMessageHandlerProxy:(id)arg0;
- (void)invoke:(id)arg0 completion:(id /* block */)arg1;
- (long long)terminatedCount;
- (void)setTerminatedCount:(long long)arg0;
- (id)processBusinessBridgeCallBackWithAPIName:(id)arg0 error:(id)arg1 result:(id)arg2;
- (void)invokeEvent:(id)arg0 params:(id)arg1 type:(long long)arg2 instance:(id)arg3 checkBlock:(id /* block */)arg4 executeResult:(id /* block */)arg5;
- (id)commonWebViewDelegate;
- (void)setCommonWebViewDelegate:(id)arg0;
- (void)webView:(id)arg0 didFailProvisionalNavigation:(id)arg1 withError:(id)arg2;
- (void)setParam:(id)arg0;
- (void).cxx_destruct;
- (id)userContentController;
- (void)webView:(id)arg0 didFinishNavigation:(id)arg1;
- (void)webView:(id)arg0 runJavaScriptTextInputPanelWithPrompt:(id)arg1 defaultText:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)param;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (void)dealloc;
- (void)setUserContentController:(id)arg0;
- (void)webView:(id)arg0 didStartProvisionalNavigation:(id)arg1;
- (void)webViewWebContentProcessDidTerminate:(id)arg0;
- (void)userContentController:(id)arg0 didReceiveScriptMessage:(id)arg1;
- (id)messageHandlerProxy;

@end
