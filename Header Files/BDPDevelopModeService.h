//
//     Generated by private class-dump
//

@class NSString;

@interface BDPDevelopModeService : NSObject <BDPDevelopModeService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (BOOL)shouldShowMorePanelDebugItemWithAppId:(id)arg0;
- (id)easterEggDictWithAppId:(id)arg0;
- (void)easterEggRefreshBoundAppListWithAppId:(id)arg0;
- (void)changeDevInfoWithUid:(id)arg0 easterEggDict:(id)arg1;
- (id)initService;
- (id)getUidInfoItemWithUid:(id)arg0;
- (BOOL)canShowDevModeEntranceWithUid:(id)arg0;
- (BOOL)devModeSwitchOnWithUid:(id)arg0;
- (BOOL)checkTimorListWithAppId:(id)arg0;
- (id)devModeTimorItemWithUid:(id)arg0 appId:(id)arg1;
- (BOOL)isControlBoxOn:(id)arg0 appId:(id)arg1;
- (id)easterEggDictWithUid:(id)arg0;
- (void)changeDevInfoWithUid:(id)arg0 appList:(id)arg1;
- (void)changeDevInfoWithUid:(id)arg0 devModeSwitchOn:(BOOL)arg1;
- (void)changeDevInfoWithAppId:(id)arg0 easterEggDict:(id)arg1;
- (void)bindDeviceWithUid:(id)arg0 appId:(id)arg1 appName:(id)arg2 version:(id)arg3 appType:(long long)arg4;
- (void)unbindDeviceWithUid:(id)arg0 appId:(id)arg1;
- (void)changeDevInfoWithUid:(id)arg0 appId:(id)arg1 controlBoxOn:(BOOL)arg2;
- (void)changeDevInfoWithUid:(id)arg0 canShowDevMode:(BOOL)arg1;
- (void)trackDevelopModeSwitchWithIsOn:(BOOL)arg0 userOpen:(BOOL)arg1 appCount:(long long)arg2;
- (void)trackDevelopTestJoinResultWithResultType:(id)arg0 failType:(id)arg1 successType:(id)arg2 appId:(id)arg3 appName:(id)arg4 appType:(long long)arg5;

@end
