//
//     Generated by private class-dump
//

@class AWEIMDefaultLandingUnreadCountStrategy, NSMutableDictionary, AWEIMDefaultLandingToMessageTabTrackerModel, AWEIMUserHighActiveInfoResponseModel, AWEIMDefaultLandingColdLaunchStrategy, NSString, UIViewController;

@interface AWEIMDefaultLandingToMessageTabManager : NSObject <AWEUserMessage> {
    BOOL _coldLandingTrackerFlag;
    BOOL _hasGetPreIMUnreadCount;
    int _preLandingCount;
    AWEIMDefaultLandingToMessageTabTrackerModel *_trackerModel;
    UIViewController *_lastEnterIMVC;
    AWEIMUserHighActiveInfoResponseModel *_currentLandingConfig;
    long long _unreadCount;
    unsigned long long _currentReason;
    NSMutableDictionary *_onceTrackers;
    AWEIMDefaultLandingColdLaunchStrategy *_coldLaunchStrategy;
    AWEIMDefaultLandingUnreadCountStrategy *_unreadCountStrategy;
}

@property (retain) UIViewController *lastEnterIMVC;
@property BOOL coldLandingTrackerFlag;
@property (retain, nonatomic) AWEIMUserHighActiveInfoResponseModel *currentLandingConfig;
@property (nonatomic) int preLandingCount;
@property (nonatomic) BOOL hasGetPreIMUnreadCount;
@property (nonatomic) long long unreadCount;
@property (nonatomic) unsigned long long currentReason;
@property (retain, nonatomic) NSMutableDictionary *onceTrackers;
@property (retain, nonatomic) AWEIMDefaultLandingColdLaunchStrategy *coldLaunchStrategy;
@property (retain, nonatomic) AWEIMDefaultLandingUnreadCountStrategy *unreadCountStrategy;
@property (retain, nonatomic) AWEIMDefaultLandingToMessageTabTrackerModel *trackerModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableUseMainLandingBootLaunch;
+ (id)im_enableDefaultLandingToImTabPushStringsSetting;
+ (BOOL)enableDefaultLandingToIMTabResetFlagOpt;
+ (int)im_communicationUserFetchInterval;
+ (BOOL)enableDefaultLandingToIMTabOnceOpt;
+ (int)im_enableLandingTracker;
+ (BOOL)im_isSplashShowing;
+ (id)sharedInstance;

- (void)didFinishLogout;
- (BOOL)enableShowDefaultLandingToIMTabSwitch;
- (id)defaultLandingToIMTabSwitchButtonText;
- (void)setCloseColdLaunchLandingToIMSetting:(BOOL)arg0;
- (BOOL)closeColdLaunchLandingToIMSetting;
- (BOOL)defaultLandingMsgTab;
- (void)setDefaultLandingMsgTab:(BOOL)arg0;
- (BOOL)currentIsColdLandingTracker;
- (int)currentLandingCount;
- (int)currentUserActiveLevel;
- (void)resetCurrentIsColdLandingTracker:(BOOL)arg0;
- (unsigned long long)enableWarmLaunchABTest;
- (BOOL)enableAndPrepareDefaultLandingToIMTab;
- (BOOL)enableColdLaunchDefaultLandingToIMTab;
- (BOOL)enableIMLaunchForbiddenSplash;
- (BOOL)enableIMLaunchForbiddenNonFirstBrushSplash;
- (unsigned long long)enableColdLaunchABTest;
- (int)preIMUnreadCount;
- (void)resetUserLandingConfig;
- (BOOL)enableObserveUnreadCountABTest;
- (BOOL)enableObservePushUnreadCountABTest;
- (void)initUserLandingConfig;
- (void)observeTabUnreadCountChange;
- (BOOL)hasGetPreIMUnreadCount;
- (void)saveIMUnreadCount:(int)arg0;
- (void)setHasGetPreIMUnreadCount:(BOOL)arg0;
- (void)setPreLandingCount:(int)arg0;
- (void)setCurrentLandingConfig:(id)arg0;
- (id)currentLandingConfig;
- (BOOL)enableColdLaunchIndexABTest;
- (id)coldLaunchStrategy;
- (BOOL)isCurrentSameDay:(id)arg0;
- (int)coldLaunchIndex;
- (void)setColdLaunchStrategy:(id)arg0;
- (id)trackerModel;
- (id)unreadCountStrategy;
- (void)setUnreadCountStrategy:(id)arg0;
- (void)setTrackerModel:(id)arg0;
- (int)preLandingCount;
- (BOOL)currentIsCommunicationUser;
- (BOOL)coldLandingTrackerFlag;
- (void)setColdLandingTrackerFlag:(BOOL)arg0;
- (void)resetLastEnterImVCName;
- (BOOL)enableDefaultLandingAndForbiddenSplashPreEnable;
- (void)setLastEnterIMVC:(id)arg0;
- (BOOL)isSameLandingDay;
- (void)increaseIMStorageLaunchCount;
- (void)setCuttentLandingDate;
- (void)resetPreLandingData;
- (void)handleLandingDaysThresholdConfigWhenEnableLanding;
- (int)serverLimitLandingCount;
- (void)trackCurrentNotLandingToIMTabReason:(unsigned long long)arg0;
- (void)setEnableDefaultLandingToIMTabPushSetting;
- (id)fetchCurrentIsIMCommunicationUserIfNeed;
- (unsigned long long)currentReason;
- (void)trackColdLaunchSuccessLanding:(unsigned long long)arg0;
- (void)increaseColdLaunchIndexIfNeed;
- (void)saveUnreadStrategyIfNeed:(BOOL)arg0;
- (void)trackLandingToIMTabTime:(double)arg0;
- (void)increaseLandingCountIfNeed;
- (int)enableLandingUnreadCountMode;
- (int)enableLandingUnreadCountTypeABTest;
- (int)getShowSplashMode;
- (BOOL)enableColdLaunchDefaultLandingToIMTabImpl;
- (void)trackCurrentNotLandingToIMTabReason:(unsigned long long)arg0 isColdLaunchDefaultLanding:(BOOL)arg1;
- (unsigned long long)enableAndPrepareForceLandingMsgTab;
- (void)resetDefaultLandingToImTabFlag;
- (BOOL)currentHasSplash;
- (BOOL)currentIsFisrtSplash;
- (BOOL)enableShowSplash;
- (BOOL)currentIsOriginSplash;
- (BOOL)enableCurrentColdLaunchIndexToLanding;
- (BOOL)enableIgnoreLandingCountAndIntervalABTest;
- (BOOL)landingDaysIsInThreshold;
- (BOOL)landingCountIsOverServerLimitCount;
- (BOOL)onlyCheckUnreadCount;
- (BOOL)onlyCheckPushUnreadCount;
- (BOOL)checkPreUnreadAndPush;
- (BOOL)checkUnreadCountEnableLanding;
- (int)enableUnreadZeroCount;
- (void)setCurrentReason:(unsigned long long)arg0;
- (id)onceTrackers;
- (BOOL)enableIMWarmForbiddenSplash;
- (id)lastEnterIMVC;
- (BOOL)enableLandingMaxCountLimit;
- (BOOL)enableAlwaysLanding;
- (BOOL)enableCheckLandingDays;
- (int)landingDaysLimit;
- (BOOL)isSameDateWithPreDate:(id)arg0 currentDate:(id)arg1;
- (id)preEnablePromise;
- (id)_dateGreaterThenSevenDay;
- (id)_fetchDateFromServer;
- (void)saveServerLandingConfig:(id)arg0;
- (BOOL)isGreaterThenIntervalDay:(id)arg0;
- (int)getLandingUserProfileInterval;
- (void)fetchSwitchStateFromServer;
- (unsigned long long)enableForceColdLaunchDefaultLandingMsgTab;
- (void)markLastEnterImVCName;
- (BOOL)enableReplaceIMSearchToGeneralSearch;
- (BOOL)enableCheckUnreadZeroCountABTest;
- (void)setOnceTrackers:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setUnreadCount:(long long)arg0;
- (long long)unreadCount;
- (void)dealloc;

@end