//
//     Generated by private class-dump
//

@class NSURL, WKWebView, NSMutableArray;

@interface BDWebServerTrustChallengeHandler : NSObject {
    WKWebView *_webView;
    NSURL *_currentURL;
    unsigned long long _challengeState;
    NSMutableArray *_challenges;
}

@property (weak, nonatomic) WKWebView *webView;
@property (retain, nonatomic) NSURL *currentURL;
@property (nonatomic) unsigned long long challengeState;
@property (retain, nonatomic) NSMutableArray *challenges;

- (void)webView:(id)arg0 challenge:(id)arg1 challengecCompletion:(id /* block */)arg2 ttnetErrorURL:(id)arg3 ttnetCompletion:(id /* block */)arg4 needForceMainThread:(BOOL)arg5;
- (unsigned long long)challengeState;
- (void)webView:(id)arg0 challenge:(id)arg1 challengecCompletion:(id /* block */)arg2 ttnetErrorURL:(id)arg3 ttnetCompletion:(id /* block */)arg4 url:(id)arg5;
- (void)dispatchHandler:(id /* block */)arg0 needForceMainThread:(BOOL)arg1;
- (void)setPageChallengeIsPass:(BOOL)arg0 withHost:(id)arg1;
- (void)setChallengeState:(unsigned long long)arg0;
- (void)_tryShowWarningAlertController;
- (id)myBDWebKitBundle;
- (id)getMultiLangText:(id)arg0;
- (void)_showWarningAlertController:(id)arg0;
- (BOOL)shouldSkipSSLCertificateError;
- (void)handleSSLError:(id)arg0 WithComplete:(id /* block */)arg1;
- (void)setWebView:(id)arg0;
- (id)webView;
- (void).cxx_destruct;
- (void)webView:(id)arg0 didReceiveAuthenticationChallenge:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithWebView:(id)arg0;
- (void)dealloc;
- (id)challenges;
- (void)setChallenges:(id)arg0;
- (id)currentURL;
- (void)setCurrentURL:(id)arg0;

@end
