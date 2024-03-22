//
//     Generated by private class-dump
//

@class NSString, NSArray, NSURL, AWEUserCommercePermissionModel, AWEURLModel, NSDictionary, AWERecommendTemplateModel, NSNumber, AFDRecommendReasonDataModel;
@protocol AWEIMPinYinSearchProtocol;

@protocol AWEIMUserMemoryPropertyProtocol <NSObject>

@property (nonatomic) BOOL isTop;
@property (copy, nonatomic) NSURL *avatarURL;
@property (copy, nonatomic) NSURL *avatarURLSmall;
@property (copy, nonatomic) NSURL *loadedAvatarURL;
@property (copy, nonatomic) NSArray *avatarURLList;
@property (copy, nonatomic) NSArray *mediumAvatarURLList;
@property (readonly, nonatomic) unsigned long long showGenderStrategy;
@property (copy, nonatomic) NSString *groupAlias;
@property (copy, nonatomic) NSString *requestID;
@property (retain, nonatomic) NSNumber *isToCommerceUser;
@property (copy, nonatomic) NSString *recommendReason;
@property (copy, nonatomic) NSString *recommendReasonRelation;
@property (retain, nonatomic) NSNumber *isBlocked;
@property (nonatomic) long long dataFrom;
@property (readonly, nonatomic) BOOL privateAccount;
@property (nonatomic) long long age;
@property (copy, nonatomic) NSString *location;
@property (retain, nonatomic) NSNumber *hideLocation;
@property (readonly, copy, nonatomic) NSString *schoolName;
@property (readonly, nonatomic) NSNumber *schoolVisibleType;
@property (copy, nonatomic) NSDictionary *logPassback;
@property (readonly, nonatomic) NSNumber *favoritedCount;
@property (retain, nonatomic) NSNumber *displayedFollowerCount;
@property (readonly, nonatomic) NSNumber *followingCount;
@property (readonly, copy, nonatomic) NSString *verificationDescription;
@property (readonly, copy, nonatomic) NSString *verifiedIconName;
@property (nonatomic) long long hideMyPostStatus;
@property (retain, nonatomic) NSNumber *canShowGroupCard;
@property (retain, nonatomic) NSNumber *blockedStatus;
@property (retain, nonatomic) AWEUserCommercePermissionModel *commercePermission;
@property (copy, nonatomic) NSString *enterpriseUserInfo;
@property (retain, nonatomic) NSNumber *enableWish;
@property (retain, nonatomic) AWEURLModel *avatarLarger;
@property (copy, nonatomic) NSString *pigeonStatusStr;
@property (retain, nonatomic) AWERecommendTemplateModel *recommendTemplate;
@property (retain, nonatomic) AFDRecommendReasonDataModel *recommendReasonDataModel;
@property (retain, nonatomic) NSNumber *didImRealNameRebound;
@property (retain, nonatomic) AWEURLModel *avatarMedium;
@property (copy, nonatomic) NSString *pigeonDarenCustomerServiceWarning;
@property (copy, nonatomic) NSNumber *imPrimaryRoleID;
@property (nonatomic) BOOL commerceCustomActionBarEnabled;
@property (readonly, nonatomic) id<AWEIMPinYinSearchProtocol> aliasPinYinSearchObj;
@property (readonly, nonatomic) id<AWEIMPinYinSearchProtocol> nicknamePinYinSearchObj;
@property (readonly, nonatomic) id<AWEIMPinYinSearchProtocol> contactNamePinYinSearchObj;
@property (readonly, nonatomic) id<AWEIMPinYinSearchProtocol> groupAliasPinYinSearchObj;
@property (retain, nonatomic) NSNumber *hasVirtualAvatar;
@property (retain, nonatomic) NSNumber *taIsFriendSwitchStatus;
@property (copy, nonatomic) NSString *labelSting;
@property (nonatomic) long long followStatusErrorCode;
@property (copy, nonatomic) NSArray *userTagInfo;
@property (copy, nonatomic) NSArray *roleIDs;
@property (nonatomic) BOOL isRedPhoneNumber;
@property (copy, nonatomic) NSString *phoneNumber;

- (id)avatarMedium;
- (id)logPassback;
- (void)setLogPassback:(id)arg0;
- (id)avatarURL;
- (void)setAvatarURL:(id)arg0;
- (BOOL)privateAccount;
- (id)enterpriseUserInfo;
- (void)setAvatarURLList:(id)arg0;
- (id)followingCount;
- (id)verifiedIconName;
- (id)displayedFollowerCount;
- (id)taIsFriendSwitchStatus;
- (void)setTaIsFriendSwitchStatus:(id)arg0;
- (id)avatarURLSmall;
- (id)blockedStatus;
- (id)recommendReason;
- (void)setRecommendReason:(id)arg0;
- (id)recommendTemplate;
- (void)setRecommendTemplate:(id)arg0;
- (void)setAvatarMedium:(id)arg0;
- (BOOL)isRedPhoneNumber;
- (void)setIsRedPhoneNumber:(BOOL)arg0;
- (id)aliasPinYinSearchObj;
- (id)nicknamePinYinSearchObj;
- (id)contactNamePinYinSearchObj;
- (void)setIsTop:(BOOL)arg0;
- (id)favoritedCount;
- (id)canShowGroupCard;
- (long long)hideMyPostStatus;
- (void)setHideMyPostStatus:(long long)arg0;
- (id)verificationDescription;
- (void)setBlockedStatus:(id)arg0;
- (id)avatarURLList;
- (id)recommendReasonRelation;
- (id)recommendReasonDataModel;
- (id)avatarLarger;
- (id)commercePermission;
- (id)hideLocation;
- (unsigned long long)showGenderStrategy;
- (id)hasVirtualAvatar;
- (void)setHasVirtualAvatar:(id)arg0;
- (void)setRecommendReasonDataModel:(id)arg0;
- (id)schoolVisibleType;
- (void)setHideLocation:(id)arg0;
- (id)mediumAvatarURLList;
- (void)setDisplayedFollowerCount:(id)arg0;
- (id)roleIDs;
- (void)setRoleIDs:(id)arg0;
- (id)enableWish;
- (id)pigeonStatusStr;
- (id)didImRealNameRebound;
- (id)pigeonDarenCustomerServiceWarning;
- (long long)dataFrom;
- (id)isToCommerceUser;
- (void)setCanShowGroupCard:(id)arg0;
- (void)setCommercePermission:(id)arg0;
- (void)setEnterpriseUserInfo:(id)arg0;
- (void)setEnableWish:(id)arg0;
- (void)setPigeonStatusStr:(id)arg0;
- (void)setRecommendReasonRelation:(id)arg0;
- (void)setDidImRealNameRebound:(id)arg0;
- (void)setPigeonDarenCustomerServiceWarning:(id)arg0;
- (void)setDataFrom:(long long)arg0;
- (id)groupAlias;
- (void)setAvatarURLSmall:(id)arg0;
- (id)loadedAvatarURL;
- (void)setLoadedAvatarURL:(id)arg0;
- (void)setMediumAvatarURLList:(id)arg0;
- (void)setGroupAlias:(id)arg0;
- (void)setIsToCommerceUser:(id)arg0;
- (void)setAvatarLarger:(id)arg0;
- (id)imPrimaryRoleID;
- (void)setImPrimaryRoleID:(id)arg0;
- (BOOL)commerceCustomActionBarEnabled;
- (void)setCommerceCustomActionBarEnabled:(BOOL)arg0;
- (id)groupAliasPinYinSearchObj;
- (id)labelSting;
- (void)setLabelSting:(id)arg0;
- (long long)followStatusErrorCode;
- (void)setFollowStatusErrorCode:(long long)arg0;
- (id)userTagInfo;
- (void)setUserTagInfo:(id)arg0;
- (id)isBlocked;
- (void)setRequestID:(id)arg0;
- (id)requestID;
- (long long)age;
- (id)phoneNumber;
- (void)setPhoneNumber:(id)arg0;
- (id)location;
- (void)setAge:(long long)arg0;
- (void)setLocation:(id)arg0;
- (void)setIsBlocked:(id)arg0;
- (BOOL)isTop;
- (id)schoolName;

@end