//
//     Generated by private class-dump
//

@class NSDictionary;

@interface ACCAdvancedRecordSettingConfigManager : NSObject {
    NSDictionary *_configMap;
}

@property (retain, nonatomic) NSDictionary *configMap;

+ (BOOL)isLocalChanged:(unsigned long long)arg0;
+ (id)typeToKey:(unsigned long long)arg0;
+ (void)saveSettingIntegerValue:(unsigned long long)arg0 withType:(unsigned long long)arg1;
+ (void)saveSettingBoolValue:(unsigned long long)arg0 withType:(unsigned long long)arg1;
+ (BOOL)isSwitchType:(unsigned long long)arg0;

- (void)setConfigMap:(id)arg0;
- (id)configMap;
- (unsigned long long)getIndexSettingsOf:(unsigned long long)arg0;
- (BOOL)getBoolSettingsOf:(unsigned long long)arg0;
- (BOOL)getPostSaveSwitch:(unsigned long long)arg0;
- (unsigned long long)getRealIndex:(unsigned long long)arg0 withType:(unsigned long long)arg1;
- (id)parserServerConfig;
- (void).cxx_destruct;

@end