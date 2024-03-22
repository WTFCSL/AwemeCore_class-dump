//
//     Generated by private class-dump
//

@class NSString;

@interface AWEOFGUser : HTSService <AWEOFGUser>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)requestSecurityPhoneNumber:(long long)arg0 enterMethod:(id)arg1 completion:(id /* block */)arg2 ofgClientKey:(id)arg3 ofgAppID:(id)arg4 ofgError:(id *)arg5;
+ (BOOL)requestTokenWithCarrier:(long long)arg0 completion:(id /* block */)arg1 ofgClientKey:(id)arg2 ofgAppID:(id)arg3 ofgError:(id *)arg4;
+ (BOOL)getUserProfileWithID:(id)arg0 completion:(id /* block */)arg1 ofgClientKey:(id)arg2 ofgAppID:(id)arg3 ofgError:(id *)arg4;
+ (BOOL)getUserProfileWithID:(id)arg0 detailCompletion:(id /* block */)arg1 ofgClientKey:(id)arg2 ofgAppID:(id)arg3 ofgError:(id *)arg4;
+ (id)sessionIDWithOfgClientKey:(id)arg0 ofgAppID:(id)arg1 ofgError:(id *)arg2;
+ (id)currentLoginUserWithOfgClientKey:(id)arg0 ofgAppID:(id)arg1 ofgError:(id *)arg2;
+ (BOOL)isLoginWithOfgClientKey:(id)arg0 ofgAppID:(id)arg1 ofgError:(id *)arg2;
+ (id)userIDWithOfgClientKey:(id)arg0 ofgAppID:(id)arg1 ofgError:(id *)arg2;
+ (id)getSecUidWithUid:(id)arg0 ofgClientKey:(id)arg1 ofgAppID:(id)arg2 ofgError:(id *)arg3;
+ (BOOL)recordSecUidWithUid:(id)arg0 withSecUid:(id)arg1 ofgClientKey:(id)arg2 ofgAppID:(id)arg3 ofgError:(id *)arg4;
+ (id)deviceIDWithOfgClientKey:(id)arg0 ofgAppID:(id)arg1 ofgError:(id *)arg2;
+ (id)installIDWithOfgClientKey:(id)arg0 ofgAppID:(id)arg1 ofgError:(id *)arg2;
+ (id)commonURLParametersWithOfgClientKey:(id)arg0 ofgAppID:(id)arg1 ofgError:(id *)arg2;
+ (BOOL)follow:(id)arg0 completion:(id /* block */)arg1 ofgClientKey:(id)arg2 ofgAppID:(id)arg3 ofgError:(id *)arg4;
+ (BOOL)unfollow:(id)arg0 completion:(id /* block */)arg1 ofgClientKey:(id)arg2 ofgAppID:(id)arg3 ofgError:(id *)arg4;
+ (BOOL)followWithUserItem:(id)arg0 completion:(id /* block */)arg1 ofgClientKey:(id)arg2 ofgAppID:(id)arg3 ofgError:(id *)arg4;
+ (BOOL)unfollowWithUserItem:(id)arg0 completion:(id /* block */)arg1 ofgClientKey:(id)arg2 ofgAppID:(id)arg3 ofgError:(id *)arg4;
+ (BOOL)requireLogin:(id /* block */)arg0 ofgClientKey:(id)arg1 ofgAppID:(id)arg2 ofgError:(id *)arg3;
+ (BOOL)requireLoginWithContext:(id)arg0 completion:(id /* block */)arg1 ofgClientKey:(id)arg2 ofgAppID:(id)arg3 ofgError:(id *)arg4;
+ (void)commitFollowWithUid:(id)arg0 secUid:(id)arg1 type:(long long)arg2 ofgClientKey:(id)arg3 completion:(id /* block */)arg4;

@end