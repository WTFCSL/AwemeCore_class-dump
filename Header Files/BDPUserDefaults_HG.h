//
//     Generated by private class-dump
//

@class BDPMMKVStorage, NSString, NSDictionary, NSUserDefaults;

@interface BDPUserDefaults_HG : NSObject {
    NSUserDefaults *_hgUserDefaults;
    BDPMMKVStorage *_hgMMKVStorage;
}

@property (retain, nonatomic) NSUserDefaults *hgUserDefaults;
@property (retain, nonatomic) BDPMMKVStorage *hgMMKVStorage;
@property (retain, nonatomic) NSDictionary *usersAuthenticationStatus;
@property (nonatomic) long long exitPopupRecordCount;
@property (nonatomic) double lastExitPopupTime;
@property (retain, nonatomic) NSDictionary *exitpopupNewuserList;
@property (nonatomic) long long exitpopupNewuserListIsNew;
@property (retain, nonatomic) NSDictionary *exitpopupNewuserTimeTable;
@property (retain, nonatomic) NSDictionary *gridGameFrequencyControlDic;
@property (retain, nonatomic) NSString *i18nVersion;
@property (retain, nonatomic) NSDictionary *settingsManagerSettings;
@property (retain, nonatomic) NSString *settingsManagerCtxInfos;
@property (nonatomic) long long settingsManagerSettingsTime;
@property (retain, nonatomic) NSString *updatedJSLibFilePath;
@property (retain, nonatomic) NSDictionary *sdkProtection;
@property (nonatomic) double revisitEducationLastShowTime;
@property (nonatomic) long long revisitEducationRecordCount;
@property (retain, nonatomic) NSDictionary *exitPopupSubscribeInfo;
@property (retain, nonatomic) NSDictionary *hostUserDefaults;
@property (retain, nonatomic) NSDictionary *hostDeveloperInfo;
@property (nonatomic) BOOL isRankListRemindHasShown;
@property (nonatomic) long long lastRevisitNoRemindTime;
@property (retain, nonatomic) NSDictionary *reddotInfos;
@property (copy, nonatomic) NSDictionary *floatingBallControl;

+ (id)sharedInstance;

- (id)sdkProtection;
- (void)setSdkProtection:(id)arg0;
- (id)exitPopupSubscribeInfo;
- (void)setExitPopupSubscribeInfo:(id)arg0;
- (id)usersAuthenticationStatus;
- (void)setUsersAuthenticationStatus:(id)arg0;
- (void)setAddDesktopGuideViewInfo:(id)arg0 withKey:(id)arg1;
- (id)addDesktopGuideViewInfoWithKey:(id)arg0;
- (id)gridGameFrequencyControlDic;
- (void)setGridGameFrequencyControlDic:(id)arg0;
- (id)announcementInfoWithKey:(id)arg0;
- (void)setAnnouncementInfo:(id)arg0 withKey:(id)arg1;
- (void)setFloatingBallControl:(id)arg0;
- (id)floatingBallControl;
- (id)updatedJSLibFilePath;
- (void)setUpdatedJSLibFilePath:(id)arg0;
- (id)reddotInfos;
- (void)setReddotInfos:(id)arg0;
- (void)setHgUserDefaults:(id)arg0;
- (id)hgUserDefaults;
- (long long)exitPopupRecordCount;
- (void)setExitPopupRecordCount:(long long)arg0;
- (double)lastExitPopupTime;
- (void)setLastExitPopupTime:(double)arg0;
- (id)exitpopupNewuserList;
- (void)setExitpopupNewuserList:(id)arg0;
- (long long)exitpopupNewuserListIsNew;
- (void)setExitpopupNewuserListIsNew:(long long)arg0;
- (id)exitpopupNewuserTimeTable;
- (void)setExitpopupNewuserTimeTable:(id)arg0;
- (id)i18nVersion;
- (void)setI18nVersion:(id)arg0;
- (id)settingsManagerSettings;
- (void)setSettingsManagerSettings:(id)arg0;
- (id)settingsManagerCtxInfos;
- (void)setSettingsManagerCtxInfos:(id)arg0;
- (long long)settingsManagerSettingsTime;
- (void)setSettingsManagerSettingsTime:(long long)arg0;
- (double)revisitEducationLastShowTime;
- (void)setRevisitEducationLastShowTime:(double)arg0;
- (long long)revisitEducationRecordCount;
- (void)setRevisitEducationRecordCount:(long long)arg0;
- (id)hostUserDefaults;
- (void)setHostUserDefaults:(id)arg0;
- (id)hostDeveloperInfo;
- (void)setHostDeveloperInfo:(id)arg0;
- (BOOL)isRankListRemindHasShown;
- (void)setIsRankListRemindHasShown:(BOOL)arg0;
- (long long)lastRevisitNoRemindTime;
- (void)setLastRevisitNoRemindTime:(long long)arg0;
- (id)hgMMKVStorage;
- (void)setHgMMKVStorage:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
