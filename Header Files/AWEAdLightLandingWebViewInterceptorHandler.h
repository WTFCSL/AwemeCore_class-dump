//
//     Generated by private class-dump
//

@class NSString, WKWebView;

@interface AWEAdLightLandingWebViewInterceptorHandler : NSObject <BDWebInterceptorHandler> {
    WKWebView *_wkWebView;
}

@property (weak, nonatomic) WKWebView *wkWebView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)wkWebView;
- (void)bdw_URLSchemeTask:(id)arg0 didLoadData:(id)arg1;
- (void)bdw_URLSchemeTaskDidFinishLoading:(id)arg0;
- (void)setWkWebView:(id)arg0;
- (void)bindWebView:(id)arg0;
- (void).cxx_destruct;
- (BOOL)canHandleRequest:(id)arg0;

@end
