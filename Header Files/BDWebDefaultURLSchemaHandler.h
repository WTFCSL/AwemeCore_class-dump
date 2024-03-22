//
//     Generated by private class-dump
//

@class NSString, NSURLSessionDataTask;
@protocol BDWebURLSchemeTask;

@interface BDWebDefaultURLSchemaHandler : NSObject <NSURLSessionDataDelegate, BDWebURLSchemeTaskHandler> {
    id<BDWebURLSchemeTask> _schemaTask;
    NSURLSessionDataTask *_task;
    double _httpTaskStartTime;
}

@property (retain) id<BDWebURLSchemeTask> schemaTask;
@property (retain) NSURLSessionDataTask *task;
@property (nonatomic) double httpTaskStartTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)falconMonitorResponseHeaders;
+ (BOOL)useRecursiveRequestFlagCheck;
+ (id)sharedDemux;
+ (id)httpURLResponseHeaders:(id)arg0;
+ (id)responseHeaderStringFromDic:(id)arg0;
+ (id)sharedCallbackQueue;
+ (BOOL)bdw_canHandleRequest:(id)arg0;

- (id)initWithWebView:(id)arg0 schemeTask:(id)arg1;
- (id)schemaTask;
- (void)setHttpTaskStartTime:(double)arg0;
- (double)httpTaskStartTime;
- (void)recordURLSession:(id)arg0 task:(id)arg1 finishWithError:(id)arg2;
- (void)bdw_startURLSchemeTask;
- (void)bdw_stopURLSchemeTask;
- (void)setSchemaTask:(id)arg0;
- (void).cxx_destruct;
- (void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2;
- (void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2;
- (void)URLSession:(id)arg0 task:(id)arg1 willPerformHTTPRedirection:(id)arg2 newRequest:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)setTask:(id)arg0;
- (void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)task;

@end