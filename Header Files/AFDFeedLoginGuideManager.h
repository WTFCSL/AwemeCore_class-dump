//
//     Generated by private class-dump
//

@class NSString, NSDate;

@interface AFDFeedLoginGuideManager : NSObject <AWEUserMessage, AFDFeedLoginGuideManagerProtocol> {
    long long _todayPlayCount;
    long long _todayShownGuideCount;
    long long _totalShownGuideCount;
    NSDate *_currentDate;
}

@property (nonatomic) long long todayPlayCount;
@property (nonatomic) long long todayShownGuideCount;
@property (nonatomic) long long totalShownGuideCount;
@property (retain, nonatomic) NSDate *currentDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)hasShowPreLoginGuideToday;
+ (id)findFriendsAlertLastShowDate;
+ (id)lastLogoutDate;
+ (long long)delayShowGuideBtnInterval;
+ (long long)dailyMaxButtonImpressionTimes;
+ (long long)fullPlayShowCount;
+ (long long)maxButtonImpressionTimes;
+ (BOOL)canShowLoginGuide:(id)arg0 currentLoopTimes:(long long)arg1;
+ (id)sharedManager;

- (void)didFinishLogout;
- (void)didDeleteAccountWithUserID:(id)arg0;
- (void)awe_trackFreq;
- (void)updatePlayIndex:(id)arg0 needStore:(BOOL)arg1;
- (long long)todayShownGuideCount;
- (long long)todayPlayCount;
- (void)setTodayPlayCount:(long long)arg0;
- (void)setTodayShownGuideCount:(long long)arg0;
- (long long)totalShownGuideCount;
- (void)setTotalShownGuideCount:(long long)arg0;
- (void)updateCommonLoginContext:(id)arg0;
- (void)setLastLogoutDate;
- (void)recordImpression:(id)arg0;
- (void)jumpToLoginPage:(id)arg0;
- (void)updatePlayIndex:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setCurrentDate:(id)arg0;
- (id)currentDate;
- (void)dealloc;
- (void)fetchCount;

@end
