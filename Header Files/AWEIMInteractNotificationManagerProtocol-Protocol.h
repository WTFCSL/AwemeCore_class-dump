//
//     Generated by private class-dump
//

@class NSString, NSArray, NSDictionary, NSNumber, NSMutableArray;
@protocol AWEOfficialNotificationProtocol;

@protocol AWEIMInteractNotificationManagerProtocol <AWEOfficialNotificationProtocol>

+ (id)managerKeyPathsForValuesAffectingUnreadCount;

@property (nonatomic) long long followingLiveCount;
@property (retain, nonatomic) NSNumber *followLiveChannel;
@property (retain, nonatomic) NSNumber *followVideoChannel;
@property (retain, nonatomic) NSNumber *friendVideoChannel;
@property (copy, nonatomic) NSString *noticeCountRequestID;
@property (nonatomic) long long noticeCountType;
@property (copy, nonatomic) NSString *pushAuthorID;
@property (copy, nonatomic) NSString *pushAwemeID;
@property (nonatomic) BOOL hasNewInteractMessage;
@property (readonly, nonatomic) BOOL hasEverRequestUnreadCountFinished;
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
@property (readonly, nonatomic) long long noticeTabbarUnreadCount;
@property (readonly, nonatomic) long long currentNoticeTabbarUnreadCount;
@property (nonatomic) long long followingRecommendCount;
@property (nonatomic) long long storyTabColdStartCount;
@property (nonatomic) long long tutorialVideoCount;
@property (copy, nonatomic) NSArray *unreadInteractionNoticesFromUsersAvatarURLList;
@property (retain, nonatomic) NSMutableArray *readedCommentArray;
@property (retain, nonatomic) NSMutableArray *readedForwardArray;
@property (retain, nonatomic) NSMutableArray *readedAtArray;
@property (retain, nonatomic) NSMutableArray *readedLikeArray;
@property (retain, nonatomic) NSMutableArray *readedRecommendPersonArray;
@property (retain, nonatomic) NSMutableArray *readedModularizationNoticesArray;
@property (copy, nonatomic) NSDictionary *comboRequestResult;
@property (copy, nonatomic) NSDictionary *comboSocialRequestResult;
@property (copy, nonatomic) NSString *gdLabel;
@property (retain, nonatomic) NSNumber *lastReadNewFansNoticeID;
@property (retain, nonatomic) id<AWEOfficialNotificationProtocol> otherNotificationCountManager;

- (long long)rewardCount;
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
- (id)followTabNotices;
- (long long)familiarCount;
- (void)setFamiliarCount:(long long)arg0;
- (void)setNewFansCount:(long long)arg0;
- (void)readFollowingTabUnreadCount;
- (void)setComboSocialRequestResult:(id)arg0;
- (void)setFollowTabNotices:(id)arg0;
- (id)comboSocialRequestResult;
- (void)setNoticeCountRequestID:(id)arg0;
- (void)setNoticeCountType:(long long)arg0;
- (void)setFriendVideoChannel:(id)arg0;
- (void)readFriendMessage;
- (long long)noticeTabbarUnreadCount;
- (long long)noticeSideBarUnreadCount;
- (void)readFollowingFeed;
- (long long)followingFeedCount;
- (id)otherNotificationCountManager;
- (void)readFamiliarCount;
- (BOOL)hasNewInteractMessage;
- (long long)imEmojiReplyCount;
- (long long)syncUpdateNoticeTabbarUnreadCount;
- (long long)bizFollowRequestCount;
- (id)currentNoticeDemoteStateMap;
- (long long)getUnreadCountWithGroup:(long long)arg0;
- (void)setUrgeType:(unsigned long long)arg0;
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
- (void)setCommentAtLikeCount:(long long)arg0;
- (void)setCommentForwardAndVoteCount:(long long)arg0;
- (void)setFlameCount:(long long)arg0;
- (void)setInteractionNoticeCellUnreadCount:(long long)arg0;
- (long long)myProfileTabNoticeTotalCount;
- (void)setMyProfileTabNoticeTotalStableCount:(long long)arg0;
- (long long)commentAtLikeCount;
- (long long)flameCount;
- (long long)incomingFriendCount;
- (long long)serverStrangerCount;
- (long long)followRequestCount;
- (long long)approveFollowRequestCount;
- (long long)duetCount;
- (long long)createAwemeCount;
- (long long)oneDayInteractCount;
- (long long)oneDayLatestCount;
- (long long)fansPushCount;
- (id)comboRequestResult;
- (void)fetchInteractNotification:(id /* block */)arg0 isLongConnectionRequest:(BOOL)arg1 context:(id)arg2;
- (void)fetchInteractNotification:(id /* block */)arg0 isLongConnectionRequest:(BOOL)arg1 needFilterSocialCount:(BOOL)arg2 context:(id)arg3;
- (void)setComboRequestResult:(id)arg0;
- (void)setFollowingRecommendCount:(long long)arg0;
- (long long)currentNoticeTabbarUnreadCount;
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
- (void)setIncomingFriendCount:(long long)arg0;
- (void)setFollowingFeedCount:(long long)arg0;
- (void)setStrangerCount:(long long)arg0;
- (void)setHasStrangerMsg:(BOOL)arg0;
- (void)setServerStrangerCount:(long long)arg0;
- (void)setFollowRequestCount:(long long)arg0;
- (void)setApproveFollowRequestCount:(long long)arg0;
- (void)setDuetCount:(long long)arg0;
- (void)setCreateAwemeCount:(long long)arg0;
- (void)setFeedbackCount:(long long)arg0;
- (void)setOneDayInteractCount:(long long)arg0;
- (void)setOneDayLatestCount:(long long)arg0;
- (void)setFriendTabUnreadCount:(long long)arg0;
- (void)setStoryTabColdStartCount:(long long)arg0;
- (void)setFollowingTabUnreadCount:(long long)arg0;
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
- (long long)friendTabUnreadCount;
- (long long)followingTabUnreadCount;
- (void)setStoryTabUnreadCount:(long long)arg0;
- (long long)workspaceUnreadCount;
- (long long)imMessageCount;
- (void)setImMessageCount:(long long)arg0;
- (void)updateAllSecondServiceUnreadCount:(int)arg0 notify:(BOOL)arg1 serviceUnreadCountMap:(id)arg2;
- (void)setImEmojiReplyCount:(long long)arg0;
- (long long)tutorialVideoCount;
- (void)setTutorialVideoCount:(long long)arg0;
- (long long)imLiteMessageCount;
- (void)setImLiteMessageCount:(long long)arg0;
- (void)setAtMeCount:(long long)arg0;
- (void)setLikeMeCount:(long long)arg0;
- (void)setReadedAtArray:(id)arg0;
- (void)setReadedCommentArray:(id)arg0;
- (void)setReadedLikeArray:(id)arg0;
- (void)setReadedForwardArray:(id)arg0;
- (void)setReadedRecommendPersonArray:(id)arg0;
- (void)setReadedModularizationNoticesArray:(id)arg0;
- (long long)strangerCount;
- (void)setUnreadInteractionNoticesFromUsersAvatarURLList:(id)arg0;
- (void)setFollowingLiveCount:(long long)arg0;
- (void)setPushAuthorID:(id)arg0;
- (void)setPushAwemeID:(id)arg0;
- (void)setLatestVideoTime:(id)arg0;
- (void)setLatestLiveTime:(id)arg0;
- (unsigned long long)unreadCountShowTypeGroup:(long long)arg0;
- (void)setAllAssistantUnreadCount:(long long)arg0;
- (long long)applyJoinGroupCount;
- (long long)msgTabNoticeTotalCount;
- (void)setHasNewInteractMessage:(BOOL)arg0;
- (double)getUnreadLatestTimeWithGroup:(long long)arg0;
- (long long)getDotUnreadCountWithGroup:(long long)arg0;
- (long long)interactiveCommentCellUnreadCount;
- (void)setLastReadNewFansNoticeID:(id)arg0;
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
- (void)clearAll;
- (long long)feedbackCount;

@optional

- (void)changeSourceType:(long long)arg0;
- (void)changeHasEverRequestUnreadCountFinished:(BOOL)arg0;
- (void)configWithCountModel:(id)arg0 time:(double)arg1 type:(long long)arg2 context:(id)arg3;
- (id)groupIdToUnreadCountTrackingComponentExtra;
- (void)printDetailNoticeTabbarUnreadCountInfo;
- (void)innerPushShowed;
- (void)fetchFollowRequestCount:(id /* block */)arg0;
- (BOOL)isReadyToRecieveIMNotice;
- (unsigned long long)liveInnerPushShowedTimes;
- (id)lastLivePushShowTime;
- (BOOL)isMatchTiming;

@end
