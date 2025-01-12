//
//     Generated by private class-dump
//

@class NSString, DYAForceLoginGuideModel, NSObject;
@protocol OS_dispatch_semaphore;

@interface AWEForceLoginGuideAlertManager : NSObject <AWEUserMessage, AWEAlertProtocol, AWEForceGuideAlertManagerProtocol> {
    BOOL _hasSubmitLogin;
    BOOL _hasShow;
    BOOL _hasRequest;
    BOOL _hasShowRightSkipBtn;
    BOOL _hasRecordSkip;
    DYAForceLoginGuideModel *_model;
    long long _loginFailureCount;
    NSString *_lastLoginPlatform;
    long long _requestFinishedCount;
    long long _totalRequestCount;
    NSObject<OS_dispatch_semaphore> *_sem;
}

@property (nonatomic) long long loginFailureCount;
@property (nonatomic) BOOL hasSubmitLogin;
@property (copy, nonatomic) NSString *lastLoginPlatform;
@property (nonatomic) long long requestFinishedCount;
@property (nonatomic) long long totalRequestCount;
@property (nonatomic) BOOL hasShow;
@property (nonatomic) BOOL hasRequest;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *sem;
@property (nonatomic) BOOL hasShowRightSkipBtn;
@property (nonatomic) BOOL hasRecordSkip;
@property (retain, nonatomic) DYAForceLoginGuideModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (id)shareManager;
+ (BOOL)isForbiddenShowByForceGuideAlertManagerToday;
+ (id)loginFailureReleaseBeginDate;
+ (id)noOperationReleaseBeginDate;
+ (long long)noOperationCount;
+ (void)updateNoOperationCount:(long long)arg0;
+ (long long)loginFailureCountLastSession;
+ (void)updateLoginFailureReleaseBeginDate:(id)arg0;
+ (void)updateLoginFailureCountLastSession:(long long)arg0;
+ (void)updateNoOperationReleaseBeginDate:(id)arg0;
+ (void)onClickedSkip;
+ (BOOL)isForceLogin;
+ (void)assumeNoOperation;
+ (id)zeroDateWithUpdateHourDate:(id)arg0 updateHour:(long long)arg1;
+ (BOOL)shouldShowLeftSkipButton;
+ (BOOL)shouldShowRightSkipButton;
+ (void)hasOperation;
+ (void)resetStorage;

- (void)didFinishLogin;
- (void)showWithCloseCallback:(id /* block */)arg0;
- (BOOL)blockAllAlertWhenNotPreparedWithContext:(id)arg0;
- (BOOL)canShow;
- (BOOL)shouldCancelAllOtherPendingAlertsWhenShowed;
- (id)aAWEPadModuleAdapter;
- (BOOL)hasShow;
- (void)setHasShow:(BOOL)arg0;
- (id)dateOfHour:(long long)arg0 minute:(long long)arg1 second:(long long)arg2 date:(id)arg3;
- (void)awe_trackFreq;
- (void)handleLoginEvent:(id)arg0;
- (BOOL)guideInvalidRelease;
- (BOOL)loginFailureRelease;
- (void)updateLoginFailureReleaseIfNeed;
- (void)updateNoOperationReleaseIfNeed;
- (void)handleLoginFailure;
- (long long)loginFailureCount;
- (void)setLoginFailureCount:(long long)arg0;
- (void)updateReleaseEnviroment;
- (id)lastLoginPlatform;
- (void)requestDataIfNeed;
- (void)networkingReachabilityDidChange;
- (BOOL)hasShowRightSkipBtn;
- (void)setHasShowRightSkipBtn:(BOOL)arg0;
- (void)showForceLoginPanelWithCloseCallback:(id /* block */)arg0;
- (BOOL)isFrequencyControlledWithUserType:(unsigned long long)arg0;
- (BOOL)shouldShowHalfLogin;
- (BOOL)hasShowPreLoginAlertToday;
- (void)storeRequestResult:(id)arg0;
- (BOOL)hasRecordSkip;
- (void)setHasRecordSkip:(BOOL)arg0;
- (BOOL)hasSubmitLogin;
- (void)setHasSubmitLogin:(BOOL)arg0;
- (void)setLastLoginPlatform:(id)arg0;
- (long long)requestFinishedCount;
- (void)setRequestFinishedCount:(long long)arg0;
- (long long)totalRequestCount;
- (void)setTotalRequestCount:(long long)arg0;
- (id)sem;
- (BOOL)hasRequest;
- (void)setModel:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)model;
- (void)setSem:(id)arg0;
- (void)dealloc;
- (void)prepareWithCompletion:(id /* block */)arg0;
- (void)setHasRequest:(BOOL)arg0;

@end
