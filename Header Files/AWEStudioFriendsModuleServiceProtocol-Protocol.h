//
//     Generated by private class-dump
//

@protocol AWEStudioFriendsModuleServiceProtocol <NSObject>

- (Class)syncTipsAlertManagerClass;
- (Class)AWEPrivacyPermissionDecouplingManagerClass;
- (BOOL)disabledPublishSync;
- (id)privacyStatusWithPrivacyType:(unsigned long long)arg0 isExclusionSelected:(BOOL)arg1 isVisibleSelected:(BOOL)arg2 isCloseFriends:(BOOL)arg3;
- (id)privacyStatusWithPublishModel:(id)arg0;
- (BOOL)addDotViewForPrivateCellIfNeeded;
- (void)hasClickedPrivateCellYellowDot;
- (void)configPrivacyModelWithPublishModel:(id)arg0;
- (id)privacyStatusWithParamsModel:(id)arg0;
- (id)familiarPrivacyStatusWithPublishModel:(id)arg0;
- (id)privacyDisplayImageWithPublishModel:(id)arg0;
- (id)privatePermissionTitleWithPublishModel:(id)arg0;
- (void)changeAwemePrivacyTypeWithAwemeModel:(id)arg0 publishModel:(id)arg1 completion:(id /* block */)arg2;
- (void)trackSelectPrivacyEvent:(unsigned long long)arg0 isExclusionSelected:(BOOL)arg1 isVisibleSelected:(BOOL)arg2 isCloseFriends:(BOOL)arg3 extraParam:(id)arg4;
- (BOOL)isTextStickerShortcutEnabled;
- (id)getLatestWatchedMaskIDList;
- (BOOL)isEnableCloseFriendsFeature;
- (double)enterQuickRecordInFamiliarDateDiff;
- (void)videoNewPublishViewControllerPublishButtonClicked:(id)arg0;
- (void)exitSameStyleShoot:(id)arg0;
- (void)presentPrivacySettingsWithPublishViewModel:(id)arg0 storyTTLBlock:(id /* block */)arg1 selectPrivacyBlock:(id /* block */)arg2 dismissBlock:(id /* block */)arg3 enterFrom:(id)arg4;
- (void)presentPrivacySettingsWithPublishViewModel:(id)arg0 storyTTLBlock:(id /* block */)arg1 dismissBlock:(id /* block */)arg2;
- (void)presentPrivacySettingsWithPublishViewModel:(id)arg0 storyTTLBlock:(id /* block */)arg1;
- (id)duetOrStoryPermissionSettingViewControllerWithDataController:(id)arg0;

@end
