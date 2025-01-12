//
//     Generated by private class-dump
//

@class NSString;
@protocol AWEBytedSettingsSetupDelegate;

@interface AWEBytedSettings : AWEBaseSettings <AWEAppSettingUpdateProtocol> {
    id<AWEBytedSettingsSetupDelegate> _setupDelegate;
    unsigned long long _lastTimestamp;
}

@property (nonatomic) unsigned long long lastTimestamp;
@property (retain, nonatomic) id<AWEBytedSettingsSetupDelegate> setupDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)arg0;
+ (id)sharedInstance;

- (void)fetchSettings;
- (void)fetchSettingsWithHeaders:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)updateSettings:(id)arg0;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)setLastTimestamp:(unsigned long long)arg0;
- (unsigned long long)lastTimestamp;
- (id)mutableCopyWithZone:(struct _NSZone { } *)arg0;
- (id)setupDelegate;
- (void)setSetupDelegate:(id)arg0;

@end
