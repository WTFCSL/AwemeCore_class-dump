//
//     Generated by private class-dump
//

@protocol AWETeenModeModuleService <HTSService>

- (id)teenTabBarItemTypes;
- (id)pushSchema;
- (BOOL)teenModeCanHandleURL:(id)arg0 transferType:(unsigned long long)arg1;
- (BOOL)teenModeCanHandleURLString:(id)arg0 transferType:(unsigned long long)arg1;
- (BOOL)teenModePushFeatureOn;
- (BOOL)teenModeAlipayFeatureOn;
- (BOOL)teenModeAlipay:(id)arg0;
- (void)enterByPush:(id)arg0;
- (void)willEnterByNewIntroPage:(BOOL)arg0 AwemeID:(id)arg1 album:(id)arg2 enterFrom:(id)arg3;
- (void)startChangeTeenMode;
- (void)failChangeTeenModelWithErrorCode:(long long)arg0 errorMessage:(id)arg1 isNetwork:(BOOL)arg2;
- (void)resetChangeTeenMode;
- (void)startChangeTeenModeApi;
- (void)endChangeTeenModeApi;
- (id)minorAlbumOfAweme:(id)arg0;
- (void)updateIgonreLongConnectMessage:(BOOL)arg0;
- (id)getContentPreferManager;
- (BOOL)isTeenUpgradeAlertOptimizeEnable;
- (id)versionUpdateManager;

@end
