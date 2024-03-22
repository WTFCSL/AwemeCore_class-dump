//
//     Generated by private class-dump
//

@interface BDUGLuckyNetworkService : NSObject {
    BOOL _shouldBlockSummitRequest;
}

@property (nonatomic) BOOL shouldBlockSummitRequest;

+ (id)netWorkString;
+ (void)__monitorWithService:(id)arg0 category:(id)arg1 response:(id)arg2;
+ (id)commonQueryParams;
+ (id)sharedInstance;

- (id)defaultDomain;
- (void)requestForJSONWithPath:(id)arg0 params:(id)arg1 method:(id)arg2 needCommonParams:(BOOL)arg3 retryTimes:(long long)arg4 headerField:(id)arg5 callback:(id /* block */)arg6;
- (void)requestPlainForJSONWithPath:(id)arg0 params:(id)arg1 method:(id)arg2 needCommonParams:(BOOL)arg3 headerField:(id)arg4 callback:(id /* block */)arg5;
- (void)requestForJSONWithPath:(id)arg0 params:(id)arg1 method:(id)arg2 headerField:(id)arg3 callback:(id /* block */)arg4;
- (void)registerResponseSerializerBlock:(id /* block */)arg0;
- (void)requestPlainForJSONWithPath:(id)arg0 params:(id)arg1 method:(id)arg2 headerField:(id)arg3 callback:(id /* block */)arg4;
- (BOOL)shouldBlockSummitRequest;
- (void)setShouldBlockSummitRequest:(BOOL)arg0;
- (void)registerRequestSerializerBlock:(id /* block */)arg0;
- (void)removeResponseSerializerBlock:(id /* block */)arg0;
- (void)__requestForJSONWithPath:(id)arg0 params:(id)arg1 method:(id)arg2 needCommonParams:(BOOL)arg3 retryTimes:(long long)arg4 headerField:(id)arg5 requestSerializer:(Class)arg6 callback:(id /* block */)arg7;
- (void)removeRequestSerializerBlock:(id /* block */)arg0;

@end