//
//     Generated by private class-dump
//

@class NSString, UIActivityIndicatorView, WKWebView, NSMutableData, NSError;
@protocol TCWebViewControllerDelegate;

@interface TCWebViewController : UIViewController <WKUIDelegate, WKNavigationDelegate, NSURLConnectionDelegate, NSURLConnectionDataDelegate> {
    int _nloadCount;
    WKWebView *_webview;
    NSString *_webTitle;
    NSString *_requestURLStr;
    NSError *_error;
    id<TCWebViewControllerDelegate> _delegate;
    UIActivityIndicatorView *_activityIndicatorView;
    BOOL _finished;
    NSMutableData *_theData;
    unsigned long long _retryCount;
}

@property (retain, nonatomic) UIActivityIndicatorView *activityIndicatorView;
@property (nonatomic) BOOL finished;
@property (retain, nonatomic) NSMutableData *theData;
@property (nonatomic) unsigned long long retryCount;
@property (retain, nonatomic) WKWebView *webview;
@property (retain, nonatomic) NSString *webTitle;
@property (retain, nonatomic) NSString *requestURLStr;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) id<TCWebViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setWebTitle:(id)arg0;
- (id)webTitle;
- (void)stopLoad;
- (void)setRequestURLStr:(id)arg0;
- (void)setTheData:(id)arg0;
- (void)loadReqURL;
- (id)requestURLStr;
- (id)theData;
- (void)setFinished:(BOOL)arg0;
- (BOOL)shouldAutorotate;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg0;
- (void)setRetryCount:(unsigned long long)arg0;
- (id)initWithNibName:(id)arg0 bundle:(id)arg1;
- (void)webView:(id)arg0 decidePolicyForNavigationAction:(id)arg1 decisionHandler:(id /* block */)arg2;
- (void)webView:(id)arg0 didFinishNavigation:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (unsigned long long)retryCount;
- (void)webView:(id)arg0 didFailNavigation:(id)arg1 withError:(id)arg2;
- (void)viewDidDisappear:(BOOL)arg0;
- (id)delegate;
- (void)setError:(id)arg0;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (BOOL)finished;
- (id)error;
- (void)webView:(id)arg0 didStartProvisionalNavigation:(id)arg1;
- (id)activityIndicatorView;
- (void)setActivityIndicatorView:(id)arg0;
- (void)doClose;
- (id)webview;
- (void)setWebview:(id)arg0;

@end