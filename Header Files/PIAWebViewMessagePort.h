//
//     Generated by private class-dump
//

@class WKUserScript, NSString, WKWebView, PIASTLQueue;

@interface PIAWebViewMessagePort : NSObject <WKScriptMessageHandler, PIAMessageChannelPort> {
    BOOL _portReady;
    unsigned long long _version;
    WKWebView *_webView;
    PIASTLQueue *_pendingList;
    WKUserScript *_propsScript;
}

@property (weak, nonatomic) WKWebView *webView;
@property (retain, nonatomic) PIASTLQueue *pendingList;
@property (retain, nonatomic) WKUserScript *propsScript;
@property BOOL portReady;
@property (nonatomic) unsigned long long version;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onMessage:(id)arg0;
- (void)setPendingList:(id)arg0;
- (id)pendingList;
- (void)setupWebViewBridge;
- (void)setupWebViewPolyfills;
- (BOOL)portReady;
- (void)setPortReady:(BOOL)arg0;
- (void)executeAllPendingOnMessageList;
- (void)updatePIAPropsWithContext:(id)arg0;
- (id)propsScript;
- (void)setPropsScript:(id)arg0;
- (void)setWebView:(id)arg0;
- (void)setVersion:(unsigned long long)arg0;
- (id)webView;
- (void).cxx_destruct;
- (unsigned long long)version;
- (id)initWithWebView:(id)arg0;
- (void)dealloc;
- (void)userContentController:(id)arg0 didReceiveScriptMessage:(id)arg1;
- (void)postMessage:(id)arg0;

@end