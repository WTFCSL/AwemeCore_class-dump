//
//     Generated by private class-dump
//

@protocol HGUserPluginDelegate <HGBasePluginDelegate>

- (id)hg_appId;
- (BOOL)hg_isLogin;
- (id)hg_userId;
- (void)hg_loginWithParam:(id)arg0 completion:(id /* block */)arg1;
- (id)hg_sessionId;
- (id)hg_deviceId;
- (id)hg_secUserId;
- (void)hg_getPhoneNumberWithParam:(id)arg0 completion:(id /* block */)arg1;

@optional

- (BOOL)hg_enableTeenMode;
- (id)hg_installId;
- (id)hg_x_tt_token;
- (id)hg_schemeId;
- (id)hg_schemeURLPrefix;
- (double)hg_useDuration;
- (void)hg_dealUserRelationWithParam:(id)arg0 completion:(id /* block */)arg1;
- (id)hg_sdk_version;
- (void)hg_getLocalPhoneNumberWithCompletion:(id /* block */)arg0;
- (void)hg_customUserInfoResultWithResponse:(id)arg0 completion:(id /* block */)arg1;
- (void)hg_getLocalPhoneNumberTokenWithCompletion:(id /* block */)arg0;

@end
