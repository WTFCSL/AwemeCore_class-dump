//
//     Generated by private class-dump
//

@protocol TTAccountMulticastProtocol <NSObject>

@optional

- (void)onAccountLogin;
- (void)onAccountLogout;
- (void)onAccountLogoutInScene:(long long)arg0;
- (void)onAccountLogoutInScene:(long long)arg0;
- (void)onAccountSessionExpired:(id)arg0;
- (void)onAccountStatusChanged:(long long)arg0 platform:(id)arg1;
- (void)onAccountGetUserInfo;
- (void)onAccountUserProfileChanged:(id)arg0 error:(id)arg1;
- (void)onAccountAuthPlatformStatusChanged:(long long)arg0 platform:(id)arg1 error:(id)arg2;

@end
