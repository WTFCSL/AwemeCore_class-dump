//
//     Generated by private class-dump
//

@class NSString, UIView;
@protocol BDARVLynxEmbedViewDelegate, BDARVLiteWebViewProtocol;

@interface BDARVLynxEmbedView : UIView <UIScrollViewDelegate, BDARVLiteWebViewProtocol> {
    BOOL _isVisable;
    BOOL _scrollEnabled;
    id<BDARVLynxEmbedViewDelegate> _delegate;
    UIView<BDARVLiteWebViewProtocol> *_webView;
    UIView *_loadingView;
    UIView *_retryView;
}

@property (nonatomic) BOOL scrollEnabled;
@property (retain, nonatomic) UIView<BDARVLiteWebViewProtocol> *webView;
@property (weak, nonatomic) id<BDARVLynxEmbedViewDelegate> delegate;
@property (retain, nonatomic) UIView *loadingView;
@property (retain, nonatomic) UIView *retryView;
@property (nonatomic) BOOL isVisable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)scrollViewForInnerView;
- (id)retryView;
- (void)setRetryView:(id)arg0;
- (void)setupWebviewScrollViewEnabled:(BOOL)arg0;
- (BOOL)isVisable;
- (void)showWithModel:(id)arg0;
- (void)showWithInfo:(id)arg0;
- (void)webViewConfig:(id /* block */)arg0;
- (void)setupScrollViewEnabled:(BOOL)arg0;
- (void)sendMessageFromWebview:(id /* block */)arg0;
- (void)setIsVisable:(BOOL)arg0;
- (id)sendEventToWebview:(id)arg0;
- (void)sendPreloadEvent:(id)arg0;
- (BOOL)gobackLightLanding;
- (BOOL)canGoBackLightLanding;
- (void)setScrollEnabled:(BOOL)arg0;
- (BOOL)scrollEnabled;
- (void)setWebView:(id)arg0;
- (id)webView;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg0;
- (id)delegate;
- (void)clear;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (void)retry;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 webView:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;

@end
