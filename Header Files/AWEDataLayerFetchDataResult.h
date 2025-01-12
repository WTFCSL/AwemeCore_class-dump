//
//     Generated by private class-dump
//

@class AWEDataLayerFetchDataToken, NSError;

@interface AWEDataLayerFetchDataResult : NSObject {
    AWEDataLayerFetchDataToken *_token;
    long long _statusCode;
    id _data;
    id _responseObject;
    long long _dataSource;
    NSError *_error;
    long long _networkRetryTimes;
}

@property (retain, nonatomic) AWEDataLayerFetchDataToken *token;
@property (nonatomic) long long statusCode;
@property (retain, nonatomic) id data;
@property (retain, nonatomic) id responseObject;
@property (nonatomic) long long dataSource;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) long long networkRetryTimes;

- (void)setResponseObject:(id)arg0;
- (long long)networkRetryTimes;
- (void)setNetworkRetryTimes:(long long)arg0;
- (long long)statusCode;
- (void)setStatusCode:(long long)arg0;
- (void)setDataSource:(long long)arg0;
- (long long)dataSource;
- (id)data;
- (void).cxx_destruct;
- (void)setData:(id)arg0;
- (void)setToken:(id)arg0;
- (id)token;
- (void)setError:(id)arg0;
- (id)error;
- (id)responseObject;

@end
