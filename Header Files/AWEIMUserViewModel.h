//
//     Generated by private class-dump
//

@class AWEIMUser, NSString, NSURL, NSNumber;

@interface AWEIMUserViewModel : NSObject <AWEIMImageProtocol> {
    BOOL _isToCommerceUser;
    NSString *_displayName;
    NSString *_uid;
    NSString *_nickname;
    NSString *_alias;
    NSURL *_avatarURL;
    NSURL *_avatarURLSmall;
    long long _followStatus;
    long long _followerStatus;
    NSString *_signature;
    long long _latestChatTimestamp;
    NSString *_requestID;
    NSString *_customID;
    NSString *_customVerifyInfo;
    unsigned long long _verificationType;
    NSString *_enterpriseVerifyInfo;
    NSString *_shortID;
    NSNumber *_commerceUserLevel;
    NSString *_aliasPinYin;
    NSString *_nicknamePinYin;
    NSString *_secUserID;
    NSString *_recommendReason;
    NSString *_contactName;
    NSString *_contactNamePinYin;
    NSString *_displayNameForKVO;
    AWEIMUser *_user;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *uid;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSString *alias;
@property (retain, nonatomic) NSURL *avatarURL;
@property (retain, nonatomic) NSURL *avatarURLSmall;
@property (nonatomic) long long followStatus;
@property (nonatomic) long long followerStatus;
@property (retain, nonatomic) NSString *signature;
@property (retain, nonatomic) NSString *requestID;
@property (retain, nonatomic) NSString *customID;
@property (retain, nonatomic) NSString *customVerifyInfo;
@property (nonatomic) unsigned long long verificationType;
@property (retain, nonatomic) NSString *enterpriseVerifyInfo;
@property (retain, nonatomic) NSString *shortID;
@property (retain, nonatomic) NSNumber *commerceUserLevel;
@property (nonatomic) BOOL isToCommerceUser;
@property (retain, nonatomic) NSString *aliasPinYin;
@property (retain, nonatomic) NSString *nicknamePinYin;
@property (retain, nonatomic) NSString *secUserID;
@property (retain, nonatomic) NSString *recommendReason;
@property (retain, nonatomic) NSString *contactName;
@property (retain, nonatomic) NSString *contactNamePinYin;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *displayNameForKVO;
@property (retain) AWEIMUser *user;
@property (readonly, nonatomic) long long latestChatTimestamp;

- (id)keyForPlaceholder;
- (id)secUserID;
- (void)setSecUserID:(id)arg0;
- (long long)followStatus;
- (id)avatarURL;
- (void)setAvatarURL:(id)arg0;
- (void)setFollowStatus:(long long)arg0;
- (BOOL)isCompanyProfile;
- (long long)followerStatus;
- (id)verifiedIconName;
- (id)avatarURLSmall;
- (id)customID;
- (id)shortID;
- (id)recommendReason;
- (void)setRecommendReason:(id)arg0;
- (void)setShortID:(id)arg0;
- (void)setFollowerStatus:(long long)arg0;
- (id)customVerifyInfo;
- (id)enterpriseVerifyInfo;
- (id)fakeUserID;
- (BOOL)isVerifiedEnterprise;
- (BOOL)isVerifiedUser;
- (BOOL)isVerifiedMusician;
- (void)setCustomVerifyInfo:(id)arg0;
- (id)commerceUserLevel;
- (void)setEnterpriseVerifyInfo:(id)arg0;
- (id)initWithUserID:(id)arg0 secUserID:(id)arg1;
- (BOOL)isPersonalVerifiedEffectArtist;
- (long long)latestChatTimestamp;
- (void)setCustomID:(id)arg0;
- (void)setCommerceUserLevel:(id)arg0;
- (BOOL)isToCommerceUser;
- (void)setAvatarURLSmall:(id)arg0;
- (void)setIsToCommerceUser:(BOOL)arg0;
- (void)clearUserDisplayInfo;
- (BOOL)isCommerceProfile;
- (void)setDisplayNameForKVO:(id)arg0;
- (void)p_updateDisplayName;
- (id)aliasPinYin;
- (void)setAliasPinYin:(id)arg0;
- (id)nicknamePinYin;
- (void)setNicknamePinYin:(id)arg0;
- (id)contactNamePinYin;
- (void)setContactNamePinYin:(id)arg0;
- (id)displayNameForKVO;
- (void)setUser:(id)arg0;
- (void)setSignature:(id)arg0;
- (id)alias;
- (void)setUid:(id)arg0;
- (id)signature;
- (id)uid;
- (id)nickname;
- (id)contactName;
- (id)user;
- (void)setRequestID:(id)arg0;
- (id)requestID;
- (void).cxx_destruct;
- (void)setNickname:(id)arg0;
- (void)setDisplayName:(id)arg0;
- (id)displayName;
- (void)setAlias:(id)arg0;
- (unsigned long long)verificationType;
- (void)setVerificationType:(unsigned long long)arg0;
- (void)setContactName:(id)arg0;

@end