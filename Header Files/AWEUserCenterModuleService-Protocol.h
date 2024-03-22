//
//     Generated by private class-dump
//

@protocol AWEUserCenterModuleService <HTSService>

- (id)IMSettingManager;
- (id)IMSettingManager;
- (Class)dLabCenterClass;
- (void)recordHistory:(id)arg0;
- (id)aweContentLanguageManager;
- (Class)aweContentLanguageManagerClass;
- (id)aweAlertWindowManager;
- (id)newProfileSettingSliderViewController;
- (void)uploadBusinessLicenseWithParams:(id)arg0 completion:(id /* block */)arg1;
- (void)uploadBusinessLicenseWithParams:(id)arg0 completion:(id /* block */)arg1;
- (id)otherProfileSettingActionWithUser:(id)arg0;
- (id)otherProfileSettingActionWithUser:(id)arg0;
- (Class)cacheCleanManager;
- (id)currentIMSettingsModel;
- (void)saveCurrentIMSettingsModel;
- (id)chatBlockSettingModel;
- (void)updateWhoCanMessageMeWithSwitchValues:(id)arg0 completion:(id /* block */)arg1;
- (void)updateWhoCanMessageMeWithSwitchValues:(id)arg0 completion:(id /* block */)arg1;
- (BOOL)userCenterConfigShowLoadingView;
- (id)pushNoticeSharedManger;
- (BOOL)onlyFriendCanSeeComment;
- (id)diskSpaceManagementURL;
- (id)settingThemeWarningView;
- (BOOL)hideNoMoreText;
- (id)awePlayHistoryRecordManager;
- (id)aweIMSettingManager;
- (id)aweContentSyncManager;
- (BOOL)imInnerPush;
- (BOOL)livePush;
- (BOOL)enableFriendActive;
- (BOOL)enableEnterpriseNonFriendActive;
- (BOOL)canDisplayEnterpriseNonFriendActiveSwitch;
- (BOOL)imEnableUrgeEnterpriseCommit;
- (BOOL)enableDisplayRecentConsultedCount;
- (BOOL)canDisplaySwitchOfRecentConsultedCount;
- (BOOL)enableSkylightVirtualAvatar;
- (BOOL)imOfflinePushShowDetail;
- (BOOL)imSupportReadStatus;
- (BOOL)imMessageVibrate;
- (BOOL)imMessagePageCanShowPush;
- (BOOL)isNoticeInAppPushOn;
- (BOOL)enableConsecutiveChatDays;
- (id)hideHerPostDescriptionWithTaStr:(id)arg0;
- (id)hideHerPostDescriptionWithTaStr:(id)arg0;
- (id)userRateManager;
- (id)infringementManager;
- (BOOL)checkIsPhoneBinded;
- (id)newAccountManager;
- (BOOL)isPrivacySettingNewStyle;
- (id)featureGuideFrequencyControlModelWithName:(id)arg0 guidID:(long long)arg1;
- (id)featureGuideFrequencyControlModelWithName:(id)arg0 guidID:(long long)arg1;
- (void)setGuideShowForGuideID:(long long)arg0 completion:(id /* block */)arg1;
- (void)updateSettingsWithFieldType:(id)arg0 status:(BOOL)arg1 requestPage:(id)arg2 errorBlock:(id /* block */)arg3 successBlock:(id /* block */)arg4;
- (void)updateSettingsWithFieldType:(id)arg0 status:(BOOL)arg1 requestPage:(id)arg2 errorBlock:(id /* block */)arg3 successBlock:(id /* block */)arg4;
- (id)feedRecommendAlertManager;
- (void)jumpToUserServicePage;
- (void)jumpToFeedBackPage;
- (void)jumpToAboutAmePage;
- (void)jumpToPrivacyPolicyPage;
- (void)jumpToPrivacyThirdSDKPage;
- (void)jumpToSelfInfoInquirePage;
- (void)jumpToPrivacyPermissionPage;
- (void)jumpToCredentialsPage;
- (void)registerIMSettingModelUpdateMessage;
- (id)settingModel;

@optional

- (id)csrLutImage;
- (id)csrHDRLutImage;
- (double)csrLutValue;
- (BOOL)isABOpenCsrLut;
- (long long)protectEyesMode;
- (void)pasteBoardSetString:(id)arg0 withToken:(id)arg1 toastString:(id)arg2;
- (void)openUrl:(id)arg0 withToken:(id)arg1;
- (void)openUrl:(id)arg0 withToken:(id)arg1;
- (BOOL)getCommentAreaAuthorizationState;
- (void)setCommentAreaAuthorizationState:(BOOL)arg0;
- (BOOL)getCommentAreaVideoSearchSameGoodsAuthState;
- (void)setCommentAreaVideoSearchSameGoodsAuthState:(BOOL)arg0;
- (Class)postLayoutManager;
- (BOOL)hasNewNoticeForBackgroundUsers;

@end
