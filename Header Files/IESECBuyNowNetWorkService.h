//
//     Generated by private class-dump
//

@interface IESECBuyNowNetWorkService : NSObject

+ (id)getWithURLString:(id)arg0 params:(id)arg1 modelClass:(Class)arg2 completion:(id /* block */)arg3;
+ (id)requestWithURLString:(id)arg0 params:(id)arg1 headers:(id)arg2 usePOST:(BOOL)arg3 modelClass:(Class)arg4 completion:(id /* block */)arg5;
+ (id)getLogIdWithResponse:(id)arg0 andError:(id)arg1;
+ (id)postWithURLString:(id)arg0 params:(id)arg1 modelClass:(Class)arg2 completion:(id /* block */)arg3 metricsBlock:(id /* block */)arg4;
+ (id)getAPIExtraParams;
+ (id)postRequestWithURLString:(id)arg0 params:(id)arg1 modelClass:(Class)arg2 completion:(id /* block */)arg3;

@end
