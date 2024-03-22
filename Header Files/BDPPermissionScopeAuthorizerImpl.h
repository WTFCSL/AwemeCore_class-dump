//
//     Generated by private class-dump
//

@class NSString;

@interface BDPPermissionScopeAuthorizerImpl : NSObject <BDPPermissionScopeAuthorizerInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (id)fixCompatibleScope:(id)arg0;
- (void)eventAuthResultForScope:(id)arg0 error:(id)arg1 uniqueID:(id)arg2;
- (id)initService;
- (void)acquirePermissionForScope:(id)arg0 completion:(id /* block */)arg1 uniqueID:(id)arg2;
- (void)acquirePermissionForScopes:(id)arg0 completion:(id /* block */)arg1 uniqueID:(id)arg2;
- (BOOL)isAuthFreeScope:(id)arg0 uniqueID:(id)arg1;
- (void)acquireSystemPermissionForScope:(id)arg0 completion:(id /* block */)arg1 uniqueID:(id)arg2;
- (void)acquirePermissionOnTopForScope:(id)arg0 completion:(id /* block */)arg1 uniqueID:(id)arg2;
- (void)acquirePermissionOnTopForScopes:(id)arg0 completion:(id /* block */)arg1 uniqueID:(id)arg2;
- (void)acquirePermissionForScope:(id)arg0 isOnTop:(BOOL)arg1 completion:(id /* block */)arg2 uniqueID:(id)arg3;
- (void)acquirePermissionForScopes:(id)arg0 isOnTop:(BOOL)arg1 completion:(id /* block */)arg2 uniqueID:(id)arg3;
- (void)acquirePermissionForScope:(id)arg0 isOnTop:(BOOL)arg1 needRecord:(BOOL)arg2 completion:(id /* block */)arg3 uniqueID:(id)arg4;
- (BOOL)asyncUpdateScope;

@end
