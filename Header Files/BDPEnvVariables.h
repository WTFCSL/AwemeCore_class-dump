//
//     Generated by private class-dump
//

@interface BDPEnvVariables : NSObject

+ (id)getLaunchOptionParams:(id)arg0 type:(long long)arg1;
+ (id)currentSystemLanguage;
+ (id)preloadEnvironmentVariables:(id)arg0;
+ (id)progressColorString;
+ (BOOL)isDebugOpen:(id)arg0;
+ (id)preloadEnvironmentVariablesForWebview:(id)arg0;
+ (id)onReadyEnvironmentVariablesForWebview:(id)arg0;
+ (BOOL)injectSystemInfoToEnvironment;
+ (id)getAppInfoSyncWithUniqueID:(id)arg0;
+ (id)onReadyEnvironmentVariables:(id)arg0;
+ (id)getDeleteAnalysisInfos:(id)arg0;
+ (id)deleteQueryAnalysisInfo:(id)arg0 uniqueID:(id)arg1;
+ (id)onHandlePrefetchEnvironmentVariables:(id)arg0 schema:(id)arg1 backupPath:(id)arg2;
+ (id)getLaunchOptionParams:(id)arg0 type:(long long)arg1 uniqueID:(id)arg2;
+ (id)deleteQueryPathAnalysisInfo:(id)arg0 uniqueID:(id)arg1;

@end
