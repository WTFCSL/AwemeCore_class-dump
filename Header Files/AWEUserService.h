//
//     Generated by private class-dump
//

@class NSString;
@protocol AWEUserService;

@interface AWEUserService : HTSService <HTSService, AWEUserService> {
    BOOL _enableMultiLogin;
    BOOL _enableVCDV2;
    BOOL _enablePrefetchLogin;
    id<AWEUserService> _serviceImp;
    Class _serviceImpClass;
    unsigned long long _maxAccountNumber;
}

@property (readonly, nonatomic) id<AWEUserService> serviceImp;
@property (readonly, nonatomic) Class serviceImpClass;
@property (readonly, nonatomic) unsigned long long maxAccountNumber;
@property (readonly, nonatomic) BOOL enableMultiLogin;
@property (readonly, nonatomic) BOOL enableVCDV2;
@property (readonly, nonatomic) BOOL enablePrefetchLogin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)onAppLaunchWithConfiguration;
+ (BOOL)isMutliAccountLogined;
+ (BOOL)hasNewNoticeForBackgroundUsers;
+ (long long)p_unreadCountForUser:(id)arg0;
+ (Class)aAWEUserModuleConfigCommonClass;
+ (id)config;
+ (id)sharedService;

- (void)onServiceInit;
- (void)showLogin;
- (id)currentLoginUser;
- (void)hitRankWithStarID:(id)arg0;
- (id)aweLoginSourceTrackerInstance;
- (void)trackSource:(id)arg0 position:(id)arg1;
- (id)lastLoginUserID;
- (id)lastLoginPhoneNumber;
- (void)requireLogin:(id /* block */)arg0;
- (void)requireLogin:(id /* block */)arg0 withTrackerInformation:(id)arg1;
- (void)requireLoginWithContext:(id)arg0 completion:(id /* block */)arg1;
- (void)requireLoginWithContext:(id)arg0 resultCompletion:(id /* block */)arg1;
- (void)requireLoginWithContext:(id)arg0 digitalWellBeingCheckCompletion:(id /* block */)arg1 loginCompletion:(id /* block */)arg2;
- (id)requirePadCastLoginState;
- (void)requirePadCastLoginTokenWithState:(id)arg0 completion:(id /* block */)arg1;
- (void)requirePadCastLoginWithToken:(id)arg0 params:(id)arg1;
- (void)multiLogin:(id /* block */)arg0 withTrackerInformation:(id)arg1;
- (BOOL)isSwitchingAccount;
- (void)switchToUID:(id)arg0 enterFrom:(id)arg1 completion:(id /* block */)arg2;
- (void)switchToUID:(id)arg0 enterFrom:(id)arg1 trackParams:(id)arg2 completion:(id /* block */)arg3;
- (void)switchToSecUID:(id)arg0 enterFrom:(id)arg1 completion:(id /* block */)arg2;
- (void)switchToUser:(id)arg0 completion:(id /* block */)arg1;
- (void)switchToUser:(id)arg0 enterFrom:(id)arg1 completion:(id /* block */)arg2;
- (void)showAccountSwitchPage:(id)arg0;
- (void)showAccountSwitchPage:(id)arg0 enterFrom:(id)arg1;
- (void)showAccountSwitchPage:(id)arg0 enterFrom:(id)arg1 completion:(id /* block */)arg2;
- (void)showAccountSwitchPage:(id)arg0 enterFrom:(id)arg1 needPopWhenLogout:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)showQuickSwitchViewControllerWithExtraDict:(id)arg0;
- (void)showQuickSwitchViewControllerWithExtraDict:(id)arg0 shouldInfluenceBackgroundVCLifeCycle:(BOOL)arg1;
- (void)removeOneLoginAccountWithSecuid:(id)arg0;
- (void)tryCreateSubAccountWith:(id /* block */)arg0 checkCantRegisterReason:(BOOL)arg1 viewStyle:(long long)arg2;
- (id)loginedUsers;
- (BOOL)supportMultiLogin;
- (unsigned long long)maxLoginedAccounts;
- (BOOL)removeLoginBackgroundUser:(id)arg0;
- (BOOL)isCurrentLoginUserWithID:(id)arg0;
- (void)syncAwemeUser:(id /* block */)arg0;
- (void)syncAwemeUser:(id /* block */)arg0 extraParams:(id)arg1;
- (void)logoutAwemeUser;
- (void)logoutAwemeUser:(BOOL)arg0;
- (void)logout:(id)arg0;
- (void)logoutAwemeUserWithReason:(id)arg0 enterFrom:(id)arg1;
- (void)logoutOthersWithCompletion:(id /* block */)arg0;
- (void)finishContextManager;
- (void)finishContextManagerWithCloseError;
- (void)finishContextManagerWithPlatform:(unsigned long long)arg0;
- (BOOL)inLoginProcedure;
- (BOOL)inLogoutProcedure;
- (BOOL)inLoginProcedureOpt;
- (void)turnOnPostNotificationStateWithUser:(id)arg0 completion:(id /* block */)arg1;
- (void)turnOffPostNotificationStateWithUser:(id)arg0 completion:(id /* block */)arg1;
- (void)setRemarkName:(id)arg0 user:(id)arg1 completion:(id /* block */)arg2;
- (void)showOneDayWithUser:(id)arg0 completion:(id /* block */)arg1;
- (void)hideOneDayWithUser:(id)arg0 completion:(id /* block */)arg1;
- (void)syncUserAfterDistributeLoginStatusWithContext:(id)arg0 completion:(id /* block */)arg1;
- (void)loginFromOuter:(id)arg0 context:(id)arg1 landFeed:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)updateCurrentUser:(id)arg0;
- (void)persistPlatformTokenInfoModel:(id)arg0 forUser:(id)arg1;
- (void)removePlatformTokenInfoModelForUser:(id)arg0;
- (id)platformTokenInfoModelForUser:(id)arg0;
- (BOOL)isBindToThirdPlatform:(unsigned long long)arg0;
- (BOOL)isThirdBindExpiredForPlatform:(unsigned long long)arg0;
- (id)bindedPlatforms;
- (id)bindedNicknameForPlatform:(unsigned long long)arg0;
- (id)bindedUidForPlatform:(unsigned long long)arg0;
- (id)bindedPhoneNumber;
- (id)bindedPhoneCountryCode;
- (id)currentLoginNickname;
- (id)currentLoginPassportAvatarURL;
- (id)recentLoginedUserIdListWithCountLimit:(id)arg0;
- (void)updateDeviceRecordStatusNeedDelay:(BOOL)arg0 WithPassport:(id)arg1;
- (void)setDisableSaveLastLoginInfo:(BOOL)arg0;
- (void)refreshDeviceRecordStatus;
- (id)showInController:(id)arg0 backgroundColor:(id)arg1 showHideSwitch:(BOOL)arg2 switchIsOn:(BOOL)arg3 birthday:(id)arg4 valueChange:(id /* block */)arg5 completion:(id /* block */)arg6;
- (void)removeLastLoginUserWithID:(id)arg0;
- (void)startUpPreRequestWhenLaunch;
- (void)configKeychainLogin;
- (BOOL)shouldShowSharedLoginForLite;
- (BOOL)shouldShowSharedLoginForDouyin;
- (BOOL)shouldShowSharedLoginForHotsoon;
- (id)preLoginAlertManager;
- (id)forceLoginGuideAlertManager;
- (id)unBindAlertManager;
- (BOOL)enableShowPreLoginAlertManager;
- (BOOL)preLoginShowedAfterStartup;
- (BOOL)shouldShowDouyinSharedLogin;
- (BOOL)shouldShowLiteSharedLogin;
- (BOOL)canShowShareLogin;
- (void)storageShareLoginFrequency;
- (void)storageNextShareLoginNeedFrequency:(BOOL)arg0;
- (BOOL)isGoldenCoinUserLogin;
- (BOOL)isEcommerceUserLogin;
- (id)textForDifferentTarget;
- (void)startAuthLoginWithParams:(id)arg0 platform:(unsigned long long)arg1 trackInfo:(id)arg2;
- (void)setUpUserFilter;
- (void)unBindWithEnterFrom:(id)arg0 Completion:(id /* block */)arg1;
- (void)storeKeychainInfoIfNeeded;
- (void)saveKeychainUserInfoWhenNicknameOrAvatarChanged;
- (void)registerThemeManager:(Class)arg0;
- (BOOL)hideCreateSubGuideDialog;
- (BOOL)isForbiddenShowByForceGuideAlertManagerToday;
- (void)updateKeyChainUserInfoIfNeed;
- (BOOL)shouldUseUnifyUserStorage;
- (BOOL)isConfirmUserProtocol;
- (void)requireLoginWithContext:(id)arg0 completion:(id /* block */)arg1 willSelectButtonType:(long long)arg2;
- (void)requireLoginWithContext:(id)arg0 digitalWellBeingCheckCompletion:(id /* block */)arg1 loginCompletion:(id /* block */)arg2 willSelectButtonType:(long long)arg3;
- (void)chooseLiveAccountWithModel:(id)arg0 isAnchor:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)syncAwemeUserAndAccountUser:(id /* block */)arg0;
- (void)shouldShowDialog:(id)arg0 completionBlock:(id /* block */)arg1;
- (void)fetchConnectUserProfileWithAids:(id)arg0 completion:(id /* block */)arg1;
- (unsigned long long)maxAccountNumber;
- (unsigned long long)maxAccountNumber;
- (BOOL)enableMultiLogin;
- (BOOL)enableMultiLogin;
- (BOOL)enableVCDV2;
- (BOOL)enableVCDV2;
- (BOOL)enablePrefetchLogin;
- (BOOL)enablePrefetchLogin;
- (id)aAWEUserModuleConfigCommon;
- (id)serviceImp;
- (id)serviceImp;
- (Class)serviceImpClass;
- (Class)serviceImpClass;
- (id)userID;
- (void).cxx_destruct;
- (id)sessionID;
- (id)currentContext;
- (BOOL)respondsToSelector:(SEL)arg0;
- (id)forwardingTargetForSelector:(SEL)arg0;
- (id)allUsers;
- (BOOL)isLogin;
- (BOOL)isNewUser;

@end