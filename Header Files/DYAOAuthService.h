//
//     Generated by private class-dump
//

@interface DYAOAuthService : NSObject

+ (void)startOAuthForPlatform:(unsigned long long)arg0 type:(unsigned long long)arg1 configuration:(id)arg2 completion:(id /* block */)arg3;
+ (id)OAuthForLoginTask:(unsigned long long)arg0;
+ (id)OAuthForBindTask:(unsigned long long)arg0;
+ (id)OAuthForAccessTokenTask:(unsigned long long)arg0 configuration:(id)arg1;
+ (void)trackEvent:(id)arg0 params:(id)arg1 platform:(unsigned long long)arg2;
+ (BOOL)OAuthAvailable:(unsigned long long)arg0;
+ (BOOL)isAppInstalled:(unsigned long long)arg0;

@end