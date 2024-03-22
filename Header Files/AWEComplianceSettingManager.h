//
//     Generated by private class-dump
//

@class AWEComplianceSettingModel, NSString, NSMutableSet, NSMutableArray;
@protocol AWEHttpTask;

@interface AWEComplianceSettingManager : NSObject <AWEUserMessage, AWESettingsComboRequestProtocol, AWEBasicModeMessage, AWEComplianceProtocol> {
    BOOL _hasComplianceSettingReturned;
    BOOL _forceToCacheWindowConfig;
    BOOL _hasFecthSettings;
    BOOL _isPreFetchTaskFailure;
    long long pushNotificationOperation;
    AWEComplianceSettingModel *_model;
    NSMutableArray *_whiteList;
    NSMutableArray *_blackList;
    NSMutableSet *_whiteSet;
    NSMutableSet *_blackSet;
    NSString *_modelAssociateUserID;
    id<AWEHttpTask> _preFetchTask;
    NSMutableArray *_statusBlockArray;
    long long _didEmptyRetryCount;
}

@property (retain, nonatomic) NSMutableArray *whiteList;
@property (retain, nonatomic) NSMutableArray *blackList;
@property (retain, nonatomic) NSMutableSet *whiteSet;
@property (retain, nonatomic) NSMutableSet *blackSet;
@property (retain) AWEComplianceSettingModel *model;
@property (copy) NSString *modelAssociateUserID;
@property (retain, nonatomic) id<AWEHttpTask> preFetchTask;
@property (nonatomic) BOOL hasComplianceSettingReturned;
@property (nonatomic) BOOL forceToCacheWindowConfig;
@property (nonatomic) BOOL hasFecthSettings;
@property (retain, nonatomic) NSMutableArray *statusBlockArray;
@property (nonatomic) long long didEmptyRetryCount;
@property (nonatomic) BOOL isPreFetchTaskFailure;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) AWEComplianceSettingModel *complianceModel;
@property (nonatomic) long long pushNotificationOperation;

+ (void)_aweLazyRegisterLoad;
+ (void)doOriginalActions;
+ (id)settingsRequestPath;
+ (void)updateSettingsWithDictionary:(id)arg0;
+ (id)settingsRequestParamsDictionary;
+ (void)requestFailedWithNoRetryCode;
+ (Class)aAWEUserCenterModuleServiceDOUYINHTSAdapterClass;
+ (id)sharedInstance;

- (void)didFinishLogin;
- (void)didFinishLogout;
- (id)complianceModel;
- (id)whiteList;
- (void)setWhiteList:(id)arg0;
- (id)blackList;
- (void)setBlackList:(id)arg0;
- (void)basicModeDidChange:(BOOL)arg0;
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
- (void)checkDiffWithOriginModel:(id)arg0 newModel:(id)arg1;
- (void)updateModelAssociateUserID;
- (id)modelAssociateUserID;
- (void)setModelAssociateUserID:(id)arg0;
- (void)setHasComplianceSettingReturned:(BOOL)arg0;
- (void)setForceToCacheWindowConfig:(BOOL)arg0;
- (void)p_registerWeakNetworkObserver;
- (BOOL)p_isEnableWeakNetworkOptimize;
- (void)p_handleWeakNetworkNotification:(id)arg0;
- (BOOL)isPreFetchTaskFailure;
- (void)p_fetchWithShouldFilterTag:(BOOL)arg0 retryTime:(long long)arg1 completion:(id /* block */)arg2;
- (void)setIsPreFetchTaskFailure:(BOOL)arg0;
- (id)getStorageForTeenModeAlertType:(long long)arg0;
- (BOOL)enableCheckTeenModeStatusBugfix;
- (BOOL)hasFecthSettings;
- (void)p_executeStatusBlock;
- (void)p_persistComplianceModel:(id)arg0;
- (void)setDidEmptyRetryCount:(long long)arg0;
- (void)p_fetchComplianceSettingWithShouldFilterTag:(BOOL)arg0 completion:(id /* block */)arg1;
- (BOOL)enableDidEmptyCheck;
- (long long)didEmptyRetryCount;
- (unsigned long long)checkDidEmptyStatusWithModel:(id)arg0;
- (void)p_fetchComplianceSettingForDidEmptyWithCompletion:(id /* block */)arg0;
- (void)trackMonitorWithModel:(id)arg0 isOverTime:(BOOL)arg1;
- (id)preFetchTask;
- (id)checkDidEmptyStatusWithModel:(id)arg0 competion:(id /* block */)arg1;
- (void)p_executeCommonRequestCallBackWithModel:(id)arg0;
- (void)setHasFecthSettings:(BOOL)arg0;
- (void)p_recordPreFetchTaskWithModel:(id)arg0 error:(id)arg1;
- (void)setPreFetchTask:(id)arg0;
- (id)p_calculateListSetFromListArray:(id)arg0;
- (void)setWhiteSet:(id)arg0;
- (BOOL)hasComplianceSettingReturned;
- (void)cacheWindowConfigAndImageWithTeenModeAlertType:(long long)arg0;
- (BOOL)forceToCacheWindowConfig;
- (void)asynJsonModelWithComplianceSettings:(id)arg0;
- (void)updateSettingWithResponse:(id)arg0 error:(id *)arg1;
- (void)p_calculateBlockListAndCheckIfChangedOnColdStart:(id /* block */)arg0 shouldFilterTag:(BOOL)arg1;
- (id)aAWEUserCenterModuleServiceDOUYINHTSAdapter;
- (BOOL)shouldShowQuickSwitch;
- (BOOL)enableQuickSwitchBySever;
- (void)setQuickSwitchEnable:(BOOL)arg0;
- (void)tapQuickSwitch:(BOOL)arg0 completion:(id /* block */)arg1;
- (id)statusBlockArray;
- (void)p_calculateBlockListAndCheckIfChangedWithCompletion:(id /* block */)arg0 shouldFilterTag:(BOOL)arg1;
- (void)trackTimeLockChangeWithOriginScreenTime:(long long)arg0 newScreenTime:(long long)arg1;
- (void)opt_cacheWindowConfigAndImageWithTeenModeAlertType:(long long)arg0;
- (id)p_tipForRecommend;
- (void)setBlackSet:(id)arg0;
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
- (void)setStatusBlockArray:(id)arg0;
- (void)setModel:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)model;
- (void)dealloc;

@end