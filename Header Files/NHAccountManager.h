//
//     Generated by private class-dump
//

@interface NHAccountManager : NSObject {
    BOOL _isForLogin;
    unsigned long long _platform;
}

@property (nonatomic) BOOL isForLogin;
@property (nonatomic) unsigned long long platform;

+ (void)_handleUserInfo:(id)arg0 finishBlock:(id /* block */)arg1;
+ (id)sharedInstance;

- (void)requestLogin:(unsigned long long)arg0 middleCheck:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)requestLoginWithSecondaryVerification:(id)arg0 platformName:(unsigned long long)arg1 middleCheck:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)setIsForLogin:(BOOL)arg0;
- (void)handleLoginSuccess:(unsigned long long)arg0 verificationInfo:(id)arg1 params:(id)arg2 completion:(id /* block */)arg3;
- (void)handleNetworkResponse:(id)arg0 platformName:(unsigned long long)arg1 error:(id)arg2 completion:(id /* block */)arg3;
- (void)handleFailure:(unsigned long long)arg0 completion:(id /* block */)arg1 error:(id)arg2;
- (void)handleCancel:(unsigned long long)arg0 completion:(id /* block */)arg1;
- (void)handleBindSuccess:(unsigned long long)arg0 params:(id)arg1 completion:(id /* block */)arg2;
- (void)requestBind:(unsigned long long)arg0 verifyType:(long long)arg1 ticket:(id)arg2 OAuthInfo:(id)arg3 completion:(id /* block */)arg4;
- (id)getCurrentAppleUserId;
- (BOOL)isForLogin;
- (void)requestLogin:(unsigned long long)arg0 completion:(id /* block */)arg1;
- (void)requestBind:(unsigned long long)arg0 completion:(id /* block */)arg1;
- (void)setPlatform:(unsigned long long)arg0;
- (unsigned long long)platform;

@end
