//
//     Generated by private class-dump
//

@class NSString, RxDeferred, NSURLRequest, RxWebServiceAccess;
@protocol RxHTTPRetryableValidatorInterface;

@interface __RxWebServiceAccessRetryableTask : NSObject <RxRetryable> {
    NSString *_identifier;
    unsigned long long _maxAttemptTimes;
    double _backoffDuration;
    RxWebServiceAccess *_webServiceAccess;
    NSURLRequest *_retryableRequest;
    RxDeferred *_deferred;
    id<RxHTTPRetryableValidatorInterface> _httpRetryableValidator;
}

@property (readonly, nonatomic) RxWebServiceAccess *webServiceAccess;
@property (readonly, nonatomic) NSURLRequest *retryableRequest;
@property (readonly, nonatomic) RxDeferred *deferred;
@property (readonly, nonatomic) id<RxHTTPRetryableValidatorInterface> httpRetryableValidator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)rx_retryableIdentifier;
- (id)rx_retryableVersion;
- (unsigned long long)rx_retryableMaxRetryTimes;
- (double)rx_retryableBaseBackoffDuration;
- (long long)rx_retryableReasons;
- (id)rx_retryWithTimes:(unsigned long long)arg0 reason:(long long)arg1;
- (id)retryableRequest;
- (id)webServiceAccess;
- (id)httpRetryableValidator;
- (id)initWithWebServiceAccess:(id)arg0 retryableRequest:(id)arg1 httpRetryableValidator:(id)arg2 deferred:(id)arg3;
- (void).cxx_destruct;
- (void)dealloc;
- (id)deferred;

@end