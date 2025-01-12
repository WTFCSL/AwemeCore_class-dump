//
//     Generated by private class-dump
//

@protocol AWEAntiAddictedTimeManager <AWEDigitalWellbeingModuleService>

@property (readonly, nonatomic) BOOL shouldHideChatPrivacy;
@property (nonatomic) double lastVideoRemindTimeStamp;
@property (readonly, nonatomic) BOOL isShowingTimeLockView;
@property (readonly, nonatomic) BOOL isShowingTeenModeAntiAddictedView;

- (BOOL)shouldHideChatPrivacy;
- (unsigned long long)teenModeStatusCode;
- (BOOL)isUserUnderFourTeenForceTeenModeEnabled;
- (void)startUsingApp;
- (void)stopUsingApp;
- (id)getServerDateOfTodayForHour:(long long)arg0;
- (BOOL)checkIfNeedShowTeenModeAntiAddictedView;
- (void)showTeenModeAntiAddictedView;
- (BOOL)checkIfNeedShowLockView;
- (BOOL)isShowingTeenModeAntiAddictedView;
- (id /* block */)withinTeenModeAntiAddictedTimeValidateBlockForCurrent;
- (double)lastVideoRemindTimeStamp;
- (BOOL)withinDayTime;
- (long long)currentScreenTimeLimit;
- (BOOL)isCurrentTeenModeEnabled;
- (BOOL)isShowingTimeLockView;
- (void)transferToChildAppealPage;
- (void)setHasEnteredDigitalWellbeingOnce:(BOOL)arg0;
- (void)trackTeenProtectionStatusWithScene:(id)arg0;
- (BOOL)shouldShowRemindVideo;
- (void)setTodayRemindedTimeLockWithPassword:(id)arg0;
- (BOOL)clientSharePassword;
- (BOOL)isTimeManagerEnabled;
- (void)transferToCloseServerTeenModePage;
- (void)transferToResetPasswordPage:(BOOL)arg0;
- (BOOL)isUserUnderFourTeen;
- (id)userEnterFourTeenModeDate;
- (BOOL)isUserOverFourTeen;
- (BOOL)isUserNeedVerifyParent;
- (id)userCertificateDate;
- (void)transferToVerifyParentPage;
- (BOOL)isUnderFourTeenTimeLockShowing;
- (BOOL)isTimeLockTime;
- (BOOL)isNormalTimeLockShowing;
- (void)setLastVideoRemindTimeStamp:(double)arg0;
- (id)currentDate;

@optional

- (BOOL)hasValidPassword;
- (void)validatePassword:(id)arg0 enterFrom:(unsigned long long)arg1 completion:(id /* block */)arg2;

@end
