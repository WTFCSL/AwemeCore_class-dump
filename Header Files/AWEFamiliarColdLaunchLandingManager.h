//
//     Generated by private class-dump
//

@class NSString, NSTimer, AFDLaunchLandingPitayaManager, NSDate;

@interface AWEFamiliarColdLaunchLandingManager : NSObject <AWEFamiliarColdLaunchLandingManagerProtocol> {
    BOOL _hasShowedMaskView;
    BOOL _isShowingMaskView;
    BOOL _isInLandingSessionForTrack;
    BOOL _hasLanded;
    BOOL _enteredBackgroundBefore;
    BOOL _recordTabBarSelectFromColdLaunch;
    BOOL _recordHomepageTopTabSelectFromColdLaunch;
    BOOL _hasShowedLandingToast;
    BOOL _hasRecordLandingInfo;
    BOOL _shouldLanding;
    BOOL _quicklySlideGuideMaskHasShowed;
    long long _familiarTabbarButtonClickedNum;
    NSDate *_landingDate;
    NSTimer *_leavingTimer;
    AFDLaunchLandingPitayaManager *_pitayaManager;
}

@property (nonatomic) long long familiarTabbarButtonClickedNum;
@property (nonatomic) BOOL hasShowedMaskView;
@property (nonatomic) BOOL isShowingMaskView;
@property (nonatomic) BOOL hasShowedLandingToast;
@property (nonatomic) BOOL hasRecordLandingInfo;
@property (nonatomic) BOOL shouldLanding;
@property (nonatomic) BOOL quicklySlideGuideMaskHasShowed;
@property (retain, nonatomic) NSDate *landingDate;
@property (retain, nonatomic) NSTimer *leavingTimer;
@property (retain, nonatomic) AFDLaunchLandingPitayaManager *pitayaManager;
@property (nonatomic) BOOL isInLandingSessionForTrack;
@property (nonatomic) BOOL hasLanded;
@property (nonatomic) BOOL enteredBackgroundBefore;
@property (nonatomic) BOOL recordTabBarSelectFromColdLaunch;
@property (nonatomic) BOOL recordHomepageTopTabSelectFromColdLaunch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)appWillTerminate;
- (void)addPitayaLandingVideoPlayTrackParamsTo:(id)arg0;
- (BOOL)shouldColdStartLandingToFamiliar;
- (void)maskViewInFeedCellDidDismiss;
- (void)setPitayaManager:(id)arg0;
- (id)pitayaManager;
- (void)clearHasShowedMaskView;
- (void)recordEnterFriendsTabInAppCycle;
- (BOOL)isNeverEnterFriendsTabInAppCycle;
- (BOOL)shouldShowFamiliarColdLaunchLandingToastIfNeeded;
- (void)familiarColdLaunchLandingToastDidShow;
- (BOOL)recordHomepageTopTabSelectFromColdLaunch;
- (void)setRecordHomepageTopTabSelectFromColdLaunch:(BOOL)arg0;
- (void)setIsInLandingSessionForTrack:(BOOL)arg0;
- (void)recordFamiliarButtonClicked;
- (void)handleApplicationDidEnterBackgroundNotification:(id)arg0;
- (BOOL)isShowingMaskView;
- (BOOL)isInLandingSessionForTrack;
- (long long)getFamiliarLandingUnreadNumCount;
- (BOOL)shouldLanding;
- (void)handleTabBarIndexDidChangeNotification:(id)arg0;
- (BOOL)recordTabBarSelectFromColdLaunch;
- (void)setRecordTabBarSelectFromColdLaunch:(BOOL)arg0;
- (BOOL)enableUseMainLaunchLanding;
- (BOOL)enteredBackgroundBefore;
- (void)executeLanding;
- (void)recordLastSelectedTabbarButtonType:(long long)arg0;
- (void)handleFamiliarCountDidChangeNotification:(id)arg0;
- (void)didLandFriendsTab;
- (long long)familiarTabbarButtonClickedNum;
- (void)setFamiliarTabbarButtonClickedNum:(long long)arg0;
- (void)setHasShowedMaskView:(BOOL)arg0;
- (void)setIsShowingMaskView:(BOOL)arg0;
- (BOOL)p_isFirstEnterFamiliar;
- (BOOL)hasShowedLandingToast;
- (void)setHasShowedLandingToast:(BOOL)arg0;
- (void)p_setFamiliarLandingLastSelectedTabbarButtonType:(long long)arg0;
- (BOOL)hasLanded;
- (void)setHasLanded:(BOOL)arg0;
- (void)setShouldLanding:(BOOL)arg0;
- (void)trackShouldLanding:(BOOL)arg0 reason:(id)arg1;
- (BOOL)suspendingStrategyEnabled;
- (BOOL)shouldTrustPitayaLanding;
- (BOOL)p_shouldColdStartLandingToFamiliarByPitaya;
- (long long)familiarLandingStrategyType;
- (void)trackLandingWithStrategy:(id)arg0;
- (BOOL)unreadCountGreaterThanThreshold;
- (long long)p_getFamiliarLandingLastSelectedTabbarButtonType;
- (BOOL)hasReachMaximumLandingCount;
- (void)p_recordFamiliarLandingInfo;
- (BOOL)hasRecordLandingInfo;
- (long long)quicklySwipeCount;
- (double)quicklySwipeInterval;
- (BOOL)hasShowedMaskView;
- (BOOL)quicklySlideGuideMaskHasShowed;
- (void)setQuicklySlideGuideMaskHasShowed:(BOOL)arg0;
- (void)p_recordLandingCount;
- (void)p_recordLastLandingDate;
- (void)setHasRecordLandingInfo:(BOOL)arg0;
- (void)p_recordFamiliarLandingUnreadNumInfo;
- (void)setEnteredBackgroundBefore:(BOOL)arg0;
- (void)setLandingDate:(id)arg0;
- (void)leavingTimerFired:(id)arg0;
- (void)setLeavingTimer:(id)arg0;
- (id)landingDate;
- (id)leavingTimer;
- (void)maskViewInFeedCellDidShow;
- (BOOL)shouldShowQuicklySwipeGuideMask;
- (void)quicklySwipeGuideMaskHasShowed;
- (unsigned long long)getFamiliarLandingUnreadNumPullType;
- (id)init;
- (void).cxx_destruct;

@end
