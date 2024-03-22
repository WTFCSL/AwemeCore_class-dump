//
//     Generated by private class-dump
//

@class NSString, NSDictionary, IESECHTTPResponse;
@protocol IESECHTTPRequestTask;

@interface IESECHTTPRequest : NSObject {
    NSString *_rawAbsoluteURLString;
    BOOL _useJSONBodyWhenPost;
    BOOL _allowEmptyBodyResponse;
    BOOL _bypassInterceptor;
    BOOL _needCommonParams;
    NSDictionary *_params;
    unsigned long long _method;
    NSDictionary *_headers;
    NSString *_additionalURLQueryString;
    id<IESECHTTPRequestTask> _requestTask;
    IESECHTTPResponse *_response;
    id /* block */ _metricsBlock;
}

@property (readonly, nonatomic) NSString *rawAbsoluteURLString;
@property (copy, nonatomic) NSString *absoluteURLString;
@property (copy, nonatomic) NSDictionary *params;
@property (nonatomic) unsigned long long method;
@property (readonly, nonatomic) NSString *methodString;
@property (copy, nonatomic) NSDictionary *headers;
@property (copy, nonatomic) NSString *additionalURLQueryString;
@property (nonatomic) BOOL useJSONBodyWhenPost;
@property (nonatomic) BOOL allowEmptyBodyResponse;
@property (nonatomic) BOOL bypassInterceptor;
@property (nonatomic) BOOL needCommonParams;
@property (retain, nonatomic) id<IESECHTTPRequestTask> requestTask;
@property (retain, nonatomic) IESECHTTPResponse *response;
@property (readonly, nonatomic) NSString *requestDescription;
@property (copy, nonatomic) id /* block */ metricsBlock;

- (void)setNeedCommonParams:(BOOL)arg0;
- (BOOL)needCommonParams;
- (void)setMetricsBlock:(id /* block */)arg0;
- (void)setAbsoluteURLString:(id)arg0;
- (void)setBypassInterceptor:(BOOL)arg0;
- (void)setAdditionalURLQueryString:(id)arg0;
- (id)absoluteURLString;
- (id /* block */)metricsBlock;
- (BOOL)useJSONBodyWhenPost;
- (id)methodString;
- (BOOL)allowEmptyBodyResponse;
- (void)setUseJSONBodyWhenPost:(BOOL)arg0;
- (id)rawAbsoluteURLString;
- (BOOL)bypassInterceptor;
- (id)additionalURLQueryString;
- (void)setAllowEmptyBodyResponse:(BOOL)arg0;
- (void)setRequestTask:(id)arg0;
- (id)init;
- (void)setHeaders:(id)arg0;
- (void).cxx_destruct;
- (unsigned long long)method;
- (void)setResponse:(id)arg0;
- (id)headers;
- (void)setMethod:(unsigned long long)arg0;
- (id)response;
- (id)requestTask;
- (id)params;
- (id)requestDescription;
- (void)setParams:(id)arg0;

@end
