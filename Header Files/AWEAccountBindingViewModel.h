//
//     Generated by private class-dump
//

@class NSString, AWEBindSettingsResponse, NSArray, AWEUILoadingView, AWEAccountManager, NSMutableArray, UIViewController, AWEBindGameAccountManager;

@interface AWEAccountBindingViewModel : AWESettingBaseViewModel <DUXAlertDialogDelegate, DUXToastDelegate> {
    BOOL _isUsingXiguaSDK;
    BOOL _shouldRefreshWhenAppear;
    NSArray *_sectionDataArray;
    AWEAccountManager *_accountManager;
    AWEBindGameAccountManager *_gameAccountManager;
    AWEBindSettingsResponse *_bindSettings;
    long long _switchType;
    AWEUILoadingView *_loadingView;
    UIViewController *_dySyncToutiaoViewController;
    NSMutableArray *_thirdBindAccountPlatformList;
    NSMutableArray *_thirdBindGameAccountPlatformIdList;
}

@property (retain, nonatomic) AWEAccountManager *accountManager;
@property (retain, nonatomic) AWEBindGameAccountManager *gameAccountManager;
@property (retain) AWEBindSettingsResponse *bindSettings;
@property (nonatomic) long long switchType;
@property (nonatomic) BOOL syncProfile;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (weak, nonatomic) UIViewController *dySyncToutiaoViewController;
@property (nonatomic) BOOL shouldRefreshWhenAppear;
@property (retain, nonatomic) NSMutableArray *thirdBindAccountPlatformList;
@property (retain, nonatomic) NSMutableArray *thirdBindGameAccountPlatformIdList;
@property (nonatomic) BOOL isUsingXiguaSDK;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEUserCenterModuleServiceDOUYINHTSAdapterClass;
+ (Class)aAWEUserCenterModuleServiceCommonAdaperClass;
+ (Class)aAWEAccountBindingViewModelDOUYINHMAdapterClass;

- (void)alertDialogWillDismiss:(id)arg0;
- (void)DUXToastWillRemoved:(id)arg0;
- (void)fetchSettings;
- (void)listControlDidChange;
- (id)aAWEUserCenterModuleServiceDOUYINHTSAdapter;
- (id)aAWEUserCenterModuleServiceCommonAdaper;
- (id)sectionDataArray;
- (void)setSectionDataArray:(id)arg0;
- (BOOL)shouldRefreshWhenAppear;
- (void)setShouldRefreshWhenAppear:(BOOL)arg0;
- (void)tapWechatBindingCell;
- (void)tapAppleBindingCell;
- (void)tapQQBindingCell;
- (void)tapWeiboBingdingCell;
- (void)tapToutiaoXiguaDongchediBindingCell;
- (void)switchToutiaoSyncVideo:(BOOL)arg0;
- (void)switchToutiaoSyncProfile:(BOOL)arg0;
- (void)switchHuoshanSync:(BOOL)arg0;
- (void)setIsUsingXiguaSDK:(BOOL)arg0;
- (BOOL)isUsingXiguaSDK;
- (unsigned long long)sdkTypeWillCallFromType:(unsigned long long)arg0;
- (void)enterBindPhoneView;
- (unsigned long long)__AWEAccountUtilsContext__;
- (void)refreshBindGameAccount;
- (void)syncUser;
- (void)refreshSyncProfileStatus;
- (void)handleTouXiDongUnbindSuccess:(unsigned long long)arg0;
- (void)updateBigFont;
- (void)setBindSettings:(id)arg0;
- (void)checkHideQQBindCellIfNeeded;
- (void)configToutiaoSyncItemType:(long long)arg0 isOn:(BOOL)arg1 needRefresh:(BOOL)arg2;
- (void)trackThirdBindAccountShow;
- (id)gameAccountManager;
- (void)updateBindGameAccountSection;
- (id)otherBindPlatformAccountSectionModel;
- (id)otherBindPlatformSyncSectionModel;
- (id)aAWEAccountBindingViewModelDOUYINHMAdapter;
- (void)setThirdBindAccountPlatformList:(id)arg0;
- (id)thirdBindAccountPlatformList;
- (void)setThirdBindGameAccountPlatformIdList:(id)arg0;
- (void)tapUnbindGameAccountModel:(id)arg0;
- (id)thirdBindGameAccountPlatformIdList;
- (id)otherBindGameAccountSectionModel;
- (void)trackThirdBindGameAccountShow;
- (void)thirdBindTappedWithType:(unsigned long long)arg0;
- (void)switchOnToutiaoVideoSync;
- (void)switchOffToutiaoVideoSyncWithoutAlert;
- (void)showBindToutiaoAlert;
- (void)updateSyncToToutiaoSetting:(BOOL)arg0;
- (void)updateSyncProfileToToutiaoSetting:(BOOL)arg0;
- (void)turnOffSwitch;
- (void)syncToHuoshan;
- (void)stopSyncToHuoshan;
- (void)trackThirdBindGameEvent:(id)arg0 withPlatformId:(long long)arg1 isResult:(BOOL)arg2 error:(id)arg3 extra:(id)arg4;
- (void)unbindGameAccountPlatformId:(long long)arg0;
- (void)setSyncProfile:(BOOL)arg0;
- (id)_platformNameWithBindType:(unsigned long long)arg0;
- (void)trackThirdBindAccountEvent:(id)arg0 withPlatformType:(unsigned long long)arg1 isResult:(BOOL)arg2 error:(id)arg3 extra:(id)arg4;
- (void)_handleError:(id)arg0 isForBind:(BOOL)arg1 platform:(unsigned long long)arg2;
- (void)monitorThirdPlatformBind:(unsigned long long)arg0 isBinded:(BOOL)arg1 error:(id)arg2 extraInfo:(id)arg3;
- (void)bindWithThirdPartyPlatformType:(unsigned long long)arg0 completion:(id /* block */)arg1 autoSyncToutiao:(BOOL)arg2;
- (id)trackThirdNameWithPlatformType:(unsigned long long)arg0;
- (id)bindSettings;
- (BOOL)canBindWithPlatform:(unsigned long long)arg0 errorMsg:(id *)arg1;
- (void)trackThirdPlatformClickWithPlatformType:(unsigned long long)arg0;
- (void)tapBindedThirdPlatformCell:(unsigned long long)arg0;
- (BOOL)skipAndShowToastIfNeeded:(unsigned long long)arg0;
- (void)tapUnBindedThirdPlatformCell:(unsigned long long)arg0;
- (id)_platformTitleWithBindType:(unsigned long long)arg0;
- (unsigned long long)showMessageTypeFromType:(unsigned long long)arg0;
- (void)handleThirdAccount:(unsigned long long)arg0 isBinded:(BOOL)arg1;
- (void)showToutiaoSyncAlertViewWithType:(unsigned long long)arg0;
- (void)setDySyncToutiaoViewController:(id)arg0;
- (id)dySyncToutiaoViewController;
- (void)setGameAccountManager:(id)arg0;
- (void)refresh;
- (void)setAccountManager:(id)arg0;
- (void).cxx_destruct;
- (id)accountManager;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (BOOL)syncProfile;
- (void)setSwitchType:(long long)arg0;
- (long long)switchType;

@end