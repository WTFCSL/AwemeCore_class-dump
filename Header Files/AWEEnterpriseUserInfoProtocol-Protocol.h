//
//     Generated by private class-dump
//

@protocol AWEEnterpriseUserInfoProtocol <NSObject>

- (BOOL)hasEmployeePermisson;
- (id)eRoleKey;
- (BOOL)isCompanyProfile;
- (BOOL)hasDouplusShareMoveForward;
- (id)nicknameEditLimitToast;
- (id)avatarEditLimitToast;
- (id)alternativeNickNames;
- (id)atticInfoPicUrl;
- (id)atticInfoIronManUrl;
- (id)profileLinkEditURL;
- (id)basicCurrentUserInfos;
- (id)serviceCenterTitle;
- (id)serviceCenterSchema;
- (BOOL)shouldShowCompanyHomepageTab;
- (BOOL)hasHomepageTabManagementPermission;
- (BOOL)hasHeadImagePermission;
- (BOOL)hasProfilePermission;
- (BOOL)hasTransTabPermission;
- (BOOL)hasIMMonitorPermisson;
- (BOOL)hasIMMonitorEmployeePermisson;
- (BOOL)hasEIMCustomizeMenusPermisson;
- (BOOL)hasIMKeyboardCompanyComponentFunction;
- (BOOL)hasIMSendActionPermisson;
- (BOOL)hasBrandNamePermisson;
- (BOOL)shouldShowEnterpriseRecommendEntry;
- (id)profileHeaderImageURLModels;
- (id)tabCeilingToastIndexAtTab:(long long)arg0 needUpdateLimit:(BOOL)arg1;
- (BOOL)shouldLimitOnTagNeedUpdateLimit:(BOOL)arg0;
- (void)saveInStorageWithLimitID:(long long)arg0 actionType:(long long)arg1;
- (id)enterpriseUserInfoJson;
- (void)enterTagVideoFromPost;
- (BOOL)shouldInterceptModify;
- (BOOL)shouldTrackEnterpriseClickEvent;
- (BOOL)shouldShowGeneralESC;
- (id)serviceCenterTrackerParams;

@end
