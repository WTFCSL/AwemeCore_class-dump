//
//     Generated by private class-dump
//

@interface BDXBridgeCreatePOIMediaMethod : BDXBridgeMethod

+ (void)uploadVideoWithParamModel:(id)arg0 fileURL:(id)arg1 completion:(id /* block */)arg2;
+ (id)base64EncodeWithImagePath:(id)arg0;
+ (id)getCertWithParamModel:(id)arg0;
+ (void)exportAllItemsWithAssetsIDs:(id)arg0 bpeaCert:(id)arg1 OnCompletion:(id /* block */)arg2;
+ (id)metaInfo;

- (void)callWithParamModel:(id)arg0 completionHandler:(id /* block */)arg1;
- (Class)paramModelClass;
- (Class)resultModelClass;
- (long long)authType;
- (id)methodName;

@end
