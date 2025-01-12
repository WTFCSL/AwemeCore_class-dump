//
//     Generated by private class-dump
//

@class NSString;

@interface IESECUserServiceImpl : NSObject <AWEUserMessage, IESECUserService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)currentLoginUser;
+ (void)requireLogin:(id /* block */)arg0;
+ (BOOL)isTeenMode;
+ (void)followUser:(id)arg0 referString:(id)arg1 channelID:(long long)arg2 completion:(id /* block */)arg3;
+ (BOOL)useTTAccountSDKToLogin;
+ (id)sharedInstance;
+ (BOOL)isLogin;

- (void)didFinishLogin;
- (void)didFinishLogout;
- (void)registerAWELoginChange;
- (id)init;
- (void)dealloc;

@end
