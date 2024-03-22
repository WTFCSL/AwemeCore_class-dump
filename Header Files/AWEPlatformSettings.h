//
//     Generated by private class-dump
//

@class NSString;

@interface AWEPlatformSettings : AWEBaseSettings <AWESettingsComboRequestProtocol, AWEAppSettingUpdateProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)doOriginalActions;
+ (id)settingsRequestPath;
+ (void)updateSettingsWithDictionary:(id)arg0;
+ (void)asyncPlatformSettingsIO:(id)arg0;
+ (void)_aweLazyRegisterLoad_SettingsComboRequest;
+ (id)allocWithZone:(struct _NSZone { } *)arg0;
+ (id)sharedInstance;

- (void)fetchSettings;
- (id)init;
- (void)updateSettings:(id)arg0;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)arg0;

@end