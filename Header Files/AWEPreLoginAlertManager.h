//
//     Generated by private class-dump
//

@class DYAThemeModel, NSString, DYLastLoginUserModel, NSNumber, NSObject;
@protocol OS_dispatch_semaphore;

@interface AWEPreLoginAlertManager : NSObject <AWEAlertProtocol, AWEPreLoginAlertManagerProtocol> {
    BOOL _hasTrustAccounts;
    BOOL _enableOneLogin;
    BOOL _hasRequestTheme;
    BOOL _hasShowPreLoginAlertAfterStartup;
    id /* block */ _onClose;
    DYLastLoginUserModel *_lastOneLoginUser;
    NSNumber *_shouldLoginByTTAccountSDKFlag;
    NSNumber *_didLoginByTTAccountSDKFlag;
    long long _requestFinishedCount;
    DYAThemeModel *_themeModel;
    NSObject<OS_dispatch_semaphore> *_sem;
    long long _totalRequestCount;
}

@property (copy, nonatomic) id /* block */ onClose;
@property (retain, nonatomic) DYLastLoginUserModel *lastOneLoginUser;
@property (nonatomic) BOOL hasTrustAccounts;
@property (nonatomic) BOOL enableOneLogin;
@property (copy, nonatomic) NSNumber *shouldLoginByTTAccountSDKFlag;
@property (copy, nonatomic) NSNumber *didLoginByTTAccountSDKFlag;
@property (nonatomic) long long requestFinishedCount;
@property (retain, nonatomic) DYAThemeModel *themeModel;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *sem;
@property (nonatomic) long long totalRequestCount;
@property (nonatomic) BOOL hasRequestTheme;
@property (nonatomic) BOOL hasShowPreLoginAlertAfterStartup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareManager;
+ (Class)aAWEUserModuleServiceDOUYINHTSAdapterClass;
+ (Class)aAWEUserModuleServiceDOUYINAdapterClass;
+ (Class)aAWEUserModuleServiceDOUYINLiteAdapterClass;

- (void)showWithCloseCallback:(id /* block */)arg0;
- (BOOL)canShow;
- (BOOL)preLoginShowedAfterStartup;
- (void)networkingReachabilityDidChangeNotification;
- (id)dateOfHour:(long long)arg0 minute:(long long)arg1 second:(long long)arg2 date:(id)arg3;
- (long long)preLoginAlertLastShowTime;
- (long long)loginGuideAlertLastShowTime;
- (id)themeModel;
- (void)setThemeModel:(id)arg0;
- (void)requestFinish;
- (id)aAWEUserModuleServiceDOUYINHTSAdapter;
- (id)zeroDateWithUpdateHourDate:(id)arg0 updateHour:(long long)arg1;
- (long long)requestFinishedCount;
- (void)setRequestFinishedCount:(long long)arg0;
- (long long)totalRequestCount;
- (void)setTotalRequestCount:(long long)arg0;
- (BOOL)enableOneLogin;
- (id)aAWEUserModuleServiceDOUYINAdapter;
- (void)addShowCount;
- (void)requestThemeDataIfNeed;
- (void)setEnableOneLogin:(BOOL)arg0;
- (void)setHasTrustAccounts:(BOOL)arg0;
- (void)setLastOneLoginUser:(id)arg0;
- (BOOL)hasRequestTheme;
- (void)requestThemeData;
- (void)setHasRequestTheme:(BOOL)arg0;
- (void)didLoginByTTAccountSDK;
- (void)showPreLoginWithPriorityConfig;
- (BOOL)hasShowFindFriendsLoginGuideToday;
- (BOOL)shouldLoginByTTAccountSDK;
- (void)clearPeriodIfNeeded;
- (id)frequencyOptDic;
- (id)shouldLoginByTTAccountSDKFlag;
- (void)setShouldLoginByTTAccountSDKFlag:(id)arg0;
- (id)didLoginByTTAccountSDKFlag;
- (void)setDidLoginByTTAccountSDKFlag:(id)arg0;
- (void)trackFreq;
- (void)__contextThemeIdFromServerWithCompletion:(id /* block */)arg0;
- (id)__contextThemeId;
- (id)aAWEUserModuleServiceDOUYINLiteAdapter;
- (BOOL)canShowNow;
- (id)lastOneLoginUser;
- (BOOL)hasTrustAccounts;
- (BOOL)hasShowPreLoginAlertAfterStartup;
- (void)setHasShowPreLoginAlertAfterStartup:(BOOL)arg0;
- (id)sem;
- (id)init;
- (void).cxx_destruct;
- (void)setSem:(id)arg0;
- (void)dealloc;
- (void)prepareWithCompletion:(id /* block */)arg0;
- (id /* block */)onClose;
- (void)setOnClose:(id /* block */)arg0;

@end
