//
//     Generated by private class-dump
//

@protocol NSURLSessionTaskDelegate <NSURLSessionDelegate>

@optional

- (void)URLSession:(id)arg0 task:(id)arg1 didFinishCollectingMetrics:(id)arg2;
- (void)URLSession:(id)arg0 task:(id)arg1 didFinishCollectingMetrics:(id)arg2;
- (void)URLSession:(id)arg0 task:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)URLSession:(id)arg0 task:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)URLSession:(id)arg0 taskIsWaitingForConnectivity:(id)arg1;
- (void)URLSession:(id)arg0 taskIsWaitingForConnectivity:(id)arg1;
- (void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2;
- (void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2;
- (void)URLSession:(id)arg0 task:(id)arg1 willBeginDelayedRequest:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)URLSession:(id)arg0 task:(id)arg1 willBeginDelayedRequest:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)URLSession:(id)arg0 task:(id)arg1 willPerformHTTPRedirection:(id)arg2 newRequest:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg0 task:(id)arg1 willPerformHTTPRedirection:(id)arg2 newRequest:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg0 task:(id)arg1 didSendBodyData:(long long)arg2 totalBytesSent:(long long)arg3 totalBytesExpectedToSend:(long long)arg4;
- (void)URLSession:(id)arg0 task:(id)arg1 didSendBodyData:(long long)arg2 totalBytesSent:(long long)arg3 totalBytesExpectedToSend:(long long)arg4;
- (void)URLSession:(id)arg0 task:(id)arg1 needNewBodyStream:(id /* block */)arg2;
- (void)URLSession:(id)arg0 task:(id)arg1 needNewBodyStream:(id /* block */)arg2;
- (void)URLSession:(id)arg0 didCreateTask:(id)arg1;
- (void)URLSession:(id)arg0 didCreateTask:(id)arg1;

@end
