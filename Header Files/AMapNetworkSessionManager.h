//
//     Generated by private class-dump
//

@class NSURLSession, NSMutableDictionary, NSString, NSOperationQueue;

@interface AMapNetworkSessionManager : NSObject <NSURLSessionDataDelegate> {
    NSURLSession *_session;
    NSMutableDictionary *_sessionTasks;
    NSOperationQueue *_operationQueue;
}

@property (retain, nonatomic) NSURLSession *session;
@property (retain, nonatomic) NSMutableDictionary *sessionTasks;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)startRequest:(id)arg0 withOperation:(id)arg1;
+ (void)cancelWithOperation:(id)arg0;
+ (id)defaultManager;
+ (id)sendSynchronousRequest:(id)arg0 returningResponse:(id *)arg1 error:(id *)arg2;

- (BOOL)evaluateServerTrust:(struct __SecTrust { } *)arg0 forDomain:(id)arg1;
- (void)setSessionTasks:(id)arg0;
- (void)sendRequest:(id)arg0 withOperation:(id)arg1;
- (void)cancelTaskWithOperation:(id)arg0;
- (void)setOperationQueue:(id)arg0;
- (void)URLSession:(id)arg0 task:(id)arg1 didFinishCollectingMetrics:(id)arg2;
- (void).cxx_destruct;
- (void)URLSession:(id)arg0 task:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setSession:(id)arg0;
- (void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2;
- (id)session;
- (void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2;
- (void)URLSession:(id)arg0 didBecomeInvalidWithError:(id)arg1;
- (id)operationQueue;
- (void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)URLSession:(id)arg0 task:(id)arg1 didSendBodyData:(long long)arg2 totalBytesSent:(long long)arg3 totalBytesExpectedToSend:(long long)arg4;
- (id)sessionTasks;

@end
