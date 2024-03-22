//
//     Generated by private class-dump
//

@class NSDictionary;

@interface VmsdkSettingsManager : NSObject {
    NSDictionary *_settingDict;
    long long _settingTime;
}

@property (readonly, nonatomic) NSDictionary *settingDict;
@property (readonly, nonatomic) long long settingTime;

+ (id)shareInstance;

- (void)initSettings;
- (long long)settingTime;
- (void)setSettings:(id)arg0 withTime:(long long)arg1;
- (BOOL)getSettingsFromCache:(id)arg0;
- (int)getSettingsFlag;
- (id)getExperimentSettings:(id)arg0;
- (void).cxx_destruct;
- (id)settingDict;

@end
