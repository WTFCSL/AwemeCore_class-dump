//
//     Generated by private class-dump
//

@class NSDate, NSString, NSArray, AWEIMInteractNotificationCountModel, NSMutableDictionary, NSDictionary, AWEInteractNotificationUnreadModel, NSMutableSet, AWEIMMessageTabLifeCircleModel, NSMutableArray, NSNumber, AWEIMUnreadCountChangeObject;
@protocol IESLCMessageHandlerProtocol, AWEOfficialNotificationProtocol;

@interface AWEIMDYInteractNotificationManager : NSObject <AWEIMUnreadCountChangeDelegate, AWEUserMessage, AWELiveRoomMessage, AWESettingsComboRequestProtocol, AWEPushSBCProtocol, IESLCMessageHandlerService, AWEIMInteractNotificationManagerProtocol> {
    BOOL hasNewInteractMessage;
    BOOL hasStrangerMsg;
    BOOL _hasPreviousUser;
    BOOL _isFetchFollowRequestOnAir;
    BOOL _isFetchStoryRequestOnAir;
    BOOL _didStartLive;
    BOOL _enablePresentRecommendNoticeYellowDotInTabbar;
    BOOL _reduceRecommendPersonNoticeRequesting;
    BOOL _didUpdateEmojiReplyCount;
    BOOL _didUpdateChatListUnreadCount;
    BOOL _hasEverRequestUnreadCountFinished;
    BOOL _shouldFobidRequestOptimize;
    BOOL _isLogingOutClearAll;
    BOOL _shouldCacheNoticeEntranceStyle;
    BOOL _shouldSaveNoticeHiddenTimeToStorage;
    BOOL _shouldReduceGetterDiskAccess;
    BOOL _enableIMDynamicLibraryLoadOpt;
    int _allServiceTotoalUnreadCount;
    long long followingLiveCount;
    NSMutableArray *readedForwardArray;
    long long incomingFriendCount;
    long long followingFeedCount;
    long long commentForwardAndVoteCount;
    long long atMeCount;
    long long likeMeCount;
    long long newFansCount;
    long long allAssistantUnreadCount;
    long long interactionNoticeCellUnreadCount;
    long long myProfileTabNoticeTotalStableCount;
    long long strangerCount;
    long long imMessageCount;
    long long workspaceUnreadCount;
    long long imEmojiReplyCount;
    long long followingRecommendCount;
    long long createAwemeCount;
    long long duetCount;
    long long followRequestCount;
    long long approveFollowRequestCount;
    long long feedbackCount;
    long long oneDayInteractCount;
    long long oneDayLatestCount;
    long long friendTabUnreadCount;
    long long followingTabUnreadCount;
    long long storyTabUnreadCount;
    long long imLiteMessageCount;
    long long storyTabColdStartCount;
    NSArray *followTabNotices;
    long long _applyJoinGroupCount;
    NSNumber *followLiveChannel;
    NSNumber *followVideoChannel;
    NSNumber *friendVideoChannel;
    NSString *noticeCountRequestID;
    long long noticeCountType;
    NSString *pushAwemeID;
    NSString *pushAuthorID;
    long long _serverStrangerCount;
    long long fansPushCount;
    long long blockUrgeSetting;
    NSNumber *_lastReadNewFansNoticeID;
    unsigned long long urgeType;
    NSNumber *latestLiveTime;
    NSNumber *latestVideoTime;
    long long familiarCount;
    long long commentAtLikeCount;
    long long moreGroupNoticeCount;
    long long recommendCount;
    long long tutorialVideoCount;
    NSMutableArray *readedAtArray;
    NSMutableArray *readedCommentArray;
    NSMutableArray *readedRecommendPersonArray;
    NSMutableArray *readedModularizationNoticesArray;
    NSMutableArray *readedLikeArray;
    NSString *gdLabel;
    long long danmakuCount;
    long long rewardCount;
    long long flameCount;
    id<AWEOfficialNotificationProtocol> otherNotificationCountManager;
    NSArray *customerServiceGroups;
    NSArray *_unreadInteractionNoticesFromUsersAvatarURLList;
    NSDictionary *_comboRequestResult;
    NSDictionary *_comboSocialRequestResult;
    NSString *_comboSocialRequestUserID;
    AWEIMUnreadCountChangeObject *_strangerUnreadCountObj;
    long long _currentType;
    AWEIMUnreadCountChangeObject *_notiTabUnreadCountObj;
    long long _dotUnreadCount;
    NSMutableDictionary *_noticeCountParams;
    double _lastTimestamp;
    double _lastSocialTimestamp;
    NSDictionary *_multiUserNoticeCountMap;
    NSString *_previousStoryID;
    long long _sourceType;
    double _lastLongConnectionPushTime;
    long long _currentNoticeTabbarUnreadCount;
    AWEInteractNotificationUnreadModel *_followTabRedDotNotice;
    AWEInteractNotificationUnreadModel *_followTabLiveNotice;
    NSMutableDictionary *_assistantUnreadCountMap;
    NSMutableDictionary *_assistantDotUnreadCountMap;
    NSMutableDictionary *_assistantUnreadShowTypeMap;
    NSMutableDictionary *_interactionUnreadNoticeShowTypeMap;
    NSMutableDictionary *_noticeDemoteStateMap;
    NSDictionary *_serviceUnreadCountGroupIdMap;
    NSMutableSet *_ignoredRecommendPersonNoticeSet;
    NSNumber *_oldestIgnoredRecommendNoticeTimestamp;
    NSNumber *_newestIgnoredRecommendNoticeTimestamp;
    NSMutableDictionary *_unreadLatestTimeMap;
    NSMutableDictionary *_hiddenTimeMap;
    NSMutableDictionary *_interactionAssemblyContentMap;
    NSMutableDictionary *_interactionAssemblyTailTruncationMap;
    AWEIMMessageTabLifeCircleModel *_messageTabLifeModel;
    NSString *_enterFrom;
    NSString *_enterMethod;
    NSArray *_innerPushBusinessArray;
    NSDate *_startEnterTrackerDate;
    AWEIMInteractNotificationCountModel *_serviceNoticeUnreadCountModel;
    AWEIMInteractNotificationCountModel *_enterpriseNoticeUnreadCountModel;
    NSDictionary *_groupIdToUnreadCountTrackingMap;
    NSNumber *_cachedNoticeEntranceStyleStore;
}

@property (nonatomic) double lastTimestamp;
@property (nonatomic) double lastSocialTimestamp;
@property (copy, nonatomic) NSDictionary *multiUserNoticeCountMap;
@property (nonatomic) BOOL isFetchFollowRequestOnAir;
@property (nonatomic) BOOL isFetchStoryRequestOnAir;
@property (copy, nonatomic) NSString *previousStoryID;
@property (nonatomic) BOOL didStartLive;
@property (nonatomic) long long sourceType;
@property (nonatomic) BOOL enablePresentRecommendNoticeYellowDotInTabbar;
@property (nonatomic) double lastLongConnectionPushTime;
@property (nonatomic) BOOL reduceRecommendPersonNoticeRequesting;
@property (nonatomic) long long currentNoticeTabbarUnreadCount;
@property (retain, nonatomic) AWEInteractNotificationUnreadModel *followTabRedDotNotice;
@property (retain, nonatomic) AWEInteractNotificationUnreadModel *followTabLiveNotice;
@property (retain, nonatomic) NSMutableDictionary *assistantUnreadCountMap;
@property (retain, nonatomic) NSMutableDictionary *assistantDotUnreadCountMap;
@property (retain, nonatomic) NSMutableDictionary *assistantUnreadShowTypeMap;
@property (retain, nonatomic) NSMutableDictionary *interactionUnreadNoticeShowTypeMap;
@property (retain, nonatomic) NSMutableDictionary *noticeDemoteStateMap;
@property (nonatomic) int allServiceTotoalUnreadCount;
@property (copy) NSDictionary *serviceUnreadCountGroupIdMap;
@property (retain, nonatomic) NSMutableSet *ignoredRecommendPersonNoticeSet;
@property (retain, nonatomic) NSNumber *oldestIgnoredRecommendNoticeTimestamp;
@property (retain, nonatomic) NSNumber *newestIgnoredRecommendNoticeTimestamp;
@property (retain, nonatomic) NSMutableDictionary *unreadLatestTimeMap;
@property (retain) NSMutableDictionary *hiddenTimeMap;
@property (retain, nonatomic) NSMutableDictionary *interactionAssemblyContentMap;
@property (retain, nonatomic) NSMutableDictionary *interactionAssemblyTailTruncationMap;
@property (nonatomic) BOOL didUpdateEmojiReplyCount;
@property (nonatomic) BOOL didUpdateChatListUnreadCount;
@property (weak, nonatomic) AWEIMMessageTabLifeCircleModel *messageTabLifeModel;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSArray *innerPushBusinessArray;
@property (nonatomic) BOOL hasEverRequestUnreadCountFinished;
@property (retain, nonatomic) NSDate *startEnterTrackerDate;
@property (nonatomic) BOOL shouldFobidRequestOptimize;
@property (retain, nonatomic) AWEIMInteractNotificationCountModel *serviceNoticeUnreadCountModel;
@property (retain, nonatomic) AWEIMInteractNotificationCountModel *enterpriseNoticeUnreadCountModel;
@property (nonatomic) BOOL isLogingOutClearAll;
@property (retain) NSDictionary *groupIdToUnreadCountTrackingMap;
@property (readonly, nonatomic) BOOL shouldCacheNoticeEntranceStyle;
@property (retain) NSNumber *cachedNoticeEntranceStyleStore;
@property (readonly, nonatomic) BOOL shouldSaveNoticeHiddenTimeToStorage;
@property (readonly, nonatomic) BOOL shouldReduceGetterDiskAccess;
@property (nonatomic) BOOL enableIMDynamicLibraryLoadOpt;
@property (readonly, nonatomic) long long noticeTabbarUnreadCount;
@property (copy, nonatomic) NSArray *unreadInteractionNoticesFromUsersAvatarURLList;
@property (copy, nonatomic) NSDictionary *comboRequestResult;
@property (copy, nonatomic) NSDictionary *comboSocialRequestResult;
@property (copy, nonatomic) NSString *comboSocialRequestUserID;
@property (retain, nonatomic) AWEIMUnreadCountChangeObject *strangerUnreadCountObj;
@property (nonatomic) long long currentType;
@property (retain, nonatomic) AWEIMUnreadCountChangeObject *notiTabUnreadCountObj;
@property (nonatomic) long long dotUnreadCount;
@property (nonatomic) BOOL hasPreviousUser;
@property (retain, nonatomic) NSMutableDictionary *noticeCountParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESLCMessageHandlerProtocol> messageHandler;
@property (nonatomic) long long followingLiveCount;
@property (retain, nonatomic) NSNumber *followLiveChannel;
@property (retain, nonatomic) NSNumber *followVideoChannel;
@property (retain, nonatomic) NSNumber *friendVideoChannel;
@property (copy, nonatomic) NSString *noticeCountRequestID;
@property (nonatomic) long long noticeCountType;
@property (copy, nonatomic) NSString *pushAuthorID;
@property (copy, nonatomic) NSString *pushAwemeID;
@property (nonatomic) BOOL hasNewInteractMessage;
@property (nonatomic) long long serverStrangerCount;
@property (nonatomic) BOOL hasStrangerMsg;
@property (nonatomic) long long incomingFriendCount;
@property (nonatomic) long long followingFeedCount;
@property (nonatomic) long long commentForwardAndVoteCount;
@property (nonatomic) long long atMeCount;
@property (nonatomic) long long likeMeCount;
@property (nonatomic) long long newFansCount;
@property (nonatomic) long long allAssistantUnreadCount;
@property (nonatomic) long long strangerCount;
@property (nonatomic) long long interactionNoticeCellUnreadCount;
@property (nonatomic) long long myProfileTabNoticeTotalStableCount;
@property (nonatomic) long long followRequestCount;
@property (nonatomic) long long approveFollowRequestCount;
@property (nonatomic) long long duetCount;
@property (nonatomic) long long createAwemeCount;
@property (nonatomic) long long feedbackCount;
@property (nonatomic) long long oneDayInteractCount;
@property (nonatomic) long long oneDayLatestCount;
@property (nonatomic) long long friendTabUnreadCount;
@property (nonatomic) long long followingTabUnreadCount;
@property (nonatomic) long long storyTabUnreadCount;
@property (nonatomic) long long familiarCount;
@property (nonatomic) long long commentAtLikeCount;
@property (nonatomic) long long moreGroupNoticeCount;
@property (nonatomic) long long rewardCount;
@property (nonatomic) long long applyJoinGroupCount;
@property (nonatomic) long long danmakuCount;
@property (nonatomic) long long flameCount;
@property (nonatomic) long long recommendCount;
@property (nonatomic) long long fansPushCount;
@property (copy, nonatomic) NSArray *followTabNotices;
@property (nonatomic) long long blockUrgeSetting;
@property (nonatomic) unsigned long long urgeType;
@property (retain, nonatomic) NSNumber *latestVideoTime;
@property (retain, nonatomic) NSNumber *latestLiveTime;
@property (nonatomic) long long imMessageCount;
@property (nonatomic) long long imLiteMessageCount;
@property (nonatomic) long long imEmojiReplyCount;
@property (nonatomic) long long workspaceUnreadCount;
@property (nonatomic) long long followingRecommendCount;
@property (nonatomic) long long storyTabColdStartCount;
@property (nonatomic) long long tutorialVideoCount;
@property (retain, nonatomic) NSMutableArray *readedCommentArray;
@property (retain, nonatomic) NSMutableArray *readedForwardArray;
@property (retain, nonatomic) NSMutableArray *readedAtArray;
@property (retain, nonatomic) NSMutableArray *readedLikeArray;
@property (retain, nonatomic) NSMutableArray *readedRecommendPersonArray;
@property (retain, nonatomic) NSMutableArray *readedModularizationNoticesArray;
@property (copy, nonatomic) NSString *gdLabel;
@property (retain, nonatomic) NSNumber *lastReadNewFansNoticeID;
@property (retain, nonatomic) id<AWEOfficialNotificationProtocol> otherNotificationCountManager;
@property (retain, nonatomic) NSArray *customerServiceGroups;

+ (void)_aweLazyRegisterLoad;
+ (void)doOriginalActions;
+ (id)settingsRequestPath;
+ (void)updateSettingsWithDictionary:(id)arg0;
+ (id)settingsRequestParamsDictionary;
+ (Class)aAWEFeedModuleServiceDOUYINHTSAdaperClass;
+ (id)managerKeyPathsForValuesAffectingUnreadCount;
+ (id)managerKeyPathsForValuesAffectingInteractionNoticeTotalCount;
+ (id)managerKeyPathsForValuesAffectingMyProfileTabNoticeTotalCount;
+ (Class)aAWENoticeModuleServiceCommonAdaperClass;
+ (Class)aAWENoticeInteractorLiteAdapterClass;
+ (id)keyPathsForValuesAffectingNoticeTabbarUnreadCount;
+ (id)keyPathsForValuesAffectingInteractiveNoticeCellUnreadCount;
+ (id)keyPathsForValuesAffectingMyProfileTabNoticeTotalCount;
+ (id)sharedInstance;

- (void)didFinishLogin;
- (void)didFinishLogout;
- (void)didFinishUpdateAwemeUser;
- (void)didFinishApproveUserFollowRequest:(id)arg0 error:(id)arg1;
- (void)setEnterFrom:(id)arg0;
- (void)setEnterMethod:(id)arg0;
- (id)enterMethod;
- (id)enterFrom;
- (void)anchorStartLive;
- (void)anchorEndLive;
- (void)ieslc_messageHandler:(id)arg0 didReceiveMsg:(id)arg1;
- (unsigned long long)enableWarmLaunchABTest;
- (long long)rewardCount;
- (id)messageTabLifeModel;
- (void)setMessageTabLifeModel:(id)arg0;
- (id)gdLabel;
- (int)getTotalServiceUnreadCount;
- (long long)newFansCount;
- (long long)interactiveNoticeCellUnreadCount;
- (long long)getDisplayedUnreadCountWithGroup:(long long)arg0;
- (id)getInteractionAssemblyContentOfStrKey:(id)arg0;
- (id)lastReadNewFansNoticeID;
- (id)getInteractionAssemblyContentOfKey:(id)arg0;
- (void)addReadedNoticeModel:(id)arg0;
- (id)getInteractionAssemblyTailTruncationOfKey:(id)arg0;
- (void)setCurrentType:(long long)arg0;
- (long long)danmakuCount;
- (void)setDanmakuCount:(long long)arg0;
- (void)setRewardCount:(long long)arg0;
- (void)setGdLabel:(id)arg0;
- (long long)recommendCount;
- (void)setRecommendCount:(long long)arg0;
- (id)followVideoChannel;
- (id)noticeCountRequestID;
- (void)setFollowVideoChannel:(id)arg0;
- (id)followLiveChannel;
- (void)setFollowLiveChannel:(id)arg0;
- (long long)noticeCountType;
- (id)pushAuthorID;
- (id)pushAwemeID;
- (BOOL)pushSBCCouldHandleWithMsg:(id)arg0 payload:(id)arg1 businessType:(id)arg2;
- (id)followTabNotices;
- (BOOL)shouldFobidRequestOptimize;
- (void)setShouldFobidRequestOptimize:(BOOL)arg0;
- (long long)familiarCount;
- (void)setFamiliarCount:(long long)arg0;
- (void)setNewFansCount:(long long)arg0;
- (id)aAWEFeedModuleServiceDOUYINHTSAdaper;
- (void)readFollowingTabUnreadCount;
- (void)setComboSocialRequestUserID:(id)arg0;
- (void)setComboSocialRequestResult:(id)arg0;
- (void)setFollowTabNotices:(id)arg0;
- (double)lastSocialTimestamp;
- (void)setLastSocialTimestamp:(double)arg0;
- (id)fetchInteractNotificationParams:(long long)arg0 targetAPI:(long long)arg1;
- (id)comboSocialRequestResult;
- (id)comboSocialRequestUserID;
- (void)processJsonObj:(id)arg0 withError:(id)arg1 fromSource:(long long)arg2 andCompletion:(id /* block */)arg3 isComboRequestResult:(BOOL)arg4 targetAPI:(long long)arg5 context:(id)arg6;
- (void)changeSourceType:(long long)arg0;
- (void)addHomepageFollowMonitorWithError:(id)arg0 source:(long long)arg1;
- (void)changeHasEverRequestUnreadCountFinished:(BOOL)arg0;
- (void)setNoticeCountRequestID:(id)arg0;
- (void)setNoticeCountType:(long long)arg0;
- (void)configWithCountModel:(id)arg0 time:(double)arg1 type:(long long)arg2 context:(id)arg3;
- (void)setupFollowTabNotices:(id)arg0 time:(double)arg1 type:(long long)arg2 context:(id)arg3;
- (void)setFriendVideoChannel:(id)arg0;
- (void)p_handleMessageWithObject:(id)arg0;
- (void)addReceiveLongLinkEvent:(id)arg0;
- (void)readFriendMessage;
- (id)currentTopPage;
- (long long)noticeTabbarUnreadCount;
- (long long)noticeSideBarUnreadCount;
- (void)readFollowingFeed;
- (long long)followingFeedCount;
- (BOOL)enableIMDynamicLibraryLoadOpt;
- (void)setEnableIMDynamicLibraryLoadOpt:(BOOL)arg0;
- (void)handleDidTabbarSelectedIndexChangeNty:(id)arg0;
- (id)otherNotificationCountManager;
- (void)readFamiliarCount;
- (BOOL)enablePitaya;
- (id)groupIdToUnreadCountTrackingComponentExtra;
- (BOOL)hasNewInteractMessage;
- (long long)imEmojiReplyCount;
- (long long)syncUpdateNoticeTabbarUnreadCount;
- (long long)bizFollowRequestCount;
- (void)printDetailNoticeTabbarUnreadCountInfo;
- (id)currentNoticeDemoteStateMap;
- (long long)getUnreadCountWithGroup:(long long)arg0;
- (void)setUrgeType:(unsigned long long)arg0;
- (void)innerPushShowed;
- (id)currentTopPage:(id)arg0;
- (BOOL)canShowFollowAnchorPushNotice;
- (id)latestLiveTime;
- (void)setFansPushCount:(long long)arg0;
- (long long)blockUrgeSetting;
- (void)setBlockUrgeSetting:(long long)arg0;
- (id)latestVideoTime;
- (void)readAssistantGroup:(long long)arg0;
- (long long)commentForwardAndVoteCount;
- (long long)moreGroupNoticeCount;
- (void)setMoreGroupNoticeCount:(long long)arg0;
- (long long)atMeCount;
- (long long)likeMeCount;
- (void)removeReadedNoticeArray;
- (void)clearInteractionAssemblyAttributedString;
- (void)setOtherNotificationCountManager:(id)arg0;
- (void)observeNoticeInAppPush;
- (void)messageTabViewDidLoad:(id)arg0;
- (void)messageTabViewWillDealloc:(id)arg0;
- (id)setUpNotiTabUnreadCountObj;
- (long long)getIMLocalUnreadCountWithType:(unsigned long long)arg0;
- (void)setCommentAtLikeCount:(long long)arg0;
- (void)setCommentForwardAndVoteCount:(long long)arg0;
- (void)setFlameCount:(long long)arg0;
- (void)registerPullLivePushByPitaya;
- (void)__didChangeMessageTabMode:(id)arg0;
- (void)setInteractionNoticeCellUnreadCount:(long long)arg0;
- (long long)myProfileTabNoticeTotalCount;
- (void)setMyProfileTabNoticeTotalStableCount:(long long)arg0;
- (BOOL)isLogingOutClearAll;
- (long long)commentAtLikeCount;
- (long long)flameCount;
- (void)setInteractionAssemblyContentMap:(id)arg0;
- (void)setInteractionAssemblyTailTruncationMap:(id)arg0;
- (id)interactionAssemblyContentMap;
- (id)interactionAssemblyTailTruncationMap;
- (id)assistantUnreadShowTypeMap;
- (id)assistantUnreadCountMap;
- (id)assistantDotUnreadCountMap;
- (id)noticeDemoteStateMap;
- (id)unreadLatestTimeMap;
- (long long)incomingFriendCount;
- (long long)serverStrangerCount;
- (long long)followRequestCount;
- (long long)approveFollowRequestCount;
- (long long)duetCount;
- (long long)createAwemeCount;
- (long long)oneDayInteractCount;
- (long long)oneDayLatestCount;
- (long long)fansPushCount;
- (long long)__awenoticeInteractionNoticeUnreadCountWithGroup:(long long)arg0 originCount:(long long)arg1;
- (double)lastLongConnectionPushTime;
- (void)setLastLongConnectionPushTime:(double)arg0;
- (void)__awenoticeInteractionNoticeCountAssign:(id)arg0 context:(id)arg1;
- (void)p_trackLongConnectionNoticeDataWithParams:(id)arg0;
- (void)fetchInteractNoticeCountNotification:(id /* block */)arg0 withLongConnectionNotificationType:(long long)arg1 context:(id)arg2;
- (void)fetchInteractNotification:(id /* block */)arg0 withLongConnectionNotificationType:(long long)arg1 needFilterSocialCount:(BOOL)arg2 noticeCountDataModel:(id)arg3 context:(id)arg4 delayTime:(double)arg5;
- (void)newFetchInteractNoticeCountNotificationWithTaskManager:(id /* block */)arg0 withLongConnectionNotificationType:(long long)arg1 context:(id)arg2;
- (id)comboRequestResult;
- (void)fetchInteractNotification:(id /* block */)arg0 isLongConnectionRequest:(BOOL)arg1 context:(id)arg2;
- (void)fetchInteractNotification:(id /* block */)arg0 isLongConnectionRequest:(BOOL)arg1 needFilterSocialCount:(BOOL)arg2 context:(id)arg3;
- (void)fetchInteractNotification:(id /* block */)arg0 withLongConnectionNotificationType:(long long)arg1 needFilterSocialCount:(BOOL)arg2 noticeCountDataModel:(id)arg3 context:(id)arg4;
- (void)setComboRequestResult:(id)arg0;
- (void)setHasEverRequestUnreadCountFinished:(BOOL)arg0;
- (void)_configFollowTabChannelWithDict:(id)arg0;
- (void)p_trackInteractiveNoticeGroupUpdateEventWithNewGroup:(id)arg0 preGroup:(id)arg1 countInfo:(id)arg2;
- (id /* block */)__synInteractionTotalCount;
- (void)checkHasNewInteractMessage;
- (void)setFollowingRecommendCount:(long long)arg0;
- (BOOL)isFetchFollowRequestOnAir;
- (void)setIsFetchFollowRequestOnAir:(BOOL)arg0;
- (long long)currentNoticeTabbarUnreadCount;
- (long long)managerNoticeTabbarUnreadCount;
- (id)multiUserNoticeCountMap;
- (void)setIsLogingOutClearAll:(BOOL)arg0;
- (void)clearFollowYellowDotData;
- (void)readCommentAtLikeWithTaskManager;
- (void)readLikeAndStoryViewWithTaskManager;
- (void)readDanmakuWithTaskManager;
- (void)readRecommendWithTaskManager;
- (void)readRewardWithTaskManager;
- (void)readFlameWithTaskManager;
- (void)readNewFans;
- (void)readStranger;
- (void)readOneDayInteract;
- (void)readOneDayLatest;
- (void)updateIMMessageCount:(long long)arg0;
- (void)updateAllSecondServiceUnreadCount:(int)arg0 notify:(BOOL)arg1;
- (void)setWorkspaceUnreadCount:(long long)arg0;
- (void)updateIMEmojiReplyCount:(long long)arg0;
- (void)updateIMLiteMessageCount:(long long)arg0;
- (void)updateTutorialVideoCount:(long long)arg0;
- (void)setApplyJoinGroupCount:(long long)arg0;
- (void)setMultiUserNoticeCountMap:(id)arg0;
- (void)setAssistantUnreadCountMap:(id)arg0;
- (void)setAssistantDotUnreadCountMap:(id)arg0;
- (void)setAssistantUnreadShowTypeMap:(id)arg0;
- (void)setNoticeDemoteStateMap:(id)arg0;
- (BOOL)shouldReduceGetterDiskAccess;
- (void)setHiddenTimeMap:(id)arg0;
- (void)setServiceNoticeUnreadCountModel:(id)arg0;
- (void)setEnterpriseNoticeUnreadCountModel:(id)arg0;
- (unsigned long long)p_interactiveNoticeEntranceStyle;
- (void)updateCommentAtLikeCount:(long long)arg0;
- (void)setIncomingFriendCount:(long long)arg0;
- (void)setFollowingFeedCount:(long long)arg0;
- (id)followTabRedDotNotice;
- (id)followTabLiveNotice;
- (void)updateCommentForwardAndVoteCount:(long long)arg0;
- (void)__interactionNoticeTotalCountUpdate:(long long)arg0 withGroup:(long long)arg1;
- (void)updateAtCount:(long long)arg0;
- (void)updateDiggLikeMeCount:(long long)arg0;
- (void)updateNewFansCount:(long long)arg0;
- (void)setStrangerCount:(long long)arg0;
- (void)setHasStrangerMsg:(BOOL)arg0;
- (void)setServerStrangerCount:(long long)arg0;
- (id)strangerUnreadCountObj;
- (void)setFollowRequestCount:(long long)arg0;
- (void)setApproveFollowRequestCount:(long long)arg0;
- (void)setDuetCount:(long long)arg0;
- (void)setCreateAwemeCount:(long long)arg0;
- (void)setFeedbackCount:(long long)arg0;
- (void)setOneDayInteractCount:(long long)arg0;
- (void)setOneDayLatestCount:(long long)arg0;
- (void)setFriendTabUnreadCount:(long long)arg0;
- (void)setStoryTabColdStartCount:(long long)arg0;
- (void)p_updateStoryTabUnreadCount;
- (void)setFollowingTabUnreadCount:(long long)arg0;
- (id)hiddenTimeMap;
- (BOOL)shouldSaveNoticeHiddenTimeToStorage;
- (BOOL)couldExcludeEnterpriseNotice;
- (id)enterpriseNoticeUnreadCountModel;
- (id)serviceNoticeUnreadCountModel;
- (BOOL)shouldExcludeEnterpriseNotice;
- (void)__resetShowTypeAndRecalculateUnreadCountForServiceNoticeAndEnterpriseNotice;
- (id)interactionUnreadNoticeShowTypeMap;
- (id)readedAtArray;
- (id)readedCommentArray;
- (id)readedLikeArray;
- (id)readedForwardArray;
- (id)readedRecommendPersonArray;
- (id)readedModularizationNoticesArray;
- (void)readFollowRequest;
- (void)readApproveFollowRequest;
- (void)readDuet;
- (void)readCreateAweme;
- (void)readFansPushCount;
- (void)readFeedback;
- (void)setPreviousStoryID:(id)arg0;
- (long long)friendTabUnreadCount;
- (long long)followingTabUnreadCount;
- (void)setStoryTabUnreadCount:(long long)arg0;
- (long long)workspaceUnreadCount;
- (long long)imMessageCount;
- (void)setImMessageCount:(long long)arg0;
- (void)checkHasNewInteractMessageWithShouldShieldRedundantSet:(BOOL)arg0;
- (BOOL)didUpdateChatListUnreadCount;
- (void)setDidUpdateChatListUnreadCount:(BOOL)arg0;
- (void)p_coldLanuchMakingTrackIfNeeded;
- (void)updateAllSecondServiceUnreadCount:(int)arg0 notify:(BOOL)arg1 serviceUnreadCountMap:(id)arg2;
- (void)setServiceUnreadCountGroupIdMap:(id)arg0;
- (void)setAllServiceTotoalUnreadCount:(int)arg0;
- (void)setImEmojiReplyCount:(long long)arg0;
- (BOOL)didUpdateEmojiReplyCount;
- (void)setDidUpdateEmojiReplyCount:(BOOL)arg0;
- (long long)tutorialVideoCount;
- (void)setTutorialVideoCount:(long long)arg0;
- (long long)imLiteMessageCount;
- (void)setImLiteMessageCount:(long long)arg0;
- (void)setAtMeCount:(long long)arg0;
- (void)setLikeMeCount:(long long)arg0;
- (void)requestFollowAnchorPushNoticeWithPage:(id)arg0 mustShow:(BOOL)arg1 isByIM:(BOOL)arg2 pushType:(id)arg3 pullType:(long long)arg4 extraParams:(id)arg5;
- (BOOL)canShowFollowAnchorPushNotice:(id)arg0;
- (void)fetchFollowAnchorPushNoticeByIM:(BOOL)arg0 mustShow:(BOOL)arg1 pushType:(id)arg2 pullType:(long long)arg3 extraParams:(id)arg4;
- (void)tryFetchFollowAnchorPush:(id)arg0;
- (id)liveInappPushPullType:(long long)arg0;
- (id)innerPushType:(id)arg0 mustShow:(BOOL)arg1;
- (void)realRequstAnchorPushWithParams:(id)arg0 isByIM:(BOOL)arg1 isByPitaya:(BOOL)arg2 inAppPushType:(long long)arg3 extraParams:(id)arg4;
- (void)requestLivePushByPitaya:(id)arg0 callBack:(id /* block */)arg1;
- (void)setReadedAtArray:(id)arg0;
- (void)setReadedCommentArray:(id)arg0;
- (void)setReadedLikeArray:(id)arg0;
- (void)setReadedForwardArray:(id)arg0;
- (void)setReadedRecommendPersonArray:(id)arg0;
- (void)setReadedModularizationNoticesArray:(id)arg0;
- (void)setDidStartLive:(BOOL)arg0;
- (id)notiTabUnreadCountObj;
- (long long)strangerCount;
- (void)setDotUnreadCount:(long long)arg0;
- (BOOL)managerUnreadCountChangeObjectNeedMarkRead:(id)arg0;
- (void)p_trackWithEvent:(id)arg0 shouldTrackIfNoUnread:(BOOL)arg1;
- (void)p_trackWithEvent:(id)arg0 shouldTrackIfNoUnread:(BOOL)arg1 addtionalParams:(id)arg2;
- (void)setStartEnterTrackerDate:(id)arg0;
- (id)groupIdToUnreadCountTrackingMap;
- (id)startEnterTrackerDate;
- (void)setUnreadInteractionNoticesFromUsersAvatarURLList:(id)arg0;
- (void)p_updateFamiliarCount:(id)arg0 context:(id)arg1;
- (void)setFollowingLiveCount:(long long)arg0;
- (id)aAWENoticeInteractorLiteAdapter;
- (void)handleEnterMessageTabEventWithEnterFrom:(id)arg0 preType:(long long)arg1;
- (void)handleExitMessageTabEvent;
- (void)setEnablePresentRecommendNoticeYellowDotInTabbar:(BOOL)arg0;
- (void)trackExitMessageTabWithExitMethod:(id)arg0;
- (void)onAppWillEnterForegroundTracker;
- (void)fetchInteractNotificationWithHotLaunch:(id /* block */)arg0 context:(id)arg1;
- (void)p_handlePushServiceNoticeInAppPushWithMsg:(id)arg0;
- (BOOL)didStartLive;
- (void)setPushAuthorID:(id)arg0;
- (void)setPushAwemeID:(id)arg0;
- (void)setLatestVideoTime:(id)arg0;
- (void)setLatestLiveTime:(id)arg0;
- (double)getHiddenTimeForGroup:(id)arg0;
- (void)recordInteractNotificationUnreadCountIfNeed:(int)arg0 group:(int)arg1;
- (unsigned long long)unreadCountShowTypeGroup:(long long)arg0;
- (void)setAllAssistantUnreadCount:(long long)arg0;
- (id)serviceUnreadCountGroupIdMap;
- (long long)applyJoinGroupCount;
- (long long)msgTabNoticeTotalCount;
- (void)setGroupIdToUnreadCountTrackingMap:(id)arg0;
- (void)setCurrentNoticeTabbarUnreadCount:(long long)arg0;
- (void)setHasNewInteractMessage:(BOOL)arg0;
- (double)getUnreadLatestTimeWithGroup:(long long)arg0;
- (id)innerPushBusinessArray;
- (id)noticeCountParams;
- (long long)p_interactiveNoticeCellUnreadCountWithMultiParamsRecord:(BOOL)arg0;
- (long long)interactiveNoticeCellUnreadCountTabbar;
- (long long)interactiveFlameCellUnreadCount;
- (id)aAWENoticeModuleServiceCommonAdaper;
- (void)__awenoticeRequsetNoticeDetailWithNotices:(id)arg0 context:(id)arg1;
- (BOOL)skipUpdateGroupWhenReceiveMessagesFromLongConnection:(id)arg0;
- (void)__awenoticeRequsetNoticeDetail:(id)arg0 effectGroupDict:(id)arg1;
- (void)p_trackNoticeDetailRequestEventWithID:(id)arg0;
- (void)__awenoticePostNoticeDetail:(id)arg0 effectGroupDict:(id)arg1;
- (void)p_trackNoticeDetailResponseEventWithID:(id)arg0 error:(id)arg1;
- (void)setCachedNoticeEntranceStyleStore:(id)arg0;
- (BOOL)shouldCacheNoticeEntranceStyle;
- (id)cachedNoticeEntranceStyleStore;
- (void)unreadCountChangeObjectUnreadCountDidChange:(id)arg0;
- (BOOL)unreadCountChangeObjectNeedMarkRead:(id)arg0;
- (long long)getDotUnreadCountWithGroup:(long long)arg0;
- (long long)interactiveCommentCellUnreadCount;
- (void)setLastReadNewFansNoticeID:(id)arg0;
- (id)customerServiceGroups;
- (void)setCustomerServiceGroups:(id)arg0;
- (void)fetchInteractNotification:(id /* block */)arg0 isLongConnectionRequest:(BOOL)arg1;
- (void)fetchFollowingRecommendNum:(id /* block */)arg0;
- (long long)unreadCountOfUser:(id)arg0;
- (void)readCommentForwardAndVoteWithTaskManager;
- (void)readAtMeWithTaskManager;
- (void)readMoreGroupNoticeWithTaskManager;
- (id)allReadedNoticeIDSet;
- (void)hideGroup:(long long)arg0 atTime:(long long)arg1;
- (void)setShowType:(unsigned long long)arg0 forGroup:(long long)arg1;
- (id)currentAssistantUnreadCountMap;
- (id)currentAssistantDotUnreadCountMap;
- (id)currentAssistantUnreadShowTypeMap;
- (id)interactiveUnreadCountShowTypeOfGroup:(long long)arg0;
- (void)setInteractionAssemblyContent:(id)arg0 forKey:(id)arg1;
- (void)setInteractionAssemblyTailTruncation:(id)arg0 forKey:(id)arg1;
- (void)setInteractionAssemblyContent:(id)arg0 forStrKey:(id)arg1;
- (void)readWithType:(long long)arg0;
- (void)readFriendTabUnreadCount;
- (void)updatePreviousStoryID:(id)arg0;
- (void)updateWorkspaceUnreadCount:(long long)arg0;
- (long long)noticeDemoteStateWithGroup:(long long)arg0;
- (void)fetchFollowAnchorPushNotice;
- (long long)followingLiveCount;
- (id)friendVideoChannel;
- (BOOL)hasEverRequestUnreadCountFinished;
- (BOOL)hasStrangerMsg;
- (long long)allAssistantUnreadCount;
- (long long)interactionNoticeCellUnreadCount;
- (long long)myProfileTabNoticeTotalStableCount;
- (long long)storyTabUnreadCount;
- (unsigned long long)urgeType;
- (long long)followingRecommendCount;
- (long long)storyTabColdStartCount;
- (id)unreadInteractionNoticesFromUsersAvatarURLList;
- (void)fetchFollowRequestCount:(id /* block */)arg0;
- (BOOL)isReadyToRecieveIMNotice;
- (unsigned long long)liveInnerPushShowedTimes;
- (id)lastLivePushShowTime;
- (BOOL)isMatchTiming;
- (void)updateFlameCount:(long long)arg0;
- (BOOL)isOnlyHasCommentAtLikeUnreadCount;
- (void)setStrangerUnreadCountObj:(id)arg0;
- (void)setNotiTabUnreadCountObj:(id)arg0;
- (long long)dotUnreadCount;
- (BOOL)hasPreviousUser;
- (void)setHasPreviousUser:(BOOL)arg0;
- (void)setNoticeCountParams:(id)arg0;
- (BOOL)isFetchStoryRequestOnAir;
- (void)setIsFetchStoryRequestOnAir:(BOOL)arg0;
- (id)previousStoryID;
- (BOOL)enablePresentRecommendNoticeYellowDotInTabbar;
- (BOOL)reduceRecommendPersonNoticeRequesting;
- (void)setReduceRecommendPersonNoticeRequesting:(BOOL)arg0;
- (void)setFollowTabRedDotNotice:(id)arg0;
- (void)setFollowTabLiveNotice:(id)arg0;
- (void)setInteractionUnreadNoticeShowTypeMap:(id)arg0;
- (int)allServiceTotoalUnreadCount;
- (id)ignoredRecommendPersonNoticeSet;
- (void)setIgnoredRecommendPersonNoticeSet:(id)arg0;
- (id)oldestIgnoredRecommendNoticeTimestamp;
- (void)setOldestIgnoredRecommendNoticeTimestamp:(id)arg0;
- (id)newestIgnoredRecommendNoticeTimestamp;
- (void)setNewestIgnoredRecommendNoticeTimestamp:(id)arg0;
- (void)setUnreadLatestTimeMap:(id)arg0;
- (void)setInnerPushBusinessArray:(id)arg0;
- (void)setSourceType:(long long)arg0;
- (long long)sourceType;
- (id)init;
- (void)applicationWillEnterForeground:(id)arg0;
- (void).cxx_destruct;
- (void)clearAll;
- (long long)feedbackCount;
- (void)setLastTimestamp:(double)arg0;
- (void)applicationDidEnterBackground:(id)arg0;
- (double)lastTimestamp;
- (void)dealloc;
- (long long)currentType;

@end
