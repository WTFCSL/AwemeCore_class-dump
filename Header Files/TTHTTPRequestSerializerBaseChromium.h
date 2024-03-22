//
//     Generated by private class-dump
//

@class NSString, NSSet;

@interface TTHTTPRequestSerializerBaseChromium : NSObject <TTHTTPRequestSerializerProtocol> {
    NSString *_defaultUserAgentString;
    NSSet *_HTTPMethodsEncodingParametersInURI;
}

@property (copy, nonatomic) NSString *defaultUserAgentString;
@property (retain, nonatomic) NSSet *HTTPMethodsEncodingParametersInURI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serializer;

- (id)URLRequestWithRequestModel:(id)arg0 commonParams:(id)arg1;
- (id)URLRequestWithURL:(id)arg0 params:(id)arg1 method:(id)arg2 constructingBodyBlock:(id /* block */)arg3 commonParams:(id)arg4;
- (id)URLRequestWithURL:(id)arg0 headerField:(id)arg1 params:(id)arg2 method:(id)arg3 constructingBodyBlock:(id /* block */)arg4 commonParams:(id)arg5;
- (void)setHTTPMethodsEncodingParametersInURI:(id)arg0;
- (id)HTTPMethodsEncodingParametersInURI;
- (id)defaultUserAgentString;
- (void)_buildRequestHeaders:(id)arg0;
- (void)setDefaultUserAgentString:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)userAgentString;

@end
