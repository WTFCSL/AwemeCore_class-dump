//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface BDXBridgeRequestParam : NSObject {
    BOOL _needCommonParams;
    BOOL _callbackOnBackgroundThread;
    BOOL _isCustomizedCookie;
    NSString *_urlString;
    NSString *_httpMethod;
    NSDictionary *_headers;
    NSDictionary *_params;
    Class _requestSerializer;
    Class _responseSerializer;
}

@property (copy, nonatomic) NSString *urlString;
@property (copy, nonatomic) NSString *httpMethod;
@property (copy, nonatomic) NSDictionary *headers;
@property (copy, nonatomic) NSDictionary *params;
@property (nonatomic) BOOL needCommonParams;
@property (retain, nonatomic) Class requestSerializer;
@property (retain, nonatomic) Class responseSerializer;
@property (nonatomic) BOOL callbackOnBackgroundThread;
@property (nonatomic) BOOL isCustomizedCookie;

- (void)setNeedCommonParams:(BOOL)arg0;
- (BOOL)needCommonParams;
- (void)setResponseSerializer:(Class)arg0;
- (Class)responseSerializer;
- (void)setRequestSerializer:(Class)arg0;
- (Class)requestSerializer;
- (void)setIsCustomizedCookie:(BOOL)arg0;
- (BOOL)isCustomizedCookie;
- (void)setCallbackOnBackgroundThread:(BOOL)arg0;
- (BOOL)callbackOnBackgroundThread;
- (id)urlString;
- (id)httpMethod;
- (void)setHeaders:(id)arg0;
- (void).cxx_destruct;
- (id)headers;
- (void)setHttpMethod:(id)arg0;
- (id)description;
- (void)setUrlString:(id)arg0;
- (id)params;
- (void)setParams:(id)arg0;

@end