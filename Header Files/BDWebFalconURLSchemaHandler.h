//
//     Generated by private class-dump
//

@class NSString, WKWebView, NSURLSessionDataTask, NSDate, IESFalconStatModel;
@protocol BDWebURLSchemeTask;

@interface BDWebFalconURLSchemaHandler : NSObject <NSURLSessionDataDelegate, BDWebURLSchemeTaskHandler> {
    id<BDWebURLSchemeTask> _schemaTask;
    NSURLSessionDataTask *_task;
    NSDate *_onlineStartDate;
    IESFalconStatModel *_onlineStatModel;
    WKWebView *_webview;
}

@property (retain) id<BDWebURLSchemeTask> schemaTask;
@property (retain) NSURLSessionDataTask *task;
@property (retain) NSDate *onlineStartDate;
@property (retain) IESFalconStatModel *onlineStatModel;
@property (weak) WKWebView *webview;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedDemux;
+ (BOOL)bdw_canHandleRequest:(id)arg0;
+ (BOOL)bdw_canHandleRequest:(id)arg0 webview:(id)arg1;
+ (id)falconFixedRequest:(id)arg0;

- (id)initWithWebView:(id)arg0 schemeTask:(id)arg1;
- (id)schemaTask;
- (void)bdw_startURLSchemeTask;
- (void)bdw_stopURLSchemeTask;
- (void)setSchemaTask:(id)arg0;
- (void)setOnlineStartDate:(id)arg0;
- (void)setOnlineStatModel:(id)arg0;
- (id)onlineStatModel;
- (id)onlineStartDate;
- (void)recordOnlineStatIfNeeded;
- (void).cxx_destruct;
- (void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2;
- (void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2;
- (void)URLSession:(id)arg0 task:(id)arg1 willPerformHTTPRedirection:(id)arg2 newRequest:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)setTask:(id)arg0;
- (void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)task;
- (id)webview;
- (void)setWebview:(id)arg0;

@end
