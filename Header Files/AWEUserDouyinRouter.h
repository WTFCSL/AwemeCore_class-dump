//
//     Generated by private class-dump
//

@class NSString;

@interface AWEUserDouyinRouter : HTSService <AWEUserRouter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)resetPassword:(id)arg0;
+ (id)passwordLoginViewController:(id)arg0;
+ (id)passwordLoginViewControllerWithSecurityTicket:(id)arg0 isManualDowngrade:(BOOL)arg1;
+ (id)SMSLoginV2Step1ViewController:(id)arg0;
+ (id)SMSLoginV2Step2ViewController:(id)arg0 phoneNumber:(id)arg1;
+ (id)SMSLoginHalfViewController:(id)arg0;
+ (Class)SMSLoginViewControllerClass;
+ (id)SMSLoginViewControllerWithSecurityTicket:(id)arg0 isManualDowngrade:(BOOL)arg1;
+ (id)lastLoginViewControllerWithSecurityTicket:(id)arg0;
+ (id)lastThirdLoginViewController:(id)arg0;
+ (id)lastThirdLoginViewController:(unsigned long long)arg0 ticket:(id)arg1 isManualDowngrade:(BOOL)arg2;
+ (id)emailLoginViewController:(id)arg0;
+ (id)complexPreLoginViewController;
+ (id)oneLoginViewControllerPlatform:(unsigned long long)arg0 isManualDowngrade:(BOOL)arg1;
+ (id)sharedLoginViewController;
+ (id)sharedLoginViewControllerForDouyin;
+ (id)pushLoginViewController:(id)arg0 lastLoginUser:(id)arg1;
+ (id)pushLoginViewController:(unsigned long long)arg0 lastLoginUserModel:(id)arg1;
+ (id)multiLoginViewController:(id)arg0;
+ (id)secondAccountUnbindViewController:(id)arg0;
+ (id)quickLoginViewController:(id)arg0;
+ (id)quickLoginViewController:(id)arg0 ignoreLoginNotify:(BOOL)arg1;
+ (id)qrcodeLoginViewController:(id)arg0;
+ (Class)qrcodeLoginViewControllerClass;
+ (void)showQRCodeLoginViewControllerWithRouterModel:(id)arg0 fromViewController:(id)arg1 shouldPush:(BOOL)arg2 animated:(BOOL)arg3;
+ (id)phoneBindViewController:(id)arg0;
+ (id)phoneBindViewController:(id)arg0 completionBlock:(id /* block */)arg1;
+ (id)quickBindViewController:(id)arg0;
+ (id)phoneCountryCodeViewController:(id /* block */)arg0;
+ (id)findPasswordViewController:(id)arg0;
+ (id)profileEditViewController:(id)arg0;
+ (id)untrustDeviceVerifyViewController:(id)arg0 phoneNumber:(id)arg1;
+ (id)quickBindViewController:(id)arg0 cancelBlock:(id /* block */)arg1 finishBlock:(id /* block */)arg2;
+ (id)phoneBindViewController:(id)arg0 cancelBlock:(id /* block */)arg1 finishBlock:(id /* block */)arg2;
+ (id)upsmsLoginViewController:(id)arg0 smsContent:(id)arg1 targetPhoneNumber:(id)arg2 verifyTicket:(id)arg3;
+ (id)reusedMobileLoginViewController:(id)arg0 ticket:(id)arg1;
+ (id)recommendViewController:(id)arg0;
+ (id)resetPasswordFillCode:(id)arg0 context:(id)arg1;
+ (id)bindFillInPhoneNumber;
+ (id)bindFillInPhoneNumber:(BOOL)arg0;
+ (id)bindFillInCode:(id)arg0;
+ (id)rebindFillInOldPhoneNumber:(id)arg0;
+ (id)rebindFillInOldCode:(id)arg0;
+ (id)rebindFillInNewPhoneNumber:(id)arg0;
+ (id)rebindFillInNewCode:(id)arg0;
+ (id)safeRebind:(id)arg0;
+ (id)rebindHighRiskFillInOldPhoneNumber:(id)arg0;
+ (id)rebindHighRiskFillInNewPhoneNumber:(id)arg0;
+ (id)rebindHighRiskFillInNewCode:(id)arg0;
+ (id)rebindNotChineseMainLandFillInOldPhoneNumber:(id)arg0;
+ (id)reBindNotChineseMainLandFillInOldCode:(id)arg0;
+ (Class)aAWEUserModuleServiceDOUYINAdapterClass;

- (id)aAWEUserModuleServiceDOUYINAdapter;

@end
