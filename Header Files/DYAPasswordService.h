//
//     Generated by private class-dump
//

@interface DYAPasswordService : NSObject

+ (void)trackUserProtocolStatus:(BOOL)arg0;
+ (void)changePassword:(id)arg0 code:(id)arg1 mobileType:(long long)arg2 ticket:(id)arg3 completion:(id /* block */)arg4;
+ (void)checkPasswordStrength:(id)arg0 completion:(id /* block */)arg1;
+ (void)setAccountPasswordWhenSignedIn:(id)arg0 completion:(id /* block */)arg1;
+ (void)resetPassword:(id)arg0 phoneNumber:(id)arg1 code:(id)arg2 completion:(id /* block */)arg3;
+ (void)resetPassword:(id)arg0 ticket:(id)arg1 completion:(id /* block */)arg2;
+ (void)resetPassword:(id)arg0 ticket:(id)arg1 secUid:(id)arg2 completion:(id /* block */)arg3;
+ (void)resetPasswordByEmailWithPassword:(id)arg0 ticket:(id)arg1 completion:(id /* block */)arg2;
+ (void)updatePassword:(id)arg0 oldPassword:(id)arg1 ticket:(id)arg2 completion:(id /* block */)arg3;
+ (void)changePassword:(id)arg0 code:(id)arg1 mobileType:(long long)arg2 completion:(id /* block */)arg3;
+ (void)changePasswordByEmail:(id)arg0 code:(id)arg1 ticket:(id)arg2 completion:(id /* block */)arg3;
+ (void)checkHasSetPassword:(id /* block */)arg0;

@end
