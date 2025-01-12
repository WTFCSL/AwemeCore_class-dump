//
//     Generated by private class-dump
//

@class NSArray, AWEURLModel, AWEViewHistoryNotificationModel, AWEForwardNotificationModel, AWENoticeDisableInfoModel, AWEInteractGeneralNoticeModel, AWEAtNotificationModel, AWEDiggNotificationModel, AWEFansPushNotificationModel, AWERecommendPersonNotificationModel, AWEOneDayNoticeModel, AWEVisitorNotificationModel, NSString, AWEVoteNotificationModel, AWEFollowNotificationModel, AWECommentNotificationModel, AWEShopNoticeModel, AWEAccountMigrateNoticeModel, NSNumber, AWEGeneralNoticeStructModel;

@interface AWENotificationModelNew : AWEBaseApiModel <IGListDiffable> {
    BOOL _typeNoticeDisable;
    BOOL _hasRead;
    BOOL _awemeNoticeDisable;
    BOOL _isUnread;
    BOOL _lastUnreadMessage;
    BOOL _pinned;
    BOOL _canDisturb;
    BOOL _disturb;
    BOOL _foldStatus;
    BOOL _foldable;
    BOOL _isRefusing;
    BOOL _isAwemeIDEmpty;
    BOOL _noMoreNoticeRequesting;
    BOOL _isTopViewedNotice;
    BOOL _isPreloadData;
    BOOL _isCacheData;
    BOOL _isShowingLightInteractionButton;
    BOOL _hasDeleteDisplayText;
    BOOL _isOwnPostedDanmaku;
    NSNumber *_noticeID;
    NSNumber *_userID;
    long long _type;
    NSNumber *_createTime;
    NSNumber *_noticePinned;
    AWEDiggNotificationModel *_diggNotice;
    AWECommentNotificationModel *_commentNotice;
    AWEFollowNotificationModel *_followNotice;
    AWEAtNotificationModel *_atNotice;
    AWEOneDayNoticeModel *_oneDayNotice;
    AWEShopNoticeModel *_shopNotice;
    AWEVoteNotificationModel *_voteNotice;
    AWEFansPushNotificationModel *_fansPushNotice;
    AWEForwardNotificationModel *_forwardNotice;
    long long _vcdAuthStatus;
    AWEAccountMigrateNoticeModel *_accountMigrateNotice;
    AWEViewHistoryNotificationModel *_viewHistoryNotice;
    AWERecommendPersonNotificationModel *_recommendNotice;
    AWEVisitorNotificationModel *_visitorNotice;
    AWEGeneralNoticeStructModel *_generalNotice;
    AWEInteractGeneralNoticeModel *_modularizationInteractNotice;
    NSString *_awemeID;
    NSArray *_disturbModels;
    NSArray *_subscribeModels;
    NSArray *_tabModels;
    NSArray *_noticeConfigs;
    NSString *_name;
    AWEURLModel *_avatar;
    NSNumber *_shouldShowEnquire;
    NSString *_tabName;
    NSString *_timeline;
    long long _lastReadTime;
    NSString *_processId;
    long long _recommendSystemGroupID;
    NSString *_consecutiveChatLastTrackColor;
    NSNumber *_readTime;
    AWENoticeDisableInfoModel *_disableInfoModel;
    NSNumber *_interactiveBizId;
    NSString *_objectID;
    NSString *_enterFromString;
    NSString *_noticeTabName;
    NSString *_previousPageString;
    long long _landingGroup;
}

@property (nonatomic) BOOL shouldShowBottomContainer;
@property (nonatomic) BOOL didClickFollowButton;
@property (nonatomic) BOOL autoShowRecommendCardInFansNotice;
@property (retain, nonatomic) NSNumber *noticeID;
@property (retain, nonatomic) NSNumber *userID;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSNumber *createTime;
@property (retain, nonatomic) NSNumber *noticePinned;
@property (retain, nonatomic) AWEDiggNotificationModel *diggNotice;
@property (retain, nonatomic) AWECommentNotificationModel *commentNotice;
@property (retain, nonatomic) AWEFollowNotificationModel *followNotice;
@property (retain, nonatomic) AWEAtNotificationModel *atNotice;
@property (retain, nonatomic) AWEOneDayNoticeModel *oneDayNotice;
@property (retain, nonatomic) AWEShopNoticeModel *shopNotice;
@property (retain, nonatomic) AWEVoteNotificationModel *voteNotice;
@property (retain, nonatomic) AWEFansPushNotificationModel *fansPushNotice;
@property (retain, nonatomic) AWEForwardNotificationModel *forwardNotice;
@property (nonatomic) long long vcdAuthStatus;
@property (retain, nonatomic) AWEAccountMigrateNoticeModel *accountMigrateNotice;
@property (retain, nonatomic) AWEViewHistoryNotificationModel *viewHistoryNotice;
@property (retain, nonatomic) AWERecommendPersonNotificationModel *recommendNotice;
@property (retain, nonatomic) AWEVisitorNotificationModel *visitorNotice;
@property (retain, nonatomic) AWEGeneralNoticeStructModel *generalNotice;
@property (retain, nonatomic) AWEInteractGeneralNoticeModel *modularizationInteractNotice;
@property (nonatomic) BOOL typeNoticeDisable;
@property (nonatomic) BOOL hasRead;
@property (nonatomic) BOOL awemeNoticeDisable;
@property (retain, nonatomic) NSString *awemeID;
@property (nonatomic) BOOL isUnread;
@property (nonatomic) BOOL lastUnreadMessage;
@property (copy, nonatomic) NSArray *disturbModels;
@property (copy, nonatomic) NSArray *subscribeModels;
@property (nonatomic) BOOL pinned;
@property (nonatomic) BOOL canDisturb;
@property (nonatomic) BOOL disturb;
@property (nonatomic) BOOL foldStatus;
@property (copy, nonatomic) NSArray *tabModels;
@property (copy, nonatomic) NSArray *noticeConfigs;
@property (nonatomic) BOOL foldable;
@property (nonatomic) BOOL isRefusing;
@property (nonatomic) BOOL isAwemeIDEmpty;
@property (nonatomic) BOOL noMoreNoticeRequesting;
@property (nonatomic) BOOL isTopViewedNotice;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) AWEURLModel *avatar;
@property (retain, nonatomic) NSNumber *shouldShowEnquire;
@property (copy, nonatomic) NSString *tabName;
@property (copy, nonatomic) NSString *timeline;
@property (nonatomic) long long lastReadTime;
@property (copy, nonatomic) NSString *processId;
@property (nonatomic) long long recommendSystemGroupID;
@property (nonatomic) BOOL isPreloadData;
@property (nonatomic) BOOL isCacheData;
@property (copy, nonatomic) NSString *consecutiveChatLastTrackColor;
@property (retain, nonatomic) NSNumber *readTime;
@property (retain, nonatomic) AWENoticeDisableInfoModel *disableInfoModel;
@property (retain, nonatomic) NSNumber *interactiveBizId;
@property (copy, nonatomic) NSString *objectID;
@property (copy, nonatomic) NSString *enterFromString;
@property (copy, nonatomic) NSString *noticeTabName;
@property (copy, nonatomic) NSString *previousPageString;
@property (nonatomic) BOOL isShowingLightInteractionButton;
@property (nonatomic) long long landingGroup;
@property (nonatomic) BOOL hasDeleteDisplayText;
@property (nonatomic) BOOL isOwnPostedDanmaku;

+ (id)disableInfoModelJSONTransformer;
+ (id)oneDayNoticeJSONTransformer;
+ (id)shopNoticeJSONTransformer;
+ (id)forwardNoticeJSONTransformer;
+ (id)diggNoticeJSONTransformer;
+ (id)commentNoticeJSONTransformer;
+ (id)followNoticeJSONTransformer;
+ (id)atNoticeJSONTransformer;
+ (id)voteNoticeJSONTransformer;
+ (id)fansPushNoticeJSONTransformer;
+ (id)accountMigrateNoticeJSONTransformer;
+ (id)generalNoticeJSONTransformer;
+ (id)viewHistoryNoticeJSONTransformer;
+ (id)recommendNoticeJSONTransformer;
+ (id)visitorNoticeJSONTransformer;
+ (id)modularizationInteractNoticeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)arg0;
- (void)setAwemeID:(id)arg0;
- (id)awemeID;
- (BOOL)didClickFollowButton;
- (long long)landingGroup;
- (long long)recommendSystemGroupID;
- (id)previousPageString;
- (id)noticeTabName;
- (id)enterFromString;
- (void)setNoticeID:(id)arg0;
- (id)forwardNotice;
- (id)voteNotice;
- (id)oneDayNotice;
- (BOOL)isOwnPostedDanmaku;
- (BOOL)isShowingLightInteractionButton;
- (id)followNotice;
- (long long)vcdAuthStatus;
- (id)visitorNotice;
- (id)noticeID;
- (id)atNotice;
- (void)setIsShowingLightInteractionButton:(BOOL)arg0;
- (void)setConsecutiveChatLastTrackColor:(id)arg0;
- (id)consecutiveChatLastTrackColor;
- (id)diggNotice;
- (id)commentNotice;
- (void)setIsUnread:(BOOL)arg0;
- (id)modularizationInteractNotice;
- (void)setEnterFromString:(id)arg0;
- (BOOL)foldable;
- (void)setFoldable:(BOOL)arg0;
- (id)tabModels;
- (void)setTabModels:(id)arg0;
- (id)readTime;
- (id)viewHistoryNotice;
- (BOOL)isPreloadData;
- (void)setIsPreloadData:(BOOL)arg0;
- (void)setAtNotice:(id)arg0;
- (id)accountMigrateNotice;
- (void)setPreviousPageString:(id)arg0;
- (id)fansArrayShowTrackInfo:(id)arg0;
- (BOOL)isFromOwnPostedRequest;
- (void)setAwemeNoticeDisable:(BOOL)arg0;
- (id)recommendNotice;
- (id)noticeConfigs;
- (void)setNoticeConfigs:(id)arg0;
- (BOOL)canDisturb;
- (void)setCanDisturb:(BOOL)arg0;
- (BOOL)disturb;
- (void)setDisturb:(BOOL)arg0;
- (BOOL)foldStatus;
- (void)setFoldStatus:(BOOL)arg0;
- (long long)lastReadTime;
- (void)setLastReadTime:(long long)arg0;
- (void)setLastUnreadMessage:(BOOL)arg0;
- (void)setDisturbModels:(id)arg0;
- (void)setSubscribeModels:(id)arg0;
- (BOOL)isRefusing;
- (BOOL)shouldShowBottomContainer;
- (BOOL)autoShowRecommendCardInFansNotice;
- (BOOL)isTopViewedNotice;
- (void)setShouldShowBottomContainer:(BOOL)arg0;
- (void)setDidClickFollowButton:(BOOL)arg0;
- (id)as_fansAndFollowRequestRecommendText;
- (void)setIsRefusing:(BOOL)arg0;
- (void)setAutoShowRecommendCardInFansNotice:(BOOL)arg0;
- (id)generalNotice;
- (void)setNoticeTabName:(id)arg0;
- (void)setReadTime:(id)arg0;
- (BOOL)lastUnreadMessage;
- (BOOL)typeNoticeDisable;
- (void)setRecommendSystemGroupID:(long long)arg0;
- (id)disableInfoModel;
- (BOOL)hasDisableEntrance;
- (BOOL)awemeNoticeDisable;
- (BOOL)noMoreNoticeRequesting;
- (id)interactiveBizId;
- (void)setNoMoreNoticeRequesting:(BOOL)arg0;
- (void)setTypeNoticeDisable:(BOOL)arg0;
- (void)requestNoticeID:(id)arg0 requestTag:(id)arg1 requestExtra:(id)arg2 requestValue:(id)arg3 result:(id /* block */)arg4;
- (id)subscribeModels;
- (BOOL)shouldHideActionCardView;
- (BOOL)shouldHideAvatarArea;
- (BOOL)shouldHideGotoDetailArea;
- (id)disturbModel;
- (id)disturbModels;
- (void)setHasRead:(BOOL)arg0;
- (void)setCommentNotice:(id)arg0;
- (void)setIsOwnPostedDanmaku:(BOOL)arg0;
- (BOOL)isAwemeIDEmpty;
- (id)noticePinned;
- (void)setNoticePinned:(id)arg0;
- (void)setDiggNotice:(id)arg0;
- (void)setFollowNotice:(id)arg0;
- (void)setOneDayNotice:(id)arg0;
- (id)shopNotice;
- (void)setShopNotice:(id)arg0;
- (void)setVoteNotice:(id)arg0;
- (id)fansPushNotice;
- (void)setFansPushNotice:(id)arg0;
- (void)setForwardNotice:(id)arg0;
- (void)setVcdAuthStatus:(long long)arg0;
- (void)setAccountMigrateNotice:(id)arg0;
- (void)setViewHistoryNotice:(id)arg0;
- (void)setRecommendNotice:(id)arg0;
- (void)setVisitorNotice:(id)arg0;
- (void)setGeneralNotice:(id)arg0;
- (void)setModularizationInteractNotice:(id)arg0;
- (void)setIsAwemeIDEmpty:(BOOL)arg0;
- (void)setIsTopViewedNotice:(BOOL)arg0;
- (id)shouldShowEnquire;
- (void)setShouldShowEnquire:(id)arg0;
- (void)setDisableInfoModel:(id)arg0;
- (void)setInteractiveBizId:(id)arg0;
- (void)setLandingGroup:(long long)arg0;
- (BOOL)hasDeleteDisplayText;
- (void)setHasDeleteDisplayText:(BOOL)arg0;
- (id)userID;
- (id)objectID;
- (void)setObjectID:(id)arg0;
- (void)setTimeline:(id)arg0;
- (void).cxx_destruct;
- (void)setPinned:(BOOL)arg0;
- (BOOL)isUnread;
- (BOOL)isDisabled;
- (id)timeline;
- (void)setCreateTime:(id)arg0;
- (void)setProcessId:(id)arg0;
- (long long)type;
- (void)setUserID:(id)arg0;
- (void)setType:(long long)arg0;
- (unsigned long long)hash;
- (void)setName:(id)arg0;
- (id)createTime;
- (BOOL)isEqual:(id)arg0;
- (id)processId;
- (id)name;
- (BOOL)pinned;
- (id)avatar;
- (void)setAvatar:(id)arg0;
- (BOOL)isCacheData;
- (void)setIsCacheData:(BOOL)arg0;
- (void)setTabName:(id)arg0;
- (id)tabName;
- (BOOL)hasRead;

@end
