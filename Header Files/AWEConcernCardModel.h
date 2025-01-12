//
//     Generated by private class-dump
//

@class AWEAwemeModel, NSString, AWELiveFollowFeedCellModel, NSArray, AWELiveVSEpisode, AWEConcernVSStruct, NSNumber, AWESmartFeedOutCommentModel;

@interface AWEConcernCardModel : AWEBaseApiModel <AWEConcernCardTypeProtocol> {
    BOOL _isAtlasInDynamic;
    BOOL _isRecommendInterestedItem;
    BOOL _isFromSort;
    BOOL _disableDeduplicate;
    BOOL _isInNewHotspot;
    BOOL _capsuleFocusStickTop;
    BOOL _liveAvoidGlobalPendant;
    BOOL _hasCommentInputView;
    BOOL _canShowSpecialFollowGuide;
    BOOL _isPlaceItem;
    long long _type;
    AWEAwemeModel *_aweme;
    NSArray *_users;
    NSArray *_commentList;
    NSArray *_circleDiggUsers;
    long long _circleDiggTotal;
    long long _circleCommentCount;
    NSString *_circleUserTag;
    long long _circleUserTagColorStyle;
    long long _circleItemRole;
    long long _circleUserStatus;
    NSString *_circleTabInfoSort;
    NSString *_circleUserNickName;
    NSString *_circleItemDiggMemberUrl;
    NSString *_forcePrivacyStr;
    NSArray *_likeUserList;
    NSString *_recommendReason;
    NSNumber *_recommendCount;
    NSString *_challengeID;
    double _adLearnMoreViewHeight;
    double _adLabelViewHeight;
    double _adLearnMoreECommerceLynxButtonHeight;
    double _adECommerceTitleHeight;
    double _videoRecommWordHeight;
    unsigned long long _sourceType;
    unsigned long long _friendsReceiveUpdateCount;
    long long _fastCommentType;
    long long _userUnreadCount;
    long long _itemType;
    NSString *_diggGuideButtonTitle;
    long long _diggGuideButtonShowTime;
    long long _diggGuideButtonShowFrequency;
    NSString *_capsuleTitle;
    NSArray *_capsuleAvatarUrlList;
    NSString *_capsuleLynxUrl;
    long long _capsuleType;
    long long _followFeedSceneType;
    NSNumber *_feedRequestPullType;
    AWESmartFeedOutCommentModel *_outCommentModel;
}

@property (nonatomic) unsigned long long impressionIndex;
@property (nonatomic) BOOL fromFamiliar;
@property (retain, nonatomic) AWELiveFollowFeedCellModel *followRoom;
@property (retain, nonatomic) AWELiveVSEpisode *liveEpisode;
@property (retain, nonatomic) AWEConcernVSStruct *concernVSStruct;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long type;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (retain, nonatomic) NSArray *users;
@property (retain, nonatomic) NSArray *commentList;
@property (copy, nonatomic) NSArray *circleDiggUsers;
@property (nonatomic) long long circleDiggTotal;
@property (nonatomic) long long circleCommentCount;
@property (retain, nonatomic) NSString *circleUserTag;
@property (nonatomic) long long circleUserTagColorStyle;
@property (nonatomic) long long circleItemRole;
@property (nonatomic) long long circleUserStatus;
@property (copy, nonatomic) NSString *circleTabInfoSort;
@property (copy, nonatomic) NSString *circleUserNickName;
@property (copy, nonatomic) NSString *circleItemDiggMemberUrl;
@property (retain, nonatomic) NSString *forcePrivacyStr;
@property (retain, nonatomic) NSArray *likeUserList;
@property (copy, nonatomic) NSString *recommendReason;
@property (retain, nonatomic) NSNumber *recommendCount;
@property (copy, nonatomic) NSString *challengeID;
@property (nonatomic) double adLearnMoreViewHeight;
@property (nonatomic) double adLabelViewHeight;
@property (nonatomic) double adLearnMoreECommerceLynxButtonHeight;
@property (nonatomic) double adECommerceTitleHeight;
@property (nonatomic) double videoRecommWordHeight;
@property (nonatomic) unsigned long long sourceType;
@property (nonatomic) unsigned long long friendsReceiveUpdateCount;
@property (nonatomic) BOOL isAtlasInDynamic;
@property (nonatomic) BOOL isRecommendInterestedItem;
@property (nonatomic) long long fastCommentType;
@property (nonatomic) long long userUnreadCount;
@property (nonatomic) BOOL isFromSort;
@property (nonatomic) long long itemType;
@property (nonatomic) BOOL disableDeduplicate;
@property (nonatomic) BOOL isInNewHotspot;
@property (copy, nonatomic) NSString *diggGuideButtonTitle;
@property (nonatomic) long long diggGuideButtonShowTime;
@property (nonatomic) long long diggGuideButtonShowFrequency;
@property (copy, nonatomic) NSString *capsuleTitle;
@property (copy, nonatomic) NSArray *capsuleAvatarUrlList;
@property (copy, nonatomic) NSString *capsuleLynxUrl;
@property (nonatomic) long long capsuleType;
@property (nonatomic) BOOL capsuleFocusStickTop;
@property (nonatomic) BOOL liveAvoidGlobalPendant;
@property (nonatomic) long long followFeedSceneType;
@property (retain, nonatomic) NSNumber *feedRequestPullType;
@property (retain, nonatomic) AWESmartFeedOutCommentModel *outCommentModel;
@property (nonatomic) BOOL hasCommentInputView;
@property (nonatomic) BOOL canShowSpecialFollowGuide;
@property (nonatomic) BOOL isPlaceItem;

+ (id)usersJSONTransformer;
+ (id /* block */)isEqualBlock;
+ (id)awemeJSONTransformer;
+ (id)commentListJSONTransformer;
+ (id)circleDiggUsersJSONTransformer;
+ (id)likeUserListJSONTransformer;
+ (id)outCommentModelJSONTransformer;
+ (id)followRoomModel_subModelPropertyKey;
+ (id)followRoomJSONTransformer;
+ (id)concernVSStructJSONTransformer;
+ (id)liveEpisodeJSONTransformer;
+ (BOOL)useNewSearchVideoCard;
+ (id)JSONKeyPathsByPropertyKey;

- (id)aweme;
- (void)setAweme:(id)arg0;
- (BOOL)canShowSpecialFollowGuide;
- (BOOL)isRecommendedCard;
- (BOOL)isFromSort;
- (BOOL)isRecommendInterestedItem;
- (void)setIsRecommendInterestedItem:(BOOL)arg0;
- (id)commentList;
- (void)setCommentList:(id)arg0;
- (id)recommendReason;
- (void)setRecommendReason:(id)arg0;
- (id)feedRequestPullType;
- (void)setFeedRequestPullType:(id)arg0;
- (id)circleDiggUsers;
- (void)setCircleDiggUsers:(id)arg0;
- (long long)circleDiggTotal;
- (void)setCircleDiggTotal:(long long)arg0;
- (long long)circleCommentCount;
- (void)setCircleCommentCount:(long long)arg0;
- (id)circleUserTag;
- (void)setCircleUserTag:(id)arg0;
- (long long)circleUserTagColorStyle;
- (void)setCircleUserTagColorStyle:(long long)arg0;
- (long long)circleItemRole;
- (void)setCircleItemRole:(long long)arg0;
- (long long)circleUserStatus;
- (void)setCircleUserStatus:(long long)arg0;
- (id)circleTabInfoSort;
- (void)setCircleTabInfoSort:(id)arg0;
- (id)circleUserNickName;
- (void)setCircleUserNickName:(id)arg0;
- (id)circleItemDiggMemberUrl;
- (void)setCircleItemDiggMemberUrl:(id)arg0;
- (id)forcePrivacyStr;
- (void)setForcePrivacyStr:(id)arg0;
- (id)likeUserList;
- (void)setLikeUserList:(id)arg0;
- (id)recommendCount;
- (void)setRecommendCount:(id)arg0;
- (double)adLearnMoreViewHeight;
- (void)setAdLearnMoreViewHeight:(double)arg0;
- (double)adLabelViewHeight;
- (void)setAdLabelViewHeight:(double)arg0;
- (double)adLearnMoreECommerceLynxButtonHeight;
- (void)setAdLearnMoreECommerceLynxButtonHeight:(double)arg0;
- (double)adECommerceTitleHeight;
- (void)setAdECommerceTitleHeight:(double)arg0;
- (double)videoRecommWordHeight;
- (void)setVideoRecommWordHeight:(double)arg0;
- (unsigned long long)friendsReceiveUpdateCount;
- (void)setFriendsReceiveUpdateCount:(unsigned long long)arg0;
- (BOOL)isAtlasInDynamic;
- (void)setIsAtlasInDynamic:(BOOL)arg0;
- (long long)fastCommentType;
- (void)setFastCommentType:(long long)arg0;
- (long long)userUnreadCount;
- (void)setUserUnreadCount:(long long)arg0;
- (void)setIsFromSort:(BOOL)arg0;
- (BOOL)disableDeduplicate;
- (void)setDisableDeduplicate:(BOOL)arg0;
- (BOOL)isInNewHotspot;
- (void)setIsInNewHotspot:(BOOL)arg0;
- (id)diggGuideButtonTitle;
- (void)setDiggGuideButtonTitle:(id)arg0;
- (long long)diggGuideButtonShowTime;
- (void)setDiggGuideButtonShowTime:(long long)arg0;
- (long long)diggGuideButtonShowFrequency;
- (void)setDiggGuideButtonShowFrequency:(long long)arg0;
- (id)capsuleTitle;
- (void)setCapsuleTitle:(id)arg0;
- (id)capsuleAvatarUrlList;
- (void)setCapsuleAvatarUrlList:(id)arg0;
- (id)capsuleLynxUrl;
- (void)setCapsuleLynxUrl:(id)arg0;
- (long long)capsuleType;
- (void)setCapsuleType:(long long)arg0;
- (BOOL)capsuleFocusStickTop;
- (void)setCapsuleFocusStickTop:(BOOL)arg0;
- (BOOL)liveAvoidGlobalPendant;
- (void)setLiveAvoidGlobalPendant:(BOOL)arg0;
- (long long)followFeedSceneType;
- (void)setFollowFeedSceneType:(long long)arg0;
- (id)outCommentModel;
- (void)setOutCommentModel:(id)arg0;
- (BOOL)hasCommentInputView;
- (void)setHasCommentInputView:(BOOL)arg0;
- (void)setCanShowSpecialFollowGuide:(BOOL)arg0;
- (BOOL)isPlaceItem;
- (void)setIsPlaceItem:(BOOL)arg0;
- (id)followRoom;
- (id)liveEpisode;
- (void)setFromFamiliar:(BOOL)arg0;
- (BOOL)fromFamiliar;
- (void)setFollowRoom:(id)arg0;
- (void)setLiveEpisode:(id)arg0;
- (void)setConcernVSStruct:(id)arg0;
- (id)concernVSStruct;
- (long long)concernCardType;
- (void)setSourceType:(unsigned long long)arg0;
- (unsigned long long)sourceType;
- (long long)itemType;
- (id)users;
- (void)setItemType:(long long)arg0;
- (id)initWithDictionary:(id)arg0 error:(id *)arg1;
- (void).cxx_destruct;
- (long long)type;
- (void)setType:(long long)arg0;
- (void)setUsers:(id)arg0;
- (id)challengeID;
- (void)setChallengeID:(id)arg0;
- (unsigned long long)impressionIndex;
- (void)setImpressionIndex:(unsigned long long)arg0;

@end
