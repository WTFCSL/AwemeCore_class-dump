//
//     Generated by private class-dump
//

@interface FlowKit.MessageSearchResultCell : FlowKit.MessageCell <WKScriptMessageHandler, WKNavigationDelegate> {
    void /* unknown type, empty encoding */ message;
    void /* unknown type, empty encoding */ webView;
    void /* unknown type, empty encoding */ onSelectSearchCell;
    void /* unknown type, empty encoding */ hasLoadedWebview;
    void /* unknown type, empty encoding */ $__lazy_storage_$_headerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_loadingView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_webErrorView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_snapshotView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_footerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_footerDivider;
    void /* unknown type, empty encoding */ $__lazy_storage_$_footerCenterContainer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_footerIcon;
    void /* unknown type, empty encoding */ $__lazy_storage_$_footerLabel;
}

- (void)userContentController:(id)arg0 didReceiveScriptMessage:(id)arg1;
- (void)webView:(id)arg0 didFinishNavigation:(id)arg1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)prepareForReuse;
- (void)handleTap;

@end
