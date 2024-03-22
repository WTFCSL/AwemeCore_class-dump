//
//     Generated by private class-dump
//

@class NSDictionary, UIColor;

@interface AFDCloseFriendsAppSettingsManager : NSObject {
    UIColor *_currentContainerBackgroundColor;
    NSDictionary *_configDict;
}

@property (class, readonly, nonatomic) long long momentMaskRequestInterval;

@property (retain, nonatomic) NSDictionary *configDict;
@property (retain, nonatomic) UIColor *currentContainerBackgroundColor;

+ (id)selfProfileMomentTabTips;
+ (BOOL)enableNewCloseFriendsMomentMaskViewSelfDraw;
+ (long long)newCloseFriendsMomentMaskViewBlurRadiusOtherProfile;
+ (long long)newCloseFriendsMomentMaskViewBlurRadiusLocation;
+ (id)selfProfileMomentTabFooterText;
+ (id)otherProfileMomentTabEmptyPageTitle;
+ (id)otherProfileMomentTabEmptyPageDescription;
+ (id)widgetGuideModalViewArray;
+ (Class)aAFDServiceCommonAdapterClass;
+ (long long)momentMaskRequestInterval;
+ (id)widgetGuideTitleForStep:(long long)arg0;
+ (id)widgetGuideSubtitleForStep:(long long)arg0;
+ (id)widgetGuideDescForStep:(long long)arg0;
+ (long long)newCloseFriendsMomentMaskViewBlurRadiusImage;
+ (BOOL)enableMomentRecommendData;
+ (BOOL)enableMomentWidgetGuide;
+ (BOOL)enableSettingsPanelRefactor;
+ (BOOL)enableSettingsPanelRefactorPhase2;
+ (long long)otherProfileMomentTabRefreshCount;
+ (long long)otherProfileMomentTabLoadMoreCount;
+ (BOOL)enableExchangeCFDefaultSelection;
+ (unsigned long long)exchangeCFDefaultSelectionLimitCount;
+ (BOOL)closeFriendsMomentConsecutiveSettingsEnabled;
+ (BOOL)enableMomentVideoTutorial;
+ (id)closeFriendsMomentVideoTutorialConfig;
+ (id)sharedInstance;

- (long long)skIIOnboardingMinCount;
- (long long)skIIOnboardingBlockMinFriendsCount;
- (double)dualCameraSmallWindowScaleValue;
- (id)messageTabMomentEntryConfig;
- (id)familiarTabMomentEntryConfig;
- (BOOL)pipDisabled;
- (BOOL)closeFriendsIsEnabled;
- (id)aAFDServiceCommonAdapter;
- (id)getMessageTabDragDownConfig;
- (BOOL)userCenterSettingCloseFriendsMomentEnable;
- (long long)widgetCloseFriendsListGuideLimit;
- (BOOL)isCloseFriendsAddBackButtonDisabled;
- (long long)addCloseFriendsCountLimit;
- (BOOL)skIIoffsiteShareEnabled;
- (double)messageTabPullDownEntryThreshold;
- (double)friendsTabPullDownEntryThreshold;
- (BOOL)isCloseFriendsPullOpenEnable;
- (long long)CloseFriendsOnboardingMinCount;
- (BOOL)enableRefreshWhenFeedDisappear;
- (BOOL)enableWaterFallNewGuideCell;
- (BOOL)enableWaterFallNewLoadMoreStyle;
- (id)aggregationTabBottomTabbarLeftText;
- (BOOL)enableMomentExpiredTimeOptimize;
- (id)storyUserModeTestAuthorKeys;
- (id)currentContainerBackgroundColor;
- (void)setCurrentContainerBackgroundColor:(id)arg0;
- (void).cxx_destruct;
- (id)configDict;
- (void)setConfigDict:(id)arg0;

@end