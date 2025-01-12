//
//     Generated by private class-dump
//

@interface AWEUserMonitorTracker : NSObject

+ (id)carrierStringForType:(long long)arg0;
+ (void)monitorSendVerifyCode:(unsigned long long)arg0 error:(id)arg1 extraInfo:(id)arg2;
+ (void)monitorRebindMobile:(unsigned long long)arg0 error:(id)arg1 extraInfo:(id)arg2;
+ (void)monitorBindMobile:(unsigned long long)arg0 error:(id)arg1 extraInfo:(id)arg2;
+ (void)monitorPrefetchLogin:(unsigned long long)arg0 error:(id)arg1 extraInfo:(id)arg2 carrierType:(long long)arg3;
+ (void)monitorQuickLogin:(unsigned long long)arg0 error:(id)arg1 extraInfo:(id)arg2 carrierType:(long long)arg3;
+ (void)monitorMobileVerifyCodeLogin:(unsigned long long)arg0 error:(id)arg1 extraInfo:(id)arg2;
+ (void)monitorLoadLoginGuideImage:(unsigned long long)arg0 error:(id)arg1 extraInfo:(id)arg2;
+ (void)monitorLoginGuideShow:(unsigned long long)arg0 error:(id)arg1 extraInfo:(id)arg2;
+ (void)monitorVerifiedEnvLogin:(unsigned long long)arg0 error:(id)arg1 extraInfo:(id)arg2;
+ (void)monitorLoadAmbientImage:(BOOL)arg0 error:(id)arg1 extraInfo:(id)arg2;
+ (void)monitorService:(id)arg0 status:(unsigned long long)arg1 error:(id)arg2 extraInfo:(id)arg3;
+ (void)monitorAuthorizeLogin:(unsigned long long)arg0 error:(id)arg1 extraInfo:(id)arg2;
+ (void)monitorPadGetLoginQRcode:(unsigned long long)arg0 error:(id)arg1 extraInfo:(id)arg2;
+ (void)monitorPadQRLoginResult:(unsigned long long)arg0 extraInfo:(id)arg1;
+ (void)monitorHotsoonAccountAuth:(unsigned long long)arg0 error:(id)arg1 extraInfo:(id)arg2;
+ (void)monitorThirdPartyLogin:(unsigned long long)arg0 platform:(unsigned long long)arg1 error:(id)arg2 extraInfo:(id)arg3;
+ (void)monitorLoginSLOWith:(id)arg0;
+ (BOOL)isThirdPartyWithPlatform:(unsigned long long)arg0;
+ (id)telecomCarrier:(id)arg0;
+ (void)monitorAccountDropWithErrorCode:(long long)arg0 extraInfo:(id)arg1;
+ (void)monitorMobilePasswordLogin:(unsigned long long)arg0 error:(id)arg1 extraInfo:(id)arg2;
+ (void)monitorLogout:(unsigned long long)arg0 error:(id)arg1 extraInfo:(id)arg2;
+ (void)monitorKickoutDevice:(unsigned long long)arg0 error:(id)arg1 extraInfo:(id)arg2;
+ (void)monitorEmailLogin:(unsigned long long)arg0 error:(id)arg1 extraInfo:(id)arg2;
+ (void)monitorMutiAccountSwitch:(unsigned long long)arg0 error:(id)arg1 extraInfo:(id)arg2;
+ (void)monitorQuickBind:(unsigned long long)arg0 error:(id)arg1 extraInfo:(id)arg2 carrierType:(long long)arg3;
+ (void)monitorUIDMisMatch:(id)arg0;
+ (void)monitorSendWhatsAppVerifyCode:(unsigned long long)arg0 error:(id)arg1 extraInfo:(id)arg2;
+ (void)monitorSecondVerifyStatus:(unsigned long long)arg0 error:(id)arg1 extraInfo:(id)arg2;
+ (void)monitorSharedLoginStatus:(unsigned long long)arg0 error:(id)arg1 extraInfo:(id)arg2;
+ (void)monitorFindPasswordStatus:(unsigned long long)arg0 error:(id)arg1 extraInfo:(id)arg2;
+ (void)monitorEnterAccountSafety:(unsigned long long)arg0 error:(id)arg1 extraInfo:(id)arg2;
+ (void)monitorloginWithAgreeTerm:(unsigned long long)arg0 error:(id)arg1 extraInfo:(id)arg2;
+ (void)monitorHighRiskPhoneVerifyStatus:(unsigned long long)arg0 error:(id)arg1 extraInfo:(id)arg2;
+ (void)moinitorNonMainlandPhoneVeriyStatus:(unsigned long long)arg0 error:(id)arg1 extraInfo:(id)arg2;
+ (void)monitorRealNameAuthStatus:(unsigned long long)arg0 error:(id)arg1 extraInfo:(id)arg2;
+ (void)monitorVideoAuthResult:(unsigned long long)arg0 error:(id)arg1 extraInfo:(id)arg2;

@end
