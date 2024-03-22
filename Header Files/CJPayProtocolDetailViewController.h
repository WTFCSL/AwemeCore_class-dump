//
//     Generated by private class-dump
//

@class CJPayStyleButton, NSString, UIView, CJPayWKWebView;

@interface CJPayProtocolDetailViewController : CJPayHalfPageBaseViewController <WKNavigationDelegate> {
    BOOL _showContinueButton;
    BOOL _isShowTitleNubmer;
    BOOL _isShowTitleStrByWebview;
    NSString *_url;
    id /* block */ _agreeCompletionBeforeAnimation;
    id /* block */ _agreeCompletionAfterAnimation;
    NSString *_navTitle;
    NSString *_merchantId;
    NSString *_appId;
    NSString *_source;
    double _height;
    CJPayWKWebView *_webView;
    CJPayStyleButton *_nextStepButton;
    UIView *_buttonView;
    UIView *_safeAreaView;
    UIView *_bottomGradientLayerView;
}

@property (retain, nonatomic) CJPayWKWebView *webView;
@property (retain, nonatomic) CJPayStyleButton *nextStepButton;
@property (retain, nonatomic) UIView *buttonView;
@property (retain, nonatomic) UIView *safeAreaView;
@property (retain, nonatomic) UIView *bottomGradientLayerView;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) id /* block */ agreeCompletionBeforeAnimation;
@property (copy, nonatomic) id /* block */ agreeCompletionAfterAnimation;
@property (nonatomic) BOOL showContinueButton;
@property (copy, nonatomic) NSString *navTitle;
@property (copy, nonatomic) NSString *merchantId;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *source;
@property (nonatomic) double height;
@property (nonatomic) BOOL isShowTitleNubmer;
@property (nonatomic) BOOL isShowTitleStrByWebview;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setNextStepButton:(id)arg0;
- (id)nextStepButton;
- (void)setShowContinueButton:(BOOL)arg0;
- (void)setAgreeCompletionBeforeAnimation:(id /* block */)arg0;
- (id)bottomGradientLayerView;
- (void)setBottomGradientLayerView:(id)arg0;
- (void)setIsShowTitleNubmer:(BOOL)arg0;
- (void)setIsShowTitleStrByWebview:(BOOL)arg0;
- (BOOL)isShowTitleNubmer;
- (id)safeAreaView;
- (void)nextStepButtonAction;
- (id /* block */)agreeCompletionBeforeAnimation;
- (id /* block */)agreeCompletionAfterAnimation;
- (void)updateButtonHeight;
- (BOOL)isShowTitleStrByWebview;
- (void)setAgreeCompletionAfterAnimation:(id /* block */)arg0;
- (void)setSafeAreaView:(id)arg0;
- (id)buttonView;
- (void)setAppId:(id)arg0;
- (id)init;
- (void)setWebView:(id)arg0;
- (void)viewDidLayoutSubviews;
- (id)source;
- (id)webView;
- (void).cxx_destruct;
- (double)height;
- (void)webView:(id)arg0 didFinishNavigation:(id)arg1;
- (void)setUrl:(id)arg0;
- (void)setSource:(id)arg0;
- (void)setHeight:(double)arg0;
- (id)appId;
- (void)viewDidLoad;
- (id)url;
- (void)setButtonView:(id)arg0;
- (void)webView:(id)arg0 didStartProvisionalNavigation:(id)arg1;
- (id)merchantId;
- (void)setMerchantId:(id)arg0;
- (id)initWithHeight:(double)arg0;
- (id)navTitle;
- (void)setNavTitle:(id)arg0;
- (BOOL)showContinueButton;
- (double)containerHeight;

@end