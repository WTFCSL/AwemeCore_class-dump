//
//     Generated by private class-dump
//

@class TimonAppInfo, NSDictionary;
@protocol TimonDelegate;

@interface Timon : NSObject {
    id<TimonDelegate> _delegate;
    TimonAppInfo *_appInfo;
    NSDictionary *_modules;
}

@property (weak, nonatomic) id<TimonDelegate> delegate;
@property (retain, nonatomic) TimonAppInfo *appInfo;
@property (copy, nonatomic) NSDictionary *modules;

+ (BOOL)isTeenMode;
+ (id)hostAppID;
+ (void)updateCustomEnvWithKey:(id)arg0 type:(unsigned long long)arg1 value:(id)arg2;
+ (BOOL)isBackgroundMode;
+ (void)syncConfig;
+ (void)setUpWithAppInfo:(id)arg0 delegate:(id)arg1;
+ (BOOL)hasAgreedPrivacy;
+ (BOOL)isBasicMode;
+ (BOOL)isElderMode;
+ (BOOL)enableAutoReadPasteboard;
+ (BOOL)enableDowngrade;
+ (id)urlIfTopIsWebViewController;
+ (id)crossPlatformCallingInfos;
+ (BOOL)usePasteboardDevSuiteForRead;
+ (BOOL)usePasteboardDevSuiteForWrite;
+ (id)getModuleService:(id)arg0;
+ (void)registerCustomEnvWithKey:(id)arg0 type:(unsigned long long)arg1 value:(id)arg2;
+ (void)registerCustomEnvWithKey:(id)arg0 type:(unsigned long long)arg1 builder:(id /* block */)arg2;
+ (BOOL)tm_enableStrictBackgroundScene;
+ (unsigned long long)tm_enterBackgroundDurationThreshold;
+ (unsigned long long)tm_coldLaunchDurationThreshold;
+ (BOOL)tm_enableColdLaunchScene;
+ (unsigned long long)tm_coldLaunchSceneThreshold;
+ (BOOL)tm_enableHotLaunchScene;
+ (unsigned long long)tm_hotLaunchSceneThreshold;
+ (void)registerHasAgreedPrivacyBlock:(id /* block */)arg0;
+ (void)registerIsBasicModeBlock:(id /* block */)arg0;
+ (void)registerIsTeenModeBlock:(id /* block */)arg0;
+ (void)registerIsElderModeBlock:(id /* block */)arg0;
+ (void)registerEnableAutoReadPasteboardBlock:(id /* block */)arg0;
+ (void)idfaMethodCall;
+ (void)registIdfaMethodCallBlock:(id /* block */)arg0;
+ (void)tm_setColdLaunchTime;
+ (BOOL)tm_isStrictBackgroundScene;
+ (BOOL)tm_isEnterBackgroundThirtySeconds;
+ (BOOL)tm_isColdLaunchScene;
+ (BOOL)tm_isColdLaunchInThirtySeconds;
+ (void)tm_setHotLaunchTime;
+ (BOOL)tm_isHotLaunchInThirtySeconds;
+ (BOOL)tm_isHotLaunchScene;
+ (id)channel;
+ (id)sharedInstance;
+ (void)setBackgroundMode:(BOOL)arg0;
+ (id)userId;
+ (id)rules;
+ (void)start;
+ (void)appWillEnterForeground;
+ (void)appDidEnterBackground;

- (void)__setUpWithAppInfo:(id)arg0 delegate:(id)arg1;
- (void)__setupModules;
- (void)__handleConfigUpdate;
- (void)__autoSyncConfig;
- (id)__allModuleClasses;
- (id)modules;
- (void).cxx_destruct;
- (void)setModules:(id)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (id)appInfo;
- (void)__start;
- (void)setAppInfo:(id)arg0;

@end
