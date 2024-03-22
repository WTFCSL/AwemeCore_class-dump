//
//     Generated by private class-dump
//

@class NSString, AWEUserModel;

@interface AWEProfileEditFlowManager : NSObject <AWEProfileEditFlowManagerProtocol> {
    BOOL _hasShown;
    BOOL _showingDUXPopover;
    BOOL _isDisplaying;
    BOOL _enterMessageTabByTapped;
    BOOL _enterFriendsTabByTapped;
    long long _recommendUserListScene;
    NSString *_enterFrom;
    AWEUserModel *_followUser;
    long long _currentAlertScene;
}

@property (nonatomic) long long currentAlertScene;
@property (nonatomic) BOOL enterMessageTabByTapped;
@property (nonatomic) BOOL enterFriendsTabByTapped;
@property (nonatomic) BOOL hasShown;
@property (nonatomic) BOOL showingDUXPopover;
@property (nonatomic) BOOL isDisplaying;
@property (nonatomic) long long recommendUserListScene;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) AWEUserModel *followUser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)setEnterFrom:(id)arg0;
- (void)showWithCloseCallback:(id /* block */)arg0;
- (BOOL)canShowAtEvent:(long long)arg0;
- (BOOL)shouldCancelAllOtherPendingAlertsWhenShowed;
- (id)enterFrom;
- (void)setIsDisplaying:(BOOL)arg0;
- (id)followUser;
- (void)updateEnterTab:(long long)arg0 byTapped:(BOOL)arg1;
- (void)setEnterMessageTabByTapped:(BOOL)arg0;
- (void)setEnterFriendsTabByTapped:(BOOL)arg0;
- (id)p_stringForScene:(long long)arg0;
- (BOOL)showingDUXPopover;
- (BOOL)p_needNickname;
- (BOOL)p_needAvatar;
- (BOOL)isAcquaintanceScene:(long long)arg0;
- (BOOL)enableShowFlowInAcquaintanceScene:(long long)arg0;
- (BOOL)isInFlowSimpleAB;
- (BOOL)p_debugModeOn;
- (BOOL)needNewCountStrategy;
- (id)showDateKey;
- (long long)totalUnEditTimes;
- (BOOL)enableShowFlowInAcquaintancePathAB;
- (id)showCountKey;
- (long long)recommendUserListScene;
- (BOOL)enterFriendsTabByTapped;
- (void)setCurrentAlertScene:(long long)arg0;
- (BOOL)canShowFlowAtScene:(long long)arg0;
- (long long)currentAlertScene;
- (void)showFlowAtScene:(long long)arg0 enterFrom:(id)arg1 closeCallback:(id /* block */)arg2;
- (void)showFlowWithSteps:(id)arg0 atScene:(long long)arg1 enterFrom:(id)arg2 enterMethod:(id)arg3 closeCallback:(id /* block */)arg4;
- (id)titleWithSteps:(id)arg0;
- (BOOL)p_needSignature;
- (BOOL)p_needGender;
- (BOOL)p_needBirthday;
- (BOOL)p_needLocation;
- (BOOL)p_needSchool;
- (void)updateTotalUnEditTimes;
- (id)pathFromScene:(long long)arg0;
- (void)showFlowAtScene:(long long)arg0 enterFrom:(id)arg1;
- (void)setShowingDUXPopover:(BOOL)arg0;
- (BOOL)enterMessageTabByTapped;
- (void)setRecommendUserListScene:(long long)arg0;
- (void)setFollowUser:(id)arg0;
- (void).cxx_destruct;
- (BOOL)isDisplaying;
- (void)setHasShown:(BOOL)arg0;
- (BOOL)hasShown;

@end