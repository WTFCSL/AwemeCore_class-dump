//
//     Generated by private class-dump
//

@class MQPWebService, MQPWebView, NSString, MQPWebProgress, NSMutableURLRequest, MQPWKJSBridge, APayH5WapViewToolbar;

@interface MQPWebVC : UIViewController <WKNavigationDelegate, MQPJSBridgeURLHandler, UIScrollViewDelegate> {
    BOOL _isScrolling;
    BOOL _isEnding;
    MQPWebProgress *_progress;
    NSMutableURLRequest *_urlReqest;
    APayH5WapViewToolbar *_toolbar;
    MQPWebService *_service;
    MQPWebView *_webView;
    MQPWKJSBridge *_jsBridge;
}

@property (retain, nonatomic) MQPWKJSBridge *jsBridge;
@property (weak, nonatomic) MQPWebService *service;
@property (retain, nonatomic) MQPWebView *webView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)openWithUrl:(id)arg0 method:(id)arg1 title:(id)arg2 h5mode:(long long)arg3;
- (void)showToolbar;
- (void)showBackButton:(BOOL)arg0;
- (void)showRefreshButton:(BOOL)arg0;
- (void)statusBarFrameOrOrientationChanged:(id)arg0;
- (void)setupNaviBar4VC:(id)arg0 left:(id)arg1 title:(id)arg2 right:(id)arg3;
- (double)safeAreaHeight;
- (void)setupSDKUserAgent;
- (id)jsBridge;
- (void)h5BackV2;
- (void)h5BackV1;
- (void)doClickNaviLeftAction:(id)arg0;
- (void)onWebErr:(id)arg0 log:(id)arg1;
- (void)onExitWithResult:(id)arg0;
- (BOOL)onH5PayHandler:(id)arg0;
- (BOOL)onJSBridgeURLHandler:(id)arg0;
- (void)parseTitleFromDocument;
- (void)notifyPagefinish;
- (void)loadJSBridge:(id /* block */)arg0;
- (void)onH5PayWithError:(id)arg0;
- (id)resultDicWithQuery:(id)arg0;
- (void)onCallNativeFunc:(id)arg0;
- (id)subStrInStr:(id)arg0 between:(id)arg1 and:(id)arg2;
- (void)onAction:(id)arg0;
- (void)pushWnd:(id)arg0;
- (void)rotateAccordingToStatusBarOrientationAndSupportedOrientations;
- (id)imageViewWithImageName:(id)arg0;
- (id)labelWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 isbold:(BOOL)arg1 size:(double)arg2 text:(id)arg3;
- (id)leftItem:(BOOL)arg0 text:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (void)doClickNaviRightAction:(id)arg0;
- (void)setJsBridge:(id)arg0;
- (void)scrollViewWillBeginDecelerating:(id)arg0;
- (void)refresh;
- (void)setWebView:(id)arg0;
- (id)webView;
- (void).cxx_destruct;
- (void)setService:(id)arg0;
- (void)webView:(id)arg0 decidePolicyForNavigationAction:(id)arg1 decisionHandler:(id /* block */)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (void)webView:(id)arg0 didFinishNavigation:(id)arg1;
- (void)webView:(id)arg0 didFailNavigation:(id)arg1 withError:(id)arg2;
- (void)webView:(id)arg0 decidePolicyForNavigationResponse:(id)arg1 decisionHandler:(id /* block */)arg2;
- (void)dealloc;
- (id)service;
- (void)webView:(id)arg0 didStartProvisionalNavigation:(id)arg1;
- (void)setTitle:(id)arg0;
- (id)initWithWebService:(id)arg0;
- (void)setupWebView;
- (void)hideToolbar;
- (id)dictionaryFromString:(id)arg0;
- (void)back;

@end