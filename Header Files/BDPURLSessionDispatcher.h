//
//     Generated by private class-dump
//

@class NSString;

@interface BDPURLSessionDispatcher : NSObject <NSURLSessionDelegate, NSURLSessionDataDelegate, NSURLSessionTaskDelegate, NSURLSessionDownloadDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)URLSession:(id)arg0 task:(id)arg1 didFinishCollectingMetrics:(id)arg2;
- (void)URLSession:(id)arg0 downloadTask:(id)arg1 didFinishDownloadingToURL:(id)arg2;
- (void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2;
- (void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2;
- (void)URLSession:(id)arg0 downloadTask:(id)arg1 didWriteData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)URLSession:(id)arg0 task:(id)arg1 didSendBodyData:(long long)arg2 totalBytesSent:(long long)arg3 totalBytesExpectedToSend:(long long)arg4;
- (void)URLSession:(id)arg0 task:(id)arg1 needNewBodyStream:(id /* block */)arg2;

@end
