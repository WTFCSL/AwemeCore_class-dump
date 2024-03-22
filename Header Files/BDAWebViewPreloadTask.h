//
//     Generated by private class-dump
//

@class NSString, BDAWebViewChannelInterceptor;

@interface BDAWebViewPreloadTask : NSObject <BDAResourceKit_iOS.AdWebViewPreloadLifecycleDelegate, WKNavigationDelegate> {
    void /* unknown type, empty encoding */ task;
    void /* unknown type, empty encoding */ runningContext;
    void /* unknown type, empty encoding */ parallelLoadGeckoTasks;
    void /* unknown type, empty encoding */ startGenerateWebViewTask;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ parallelLoadGeckoTasks;
@property (nonatomic, readonly) BDAWebViewChannelInterceptor *channelInterceptor;
@property (nonatomic, readonly) NSString *rawPreloadURL;

- (void)webViewDidStartLoad:(id)arg0 requestURL:(id)arg1;
- (id)parallelLoadGeckoTasks;
- (void)setParallelLoadGeckoTasks:(id)arg0;
- (id)channelInterceptor;
- (id)rawPreloadURL;
- (void)webviewStartPrerender;
- (id)fetchPreloadWebView;
- (void)webViewControllerViewDidLoad;
- (void)webViewControllerViewWillAppear;
- (void)webViewControllerViewDidDisappear;
- (void)setupGeckoPreloadWebViewStatus:(id)arg0 requestURL:(id)arg1;
- (void)preloadWebViewDidShowed:(id)arg0;
- (BOOL)isPreLoadWebViewShowed:(id)arg0;
- (void)updateQuickSlideStatus:(BOOL)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)webView:(id)arg0 didFinishNavigation:(id)arg1;
- (void)webView:(id)arg0 didStartProvisionalNavigation:(id)arg1;
- (void)webViewDidFinishLoad:(id)arg0;

@end
