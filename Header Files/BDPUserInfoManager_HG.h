//
//     Generated by private class-dump
//

@interface BDPUserInfoManager_HG : NSObject

+ (id)sharedManager;

- (void)checkUserIdentityAuthenticationStatusWithUniqueID:(id)arg0 completion:(id /* block */)arg1;
- (void)fetchUserInfoWithCredentials:(BOOL)arg0 identityAuth:(BOOL)arg1 uniqueID:(id)arg2 completion:(id /* block */)arg3;
- (id)errorForErrorCode:(long long)arg0 serverCode:(long long)arg1;
- (void)parseResponse:(id)arg0 error:(id)arg1 needAddIdVerifyResult:(BOOL)arg2 isIdVerified:(BOOL)arg3 callback:(id /* block */)arg4 uniqueID:(id)arg5 monitor:(id)arg6;
- (id)tryGetUserInfoFromLocalWithUniqueID:(id)arg0;
- (void)saveUserInfoToLocalWithUniqueID:(id)arg0 value:(id)arg1;
- (id)getKeyOfUserInfoCacheWithUniqueID:(id)arg0;
- (id)initPrivate;

@end
