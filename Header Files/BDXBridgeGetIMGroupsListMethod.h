//
//     Generated by private class-dump
//

@interface BDXBridgeGetIMGroupsListMethod : BDXBridgeMethod

+ (id)metaInfo;

- (void)callWithParamModel:(id)arg0 completionHandler:(id /* block */)arg1;
- (Class)paramModelClass;
- (Class)resultModelClass;
- (void)handleGroupList:(id)arg0 type:(id)arg1 limit:(long long)arg2 completionHandler:(id /* block */)arg3;
- (long long)authType;
- (id)methodName;

@end
