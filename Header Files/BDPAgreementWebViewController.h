//
//     Generated by private class-dump
//

@class NSString, WKWebView, UIView, NSLayoutConstraint, UIButton;

@interface BDPAgreementWebViewController : UIViewController <WKNavigationDelegate> {
    BOOL _useWebViewTitle;
    NSString *_url;
    WKWebView *_webView;
    UIView *_bottomBar;
    UIButton *_backBottomButton;
    UIButton *_forwardBottomButton;
    NSLayoutConstraint *_webViewBottomContraint;
}

@property (copy, nonatomic) NSString *url;
@property (nonatomic) BOOL useWebViewTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupObserver;
- (void)onClickBack;
- (void)onWebBack;
- (void)onWebForward;
- (BOOL)useWebViewTitle;
- (void)setUseWebViewTitle:(BOOL)arg0;
- (void).cxx_destruct;
- (void)webView:(id)arg0 didFinishNavigation:(id)arg1;
- (void)setUrl:(id)arg0;
- (id)initWithURL:(id)arg0;
- (void)viewWillAppear:(BOOL)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(void *)arg3;
- (id)url;
- (void)setupUI;
- (void)setupWebView;

@end
