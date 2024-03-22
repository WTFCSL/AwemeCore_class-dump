//
//     Generated by private class-dump
//

@class NSString, UILabel, BUPlayableAd;

@interface AWEPlayableWebViewController : AWEAdWebViewController <BUPlayableAdDelegate> {
    BOOL _disableVisibleChange;
    UILabel *_webviewLabel;
    BUPlayableAd *_playableSDK;
    long long _playableResponseCode;
}

@property (nonatomic) long long playableResponseCode;
@property (nonatomic) BOOL disableVisibleChange;
@property (retain, nonatomic) BUPlayableAd *playableSDK;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)playableAd:(id)arg0 loadRequest:(id)arg1;
- (void)playableAd:(id)arg0 registerHandlerBlock:(id /* block */)arg1 forJSMethod:(id)arg2;
- (void)playableAd:(id)arg0 fireEvent:(id)arg1 params:(id)arg2;
- (void)playableAd:(id)arg0 executeJavaScript:(id)arg1 completion:(id /* block */)arg2;
- (void)playableEventReportNotification:(id)arg0;
- (void)pauseAudioAndVideoPlay;
- (id)playableSDK;
- (void)setPlayableSDK:(id)arg0;
- (void)setDisableVisibleChange:(BOOL)arg0;
- (void)setupPlayableEventNotification;
- (void)removePlayableEventNotification;
- (long long)playableResponseCode;
- (void)setPlayableResponseCode:(long long)arg0;
- (id)webviewSettings;
- (id)webviewLabel;
- (void)setWebviewLabel:(id)arg0;
- (BOOL)disableVisibleChange;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)dealloc;
- (void)webView:(id)arg0 didFailLoadWithError:(id)arg1;
- (void)webViewDidStartLoad:(id)arg0;
- (void)webViewDidFinishLoad:(id)arg0;
- (void)setupWebView;
- (void)handleURLResponse:(id)arg0;

@end
