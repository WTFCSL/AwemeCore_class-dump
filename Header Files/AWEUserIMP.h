//
//     Generated by private class-dump
//

@class NSString;

@interface AWEUserIMP : HTSService <AWEUserInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackSource:(id)arg0 position:(id)arg1;
- (BOOL)isConfirmUserProtocol;
- (void)login:(id /* block */)arg0;
- (void)login:(id /* block */)arg0 withTrackerInformation:(id)arg1;
- (void)syncUser:(id /* block */)arg0;
- (id)sessionID;
- (void)logout;
- (id)currentUser;
- (BOOL)isCurrentUser:(id)arg0;
- (BOOL)isLogin;

@end
