//
//     Generated by private class-dump
//

@interface IESECTabKitSecurityHelper : NSObject

+ (BOOL)securityCheckForApiUrl:(id)arg0;
+ (BOOL)securityCheckForAnchorUrl:(id)arg0;
+ (BOOL)securityCheckForUrl:(id)arg0 ruleType:(unsigned long long)arg1;
+ (id)p_securityConfigs;
+ (BOOL)p_matchRegex:(id)arg0 value:(id)arg1;
+ (void)reportSecurityCheckResult:(id)arg0 ruleType:(unsigned long long)arg1 verifyMode:(long long)arg2 version:(id)arg3;

@end
