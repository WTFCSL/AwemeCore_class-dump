//
//     Generated by private class-dump
//

@class NSString;

@interface ATSBPEASettings : NSObject <AWEAppAwemeSettingMessage> {
    id /* block */ _settingUpdateBlock;
}

@property (copy, nonatomic) id /* block */ settingUpdateBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)certStatementEnabled;
+ (id)limitConfigs;
+ (BOOL)enableHybridCertContextValidation;
+ (double)hybridCertContextCleaningInterval;
+ (double)hybridCertContextCleaningThreshold;
+ (BOOL)enableRuleValidate;
+ (id)sharedSetting;
+ (id)ruleConfigs;
+ (id)hybridCertConfigs;
+ (id)ABTestDict;
+ (id)certStatementDict;
+ (BOOL)blockWhenRuleValidateFail;
+ (BOOL)blockWhenHybridCertRuleFail;
+ (BOOL)blockWhenHybridCertContentFail;
+ (id)enabledHybridCertContextValidationForPageTypes;
+ (id)bpeaCertInfo;
+ (BOOL)actionUnitSwitch;
+ (void)setUpdateBlock:(id /* block */)arg0;

- (void)awemeSettingDidChange;
- (void)setSettingUpdateBlock:(id /* block */)arg0;
- (id /* block */)settingUpdateBlock;
- (id)init;
- (void).cxx_destruct;

@end
