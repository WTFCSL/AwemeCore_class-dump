//
//     Generated by private class-dump
//

@class NSDictionary;

@interface UASDKLogin : NSObject

@property (readonly, nonatomic) NSDictionary *networkInfo;

+ (id)shareLogin;
+ (id)allocWithZone:(struct _NSZone { } *)arg0;

- (void)printConsoleEnable:(BOOL)arg0;
- (BOOL)validateRegisterMethodImplement;
- (void)registerAppId:(id)arg0 appKey:(id)arg1 encrypType:(id)arg2;
- (void)getPhoneNumberCompletion:(id /* block */)arg0;
- (void)getAuthorizationCompletion:(id /* block */)arg0;
- (void)mobileAuthCompletion:(id /* block */)arg0;
- (BOOL)delectScrip;
- (void)setTimeoutInterval:(double)arg0;
- (id)networkInfo;

@end
