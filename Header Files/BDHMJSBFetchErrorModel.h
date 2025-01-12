//
//     Generated by private class-dump
//

@class NSString;

@interface BDHMJSBFetchErrorModel : NSObject {
    NSString *_method;
    NSString *_url;
    long long _errorCode;
    NSString *_errorMsg;
    long long _bridgeCode;
    long long _httpCode;
    long long _requestErrorCode;
    NSString *_requestErrorMsg;
}

@property (copy, nonatomic) NSString *method;
@property (copy, nonatomic) NSString *url;
@property (nonatomic) long long errorCode;
@property (copy, nonatomic) NSString *errorMsg;
@property (nonatomic) long long bridgeCode;
@property (nonatomic) long long httpCode;
@property (nonatomic) long long requestErrorCode;
@property (copy, nonatomic) NSString *requestErrorMsg;

- (void)setErrorMsg:(id)arg0;
- (id)errorMsg;
- (long long)bridgeCode;
- (id)requestErrorMsg;
- (id)lynxJSBFetchErrorDict;
- (id)webJSBFetchErrorDict;
- (void)setBridgeCode:(long long)arg0;
- (void)setRequestErrorMsg:(id)arg0;
- (void).cxx_destruct;
- (id)method;
- (void)setMethod:(id)arg0;
- (void)setUrl:(id)arg0;
- (long long)requestErrorCode;
- (void)setErrorCode:(long long)arg0;
- (void)setHttpCode:(long long)arg0;
- (long long)errorCode;
- (long long)httpCode;
- (void)setRequestErrorCode:(long long)arg0;
- (id)url;

@end
