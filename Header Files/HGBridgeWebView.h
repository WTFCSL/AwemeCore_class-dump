//
//     Generated by private class-dump
//

@class NSString;
@protocol WKScriptMessageHandler, HGWebViewImplInterface;

@interface HGBridgeWebView : WKWebView <WKUIDelegate, WKNavigationDelegate, WKScriptMessageHandler, UIScrollViewDelegate> {
    long long _webViewID;
    id /* block */ _scrollViewDidScrollBlock;
    id<HGWebViewImplInterface> _bridgeImpl;
    long long _terminatedCount;
    id<WKScriptMessageHandler> _messageHandlerProxy;
}

@property (nonatomic) long long terminatedCount;
@property (retain, nonatomic) id<WKScriptMessageHandler> messageHandlerProxy;
@property (nonatomic) long long webViewID;
@property (copy, nonatomic) id /* block */ scrollViewDidScrollBlock;
@property (weak, nonatomic) id<HGWebViewImplInterface> bridgeImpl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)webViewConfiguration:(id)arg0;

- (void)setBridgeImpl:(id)arg0;
- (long long)webViewID;
- (void)setWebViewID:(long long)arg0;
- (void)setupAPIFunctions;
- (void)removeAPIFunctions;
- (void)setMessageHandlerProxy:(id)arg0;
- (void)invoke:(id)arg0 completion:(id /* block */)arg1;
- (void)loadScript:(id)arg0 completion:(id /* block */)arg1;
- (void)loadCPScript:(id)arg0 completion:(id /* block */)arg1;
- (void)onDocumentReady:(id)arg0 completion:(id /* block */)arg1;
- (void)tryStartLoading:(id)arg0 completion:(id /* block */)arg1;
- (long long)terminatedCount;
- (void)setTerminatedCount:(long long)arg0;
- (id)bridgeImpl;
- (id /* block */)scrollViewDidScrollBlock;
- (void)setScrollViewDidScrollBlock:(id /* block */)arg0;
- (void).cxx_destruct;
- (void)webView:(id)arg0 runJavaScriptTextInputPanelWithPrompt:(id)arg1 defaultText:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (void)dealloc;
- (void)publish:(id)arg0 completion:(id /* block */)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 configuration:(id)arg1;
- (void)webViewWebContentProcessDidTerminate:(id)arg0;
- (void)userContentController:(id)arg0 didReceiveScriptMessage:(id)arg1;
- (id)messageHandlerProxy;

@end
