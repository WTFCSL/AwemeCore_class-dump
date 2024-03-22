//
//     Generated by private class-dump
//

@class NSString, AWEWebSecureBanner, UIView;

@interface AWEWebViewController : AWEBaseWebViewController <RTVWebViewController, AWEReactPage, BDWebSecureLinkSettingDelegate, AWEWebSecureBannerDelegate, UIScrollViewDelegate, AWERouterViewControllerProtocol, NSURLConnectionDataDelegate> {
    BOOL _isLocalResource;
    BOOL _isUrlBlocked;
    BOOL _showUndefinedPage;
    BOOL _visible;
    BOOL _disableWebViewInteraction;
    BOOL _enableSecLink;
    double _previewToastHeight;
    NSString *_secLinkScene;
    UIView *_disableInteractionToastView;
    NSString *_checkIronManJumpParam;
    AWEWebSecureBanner *_secureBanner;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isUrlBlocked;
@property (nonatomic) BOOL showUndefinedPage;
@property (nonatomic, getter=isVisible) BOOL visible;
@property (nonatomic) BOOL disableWebViewInteraction;
@property (nonatomic) double previewToastHeight;
@property (nonatomic) BOOL enableSecLink;
@property (copy, nonatomic) NSString *secLinkScene;
@property (retain, nonatomic) UIView *disableInteractionToastView;
@property (copy, nonatomic) NSString *checkIronManJumpParam;
@property (retain, nonatomic) AWEWebSecureBanner *secureBanner;
@property (nonatomic) BOOL isLocalResource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)wkAllowList;
+ (void)registerEletronicStampJSB;
+ (id)addParametersIfURLStringHasIronManScheme:(id)arg0;
+ (BOOL)allowWKWebViewWithURL:(id)arg0;

- (BOOL)configWithRouterParamDict:(id)arg0;
- (void)backButtonClicked;
- (void)setupNotification;
- (void)disableScroll;
- (void)showMorePanel;
- (BOOL)enableSecLink;
- (void)setEnableSecLink:(BOOL)arg0;
- (void)handleKeyboardDidHideNotification:(id)arg0;
- (void)handleKeyboardWillShowNotification:(id)arg0;
- (void)handleKeyboardDidShowNotification:(id)arg0;
- (void)handleKeyboardWillHideNotification:(id)arg0;
- (void)handleBridgeClose;
- (void)closeWebView;
- (void)updateBackgroundColorTransparent;
- (void)updateWebViewLayout;
- (void)handleDPBStatusNotification:(id)arg0;
- (void)setSecLinkScene:(id)arg0;
- (id)secLinkScene;
- (void)addAdditionalRequestHeaderFields;
- (void)didReceiveSecureLinkResponse:(id)arg0;
- (id)secureBanner;
- (void)removeSecBanner;
- (void)setSecureBanner:(id)arg0;
- (void)showSecBanner:(id)arg0;
- (BOOL)shouldInterceptFirstJump:(id)arg0 withResponse:(id)arg1;
- (void)secureBannerDidClickCloseButton:(id)arg0;
- (void)setupMoreButtonOfNavigation;
- (void)removeNoti;
- (id)checkIronManJumpParam;
- (BOOL)isUrlBlocked;
- (BOOL)showUndefinedPage;
- (BOOL)disableWebViewInteraction;
- (double)previewToastHeight;
- (void)analyzeWebview:(id)arg0;
- (id)disableInteractionToastView;
- (void)setDisableInteractionToastView:(id)arg0;
- (void)setIsUrlBlocked:(BOOL)arg0;
- (void)setShowUndefinedPage:(BOOL)arg0;
- (void)setDisableWebViewInteraction:(BOOL)arg0;
- (void)setPreviewToastHeight:(double)arg0;
- (void)setCheckIronManJumpParam:(id)arg0;
- (void)addAdditionalRequestParams;
- (void)checkURLWhenLoadRequest;
- (BOOL)webviewShouldStartLoadWithRequest:(id)arg0 navigationType:(long long)arg1;
- (void)handleKeyBoardWillChangeNotification:(id)arg0;
- (void)handleKeyBoardDidChangeNotification:(id)arg0;
- (id)__convertKeyBoardFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)__notifyKeyBoardEventName:(id)arg0 notification:(id)arg1;
- (void)sendWebEvent:(id)arg0;
- (BOOL)shouldSetupNonShareMoreButton;
- (void)setIsLocalResource:(BOOL)arg0;
- (id)customUserAgent;
- (void)viewDidAppear:(BOOL)arg0;
- (void)applicationWillEnterForeground:(id)arg0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
- (void)setup;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)applicationDidEnterBackground:(id)arg0;
- (void)openURL:(id)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (BOOL)isVisible;
- (void)setVisible:(BOOL)arg0;
- (BOOL)webView:(id)arg0 shouldStartLoadWithRequest:(id)arg1 navigationType:(long long)arg2;
- (void)webViewDidStartLoad:(id)arg0;
- (void)webViewDidFinishLoad:(id)arg0;
- (BOOL)isLocalResource;
- (void)setupWebView;
- (void)loadRequest;

@end