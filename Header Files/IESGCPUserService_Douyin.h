//
//     Generated by private class-dump
//

@class NSString;

@interface IESGCPUserService_Douyin : NSObject <IESGCPUserService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)currentLoginUser;
- (id)currentUserId;
- (void)loginWithUserInfo:(id)arg0;
- (void)loginWithUserInfo:(id)arg0 completion:(id /* block */)arg1;
- (void)jumpToProfileWithUserId:(id)arg0 secUserId:(id)arg1 enterFrom:(id)arg2 mobReport:(id)arg3 followParams:(id)arg4;
- (void)logout;
- (id)currentSessionID;
- (BOOL)isLogin;

@end
