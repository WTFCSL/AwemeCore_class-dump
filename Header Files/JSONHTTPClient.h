//
//     Generated by private class-dump
//

@interface JSONHTTPClient : NSObject

+ (void)setRequestContentType:(id)arg0;
+ (void)getJSONFromURLWithString:(id)arg0 params:(id)arg1 completion:(id /* block */)arg2;
+ (void)postJSONFromURLWithString:(id)arg0 params:(id)arg1 completion:(id /* block */)arg2;
+ (void)postJSONFromURLWithString:(id)arg0 bodyString:(id)arg1 completion:(id /* block */)arg2;
+ (id)contentTypeForRequestString:(id)arg0;
+ (id)urlEncode:(id)arg0;
+ (void)requestDataFromURL:(id)arg0 method:(id)arg1 requestBody:(id)arg2 headers:(id)arg3 handler:(id /* block */)arg4;
+ (void)JSONFromURLWithString:(id)arg0 method:(id)arg1 params:(id)arg2 orBodyString:(id)arg3 headers:(id)arg4 completion:(id /* block */)arg5;
+ (void)JSONFromURLWithString:(id)arg0 method:(id)arg1 params:(id)arg2 orBodyData:(id)arg3 headers:(id)arg4 completion:(id /* block */)arg5;
+ (void)requestDataFromURL:(id)arg0 method:(id)arg1 params:(id)arg2 headers:(id)arg3 handler:(id /* block */)arg4;
+ (void)JSONFromURLWithString:(id)arg0 method:(id)arg1 params:(id)arg2 orBodyString:(id)arg3 completion:(id /* block */)arg4;
+ (void)setDefaultTextEncoding:(unsigned long long)arg0;
+ (void)getJSONFromURLWithString:(id)arg0 completion:(id /* block */)arg1;
+ (void)postJSONFromURLWithString:(id)arg0 bodyData:(id)arg1 completion:(id /* block */)arg2;
+ (void)initialize;
+ (void)setCachingPolicy:(unsigned long long)arg0;
+ (void)setTimeoutInSeconds:(int)arg0;
+ (id)requestHeaders;

@end
