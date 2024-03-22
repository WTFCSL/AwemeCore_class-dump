//
//     Generated by private class-dump
//

@interface TTInstallSandBoxHelper : NSObject

+ (id)ssAppID;
+ (id)versionName;
+ (id)ssAppMID;
+ (id)getCurrentChannel;
+ (BOOL)isInHouseApp;
+ (id)ssAppScheme;
+ (id)appOwnURL;
+ (BOOL)isAppStoreChannel;
+ (id)_AppLaunchedTimesKey;
+ (BOOL)isAPPFirstLaunch;
+ (void)setAppFirstLaunch;
+ (long long)appLaunchedTimes;
+ (void)setAppDidLaunchThisTime;
+ (void)resetAppLaunchedTimes;
+ (BOOL)disableBackupForPath:(id)arg0;
+ (id)appName;
+ (id)buildVersion;
+ (id)bundleIdentifier;
+ (id)appDisplayName;

- (id)sandBoxCachePath;
- (id)sandBoxDocumentsPath;

@end