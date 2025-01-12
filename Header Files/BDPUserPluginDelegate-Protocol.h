//
//     Generated by private class-dump
//

@protocol BDPUserPluginDelegate <BDPBasePluginDelegate>

- (id)bdp_appId;
- (id)bdp_deviceIdWithAppID:(id)arg0;
- (id)bdp_userIdWithAppID:(id)arg0;
- (void)bdp_loginWithParam:(id)arg0 appID:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)bdp_isLoginWithAppID:(id)arg0;
- (id)bdp_sessionIdWithAppID:(id)arg0;
- (id)bdp_secUserIdWithAppID:(id)arg0;
- (void)bdp_getPhoneNumberWithParam:(id)arg0 completion:(id /* block */)arg1;

@optional

- (id)bdp_installIdWithAppID:(id)arg0;
- (id)bdp_shortIdWithAppID:(id)arg0;
- (double)bdp_useDuration;
- (id)bdp_schemeId;
- (void)bdp_dealUserRelationWithParam:(id)arg0 completion:(id /* block */)arg1;
- (void)bdp_getLocalPhoneNumberWithAppID:(id)arg0 completion:(id /* block */)arg1;
- (void)bdp_getLocalPhoneNumberTokenWithAppID:(id)arg0 completion:(id /* block */)arg1;
- (void)bdp_getDeviceIdAsync:(id)arg0 completion:(id /* block */)arg1;
- (id)bdp_awemeUserNicknameWithAppID:(id)arg0;
- (id)bdp_getBindPhoneNumberWithAppID:(id)arg0;
- (void)bdp_getAvatarThumbWithAppID:(id)arg0 completion:(id /* block */)arg1;
- (BOOL)bdp_getHomepageLeftBarStatus;
- (BOOL)bdp_isAppIDInFavoritesList:(id)arg0;
- (id)bdp_schemeURLPrefix;
- (BOOL)bdp_enableTeenMode;
- (id)bdp_x_tt_token;
- (id)bdp_sdk_version;
- (void)bdp_customUserInfoResultWithResponse:(id)arg0 completion:(id /* block */)arg1;

@end
