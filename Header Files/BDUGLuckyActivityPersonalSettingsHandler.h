//
//     Generated by private class-dump
//

@interface BDUGLuckyActivityPersonalSettingsHandler : BDUGLuckyActivityCommonSettingsHandler {
    BOOL _hasRequestedPersonalSettings;
}

@property (nonatomic) BOOL hasRequestedPersonalSettings;

- (BOOL)hasRequestedPersonalSettings;
- (void)__updateSettingsFromScene:(unsigned long long)arg0 retryCount:(long long)arg1 isForced:(BOOL)arg2;
- (BOOL)__shouldUpdateSettings;
- (void)setHasRequestedPersonalSettings:(BOOL)arg0;
- (id)__currentSettingsPath;
- (void)__trackPersonalSettingsDataWithSettingsInfo:(id)arg0;
- (void)__trackPersonalSettingObjectsWithKeyPaths:(id)arg0 settingsInfo:(id)arg1;
- (void)updateSettingsFromScene:(unsigned long long)arg0 isForced:(BOOL)arg1;
- (id)init;

@end
