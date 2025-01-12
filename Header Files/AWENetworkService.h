//
//     Generated by private class-dump
//

@interface AWENetworkService : NSObject

+ (void)postWithURLStr:(id)arg0 parameters:(id)arg1 completion:(id /* block */)arg2;
+ (id)postWithURLString:(id)arg0 params:(id)arg1 completion:(id /* block */)arg2;
+ (id)postWithURLString:(id)arg0 params:(id)arg1 modelClass:(Class)arg2 completion:(id /* block */)arg3;
+ (id)getWithURLString:(id)arg0 params:(id)arg1 completion:(id /* block */)arg2;
+ (id)requestWithRequest:(id)arg0;
+ (id)getWithURLString:(id)arg0 params:(id)arg1 modelClass:(Class)arg2 completion:(id /* block */)arg3;
+ (BOOL)isPrefetching;
+ (id)networkConfig;
+ (void)downloadWithRequest:(id)arg0;
+ (id)getWithURLString:(id)arg0 params:(id)arg1 needCommonParams:(BOOL)arg2 completion:(id /* block */)arg3;
+ (id)getWithURLString:(id)arg0 params:(id)arg1 modelClass:(Class)arg2 cacheStrategy:(unsigned long long)arg3 cacheMaxAge:(double)arg4 completion:(id /* block */)arg5;
+ (id)getWithURLString:(id)arg0 params:(id)arg1 modelClass:(Class)arg2 cacheFetchStrategy:(unsigned long long)arg3 timeOut:(double)arg4 completion:(id /* block */)arg5;
+ (id)uploadWithRequest:(id)arg0;
+ (id)postWithURLString:(id)arg0 params:(id)arg1 needCommonParams:(BOOL)arg2 completion:(id /* block */)arg3;
+ (void)addResponseFilterForKey:(id)arg0 block:(id /* block */)arg1;
+ (id)getWithURLString:(id)arg0 params:(id)arg1 modelClass:(Class)arg2 responseBlock:(id /* block */)arg3 completionBlock:(id /* block */)arg4;
+ (void)p_processJsonObject:(id)arg0 URL:(id)arg1 error:(id)arg2 modelClass:(Class)arg3 completion:(id /* block */)arg4;
+ (id)getWithURLString:(id)arg0 params:(id)arg1 responseBlock:(id /* block */)arg2 completionBlock:(id /* block */)arg3;
+ (id)postWithURLString:(id)arg0 params:(id)arg1 responseBlock:(id /* block */)arg2 completionBlock:(id /* block */)arg3;
+ (id)uploadWithRequest_V2:(id)arg0;
+ (id)uploadWithRequestRequiringHttpResp:(id)arg0;
+ (void)setupWhiteURLListWithAWENetworkHighProcessQueue:(id)arg0;
+ (void)cleanCacheForKey:(id)arg0;
+ (void)cleanCacheForURLString:(id)arg0 params:(id)arg1;
+ (void)cleanAllCaches;
+ (void)cleanAllCaches;
+ (BOOL)isPrefetchingWithKey:(id)arg0;
+ (BOOL)isPrefetchingWithURLString:(id)arg0 params:(id)arg1;
+ (void)configureCacheWithMemoryLimit:(unsigned long long)arg0;
+ (id)getWithURLString:(id)arg0 params:(id)arg1 modelClass:(Class)arg2 cacheStrategy:(id)arg3 completion:(id /* block */)arg4;
+ (id)getWithURLString:(id)arg0 params:(id)arg1 modelClass:(Class)arg2 cacheFetchStrategy:(unsigned long long)arg3 expiredCount:(long long)arg4 completion:(id /* block */)arg5;
+ (void)addRequestFilterForKey:(id)arg0 block:(id /* block */)arg1;
+ (void)addResponseMutableDataFilterForKey:(id)arg0 block:(id /* block */)arg1;
+ (id)getWithURLString:(id)arg0 params:(id)arg1 needCommonParams:(BOOL)arg2 modelClass:(Class)arg3 responseBlock:(id /* block */)arg4 cacheStrategy:(unsigned long long)arg5 cacheMaxAge:(double)arg6 completionBlock:(id /* block */)arg7;
+ (void)fetchAPIResponseCacheFromURLString:(id)arg0 params:(id)arg1 modelClass:(Class)arg2 targetAttributes:(id)arg3 maxAge:(double)arg4 withBlock:(id /* block */)arg5;
+ (id)preloadGetWithURLString:(id)arg0 params:(id)arg1 modelClass:(Class)arg2 cacheMaxAge:(double)arg3 completion:(id /* block */)arg4;
+ (void)configureCacheWithMemoryLimit:(unsigned long long)arg0 diskLimit:(unsigned long long)arg1;
+ (id)preprocessQueue;
+ (id)_requestWithRequest:(id)arg0;
+ (id)_cacheKeyFromURLString:(id)arg0 params:(id)arg1;
+ (id)_convertJsonObject:(id)arg0 modelClass:(Class)arg1;
+ (void)_cacheAPIResponseFromURLString:(id)arg0 params:(id)arg1 method:(id)arg2 asJsonObj:(id)arg3;
+ (void)callbackQueueControl:(id)arg0 callbackBlock:(id /* block */)arg1;
+ (void)processJsonObject:(id)arg0 URL:(id)arg1 error:(id)arg2 modelClass:(Class)arg3 completion:(id /* block */)arg4;
+ (id)perf_requestWithRequest:(id)arg0;
+ (void)perf_processJsonObject:(id)arg0 URL:(id)arg1 error:(id)arg2 modelClass:(Class)arg3 completion:(id /* block */)arg4;
+ (id)getWithURLString:(id)arg0 params:(id)arg1 headers:(id)arg2 completion:(id /* block */)arg3;
+ (id)getWithURLString:(id)arg0 params:(id)arg1 timeout:(double)arg2 completion:(id /* block */)arg3;
+ (id)getWithURLString:(id)arg0 params:(id)arg1 headers:(id)arg2 timeout:(double)arg3 completion:(id /* block */)arg4;
+ (id)postWithURLString:(id)arg0 params:(id)arg1 headers:(id)arg2 completion:(id /* block */)arg3;
+ (id)shared;

@end
