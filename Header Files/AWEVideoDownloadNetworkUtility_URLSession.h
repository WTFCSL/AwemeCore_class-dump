//
//     Generated by private class-dump
//

@class NSURLSession, NSString, AWEVideoCacheRequestTask, NSURLSessionDataTask;

@interface AWEVideoDownloadNetworkUtility_URLSession : NSObject <NSURLSessionDataDelegate, AWEVideoDownloadNetworkUtility> {
    NSURLSession *_session;
    NSURLSessionDataTask *_runningTask;
    AWEVideoCacheRequestTask *_cacheRequestTask;
}

@property (retain, nonatomic) NSURLSession *session;
@property (retain, nonatomic) NSURLSessionDataTask *runningTask;
@property (weak, nonatomic) AWEVideoCacheRequestTask *cacheRequestTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instanceWithTask:(id)arg0;

- (BOOL)startTaskWithRequest:(id)arg0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 priority:(float)arg2;
- (void)cancelNetworkRequest;
- (void)destroyNetworkRequest;
- (void)setCacheRequestTask:(id)arg0;
- (id)cacheRequestTask;
- (void).cxx_destruct;
- (void)setSession:(id)arg0;
- (void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2;
- (id)session;
- (id)sessionQueue;
- (void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2;
- (void)URLSession:(id)arg0 task:(id)arg1 willPerformHTTPRedirection:(id)arg2 newRequest:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)runningTask;
- (void)setRunningTask:(id)arg0;

@end