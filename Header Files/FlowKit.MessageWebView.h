//
//     Generated by private class-dump
//

@interface FlowKit.MessageWebView : UIView <WKNavigationDelegate> {
    void /* unknown type, empty encoding */ isLayoutCalculator;
    void /* unknown type, empty encoding */ isLoading;
    void /* unknown type, empty encoding */ didLoadingStateChanged;
    void /* unknown type, empty encoding */ message;
    void /* unknown type, empty encoding */ html;
    void /* unknown type, empty encoding */ highlightRange;
    void /* unknown type, empty encoding */ webContentProcessDidTerminate;
    void /* unknown type, empty encoding */ webView;
    void /* unknown type, empty encoding */ handleCellContentClick;
    void /* unknown type, empty encoding */ hanldeLinkClicked;
    void /* unknown type, empty encoding */ snapshot;
    void /* unknown type, empty encoding */ didFinishLoad;
    void /* unknown type, empty encoding */ contentSizeDidChange;
}

- (void).cxx_destruct;
- (void)webView:(id)arg0 decidePolicyForNavigationAction:(id)arg1 decisionHandler:(id /* block */)arg2;
- (void)webView:(id)arg0 didFinishNavigation:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)initWithCoder:(id)arg0;
- (void)layoutSubviews;
- (void)dealloc;
- (void)webViewWebContentProcessDidTerminate:(id)arg0;

@end
