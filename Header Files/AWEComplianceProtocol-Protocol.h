//
//     Generated by private class-dump
//

@class NSArray, NSSet, AWEComplianceSettingModel;

@protocol AWEComplianceProtocol <NSObject>

+ (id)sharedInstance;

@property (readonly, nonatomic) NSArray *whiteList;
@property (readonly, nonatomic) NSArray *blackList;
@property (readonly, nonatomic) NSSet *whiteSet;
@property (readonly, nonatomic) NSSet *blackSet;
@property (readonly, nonatomic) AWEComplianceSettingModel *complianceModel;
@property (readonly, nonatomic) BOOL hasComplianceSettingReturned;
@property (nonatomic) long long pushNotificationOperation;

- (id)complianceModel;
- (id)whiteList;
- (id)blackList;
- (void)calculateBlockList;
- (void)refreshComplianceSettings;
- (void)updateTimeLockMaxUseTime:(long long)arg0;
- (void)persistCurrentModel;
- (void)updateMinorMode:(BOOL)arg0 withType:(long long)arg1;
- (id)getComlianceSettingModel;
- (BOOL)teenModeEnabledSelf;
- (void)fetchComplianceSettingWithCompletion:(id /* block */)arg0;
- (void)calculateBlockListAndCheckIfChangedWithCompletion:(id /* block */)arg0;
- (BOOL)deviceTeenmodeHasPassword;
- (id)getStorageForTeenModeAlertType:(long long)arg0;
- (BOOL)hasComplianceSettingReturned;
- (void)cacheWindowConfigAndImageWithTeenModeAlertType:(long long)arg0;
- (BOOL)shouldShowQuickSwitch;
- (void)setQuickSwitchEnable:(BOOL)arg0;
- (void)tapQuickSwitch:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)opt_cacheWindowConfigAndImageWithTeenModeAlertType:(long long)arg0;
- (id)whiteSet;
- (id)blackSet;
- (BOOL)shouldShowInSettingsWithIdentifier:(id)arg0;
- (void)calculateBlockListAndCheckIfChangedOnColdStart:(id /* block */)arg0;
- (BOOL)isTeenmodeOpenedInUnloginState;
- (BOOL)userTeenModeHasPassword;
- (BOOL)shouldShowFastEntry;
- (BOOL)shouldShowQuickSwitchInTeen;
- (void)tapQuickSwitchInTeenMode:(BOOL)arg0;
- (void)checkTeenModeStatusWithCompletion:(id /* block */)arg0;
- (long long)pushNotificationOperation;
- (void)setPushNotificationOperation:(long long)arg0;

@end
