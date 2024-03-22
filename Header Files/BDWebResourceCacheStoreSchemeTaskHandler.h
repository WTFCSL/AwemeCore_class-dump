//
//     Generated by private class-dump
//

@class NSString, NSURLSessionDataTask;
@protocol BDWebURLSchemeTask;

@interface BDWebResourceCacheStoreSchemeTaskHandler : NSObject <NSURLSessionDataDelegate, BDWebURLSchemeTaskHandler> {
    BOOL _isStopped;
    id<BDWebURLSchemeTask> _schemeTask;
    NSURLSessionDataTask *_task;
}

@property (retain, nonatomic) id<BDWebURLSchemeTask> schemeTask;
@property (retain, nonatomic) NSURLSessionDataTask *task;
@property (nonatomic) BOOL isStopped;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedDemux;
+ (BOOL)bdw_canHandleRequest:(id)arg0;
+ (BOOL)bdw_canHandleRequest:(id)arg0 webview:(id)arg1;

- (id)initWithWebView:(id)arg0 schemeTask:(id)arg1;
- (id)schemeTask;
- (void)bdw_startURLSchemeTask;
- (void)bdw_stopURLSchemeTask;
- (void)processMonitorData:(id)arg0;
- (void)setSchemeTask:(id)arg0;
- (void).cxx_destruct;
- (void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2;
- (BOOL)isStopped;
- (void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2;
- (void)URLSession:(id)arg0 task:(id)arg1 willPerformHTTPRedirection:(id)arg2 newRequest:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)setTask:(id)arg0;
- (void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)task;
- (void)setIsStopped:(BOOL)arg0;

@end