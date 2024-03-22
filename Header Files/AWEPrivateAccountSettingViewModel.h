//
//     Generated by private class-dump
//

@class NSString, AWESettingSectionModel, AWESettingItemModel;

@interface AWEPrivateAccountSettingViewModel : AWEPrivacySettingBaseViewModel <AFDSettingSearchDelegate> {
    BOOL _privateAccount;
    AWESettingItemModel *_privateAccountItem;
    AWESettingItemModel *_autoPassItem;
    AWESettingItemModel *_autoFollowBackItem;
    AWESettingSectionModel *_privateAccountSection;
    AWESettingSectionModel *_secondarySettingsSection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL privateAccount;
@property (retain, nonatomic) AWESettingItemModel *privateAccountItem;
@property (retain, nonatomic) AWESettingItemModel *autoPassItem;
@property (retain, nonatomic) AWESettingItemModel *autoFollowBackItem;
@property (retain, nonatomic) AWESettingSectionModel *privateAccountSection;
@property (retain, nonatomic) AWESettingSectionModel *secondarySettingsSection;

+ (unsigned long long)itemStatusWithSettingItem:(id)arg0;
+ (id)settingSearchRegisterDic;

- (BOOL)privateAccount;
- (void)setPrivateAccount:(BOOL)arg0;
- (void)trackEnterPrivateAccountAuth;
- (id)privateAccountSection;
- (id)secondarySettingsSection;
- (id)privateAccountItem;
- (id)autoPassItem;
- (id)autoFollowBackItem;
- (void)p_switchPrivateAccount;
- (void)p_switchAutoPass:(BOOL)arg0;
- (void)p_switchAutoFollowBack:(BOOL)arg0;
- (void)p_trackClickPrivateAccountAuth;
- (void)p_trackSwitchAutoPass:(BOOL)arg0;
- (void)p_trackSwitchAutoFollowBack:(BOOL)arg0;
- (void)setPrivateAccountItem:(id)arg0;
- (void)setAutoPassItem:(id)arg0;
- (void)setAutoFollowBackItem:(id)arg0;
- (void)setPrivateAccountSection:(id)arg0;
- (void)setSecondarySettingsSection:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
