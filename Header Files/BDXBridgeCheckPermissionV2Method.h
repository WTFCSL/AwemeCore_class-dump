//
//     Generated by private class-dump
//

@interface BDXBridgeCheckPermissionV2Method : BDXBridgeMethod

+ (id)permissionStatusForLocation;
+ (unsigned long long)permissionStatusForCalendarWithRefererContext:(id)arg0;
+ (unsigned long long)permissionStatusForMediaType:(id)arg0;
+ (void)notificationPermissionWithCompletion:(id /* block */)arg0;
+ (void)checkPermission:(unsigned long long)arg0 refererContext:(id)arg1 completion:(id /* block */)arg2;
+ (void)execCheckPermission:(unsigned long long)arg0 refererContext:(id)arg1 completion:(id /* block */)arg2;
+ (id)metaInfo;

- (void)callWithParamModel:(id)arg0 completionHandler:(id /* block */)arg1;
- (Class)paramModelClass;
- (Class)resultModelClass;
- (void)_callbackWithPermissionStatus:(unsigned long long)arg0 completionHandler:(id /* block */)arg1;
- (long long)authType;
- (id)methodName;

@end
