//
//     Generated by private class-dump
//

@protocol BDLHostProtocol <NSObject>

+ (id)sharedInstance;

@optional

- (void)loginWithParam:(id)arg0 completion:(id /* block */)arg1;
- (id)deviceID;
- (id)sessionId;
- (id)userId;
- (id)appID;
- (BOOL)isLogin;
- (void)getPhoneNumberWithParam:(id)arg0 completion:(id /* block */)arg1;

@end
