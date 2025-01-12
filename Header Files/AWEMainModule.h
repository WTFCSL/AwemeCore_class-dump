//
//     Generated by private class-dump
//

@class NSString;

@interface AWEMainModule : NSObject <HTSAppLifeCycle, AWEAppBytedSettingMessage, AWEMainModulePrivateProtocol> {
    BOOL _shouldCleanLegacyFiles;
    BOOL _settingsRequestCompleted;
    BOOL _normalAlertsAdded;
    BOOL _isVoiceOverRunning;
    BOOL _needStartDelayTask;
    BOOL _hadRegisterFireBase;
    long long _badgeNumberAfterSplash;
}

@property (nonatomic) long long badgeNumberAfterSplash;
@property (nonatomic) BOOL shouldCleanLegacyFiles;
@property (nonatomic) BOOL settingsRequestCompleted;
@property (nonatomic) BOOL normalAlertsAdded;
@property (nonatomic) BOOL isVoiceOverRunning;
@property (nonatomic) BOOL needStartDelayTask;
@property (nonatomic) BOOL hadRegisterFireBase;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEMainModuleDOUYINLiteAdapterClass;
+ (Class)aAWEMainModuleCommonAdapterClass;
+ (Class)aAWEMainModuleDOUYINAdapterClass;
+ (Class)aAWELoginRedPacketAlertManagerClass;

- (void)onSplashRemoved;
- (void)onAppDidBecomeActive;
- (BOOL)shouldNotShowNoWifiAlertUseNewStrategy;
- (id)freeFlowCardURL;
- (void)onAppWillTerminate;
- (void)onAppDidEnterBackground;
- (void)onAppDidFinishLaunching;
- (void)onAppWillResignActive;
- (void)bytedSettingDidChange;
- (void)onAppWillEnterForeground;
- (void)onHandleEventsForBackgroundURLSession;
- (BOOL)onHandleAppContinueUserActivity;
- (void)uploadAdressBookIfNeeded;
- (void)setIsVoiceOverRunning:(BOOL)arg0;
- (void)_onAppRootViewDidAppear;
- (void)voiceOverStatusChange;
- (id)aAWEMainModuleDOUYINLiteAdapter;
- (void)onSplashFakeViewRemoved;
- (id)aAWEMainModuleCommonAdapter;
- (void)onAppRootViewDidAppear;
- (void)_onAppDidFinishLaunching;
- (BOOL)shouldUploadAddressBookAndLocationAccess;
- (void)uploadAddressBookAndLocationAccessWithContext:(id)arg0;
- (void)voiceoverOpenStatusTrack;
- (BOOL)shouldCleanLegacyFiles;
- (void)setShouldCleanLegacyFiles:(BOOL)arg0;
- (id)aAWEMainModuleDOUYINAdapter;
- (BOOL)shouldShowAlertViewWhenRootViewDidAppear;
- (void)p_onAppDidBecomeActive;
- (BOOL)__shouldHandleCoreSpotlightSearchableItemActionType;
- (void)_showAlertViewIfNeeded;
- (long long)badgeNumberAfterSplash;
- (void)setBadgeNumberAfterSplash:(long long)arg0;
- (void)triggerAlertSplashEndEventIfPossible;
- (BOOL)normalAlertsAdded;
- (BOOL)settingsRequestCompleted;
- (BOOL)shouldHandlePrivaryCallback;
- (void)voiceoverStatusChangeTrack;
- (BOOL)voiceoverOpenStatusTrackSetting;
- (void)onSplashDisappeared;
- (void)setNeedStartDelayTask:(BOOL)arg0;
- (void)p_fetchPrivacySetting;
- (BOOL)liteIncentiveBootFrameSwitch;
- (BOOL)shouldCheckBDFeedBackAvailable;
- (void)p_onAppDidFinishLaunching;
- (BOOL)liteIncentiveBootDelaySwitch;
- (BOOL)needStartDelayTask;
- (void)showAlertViewIfNeeded;
- (void)setNormalAlertsAdded:(BOOL)arg0;
- (void)updateUserAgentCache;
- (id)aAWELoginRedPacketAlertManager;
- (void)setSettingsRequestCompleted:(BOOL)arg0;
- (void)startDelayTaskWithHeaders:(id)arg0;
- (void)setupDigitalWellbeingAlertTypeIntroduction;
- (BOOL)hadRegisterFireBase;
- (void)setHadRegisterFireBase:(BOOL)arg0;
- (BOOL)isVoiceOverRunning;

@end
