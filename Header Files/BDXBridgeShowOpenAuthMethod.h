//
//     Generated by private class-dump
//

@interface BDXBridgeShowOpenAuthMethod : BDXBridgeMethod

+ (id)metaInfo;

- (void)callWithParamModel:(id)arg0 completionHandler:(id /* block */)arg1;
- (Class)paramModelClass;
- (Class)resultModelClass;
- (void)callbackSuccess:(id /* block */)arg0 info:(id)arg1;
- (void)callbackError:(id /* block */)arg0 errMsg:(id)arg1 info:(id)arg2;
- (long long)authType;
- (id)methodName;

@end
