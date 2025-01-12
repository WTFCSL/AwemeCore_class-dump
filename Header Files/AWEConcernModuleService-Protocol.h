//
//     Generated by private class-dump
//

@protocol AWEConcernModuleService <HTSService>

+ (BOOL)shouldLimitFansCount:(long long)arg0 userId:(id)arg1;

- (Class)geckoManager;
- (Class)coreTracker;
- (id)fansToolManager;
- (id)followListUnreadManager;
- (id)getSmartFeedDataController;
- (id)getConcernFeedDataController;
- (id)createUserUpdateDataControllerWithSpecialFollow:(BOOL)arg0;
- (id)createUserUpdateDataControllerWithSpecialFollow:(BOOL)arg0;
- (id)createUserUpdateDataControllerWithSpecialFollow:(BOOL)arg0 scene:(long long)arg1;
- (id)createUserUpdateDataControllerWithSpecialFollow:(BOOL)arg0 scene:(long long)arg1;
- (id)followEmptyHintViewController;
- (id)followUserUnreadSharedManager;
- (id)fansFeedbackManager;
- (id)userRecommendConcernDataController;
- (id)followListRecommendCardManager;
- (BOOL)enableAutoPlayNextInnerPage:(id)arg0;
- (id)getFollowCleanListDataController;
- (id)getGroupEntranceView;
- (id)getCleanEntranceView;
- (id)getFollowGroupPanelViewController;
- (id)followGroupCatchViewWithTouchBlock:(id /* block */)arg0;
- (id)followGroupCatchViewWithTouchBlock:(id /* block */)arg0;
- (id)itemCacheManager;
- (id)createFansToolEntranceViewInFansList;
- (BOOL)shouldSkipFilterInFollowFeed:(BOOL)arg0;
- (BOOL)shouldSkipFilterInFollowFeed:(BOOL)arg0;
- (BOOL)needFollowFeedSkipFilter;
- (void)setNeedSkipFilterInFollowFeed;
- (void)setCustomEnterMethod:(id)arg0;
- (id)customEnterMethod;
- (void)clearCustomEnterMethod;
- (BOOL)shouldShowHighValueFansSwitchSetting;
- (id)getFollowContainerManager;
- (id)bellPushManager;
- (Class)followListContainerViewControllerClass;
- (void)reportDislikeWithAweme:(id)arg0;
- (void)reportDislikeWithAweme:(id)arg0;
- (id)concernHotFeedEnterUserProfileHelper;
- (BOOL)isSocialCountDemotionState;
- (BOOL)socialCountDemotionSwitch;
- (void)clearSocialCountDemotionState;
- (void)updateSocialDemotionStateWithFollowTabPointCount:(long long)arg0 followTabNumberCount:(long long)arg1 familiarTabCount:(long long)arg2;
- (void)updateSocialDemotionStateWithFollowTabPointCount:(long long)arg0 followTabNumberCount:(long long)arg1 familiarTabCount:(long long)arg2;
- (id)getFollowDotTrackManager;
- (BOOL)isExistUnreadVideoInFollowPage;
- (Class)yellowDotAndRecommendItemManagerClass;
- (id)getSocialCountNotificationManager;
- (id)getYellowDotAndBubbleContent;
- (BOOL)isConcernDotOrBubbleShowingWhileEnter;
- (id)newLiveSkylightWithContainerVC:(id)arg0;
- (id)newLiveSkylightWithContainerVC:(id)arg0;
- (id)liveSkylightViewController;
- (BOOL)skylightDisplayLogicOptimizationEnable;
- (void)refreshSkylightPinedUsersIfNeeded;
- (Class)aweRelationListDataControllerClass;
- (id)aweRelationListDataControllerWithType:(long long)arg0;
- (id)aweRelationListDataControllerWithType:(long long)arg0;
- (id)skylightLiveRoomIds;
- (void)updateSkylightLiveStatusChangeWithModel:(id)arg0;
- (void)updateSkylightLiveStatusChangeWithModel:(id)arg0;
- (id)sloTrackManager;
- (id)followListUnreadListDataControllerWithUserID:(id)arg0 viewController:(id)arg1;
- (id)followListUnreadListDataControllerWithUserID:(id)arg0 viewController:(id)arg1;
- (id)followListUnreadListDataControllerWithUserID:(id)arg0 enterFrom:(unsigned long long)arg1 pageHandler:(id)arg2 viewController:(id)arg3;
- (id)followListUnreadListDataControllerWithUserID:(id)arg0 enterFrom:(unsigned long long)arg1 pageHandler:(id)arg2 viewController:(id)arg3;
- (void)generateYellowDotBusinessController;
- (void)clearYellowDotBusinessController;
- (id)yellowDotBusinessController;
- (id)advancedYellowDotManager;
- (id)fakeRefreshManager;
- (Class)recommendUserCardHelper;
- (id)followFeedGloableDuplicateFilterManager;
- (Class)profileRecommendCardAutoShowHelper;
- (id)followFeedLeftPanGuideManager;
- (id)followFeedWidgetGuideManager;
- (id)specialFollowMananger;
- (Class)awemeStatsParams;
- (Class)followFeedEmptyMonitor;
- (id)preloadManager;
- (id)dataPreloadManager;
- (id)emptyHintViewControllerManager;
- (long long)followListRecommendCountToPermanentlyClose;
- (long long)followListRecommendDaysToReappearAfterClosed;
- (id)followTabPinTopManager;
- (id)followFeedFavoritesDispatchManager;
- (BOOL)newFeedRichAnchorEnable;
- (BOOL)isNewFollowPageEnable;
- (BOOL)newFeedShowAvatarInVideoComponent;
- (unsigned long long)newFeedCardHeightStrategy;
- (BOOL)newFeedOftenWatchCardEnable;
- (BOOL)newFeedAvoidMultiStory;
- (id)concernFeedContainerViewController;
- (Class)followRecentUpdateEmptyCellClass;
- (BOOL)skylightCapsuleScrollDisplayEnable;
- (Class)specialFollowGuideFrequencyUtil;
- (id)concernPDALynxAwemeCacheManager;
- (id)feedConcernViewModelWithDataController:(id)arg0;
- (id)feedConcernViewModelWithDataController:(id)arg0;
- (id)feedConcernViewModelWithRefactorDataController:(id)arg0;
- (id)feedConcernViewModelWithRefactorDataController:(id)arg0;
- (BOOL)isEqualRoomIdWithCurrentModel:(id)arg0 dict:(id)arg1;
- (BOOL)isEqualRoomIdWithCurrentModel:(id)arg0 dict:(id)arg1;
- (BOOL)shouldAddConcernControllerForAwemeDetailWithReferString:(id)arg0;
- (BOOL)shouldAddConcernControllerForAwemeDetailWithReferString:(id)arg0;
- (id)shouldAdaptScreenWithModel:(id)arg0 containerHeight:(double)arg1;
- (id)shouldAdaptScreenWithModel:(id)arg0 containerHeight:(double)arg1;
- (id)firstFrameViewWithModel:(id)arg0;
- (id)firstFrameViewWithModel:(id)arg0;
- (id)fetchAWEAccessibilityCustomActionsManager;
- (Class)concernAccuracyReporter;
- (BOOL)dataControllerRefactorEnable;
- (BOOL)skylightUpdateMixSortEnable;
- (id)widgetManager;

@end
