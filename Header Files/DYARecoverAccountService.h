//
//     Generated by private class-dump
//

@interface DYARecoverAccountService : NSObject

+ (void)p_startCheckWithString:(id)arg0 findWay:(long long)arg1 completion:(id /* block */)arg2;
+ (void)startCheckCountryCode:(id)arg0 mobile:(id)arg1 completion:(id /* block */)arg2;
+ (void)startCheckEmail:(id)arg0 completion:(id /* block */)arg1;
+ (void)startCheckUserName:(id)arg0 completion:(id /* block */)arg1;
+ (void)startCheckSafety:(id)arg0 scene:(long long)arg1 completion:(id /* block */)arg2;
+ (void)startCheckSafetyWithNotLoginTicket:(id)arg0 completion:(id /* block */)arg1;
+ (void)startCheckPhoneNumberUnsableWithLoginPhoneNumber:(id)arg0 completion:(id /* block */)arg1;

@end