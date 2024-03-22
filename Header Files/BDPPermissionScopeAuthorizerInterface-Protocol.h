//
//     Generated by private class-dump
//

@protocol BDPPermissionScopeAuthorizerInterface <BDPService>

- (void)acquirePermissionForScope:(id)arg0 completion:(id /* block */)arg1 uniqueID:(id)arg2;
- (void)acquirePermissionForScopes:(id)arg0 completion:(id /* block */)arg1 uniqueID:(id)arg2;
- (BOOL)isAuthFreeScope:(id)arg0 uniqueID:(id)arg1;

@optional

- (void)acquireSystemPermissionForScope:(id)arg0 completion:(id /* block */)arg1 uniqueID:(id)arg2;
- (void)acquirePermissionOnTopForScope:(id)arg0 completion:(id /* block */)arg1 uniqueID:(id)arg2;
- (void)acquirePermissionOnTopForScopes:(id)arg0 completion:(id /* block */)arg1 uniqueID:(id)arg2;

@end