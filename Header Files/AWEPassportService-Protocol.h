//
//     Generated by private class-dump
//

@protocol AWEPassportService <HTSService>

- (void)login:(id /* block */)arg0;
- (void)login:(id /* block */)arg0 withTrackerInformation:(id)arg1;
- (BOOL)isVCDEnable;
- (BOOL)enableAccountSDK;
- (void)convertOpenIDToUIDWithinCurrentUserList:(id)arg0 clientKey:(id)arg1 completion:(id /* block */)arg2;
- (id)currentUser;
- (BOOL)isLogin;

@optional

- (void)trackAccountDrop:(id)arg0 scene:(id)arg1 error:(id)arg2 extraParams:(id)arg3;

@end