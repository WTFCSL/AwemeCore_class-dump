//
//     Generated by private class-dump
//

@interface BDXBridgeAccountFetchMethod : BDXBridgeMethod

+ (id)metaInfo;

- (void)callWithParamModel:(id)arg0 completionHandler:(id /* block */)arg1;
- (Class)paramModelClass;
- (Class)resultModelClass;
- (void)processFetchResultWithResponseModel:(id)arg0 responseError:(id)arg1 TTHttpResponse:(id)arg2 completionHandler:(id /* block */)arg3;
- (long long)authType;
- (id)methodName;

@end
