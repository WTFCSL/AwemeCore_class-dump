//
//     Generated by private class-dump
//

@interface BDPAPIPermissionAuthorizer : NSObject

+ (id)authList;
+ (void)APITryGettingPermission:(id)arg0 uniqueID:(id)arg1 completion:(id /* block */)arg2;
+ (void)APITryGettingPermissionWithMethod:(id)arg0 uniqueID:(id)arg1 completion:(id /* block */)arg2;
+ (BOOL)checkBridgeInValidateAndFreeListWithMethod:(id)arg0 uniqueID:(id)arg1;
+ (BOOL)checkPluginBridgeWithMethod:(id)arg0;
+ (BOOL)checkBridgeCallableWithMethod:(id)arg0 uniqueID:(id)arg1;
+ (id)dynamicPluginAuthList;

@end