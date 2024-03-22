//
//     Generated by private class-dump
//

@class HTSLiveUser_AnchorInfo, NSMutableArray, HTSLiveUser_FansClub, HTSLiveUser_NobleLevelInfo, HTSLiveUser_FollowInfo, HTSLiveUser_BizRelation, HTSLiveUser_ProfileStyleParams, GPBInt64Array, HTSLiveUser_UserAttr, HTSLiveUserVIPInfo, HTSLiveUser_UserDressInfo, HTSLiveUser_ActivityInfo, NSNumber, HTSLiveUser_PayGrade, HTSLiveImage, HTSLiveUser_UserStats, HTSLiveUser_UserSettingInfo, HTSLiveUser_Border, HTSLiveUser_AuthorStats, HTSLiveUser_AnchorLevel, UserExtra, HTSLiveIndustryCertification, HTSLiveUser_FansGroupInfo, HTSLiveUser_BrotherhoodInfo, HTSLiveUser_PublicAreaBadgeInfo, HTSLiveUser_ExtraInfo, NSString, HTSLiveUser_Subscribe, HTSLiveUser_OwnRoom, HTSLiveUser_PoiInfo, HTSLiveMemberEntranceInfo, HTSLiveUser_AuthenticationInfo, HTSLiveUser_JAccreditInfo, HTSLiveUser_XiguaParams;

@interface HTSLiveUser : IESLivePBBaseMessage <IESLiveGPBMessageInstaller, HTSLiveModelTrackProtocol>

@property (nonatomic) BOOL hasBeenInvited;
@property (nonatomic) BOOL hasBeenInvited;
@property (nonatomic) int userPosition;
@property (nonatomic) long long appId;
@property (nonatomic) long long clientVersion;
@property (copy, nonatomic) NSString *devicePlatform;
@property (nonatomic) BOOL isRisky;
@property (copy, nonatomic) NSString *riskyNickName;
@property (copy, nonatomic) NSString *riskyAvatarUrl;
@property (nonatomic) BOOL hasInvited;
@property (nonatomic) BOOL hasTracked;
@property (retain, nonatomic) NSNumber *recipientIdentifierValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *mixUserId;
@property (retain, nonatomic, setter=setrequestId:) NSString *requestId;
@property (retain, nonatomic, setter=setlogpb:) NSString *logpb;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSNumber *userID;
@property (retain, nonatomic) NSString *secUserID;
@property (retain, nonatomic) UserExtra *localCategoryExtraInfo;
@property (nonatomic) long long id_p;
@property (nonatomic) long long shortId;
@property (copy, nonatomic) NSString *nickname;
@property (nonatomic) int gender;
@property (copy, nonatomic) NSString *signature;
@property (nonatomic) int level;
@property (nonatomic) long long birthday;
@property (copy, nonatomic) NSString *telephone;
@property (retain, nonatomic) HTSLiveImage *avatarThumb;
@property (nonatomic) BOOL hasAvatarThumb;
@property (retain, nonatomic) HTSLiveImage *avatarMedium;
@property (nonatomic) BOOL hasAvatarMedium;
@property (retain, nonatomic) HTSLiveImage *avatarLarge;
@property (nonatomic) BOOL hasAvatarLarge;
@property (nonatomic) BOOL verified;
@property (nonatomic) int experience;
@property (copy, nonatomic) NSString *city;
@property (nonatomic) int status;
@property (nonatomic) long long createTime;
@property (nonatomic) long long modifyTime;
@property (nonatomic) int secret;
@property (copy, nonatomic) NSString *shareQrcodeUri;
@property (nonatomic) int incomeSharePercent;
@property (retain, nonatomic) NSMutableArray *badgeImageListArray;
@property (readonly, nonatomic) unsigned long long badgeImageListArray_Count;
@property (retain, nonatomic) HTSLiveUser_FollowInfo *followInfo;
@property (nonatomic) BOOL hasFollowInfo;
@property (retain, nonatomic) HTSLiveUser_PayGrade *payGrade;
@property (nonatomic) BOOL hasPayGrade;
@property (retain, nonatomic) HTSLiveUser_FansClub *fansClub;
@property (nonatomic) BOOL hasFansClub;
@property (retain, nonatomic) HTSLiveUser_Border *border;
@property (nonatomic) BOOL hasBorder;
@property (copy, nonatomic) NSString *specialId;
@property (retain, nonatomic) HTSLiveImage *avatarBorder;
@property (nonatomic) BOOL hasAvatarBorder;
@property (retain, nonatomic) HTSLiveImage *medal;
@property (nonatomic) BOOL hasMedal;
@property (retain, nonatomic) NSMutableArray *realTimeIconsArray;
@property (readonly, nonatomic) unsigned long long realTimeIconsArray_Count;
@property (retain, nonatomic) NSMutableArray *newRealTimeIconsArray;
@property (readonly, nonatomic) unsigned long long newRealTimeIconsArray_Count;
@property (nonatomic) long long topVipNo;
@property (retain, nonatomic) HTSLiveUser_UserAttr *userAttr;
@property (nonatomic) BOOL hasUserAttr;
@property (retain, nonatomic) HTSLiveUser_OwnRoom *ownRoom;
@property (nonatomic) BOOL hasOwnRoom;
@property (nonatomic) long long payScore;
@property (nonatomic) long long ticketCount;
@property (retain, nonatomic) HTSLiveUser_AnchorInfo *anchorInfo;
@property (nonatomic) BOOL hasAnchorInfo;
@property (nonatomic) int linkMicStats;
@property (copy, nonatomic) NSString *displayId;
@property (nonatomic) BOOL withCommercePermission;
@property (nonatomic) BOOL withFusionShopEntry;
@property (nonatomic) long long totalRechargeDiamondCount;
@property (retain, nonatomic) HTSLiveUser_AnchorLevel *webcastAnchorLevel;
@property (nonatomic) BOOL hasWebcastAnchorLevel;
@property (copy, nonatomic) NSString *verifiedContent;
@property (retain, nonatomic) HTSLiveUser_AuthorStats *authorStats;
@property (nonatomic) BOOL hasAuthorStats;
@property (retain, nonatomic) NSMutableArray *topFansArray;
@property (readonly, nonatomic) unsigned long long topFansArray_Count;
@property (copy, nonatomic) NSString *secUid;
@property (nonatomic) int userRole;
@property (retain, nonatomic) HTSLiveUser_XiguaParams *xiguaInfo;
@property (nonatomic) BOOL hasXiguaInfo;
@property (retain, nonatomic) HTSLiveUser_ActivityInfo *activityReward;
@property (nonatomic) BOOL hasActivityReward;
@property (retain, nonatomic) HTSLiveUser_NobleLevelInfo *nobleInfo;
@property (nonatomic) BOOL hasNobleInfo;
@property (retain, nonatomic) HTSLiveUser_BrotherhoodInfo *brotherhoodInfo;
@property (nonatomic) BOOL hasBrotherhoodInfo;
@property (retain, nonatomic) HTSLiveImage *personalCard;
@property (nonatomic) BOOL hasPersonalCard;
@property (retain, nonatomic) HTSLiveUser_AuthenticationInfo *authenticationInfo;
@property (nonatomic) BOOL hasAuthenticationInfo;
@property (nonatomic) int authorizationInfo;
@property (nonatomic) int adversaryAuthorizationInfo;
@property (retain, nonatomic) HTSLiveUser_PoiInfo *poiInfo;
@property (nonatomic) BOOL hasPoiInfo;
@property (retain, nonatomic) NSMutableArray *mediaBadgeImageListArray;
@property (readonly, nonatomic) unsigned long long mediaBadgeImageListArray_Count;
@property (nonatomic) int adversaryUserStatus;
@property (retain, nonatomic) HTSLiveUserVIPInfo *userVipInfo;
@property (nonatomic) BOOL hasUserVipInfo;
@property (retain, nonatomic) GPBInt64Array *commerceWebcastConfigIdsArray;
@property (readonly, nonatomic) unsigned long long commerceWebcastConfigIdsArray_Count;
@property (retain, nonatomic) NSMutableArray *badgeImageListV2Array;
@property (readonly, nonatomic) unsigned long long badgeImageListV2Array_Count;
@property (retain, nonatomic) HTSLiveIndustryCertification *industryCertification;
@property (nonatomic) BOOL hasIndustryCertification;
@property (copy, nonatomic) NSString *locationCity;
@property (retain, nonatomic) HTSLiveUser_FansGroupInfo *fansGroupInfo;
@property (nonatomic) BOOL hasFansGroupInfo;
@property (copy, nonatomic) NSString *remarkName;
@property (nonatomic) int mysteryMan;
@property (copy, nonatomic) NSString *webRid;
@property (copy, nonatomic) NSString *desensitizedNickname;
@property (retain, nonatomic) HTSLiveUser_JAccreditInfo *jAccreditInfo;
@property (nonatomic) BOOL hasJAccreditInfo;
@property (retain, nonatomic) HTSLiveUser_Subscribe *subscribe;
@property (nonatomic) BOOL hasSubscribe;
@property (nonatomic) BOOL isAnonymous;
@property (nonatomic) int consumeDiamondLevel;
@property (copy, nonatomic) NSString *webcastUid;
@property (retain, nonatomic) HTSLiveUser_ProfileStyleParams *profileStyleParams;
@property (nonatomic) BOOL hasProfileStyleParams;
@property (retain, nonatomic) HTSLiveUser_UserDressInfo *userDressInfo;
@property (nonatomic) BOOL hasUserDressInfo;
@property (retain, nonatomic) HTSLiveUser_BizRelation *bizRelation;
@property (nonatomic) BOOL hasBizRelation;
@property (retain, nonatomic) HTSLiveMemberEntranceInfo *memberEntranceInfo;
@property (nonatomic) BOOL hasMemberEntranceInfo;
@property (retain, nonatomic) HTSLiveUser_PublicAreaBadgeInfo *publicAreaBadgeInfo;
@property (nonatomic) BOOL hasPublicAreaBadgeInfo;
@property (retain, nonatomic) HTSLiveUser_ExtraInfo *extraInfo;
@property (nonatomic) BOOL hasExtraInfo;
@property (retain, nonatomic) HTSLiveUser_UserSettingInfo *userSettingInfo;
@property (nonatomic) BOOL hasUserSettingInfo;
@property (nonatomic) long long publicAreaOperFreq;
@property (nonatomic) BOOL allowBeLocated;
@property (nonatomic) BOOL allowFindByContacts;
@property (nonatomic) BOOL allowOthersDownloadVideo;
@property (nonatomic) BOOL allowOthersDownloadWhenSharingVideo;
@property (nonatomic) BOOL allowShareShowProfile;
@property (nonatomic) BOOL allowShowInGossip;
@property (nonatomic) BOOL allowShowMyAction;
@property (nonatomic) BOOL allowStrangeComment;
@property (nonatomic) BOOL allowUnfollowerComment;
@property (nonatomic) BOOL allowUseLinkmic;
@property (retain, nonatomic) HTSLiveUser_AnchorLevel *anchorLevel;
@property (nonatomic) BOOL hasAnchorLevel;
@property (retain, nonatomic) HTSLiveImage *avatarJpg;
@property (nonatomic) BOOL hasAvatarJpg;
@property (copy, nonatomic) NSString *bgImgURL;
@property (copy, nonatomic) NSString *birthdayDescription;
@property (nonatomic) BOOL birthdayValid;
@property (nonatomic) int blockStatus;
@property (nonatomic) int commentRestrict;
@property (copy, nonatomic) NSString *constellation;
@property (nonatomic) int disableIchat;
@property (nonatomic) long long enableIchatImg;
@property (nonatomic) int exp;
@property (nonatomic) long long fanTicketCount;
@property (nonatomic) BOOL foldStrangerChat;
@property (nonatomic) long long followStatus;
@property (nonatomic) BOOL hotsoonVerified;
@property (copy, nonatomic) NSString *hotsoonVerifiedReason;
@property (nonatomic) int ichatRestrictType;
@property (copy, nonatomic) NSString *idStr;
@property (nonatomic) BOOL isFollower;
@property (nonatomic) BOOL isFollowing;
@property (nonatomic) BOOL needProfileGuide;
@property (nonatomic) long long payScores;
@property (nonatomic) BOOL pushCommentStatus;
@property (nonatomic) BOOL pushDigg;
@property (nonatomic) BOOL pushFollow;
@property (nonatomic) BOOL pushFriendAction;
@property (nonatomic) BOOL pushIchat;
@property (nonatomic) BOOL pushStatus;
@property (nonatomic) BOOL pushVideoPost;
@property (nonatomic) BOOL pushVideoRecommend;
@property (retain, nonatomic) HTSLiveUser_UserStats *stats;
@property (nonatomic) BOOL hasStats;
@property (nonatomic) BOOL verifiedMobile;
@property (copy, nonatomic) NSString *verifiedReason;
@property (nonatomic) BOOL withCarManagementPermission;
@property (nonatomic) int ageRange;
@property (nonatomic) long long watchDurationMonth;

+ (id)getDisplayNameWithNickName:(id)arg0 desensitizedNickName:(id)arg1 displayID:(id)arg2 userID:(id)arg3 underUISetting:(BOOL)arg4;
+ (id)getDisplayNameWithNickName:(id)arg0 displayID:(id)arg1 userID:(id)arg2 underUISetting:(BOOL)arg3;
+ (id)getDisplayNameWithNickName:(id)arg0 displayID:(id)arg1 userID:(id)arg2 onlyUnderUIAspectSetting:(BOOL)arg3;
+ (id)getDisplayNameWithNickName:(id)arg0 remarkName:(id)arg1 displayID:(id)arg2 userID:(id)arg3 underUISetting:(BOOL)arg4;
+ (id)getDisplayNameWithNickName:(id)arg0 remarkName:(id)arg1 displayID:(id)arg2 userID:(id)arg3 onlyUnderUIAspectSetting:(BOOL)arg4;
+ (id)showName:(id)arg0 remarkName:(id)arg1 remarknameDisabled:(BOOL)arg2;
+ (id)finalDisplayText:(id)arg0 setting:(BOOL)arg1 isAtUser:(BOOL)arg2 withUserID:(id)arg3;
+ (id)getMosaicTextWithText:(id)arg0;
+ (void)load;
+ (void)install;
+ (void)load;
+ (id)transImage:(id)arg0;
+ (id)live_liveUserFromAwemUser:(id)arg0;
+ (id)descriptor;

- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)badgeImageListArray;
- (void)mergeFrom:(id)arg0;
- (id)valueForUndefinedKey:(id)arg0;
- (void)setValue:(id)arg0 forUndefinedKey:(id)arg1;
- (BOOL)hasBeenInvited;
- (void)setHasBeenInvited:(BOOL)arg0;
- (BOOL)hasBeenInvited;
- (void)setHasBeenInvited:(BOOL)arg0;
- (BOOL)hasBeenTrackedApply;
- (BOOL)hasBeenTrackedPreApply;
- (BOOL)hasBeenTrackedInviteeAudience;
- (BOOL)hasBeenTrackedInviteeFriends;
- (void)setHasBeenTrackedApply:(BOOL)arg0;
- (void)setHasBeenTrackedPreApply:(BOOL)arg0;
- (void)setHasBeenTrackedInviteeAudience:(BOOL)arg0;
- (void)setHasBeenTrackedInviteeFriends:(BOOL)arg0;
- (int)userPosition;
- (void)setUserPosition:(int)arg0;
- (void)setClientVersion:(long long)arg0;
- (void)setAppId:(long long)arg0;
- (long long)clientVersion;
- (long long)appId;
- (id)devicePlatform;
- (void)setDevicePlatform:(id)arg0;
- (id)getAtUserDisplayTextUnderUISetting:(BOOL)arg0;
- (id)getDisplayText;
- (id)getRealtimeLocationCity;
- (BOOL)isSameWithUser:(id)arg0;
- (void)updateFailedFollowStatusWithLocalDBCompletion:(id /* block */)arg0;
- (id)getDisplayTextUnderUISetting:(BOOL)arg0;
- (id)getDisplayTextOnlyUnderUIAsepctSetting:(BOOL)arg0 checkSensitive:(BOOL)arg1;
- (id)getDisplayTextOnlyUnderUIAsepctSetting:(BOOL)arg0;
- (id)getUserNicknameByReplaceByDot;
- (id)getMosaicNickname;
- (id)getDisplayTextUnderUISettingWithRemarknameDisabled:(BOOL)arg0;
- (id)getDisplayTextWithRemarkname:(BOOL)arg0 underSetting:(BOOL)arg1;
- (id)getDisplayTextUnderUISettingWithRemarkname;
- (BOOL)isRisky;
- (void)setIsRisky:(BOOL)arg0;
- (id)riskyNickName;
- (id)riskyAvatarUrl;
- (void)setRiskyNickName:(id)arg0;
- (void)setRiskyAvatarUrl:(id)arg0;
- (BOOL)hasTracked;
- (void)setHasTracked:(BOOL)arg0;
- (BOOL)hasInvited;
- (void)setHasInvited:(BOOL)arg0;
- (id)recipientIdentifierValue;
- (void)setRecipientIdentifierValue:(id)arg0;
- (id)currentRoomID;
- (BOOL)isContentAuthorizedToThisClient;
- (BOOL)isContentAuthorizedToOppositeClient;
- (BOOL)isRelationAuthorizedToOppositeClient;
- (void)iesliveuser_mergeFrom:(id)arg0;
- (id)ieslive_badgeImageListArray;
- (id)iesliveuser_copyWithZone:(struct _NSZone { } *)arg0;
- (BOOL)isRelationAuthorizedToThisClient;
- (void)ieslive_user_protect_merge_from:(id)arg0;
- (id)mixUserId;
- (BOOL)isContentAuthorizedToOppositeClient;
- (void)setMixUserId:(id)arg0;
- (id)mixSecUserId;
- (id)logpb;
- (void)setrequestId:(id)arg0;
- (void)setlogpb:(id)arg0;
- (void)trackSetValue:(id)arg0 forUndefinedKey:(id)arg1;
- (id)trackValueForUndefinedKey:(id)arg0;
- (id)requestId;
- (id)secUserID;
- (void)setSecUserID:(id)arg0;
- (id)localCategoryExtraInfo;
- (void)setLocalCategoryExtraInfo:(id)arg0;
- (id)userID;
- (id)avatarUrlList;
- (id)avatarThumbUrlList;
- (id)live_publicScreenBadgeImageList;

@end