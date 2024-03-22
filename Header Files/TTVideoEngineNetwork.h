//
//     Generated by private class-dump
//

@class NSString, NSURLSessionDataTask, NSURLSession;

@interface TTVideoEngineNetwork : NSObject <TTVideoEngineNetClient> {
    BOOL _useEphemeralSession;
    NSURLSession *_session;
    NSURLSessionDataTask *_urlRequest;
    double _timeout;
}

@property (retain, nonatomic) NSURLSession *session;
@property (retain, nonatomic) NSURLSessionDataTask *urlRequest;
@property (nonatomic) double timeout;
@property (nonatomic) BOOL useEphemeralSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)evaluateServerTrust:(struct __SecTrust { } *)arg0 forDomain:(id)arg1;
- (void)configTaskWithURL:(id)arg0 params:(id)arg1 headers:(id)arg2 completion:(id /* block */)arg3;
- (void)configTaskWithURL:(id)arg0 completion:(id /* block */)arg1;
- (void)invalidAndCancel;
- (void)configPostTaskWithURL:(id)arg0 params:(id)arg1 headers:(id)arg2 completion:(id /* block */)arg3;
- (BOOL)useEphemeralSession;
- (void)setUseEphemeralSession:(BOOL)arg0;
- (void)resume;
- (void).cxx_destruct;
- (void)URLSession:(id)arg0 task:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setSession:(id)arg0;
- (id)session;
- (id)initWithTimeout:(double)arg0;
- (double)timeout;
- (void)cancel;
- (id)urlRequest;
- (void)setTimeout:(double)arg0;
- (void)setupSession;
- (void)setUrlRequest:(id)arg0;

@end