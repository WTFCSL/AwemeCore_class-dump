//
//     Generated by private class-dump
//

@class NSString;

@interface TTAccountHTTPRequestSerializer : TTDefaultHTTPRequestSerializer {
    BOOL _followRedirect;
    NSString *_defaultUserAgent;
}

@property (copy, nonatomic) NSString *defaultUserAgent;
@property (nonatomic) BOOL followRedirect;

+ (id)serializer;

- (id)URLRequestWithRequestModel:(id)arg0 commonParams:(id)arg1;
- (id)URLRequestWithURL:(id)arg0 params:(id)arg1 method:(id)arg2 constructingBodyBlock:(id /* block */)arg3 commonParams:(id)arg4;
- (id)URLRequestWithURL:(id)arg0 headerField:(id)arg1 params:(id)arg2 method:(id)arg3 constructingBodyBlock:(id /* block */)arg4 commonParams:(id)arg5;
- (id)defaultUserAgent;
- (void)setFollowRedirect:(BOOL)arg0;
- (void)commonHandleWithRequest:(id)arg0;
- (BOOL)followRedirect;
- (id)init;
- (void).cxx_destruct;
- (void)setDefaultUserAgent:(id)arg0;

@end
