//
//     Generated by private class-dump
//

@protocol AWEPassportCarrierServiceProtocol <NSObject>

- (void)registerWithAppID:(id)arg0 appKey:(id)arg1 timeout:(double)arg2;
- (void)requestSecurityPhoneNumber:(id /* block */)arg0 timeout:(double)arg1;
- (void)requestTokenDictionary:(id /* block */)arg0;
- (void)requestMobileAuth:(id /* block */)arg0;
- (BOOL)isAvailable;

@end