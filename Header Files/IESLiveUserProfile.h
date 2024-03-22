//
//     Generated by private class-dump
//

@class IESLiveHonorWallV2, NSMutableArray, IESLiveHonorWallUi, IESLiveBroadcastConfig, IESLiveUserProfileExtra, IESLiveProfileBasicArea, IESLiveProfileUpperArea, IESLiveContributor, IESLiveSubscribeInfo, HTSLiveIndustryCertificationProfile, IESLiveActionInfo, OwnRoom, IESLiveProfileOpenArea, IESLiveLiveAnchorRankHonor, IESLiveAdminInfo, IESLiveDressSuitInfo, IESLivePotentialCustomerInfo, IESLiveGiftExhibitionHomeStats, IESLiveProfileSetting, IESLiveActivityBadges, NSNumber, IESLiveShopInfo, IESLiveEcomInfo, HTSLiveImage, FansClub, IESLiveWhiteCategoryCert, IESLiveFollowInfo, IESLiveJAccreditInfo, IESLiveConsumerCentreInfo, IESLiveGroupInfo, IESLiveGiftExhibitionBanner, HTSLiveUser_FansGroupInfo, IESLiveProfileSkin, HTSLiveIndustryCertification, IESLiveAuthenticationInfo, IESLiveHighScoreSongInfo, NSString, IESLiveDressVisitorInfo, IESLiveAccountStats, IESLiveDslTemplate, IESLiveBaseInfo, IESLiveProfileStyleParams, HTSLiveUser_AuthenticationInfo, IESLiveShopEntrance, IESLiveActionConfigs;

@interface IESLiveUserProfile : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveUserProfileExtra *extraInfo;
@property (readonly, nonatomic) NSNumber *currentRoomID;
@property (retain, nonatomic) IESLiveBaseInfo *baseInfo;
@property (nonatomic) BOOL hasBaseInfo;
@property (retain, nonatomic) IESLiveFollowInfo *followInfo;
@property (nonatomic) BOOL hasFollowInfo;
@property (retain, nonatomic) IESLiveAccountStats *accountStats;
@property (nonatomic) BOOL hasAccountStats;
@property (retain, nonatomic) FansClub *fansClub;
@property (nonatomic) BOOL hasFansClub;
@property (retain, nonatomic) OwnRoom *ownRoom;
@property (nonatomic) BOOL hasOwnRoom;
@property (retain, nonatomic) NSMutableArray *actionConfigArray;
@property (readonly, nonatomic) unsigned long long actionConfigArray_Count;
@property (retain, nonatomic) IESLiveBroadcastConfig *broadcastConfig;
@property (nonatomic) BOOL hasBroadcastConfig;
@property (retain, nonatomic) HTSLiveImage *grade;
@property (nonatomic) BOOL hasGrade;
@property (retain, nonatomic) IESLiveAdminInfo *adminInfo;
@property (nonatomic) BOOL hasAdminInfo;
@property (retain, nonatomic) IESLiveContributor *contributor;
@property (nonatomic) BOOL hasContributor;
@property (retain, nonatomic) IESLiveActivityBadges *activityBadges;
@property (nonatomic) BOOL hasActivityBadges;
@property (retain, nonatomic) IESLiveProfileSkin *profileSkin;
@property (nonatomic) BOOL hasProfileSkin;
@property (retain, nonatomic) IESLiveAuthenticationInfo *authInfo;
@property (nonatomic) BOOL hasAuthInfo;
@property (nonatomic) BOOL isMuted;
@property (nonatomic) int authorizationInfo;
@property (nonatomic) int adversaryAuthorizationInfo;
@property (retain, nonatomic) HTSLiveIndustryCertification *industryCertification;
@property (nonatomic) BOOL hasIndustryCertification;
@property (retain, nonatomic) HTSLiveUser_FansGroupInfo *fansGroupInfo;
@property (nonatomic) BOOL hasFansGroupInfo;
@property (retain, nonatomic) HTSLiveUser_AuthenticationInfo *authenticationInfo;
@property (nonatomic) BOOL hasAuthenticationInfo;
@property (retain, nonatomic) IESLiveGiftExhibitionHomeStats *giftExhibitionHomeStats;
@property (nonatomic) BOOL hasGiftExhibitionHomeStats;
@property (retain, nonatomic) IESLiveHonorWallUi *honorWallUi;
@property (nonatomic) BOOL hasHonorWallUi;
@property (retain, nonatomic) IESLiveActionConfigs *actionConfigs;
@property (nonatomic) BOOL hasActionConfigs;
@property (retain, nonatomic) IESLiveShopInfo *shopInfo;
@property (nonatomic) BOOL hasShopInfo;
@property (retain, nonatomic) IESLiveShopEntrance *shopEntrance;
@property (nonatomic) BOOL hasShopEntrance;
@property (retain, nonatomic) IESLiveActionInfo *actionInfo;
@property (nonatomic) BOOL hasActionInfo;
@property (retain, nonatomic) IESLiveSubscribeInfo *subscribeInfo;
@property (nonatomic) BOOL hasSubscribeInfo;
@property (retain, nonatomic) IESLiveJAccreditInfo *jAccreditInfo;
@property (nonatomic) BOOL hasJAccreditInfo;
@property (retain, nonatomic) IESLiveEcomInfo *ecomInfo;
@property (nonatomic) BOOL hasEcomInfo;
@property (retain, nonatomic) IESLiveProfileSetting *profileSetting;
@property (nonatomic) BOOL hasProfileSetting;
@property (retain, nonatomic) IESLiveProfileStyleParams *profileStyleParams;
@property (nonatomic) BOOL hasProfileStyleParams;
@property (retain, nonatomic) HTSLiveIndustryCertificationProfile *industryCertificationProfile;
@property (nonatomic) BOOL hasIndustryCertificationProfile;
@property (retain, nonatomic) IESLiveConsumerCentreInfo *consumerCentreInfo;
@property (nonatomic) BOOL hasConsumerCentreInfo;
@property (retain, nonatomic) IESLiveDressSuitInfo *dressSuitInfo;
@property (nonatomic) BOOL hasDressSuitInfo;
@property (retain, nonatomic) IESLiveLiveAnchorRankHonor *liveAnchorRankHonor;
@property (nonatomic) BOOL hasLiveAnchorRankHonor;
@property (retain, nonatomic) IESLiveWhiteCategoryCert *whiteCategoryCert;
@property (nonatomic) BOOL hasWhiteCategoryCert;
@property (retain, nonatomic) NSMutableArray *profileTagContentArray;
@property (readonly, nonatomic) unsigned long long profileTagContentArray_Count;
@property (retain, nonatomic) IESLiveGroupInfo *groupInfo;
@property (nonatomic) BOOL hasGroupInfo;
@property (nonatomic) long long profileTagSwitch;
@property (retain, nonatomic) FansClub *shopFansClub;
@property (nonatomic) BOOL hasShopFansClub;
@property (retain, nonatomic) IESLiveHighScoreSongInfo *highScoreSongInfo;
@property (nonatomic) BOOL hasHighScoreSongInfo;
@property (copy, nonatomic) NSString *anchorAudienceRelationInfo;
@property (retain, nonatomic) IESLiveHonorWallV2 *honorWallV2;
@property (nonatomic) BOOL hasHonorWallV2;
@property (retain, nonatomic) IESLiveDressVisitorInfo *dressVisitorInfo;
@property (nonatomic) BOOL hasDressVisitorInfo;
@property (retain, nonatomic) IESLivePotentialCustomerInfo *potentialCustomerInfo;
@property (nonatomic) BOOL hasPotentialCustomerInfo;
@property (retain, nonatomic) IESLiveGiftExhibitionBanner *giftExhibitionBanner;
@property (nonatomic) BOOL hasGiftExhibitionBanner;
@property (retain, nonatomic) IESLiveDslTemplate *ecomCardDsl;
@property (nonatomic) BOOL hasEcomCardDsl;
@property (retain, nonatomic) IESLiveProfileBasicArea *basicArea;
@property (nonatomic) BOOL hasBasicArea;
@property (retain, nonatomic) IESLiveProfileOpenArea *openArea;
@property (nonatomic) BOOL hasOpenArea;
@property (retain, nonatomic) IESLiveProfileUpperArea *upperArea;
@property (nonatomic) BOOL hasUpperArea;

+ (id)descriptor;

- (void)setExtraInfo:(id)arg0;
- (id)currentRoomID;
- (void)updateFailedFollowStatusWithLocalDBCompletion:(id /* block */)arg0;
- (id)extraInfo;

@end
