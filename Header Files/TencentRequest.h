//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, NSMutableData, NSURLConnection;
@protocol TencentRequestDelegate;

@interface TencentRequest : NSObject <NSURLConnectionDelegate, NSURLConnectionDataDelegate> {
    id<TencentRequestDelegate> _delegate;
    NSString *_url;
    NSString *_httpMethod;
    NSMutableDictionary *_params;
    NSURLConnection *_connection;
    NSMutableData *_responseText;
    NSMutableDictionary *_httpHeaders;
}

@property (nonatomic) id<TencentRequestDelegate> delegate;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *httpMethod;
@property (readonly, nonatomic) NSMutableDictionary *params;
@property (readonly, nonatomic) NSURLConnection *connection;
@property (readonly, nonatomic) NSMutableData *responseText;
@property (readonly, nonatomic) NSMutableDictionary *httpHeaders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serializeURL:(id)arg0 params:(id)arg1 httpMethod:(id)arg2;
+ (id)getRequestWithParams:(id)arg0 httpMethod:(id)arg1 delegate:(id)arg2 requestURL:(id)arg3;
+ (id)serializeURL:(id)arg0 params:(id)arg1;

- (void)utfAppendBody:(id)arg0 data:(id)arg1;
- (id)formError:(long long)arg0 userInfo:(id)arg1;
- (id)parseJsonResponse:(id)arg0 error:(id *)arg1;
- (id)generatePostBody;
- (id)generateOtherPostBody;
- (void)connectWithRequest:(id)arg0;
- (void)connect;
- (void)connection:(id)arg0 didFailWithError:(id)arg1;
- (id)httpMethod;
- (void)connectionDidFinishLoading:(id)arg0;
- (void)failWithError:(id)arg0;
- (id)httpHeaders;
- (void)connection:(id)arg0 didSendBodyData:(long long)arg1 totalBytesWritten:(long long)arg2 totalBytesExpectedToWrite:(long long)arg3;
- (void)setUrl:(id)arg0;
- (void)setHttpMethod:(id)arg0;
- (void)connection:(id)arg0 didReceiveResponse:(id)arg1;
- (void)connection:(id)arg0 didReceiveData:(id)arg1;
- (id)delegate;
- (BOOL)loading;
- (void)cancel;
- (id)connection;
- (id)params;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (id)url;
- (void)connection:(id)arg0 didWriteData:(long long)arg1 totalBytesWritten:(long long)arg2 expectedTotalBytes:(long long)arg3;
- (id)connection:(id)arg0 willCacheResponse:(id)arg1;
- (void)handleResponseData:(id)arg0;
- (id)responseText;

@end
