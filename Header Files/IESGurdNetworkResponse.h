//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSError;

@interface IESGurdNetworkResponse : NSObject {
    long long _statusCode;
    id _responseObject;
    NSError *_error;
    NSDictionary *_allHeaderFields;
    NSString *_requestURLString;
    NSDictionary *_requestParams;
}

@property (copy, nonatomic) NSString *requestURLString;
@property (copy, nonatomic) NSDictionary *requestParams;
@property (nonatomic) long long statusCode;
@property (retain, nonatomic) id responseObject;
@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) NSDictionary *allHeaderFields;

- (void)setAllHeaderFields:(id)arg0;
- (void)setResponseObject:(id)arg0;
- (id)requestURLString;
- (void)setRequestURLString:(id)arg0;
- (long long)statusCode;
- (void)setStatusCode:(long long)arg0;
- (void).cxx_destruct;
- (void)setError:(id)arg0;
- (id)error;
- (id)allHeaderFields;
- (id)requestParams;
- (void)setRequestParams:(id)arg0;
- (id)responseObject;

@end