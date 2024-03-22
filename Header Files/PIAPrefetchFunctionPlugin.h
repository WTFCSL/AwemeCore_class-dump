//
//     Generated by private class-dump
//

@class NSString, WKWebView, PIAWorker;

@interface PIAPrefetchFunctionPlugin : NSObject <PIAWorkerDelegate, PIAFunctionPlugin> {
    WKWebView *_webView;
    PIAWorker *_worker;
}

@property (weak, nonatomic) WKWebView *webView;
@property (retain, nonatomic) PIAWorker *worker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)executeAfterPrepareTask;
+ (unsigned long long)pluginMode;
+ (void)addPrefetchEnabledPVEvent:(BOOL)arg0 engine:(id)arg1;

- (void)PIAWorker:(id)arg0 didReceiveError:(id)arg1;
- (void)PIAWorker:(id)arg0 willFetchScriptURL:(id)arg1;
- (void)PIAWorker:(id)arg0 didFetchScriptURL:(id)arg1 fetchMetrics:(id)arg2 error:(id)arg3;
- (void)PIAWorker:(id)arg0 didReceiveMessage:(id)arg1;
- (void)willPIAWorkerCreate:(id)arg0;
- (void)PIAWorker:(id)arg0 didExecuteScriptURL:(id)arg1 executeMetrics:(id)arg2;
- (void)engine:(id)arg0 onLoadStart:(id)arg1;
- (void)engine:(id)arg0 onURLChange:(id)arg1;
- (void)onEngineDestroy:(id)arg0;
- (void)startPrefetchWithEngine:(id)arg0 URL:(id)arg1;
- (void)releaseWorker;
- (id)getOnPageReadyParams;
- (void)injectBridgeAPI;
- (void)setWebView:(id)arg0;
- (id)webView;
- (void).cxx_destruct;
- (id)worker;
- (void)setWorker:(id)arg0;

@end
