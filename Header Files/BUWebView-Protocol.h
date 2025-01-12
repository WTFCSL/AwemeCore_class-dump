//
//     Generated by private class-dump
//

@class UIScrollView, BUJSInjector;

@protocol BUWebView <BURexxarEngine>

@property (readonly, nonatomic) UIScrollView *ttr_scrollView;
@property (readonly, nonatomic) BUJSInjector *ttr_injector;

- (id)ttr_injector;
- (void)ttr_loadHTMLString:(id)arg0 baseURL:(id)arg1;
- (void)ttr_loadFileURL:(id)arg0 allowingReadAccessToURL:(id)arg1;
- (void)ttr_stopLoading;
- (BOOL)ttr_canGoForward;
- (void)ttr_goForward;
- (void)ttr_removeDelegate:(id)arg0;
- (void)ttr_removeAllDelegate;
- (void)ttr_loadRequest:(id)arg0;
- (void)ttr_addDelegate:(id)arg0;
- (BOOL)ttr_canGoBack;
- (void)ttr_goBack;
- (id)ttr_scrollView;
- (void)ttr_reload;

@end
