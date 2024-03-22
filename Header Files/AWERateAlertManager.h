//
//     Generated by private class-dump
//

@class NSString, UIWindow;

@interface AWERateAlertManager : NSObject <AWEBizTabBarMessage> {
    BOOL _hasEnteredUnreadLikesList;
    UIWindow *_rateWindow;
    UIWindow *_lastWindow;
}

@property (nonatomic) BOOL hasEnteredUnreadLikesList;
@property (retain, nonatomic) UIWindow *rateWindow;
@property (retain, nonatomic) UIWindow *lastWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterLoad;
+ (id)sharedManager;

- (void)markEnteringLikesListWithUnreadCount:(long long)arg0;
- (id)lastWindow;
- (void)tabBarController:(id)arg0 didSelectItemType:(long long)arg1 previousItemType:(long long)arg2;
- (void)setLastWindow:(id)arg0;
- (BOOL)isRateAlertShowing;
- (void)showRateAlertIfNeededForType:(unsigned long long)arg0;
- (void)showRateAlertIfNeededForType:(unsigned long long)arg0 withCloseBlock:(id /* block */)arg1;
- (BOOL)shouldShowRateAlertForType:(unsigned long long)arg0;
- (void)notifyUserActiveAction:(id)arg0;
- (id)dayComponentsStringForToday;
- (id)dayComponentsStringForDate:(id)arg0;
- (id)rateWindow;
- (id)versionKeyForShownupForType:(unsigned long long)arg0;
- (id)lastShownupKeyForType:(unsigned long long)arg0;
- (id)alertTypeStringFromType:(unsigned long long)arg0;
- (void)setRateWindow:(id)arg0;
- (id)hasRepliedVersionKey;
- (BOOL)checkCommonAlertShowUpConditionForType:(unsigned long long)arg0;
- (BOOL)checkSpecificAlertShowUpConditionForType:(unsigned long long)arg0;
- (BOOL)checkAlertHasRecentlyShownUpForType:(unsigned long long)arg0 interval:(double)arg1;
- (long long)appLaunchTimesInDays:(long long)arg0;
- (BOOL)hasEnteredUnreadLikesList;
- (void)setHasEnteredUnreadLikesList:(BOOL)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)appDidBecomeActive;

@end
