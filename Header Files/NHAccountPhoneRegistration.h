//
//     Generated by private class-dump
//

@interface NHAccountPhoneRegistration : NSObject

+ (void)_handleUserInfoChange:(id)arg0 error:(id)arg1 sendMessageBlock:(id /* block */)arg2 finishBlock:(id /* block */)arg3;
+ (void)handleUserInfoChange:(id)arg0 platform:(unsigned long long)arg1 finishBlock:(id /* block */)arg2;
+ (id)sharedInstance;

- (void)POST:(id)arg0 parameters:(id)arg1 model:(Class)arg2 completion:(id /* block */)arg3;
- (void)GET:(id)arg0 parameters:(id)arg1 model:(Class)arg2 completion:(id /* block */)arg3;
- (void)startSendCodeWithPhoneNumber:(id)arg0 captcha:(id)arg1 ticket:(id)arg2 type:(long long)arg3 scene:(long long)arg4 finishBlock:(id /* block */)arg5;
- (void)startSendCodeWithPhoneNumber:(id)arg0 captcha:(id)arg1 ticket:(id)arg2 sharkTicket:(id)arg3 unusableMobileTicket:(id)arg4 type:(long long)arg5 scene:(long long)arg6 finishBlock:(id /* block */)arg7;
- (void)GET:(id)arg0 parameters:(id)arg1 completion:(id /* block */)arg2;
- (void)POST:(id)arg0 parameters:(id)arg1 completion:(id /* block */)arg2;
- (void)startChangeMobileWithPhoneNumber:(id)arg0 code:(id)arg1 ticket:(id)arg2 unusableMobileTicket:(id)arg3 captcha:(id)arg4 finishBlock:(id /* block */)arg5;
- (void)startSendCodeWithPhoneNumber:(id)arg0 captcha:(id)arg1 type:(long long)arg2 scene:(long long)arg3 finishBlock:(id /* block */)arg4;
- (void)startSendCodeWithPhoneNumber:(id)arg0 captcha:(id)arg1 unusableMobileTicket:(id)arg2 type:(long long)arg3 scene:(long long)arg4 finishBlock:(id /* block */)arg5;
- (void)startSendCodeWithOldPhoneNumber:(id)arg0 newPhoneNumber:(id)arg1 captcha:(id)arg2 ticket:(id)arg3 sharkTicket:(id)arg4 unusableMobileTicket:(id)arg5 type:(long long)arg6 scene:(long long)arg7 finishBlock:(id /* block */)arg8;
- (void)startRegisterWithPhoneNumber:(id)arg0 code:(id)arg1 password:(id)arg2 captcha:(id)arg3 type:(long long)arg4 finishBlock:(id /* block */)arg5;
- (void)startRefreshCaptchaWithScenarioType:(long long)arg0 finishBlock:(id /* block */)arg1;
- (void)startChangePasswordWithPassword:(id)arg0 code:(id)arg1 captcha:(id)arg2 finishBlock:(id /* block */)arg3;
- (void)startBindPhoneNumber:(id)arg0 code:(id)arg1 captcha:(id)arg2 finishBlock:(id /* block */)arg3;
- (void)startBindPhoneNumber:(id)arg0 code:(id)arg1 captcha:(id)arg2 password:(id)arg3 finishBlock:(id /* block */)arg4;
- (void)startBindLoginWithPhoneNumber:(id)arg0 code:(id)arg1 captcha:(id)arg2 password:(id)arg3 profileKey:(id)arg4 finishBlock:(id /* block */)arg5;
- (void)startBindLoginCarrier:(id)arg0 token:(id)arg1 profileKey:(id)arg2 finishBlock:(id /* block */)arg3;
- (void)startCheckPasswordStrength:(id)arg0 captcha:(id)arg1 completion:(id /* block */)arg2;
- (void)startValidateWithCode:(id)arg0 captcha:(id)arg1 sharkTicket:(id)arg2 type:(long long)arg3 ticketBlock:(id /* block */)arg4;
- (void)startChangeMobileWithPhoneNumber:(id)arg0 code:(id)arg1 captcha:(id)arg2 finishBlock:(id /* block */)arg3;
- (void)startEmailRegisterVerify:(id)arg0 code:(id)arg1 type:(long long)arg2 captcha:(id)arg3 finishBlock:(id /* block */)arg4;

@end
