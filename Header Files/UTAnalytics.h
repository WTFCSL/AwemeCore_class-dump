//
//     Generated by private class-dump
//

@class UTSafeDictionary, UTTracker;

@interface UTAnalytics : NSObject {
    UTTracker *mDefaultTracker;
    UTSafeDictionary *mTrackers;
}

+ (void)setDailyEnvironment;
+ (void)turnOnDev2;
+ (id)allocWithZone:(struct _NSZone { } *)arg0;
+ (id)getInstance;

- (void)setRequestAuthentication:(id)arg0;
- (void)setAppKey4SDK:(id)arg0 secret:(id)arg1;
- (id)getTracker:(id)arg0;
- (void)setDefaultAppKeyAndSecret;
- (void)loadConfigMgr;
- (void)setAppKey4APP:(id)arg0 secret:(id)arg1 authcode:(id)arg2 securitySign:(BOOL)arg3;
- (void)setAppkey4SDK:(id)arg0 secret:(id)arg1 authcode:(id)arg2 securitySign:(BOOL)arg3;
- (void)turnOnDebug;
- (void)setAppKey4APP:(id)arg0 authcode:(id)arg1;
- (void)setAppKey:(id)arg0 secret:(id)arg1;
- (void)setAppKey4SDK:(id)arg0 authcode:(id)arg1;
- (void)updateUserAccount:(id)arg0 userid:(id)arg1;
- (void)userRegister:(id)arg0;
- (void)updateSessionProperties:(id)arg0;
- (id)getTracker4SDK:(id)arg0;
- (void)turnOnDev;
- (void)onCrashHandler;
- (void)turnOffCrashHandler;
- (void)setCrashCaughtListener:(id)arg0;
- (id)getDefaultTracker;
- (id)init;
- (void)setAppVersion:(id)arg0;
- (void).cxx_destruct;
- (void)setChannel:(id)arg0;
- (id)copyWithZone:(struct _NSZone { } *)arg0;

@end
