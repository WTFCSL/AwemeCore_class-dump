//
//     Generated by private class-dump
//

@class NSError, NSURLRequest, NSHTTPURLResponse;

@interface AMapNetworkFailModel : AMapNetworkMonitorModel {
    unsigned long long _failType;
    long long _errorCode;
    long long _count;
    double _spendTime;
    NSError *_error;
    NSURLRequest *_request;
    NSHTTPURLResponse *_response;
}

@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSURLRequest *request;
@property (retain, nonatomic) NSHTTPURLResponse *response;
@property (readonly, nonatomic) unsigned long long failType;
@property (readonly, nonatomic) long long errorCode;
@property (nonatomic) long long count;
@property (nonatomic) double spendTime;

- (id)realTimeHeader;
- (id)modelIdentifer;
- (BOOL)isFail;
- (id)offline_errorcode;
- (id)offline_errorsubcode;
- (BOOL)parseErrorInfo;
- (unsigned long long)failType;
- (double)spendTime;
- (id)initFailModelWithRequest:(id)arg0 response:(id)arg1 metrics:(id)arg2 error:(id)arg3;
- (void)setSpendTime:(double)arg0;
- (void)setCount:(long long)arg0;
- (void).cxx_destruct;
- (void)setResponse:(id)arg0;
- (void)setRequest:(id)arg0;
- (id)response;
- (id)request;
- (long long)errorCode;
- (long long)count;
- (void)setError:(id)arg0;
- (id)description;
- (id)error;

@end
