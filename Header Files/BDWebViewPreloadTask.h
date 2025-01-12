//
//     Generated by private class-dump
//

@class NSDate, BDPreloadOperationQueue, TTHttpTask, NSURLRequest;

@interface BDWebViewPreloadTask : NSObject {
    BOOL _failed;
    id /* block */ _headerCallback;
    id /* block */ _dataCallback;
    id /* block */ _callbackWithResponse;
    id /* block */ _redirectCallback;
    NSURLRequest *_request;
    NSDate *_hitDate;
    NSDate *_startDate;
    NSDate *_responseDate;
    BDPreloadOperationQueue *_operationQueue;
    TTHttpTask *_httpTask;
    id /* block */ _innerHeaderCallBack;
    id /* block */ _innerDataCallBack;
    id /* block */ _innerCallBackWithResponse;
    id /* block */ _innerRedirectCallBack;
}

@property (retain, nonatomic) BDPreloadOperationQueue *operationQueue;
@property (retain, nonatomic) TTHttpTask *httpTask;
@property BOOL failed;
@property (copy, nonatomic) id /* block */ innerHeaderCallBack;
@property (copy, nonatomic) id /* block */ innerDataCallBack;
@property (copy, nonatomic) id /* block */ innerCallBackWithResponse;
@property (copy, nonatomic) id /* block */ innerRedirectCallBack;
@property (copy, nonatomic) id /* block */ headerCallback;
@property (copy, nonatomic) id /* block */ dataCallback;
@property (copy, nonatomic) id /* block */ callbackWithResponse;
@property (copy, nonatomic) id /* block */ redirectCallback;
@property (retain, nonatomic) NSURLRequest *request;
@property (retain) NSDate *hitDate;
@property (retain) NSDate *startDate;
@property (retain) NSDate *responseDate;

- (void)setHttpTask:(id)arg0;
- (id)httpTask;
- (void)setHeaderCallback:(id /* block */)arg0;
- (id /* block */)headerCallback;
- (void)setSkipSSLCertificateError:(BOOL)arg0;
- (void)setDataCallback:(id /* block */)arg0;
- (void)setCallbackWithResponse:(id /* block */)arg0;
- (void)setRedirectCallback:(id /* block */)arg0;
- (id /* block */)dataCallback;
- (id /* block */)callbackWithResponse;
- (id /* block */)redirectCallback;
- (id)initWithRequest:(id)arg0 headerCallback:(id /* block */)arg1 dataCallback:(id /* block */)arg2 callbackWithResponse:(id /* block */)arg3 redirectCallback:(id /* block */)arg4;
- (void)setHitDate:(id)arg0;
- (void)setInnerHeaderCallBack:(id /* block */)arg0;
- (void)setInnerDataCallBack:(id /* block */)arg0;
- (void)setInnerRedirectCallBack:(id /* block */)arg0;
- (void)setInnerCallBackWithResponse:(id /* block */)arg0;
- (id)hitDate;
- (void)reResume;
- (unsigned long long)optimizedTime;
- (id /* block */)innerHeaderCallBack;
- (id /* block */)innerDataCallBack;
- (id /* block */)innerCallBackWithResponse;
- (id /* block */)innerRedirectCallBack;
- (void)setResponseDate:(id)arg0;
- (id)responseDate;
- (void)setOperationQueue:(id)arg0;
- (void)resume;
- (void).cxx_destruct;
- (void)setRequest:(id)arg0;
- (BOOL)isValid;
- (void)setPriority:(float)arg0;
- (BOOL)failed;
- (id)request;
- (id)operationQueue;
- (id)startDate;
- (void)cancel;
- (void)setStartDate:(id)arg0;
- (void)dealloc;
- (void)setFailed:(BOOL)arg0;

@end
