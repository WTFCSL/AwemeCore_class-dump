//
//     Generated by private class-dump
//

@class NSString;
@protocol BDPHostWebViewDelegate;

@interface BDPLightBoardWebView : WKWebView <WKNavigationDelegate, BDPHostWebViewProtocol> {
    id<BDPHostWebViewDelegate> _bdp_webViewDelegate;
}

@property (weak, nonatomic) id<BDPHostWebViewDelegate> bdp_webViewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)bdp_webViewDelegate;
- (void)setBdp_webViewDelegate:(id)arg0;
- (void).cxx_destruct;
- (void)webView:(id)arg0 decidePolicyForNavigationAction:(id)arg1 decisionHandler:(id /* block */)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;

@end
