//
//     Generated by private class-dump
//

@protocol AWESettingsModuleService <HTSService>

- (void)fetchSettings;
- (void)fetchSettingsWithHeader:(id)arg0;
- (void)delayFetchSettings;
- (void)delayFetchSettingsWithHeader:(id)arg0;
- (void)registerBusinessSettingsClass:(Class)arg0;
- (BOOL)combineSettingsRequest;
- (id)aweClientABTestManager;
- (void)registerClientABTest:(id)arg0;
- (void)addAPIRequestModifier:(id)arg0;
- (id)settingsManager;

@end
