//
//     Generated by private class-dump
//

@class UIScrollView;

@protocol IESLiveWebViewProtocol <IESHYHybridViewProtocol>

@property (readonly, nonatomic, getter=canGoBack) BOOL canGoBack;
@property (readonly, nonatomic, getter=canGoForward) BOOL canGoForward;
@property (readonly, nonatomic, getter=isLoading) BOOL loading;
@property (readonly, nonatomic) UIScrollView *scrollView;

- (void)secureGoBackWithReachEndBlock:(id /* block */)arg0;
- (void)stopLoading;
- (void)reload;
- (BOOL)isLoading;
- (void)goForward;
- (void)goBack;
- (BOOL)canGoBack;
- (BOOL)canGoForward;
- (id)scrollView;
- (void)evaluateJavaScript:(id)arg0 completionHandler:(id /* block */)arg1;
- (void)scaleToFit;
- (void)loadURLRequest:(id)arg0;

@end
