//
//     Generated by private class-dump
//

@class BDPRequestMetrics, NSString, NSDictionary, NSURL, NSError, BDPNetworkRequestParam, BDPNetworkHTTPResponse;
@protocol BDPNetworkTaskProtocol;

@interface BDPNetworkMonitorObject : NSObject {
    BOOL _isInnerRequest;
    long long _duration;
    long long _latency;
    long long _retryCount;
    NSURL *_generatedURL;
    id<BDPNetworkTaskProtocol> _request;
    BDPNetworkRequestParam *_requestParams;
    BDPNetworkHTTPResponse *_response;
    id _responseJSON;
    NSString *_appID;
    NSString *_appVersion;
    long long _appType;
    NSError *_responseError;
    BDPRequestMetrics *_metrics;
    NSDictionary *_extra;
    NSString *_requestLog;
}

@property (nonatomic) long long duration;
@property (nonatomic) long long latency;
@property (nonatomic) long long retryCount;
@property (retain, nonatomic) NSURL *generatedURL;
@property (retain, nonatomic) id<BDPNetworkTaskProtocol> request;
@property (retain, nonatomic) BDPNetworkRequestParam *requestParams;
@property (retain, nonatomic) BDPNetworkHTTPResponse *response;
@property (retain, nonatomic) id responseJSON;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *appVersion;
@property (nonatomic) long long appType;
@property (nonatomic) BOOL isInnerRequest;
@property (retain, nonatomic) NSError *responseError;
@property (retain, nonatomic) BDPRequestMetrics *metrics;
@property (retain, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSString *requestLog;

- (void)setExtra:(id)arg0;
- (void)setRequestLog:(id)arg0;
- (id)requestLog;
- (void)setResponseJSON:(id)arg0;
- (void)setIsInnerRequest:(BOOL)arg0;
- (void)setGeneratedURL:(id)arg0;
- (BOOL)isInnerRequest;
- (id)generatedURL;
- (long long)appType;
- (void)setAppID:(id)arg0;
- (void)setLatency:(long long)arg0;
- (id)metrics;
- (void)setAppVersion:(id)arg0;
- (void)setMetrics:(id)arg0;
- (void).cxx_destruct;
- (void)setRetryCount:(long long)arg0;
- (void)setResponse:(id)arg0;
- (long long)retryCount;
- (void)setRequest:(id)arg0;
- (id)response;
- (id)extra;
- (id)appVersion;
- (long long)duration;
- (void)setResponseError:(id)arg0;
- (id)request;
- (long long)latency;
- (id)appID;
- (void)setAppType:(long long)arg0;
- (id)responseError;
- (void)setDuration:(long long)arg0;
- (id)requestParams;
- (void)setRequestParams:(id)arg0;
- (id)responseJSON;

@end
