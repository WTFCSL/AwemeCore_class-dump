//
//     Generated by private class-dump
//

@class AWETimorWebViewLoadingView, NSString, AWETimorWebViewHeightAdapterView, NSDictionary, AWETimorWebView;

@interface AWETimorWebViewController : BDPViewController <AWETimorWebViewLoadingViewDelegate, AWETimorWebViewDelegate, AWETimorWebViewHeightAdapterViewDelegate> {
    NSString *_URLString;
    NSString *_imagePath;
    NSString *_appID;
    unsigned long long _reportType;
    AWETimorWebView *_webview;
    AWETimorWebViewLoadingView *_processView;
    AWETimorWebViewHeightAdapterView *_blankView;
    unsigned long long _webviewState;
    NSDictionary *_param;
}

@property (copy, nonatomic) NSString *URLString;
@property (copy, nonatomic) NSString *imagePath;
@property (copy, nonatomic) NSString *appID;
@property (nonatomic) unsigned long long reportType;
@property (retain, nonatomic) AWETimorWebView *webview;
@property (retain, nonatomic) AWETimorWebViewLoadingView *processView;
@property (retain, nonatomic) AWETimorWebViewHeightAdapterView *blankView;
@property (nonatomic) unsigned long long webviewState;
@property (retain, nonatomic) NSDictionary *param;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)createFolderIfNeed:(id)arg0;
- (id)generateModelWithParam:(id)arg0;
- (void)registerContextAPIName:(id)arg0 isSynchronous:(BOOL)arg1 isOnMainThread:(BOOL)arg2 instance:(id)arg3 type:(long long)arg4 APIHandler:(id /* block */)arg5;
- (void)closeButtonDidClick;
- (id)blankView;
- (void)setBlankView:(id)arg0;
- (void)commonWebView:(id)arg0 didStartProvisionalNavigation:(id)arg1;
- (void)commonWebView:(id)arg0 didFinishNavigation:(id)arg1;
- (void)commonWebView:(id)arg0 didFailProvisionalNavigation:(id)arg1 withError:(id)arg2;
- (id)initWithParam:(id)arg0 URLString:(id)arg1;
- (void)setWebviewState:(unsigned long long)arg0;
- (void)retryDidClick;
- (void)registerFeedBackMessageHandler;
- (void)updateNavigationBarConstraintFrame;
- (id)generateRandomFilePathWithExtension:(id)arg0;
- (void)reportALog:(id)arg0;
- (void)setProcessView:(id)arg0;
- (id)processView;
- (unsigned long long)webviewState;
- (void)updateNavigationBarHeight;
- (id)URLString;
- (void)setParam:(id)arg0;
- (id)imagePath;
- (void)setAppID:(id)arg0;
- (void).cxx_destruct;
- (unsigned long long)reportType;
- (void)setImagePath:(id)arg0;
- (id)param;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)setReportType:(unsigned long long)arg0;
- (id)appID;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (BOOL)navigationBarHidden;
- (void)setURLString:(id)arg0;
- (id)webview;
- (void)setWebview:(id)arg0;

@end