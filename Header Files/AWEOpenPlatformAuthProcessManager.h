//
//     Generated by private class-dump
//

@interface AWEOpenPlatformAuthProcessManager : NSObject

+ (id)commonParamsWithModel:(id)arg0;
+ (void)mergeIdentifyScopeForEntranceModel:(id)arg0;
+ (Class)getDelegateClassFromModel:(id)arg0;
+ (void)tryScanQrcodeWithModel:(id)arg0 withCompletion:(id /* block */)arg1;
+ (void)requireLoginWithModel:(id)arg0 params:(id)arg1 withCompletion:(id /* block */)arg2;
+ (BOOL)isValidEntranceModel:(id)arg0;
+ (void)realStartAuthWithModel:(id)arg0 params:(id)arg1 withCompletion:(id /* block */)arg2;
+ (void)handleBindMobileNumber:(id)arg0 authInfo:(id)arg1 params:(id)arg2 completion:(id /* block */)arg3;
+ (void)gotoSceneAuthOrSlientAuthWithModel:(id)arg0 authInfo:(id)arg1 params:(id)arg2 withCompletion:(id /* block */)arg3;
+ (void)silentAuthWithModel:(id)arg0 params:(id)arg1 authInfo:(id)arg2 completion:(id /* block */)arg3;
+ (void)requestConfirmIfNeededWithQRToken:(id)arg0;
+ (unsigned long long)authSceneFromFlowType:(unsigned long long)arg0;
+ (void)showFullScreenAuthVCWithModel:(id)arg0 flowManager:(id)arg1 completion:(id /* block */)arg2;
+ (void)showHalfScreenAuthVCWithModel:(id)arg0 flowManager:(id)arg1 completion:(id /* block */)arg2;
+ (void)setupAuthBlockWithFullVC:(id)arg0 model:(id)arg1 completion:(id /* block */)arg2;
+ (void)handleRespFailedWithErrCode:(long long)arg0 subErrCode:(long long)arg1 errMsg:(id)arg2 originError:(id)arg3 model:(id)arg4 completion:(id /* block */)arg5;
+ (void)handleRespSuccessWithTicket:(id)arg0 permissions:(id)arg1 model:(id)arg2 completion:(id /* block */)arg3;
+ (void)startAuthWithModel:(id)arg0 withCompletion:(id /* block */)arg1;

@end