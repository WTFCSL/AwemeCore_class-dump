//
//     Generated by private class-dump
//

@interface AWEXBridgePdaOpenVideoDetailMethod : BDXBridgeMethod

+ (id)metaInfo;

- (void)callWithParamModel:(id)arg0 completionHandler:(id /* block */)arg1;
- (Class)paramModelClass;
- (Class)resultModelClass;
- (id)awe_checkParamValidity:(id)arg0;
- (BOOL)openVideoList:(id)arg0 domainInfo:(id)arg1;
- (BOOL)openSingleVideo:(id)arg0 domainInfo:(id)arg1;
- (long long)authType;
- (id)methodName;

@end
