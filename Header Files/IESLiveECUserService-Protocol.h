//
//     Generated by private class-dump
//

@protocol IESLiveECUserService <NSObject>

- (void)loginWithUserInfo:(id)arg0 completion:(id /* block */)arg1;
- (BOOL)isLogin;

@optional

- (id)registerFollowStatusChangedWithCallback:(id /* block */)arg0;
- (id)registerLoginStatusChangedWithCallback:(id /* block */)arg0;

@end
