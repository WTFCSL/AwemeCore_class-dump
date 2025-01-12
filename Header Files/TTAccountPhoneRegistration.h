//
//     Generated by private class-dump
//

@interface TTAccountPhoneRegistration : NSObject

+ (id)startQuickLoginWithPhone:(id)arg0 SMSCode:(id)arg1 captcha:(id)arg2 registerNewUser:(BOOL)arg3 jsonObjCompletion:(id /* block */)arg4;
+ (id)startChangeUserPhoneWithModel:(id)arg0 completion:(id /* block */)arg1;
+ (id)startRegisterWithPhone:(id)arg0 SMSCode:(id)arg1 password:(id)arg2 captcha:(id)arg3 completion:(id /* block */)arg4;
+ (id)startAccountLogin:(id)arg0 password:(id)arg1 captcha:(id)arg2 accountType:(long long)arg3 completion:(id /* block */)arg4;
+ (id)startTokenLoginWithPhone:(id)arg0 token:(id)arg1 captcha:(id)arg2 completion:(id /* block */)arg3;
+ (id)startQuickLoginWithPhone:(id)arg0 SMSCode:(id)arg1 captcha:(id)arg2 jsonObjCompletion:(id /* block */)arg3;
+ (id)startQuickLoginOnlyWithPhone:(id)arg0 SMSCode:(id)arg1 captcha:(id)arg2 jsonObjCompletion:(id /* block */)arg3;
+ (id)startQuickLoginOnlyContinueWithPhone:(id)arg0 smsCodeKey:(id)arg1 captcha:(id)arg2 jsonObjCompletion:(id /* block */)arg3;
+ (id)startGetSMSCodeWithOldPhone:(id)arg0 newPhone:(id)arg1 captcha:(id)arg2 SMSCodeType:(long long)arg3 unbindExist:(BOOL)arg4 completion:(id /* block */)arg5;
+ (id)startGetSMSCodeWithPhone:(id)arg0 captcha:(id)arg1 SMSCodeType:(long long)arg2 unbindExist:(BOOL)arg3 completion:(id /* block */)arg4;
+ (id)startGetSMSCodeWithPhone:(id)arg0 captcha:(id)arg1 SMSCodeType:(long long)arg2 extraInfo:(id)arg3 completion:(id /* block */)arg4;
+ (id)startGetSMSCodeWithPhone:(id)arg0 oldMobile:(id)arg1 captcha:(id)arg2 SMSCodeType:(long long)arg3 unbindExist:(BOOL)arg4 completion:(id /* block */)arg5;
+ (id)startValidateSMSCode:(id)arg0 SMSCodeType:(long long)arg1 captchaString:(id)arg2 completion:(id /* block */)arg3;
+ (id)startValidateSMSCode:(id)arg0 SMSCodeType:(long long)arg1 captchaString:(id)arg2 needTicket:(int)arg3 completion:(id /* block */)arg4;
+ (id)startValidateSMSCode:(id)arg0 SMSCodeType:(long long)arg1 captchaString:(id)arg2 needTicket:(int)arg3 scene:(int)arg4 completion:(id /* block */)arg5;
+ (id)startSetPasswordWithPassword:(id)arg0 captcha:(id)arg1 completion:(id /* block */)arg2;
+ (id)startResetPasswordWithPhone:(id)arg0 SMSCode:(id)arg1 password:(id)arg2 captcha:(id)arg3 completionWithJsonObj:(id /* block */)arg4;
+ (id)startModifyPasswordWithNewPassword:(id)arg0 SMSCode:(id)arg1 captcha:(id)arg2 completion:(id /* block */)arg3;
+ (id)startChangeUserPhone:(id)arg0 SMSCode:(id)arg1 captcha:(id)arg2 completion:(id /* block */)arg3;
+ (id)startChangeUserPhone:(id)arg0 ticket:(id)arg1 SMSCode:(id)arg2 captcha:(id)arg3 completion:(id /* block */)arg4;
+ (id)startChangeUserPhone:(id)arg0 ticket:(id)arg1 SMSCode:(id)arg2 captcha:(id)arg3 customParams:(id)arg4 completion:(id /* block */)arg5;
+ (id)startRefreshCaptchaWithCompletion:(id /* block */)arg0;
+ (id)startBindPhone:(id)arg0 SMSCode:(id)arg1 password:(id)arg2 captcha:(id)arg3 unbind:(BOOL)arg4 completion:(id /* block */)arg5;
+ (id)startUnbindPhoneWithSMSCode:(id)arg0 captcha:(id)arg1 completion:(id /* block */)arg2;
+ (id)startBindAndLogingWithPhonenumber:(id)arg0 SMSCode:(id)arg1 profileKey:(id)arg2 SMSCodeType:(long long)arg3 captcha:(id)arg4 completion:(id /* block */)arg5;
+ (id)startCancelLogoutWithToken:(id)arg0 completion:(id /* block */)arg1;
+ (id)startCheckPhoneIsUseableWithModel:(id)arg0 completion:(id /* block */)arg1;
+ (id)startFetchAvailableWaysWithModel:(id)arg0 completion:(id /* block */)arg1;
+ (id)startAccountVerifyWithModel:(id)arg0 completion:(id /* block */)arg1;
+ (id)startGetSMSCodeWithModel:(id)arg0 completion:(id /* block */)arg1;
+ (id)startGetSMSCodeWithModel:(id)arg0 jsonCompletion:(id /* block */)arg1;
+ (id)startgenerateTicketByPhoneWithModel:(id)arg0 completion:(id /* block */)arg1;
+ (id)startloginContinueWithMobile:(id)arg0 ticket:(id)arg1 completion:(id /* block */)arg2;
+ (id)startCheckHasSetPasswordWithModel:(id)arg0 completion:(id /* block */)arg1;
+ (id)startCheckMobileCodeWithModel:(id)arg0 completion:(id /* block */)arg1;

@end
