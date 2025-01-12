//
//     Generated by private class-dump
//

@class NSString;

@interface CSJWCMiniappManager : NSObject <CSJWCApiProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)handleWCMiniappActionWithModel:(id)arg0 context:(id)arg1 completionBlock:(id /* block */)arg2;
+ (BOOL)validWCOpenSDK;
+ (BOOL)pcsj_handleWCMiniappSchemeActionWithModel:(id)arg0 context:(id)arg1 completionBlock:(id /* block */)arg2;
+ (BOOL)pcsj_handleWCMiniappOpenSDKActionWithModel:(id)arg0 context:(id)arg1 completionBlock:(id /* block */)arg2;
+ (void)pcsj_wcMiniappInitializeStatsTrackerWithMiniappInfo:(id)arg0 success:(BOOL)arg1;
+ (void)pcsj_wcMiniappBackupActionWithModel:(id)arg0 context:(id)arg1 success:(BOOL)arg2 completionBlock:(id /* block */)arg3;
+ (id)pcsj_wcMiniappOpenSDKWithResponse:(id)arg0;
+ (void)pcsj_launchMiniappWithInfo:(id)arg0 launchInfo:(id)arg1 complete:(id /* block */)arg2;
+ (void)pcsj_launchMiniappWithLaunchInfo:(id)arg0 complete:(id /* block */)arg1;
+ (void)pcsj_openSDKRegisterAppWithInfo:(id)arg0 complete:(id /* block */)arg1;
+ (id)pcsj_wcMiniappLinkSchemeWithResponse:(id)arg0;
+ (id)pcsj_urlWithString:(id)arg0;
+ (id)pcsj_wcMiniappTypeWithMeta:(id)arg0 success:(BOOL)arg1;
+ (BOOL)pcsj_validWCMiniappQueriesSchemes;
+ (id)allocWithZone:(struct _NSZone { } *)arg0;
+ (id)manager;

- (id)mutableCopy;
- (id)copy;

@end
