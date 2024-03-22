//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, NSObject;
@protocol BUADServiceNetProtocol, BUADRequestProtocol, BUADJsonResponseSerializerProtocol, OS_dispatch_queue;

@interface BUNetworkAgent : NSObject <NSURLSessionTaskDelegate> {
    NSMutableDictionary *_requestsRecord;
    NSObject<OS_dispatch_queue> *_processingQueue;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    id<BUADServiceNetProtocol> _netProtocolImp;
    id<BUADJsonResponseSerializerProtocol> _jsonResponseSerializer;
    id<BUADRequestProtocol> _httpRequestManager;
}

@property (retain, nonatomic) id<BUADServiceNetProtocol> netProtocolImp;
@property (retain, nonatomic) id<BUADJsonResponseSerializerProtocol> jsonResponseSerializer;
@property (retain, nonatomic) id<BUADRequestProtocol> httpRequestManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)openNetWorkDebug;
+ (id)sharedAgent;

- (BOOL)evaluateServerTrust:(struct __SecTrust { } *)arg0 forDomain:(id)arg1;
- (id)netProtocolImp;
- (void)setHttpRequestManager:(id)arg0;
- (id)httpRequestManager;
- (id)buildRequestUrl:(id)arg0;
- (id)requestSerializerForRequest:(id)arg0;
- (id)dataTaskWithHTTPMethod:(id)arg0 requestSerializer:(id)arg1 URLString:(id)arg2 parameters:(id)arg3 useHTTP3:(BOOL)arg4 error:(id *)arg5;
- (id)dataTaskWithHTTPMethod:(id)arg0 requestSerializer:(id)arg1 URLString:(id)arg2 httpBody:(id)arg3 parameters:(id)arg4 useHTTP3:(BOOL)arg5 error:(id *)arg6;
- (id)sessionTaskForRequest:(id)arg0 error:(id *)arg1;
- (void)requestDidFailWithRequest:(id)arg0 error:(id)arg1 fromRequest:(BOOL)arg2;
- (void)addRequestToRecord:(id)arg0;
- (void)removeRequestFromRecord:(id)arg0;
- (unsigned long long)stringEncodingWithRequest:(id)arg0;
- (id)jsonResponseSerializer;
- (void)requestDidSucceedWithRequest:(id)arg0;
- (void)handleRequestResult:(id)arg0 responseObject:(id)arg1 error:(id)arg2;
- (void)setSessionDidReceiveAuthenticationChanllengeBlock:(id /* block */)arg0;
- (void)setNetProtocolImp:(id)arg0;
- (void)setJsonResponseSerializer:(id)arg0;
- (id)init;
- (void)URLSession:(id)arg0 task:(id)arg1 didFinishCollectingMetrics:(id)arg2;
- (void).cxx_destruct;
- (void)cancelAllRequests;
- (void)addRequest:(id)arg0;
- (void)cancelRequest:(id)arg0;

@end