//
//     Generated by private class-dump
//

@class NSString, AWEURLModel;

@interface AWERelationReasonUserLite : AWEBaseApiModel <AWEUserNameProtocol> {
    BOOL _enableEditAlias;
    NSString *_userID;
    NSString *_nickname;
    AWEURLModel *_avatarLarger;
    AWEURLModel *_avatarThumb;
    AWEURLModel *_avatarMedium;
    NSString *_mobileKey;
    long long _followStatus;
    long long _followerStatus;
    NSString *_relationDescText;
    NSString *_secUserID;
    NSString *_signature;
    NSString *_remarkName;
    NSString *_alias;
}

@property (retain, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *nickname;
@property (retain, nonatomic) AWEURLModel *avatarLarger;
@property (retain, nonatomic) AWEURLModel *avatarThumb;
@property (retain, nonatomic) AWEURLModel *avatarMedium;
@property (copy, nonatomic) NSString *mobileKey;
@property (nonatomic) long long followStatus;
@property (nonatomic) long long followerStatus;
@property (copy, nonatomic) NSString *relationDescText;
@property (copy, nonatomic) NSString *secUserID;
@property (copy, nonatomic) NSString *signature;
@property (retain, nonatomic) NSString *remarkName;
@property (nonatomic) BOOL enableEditAlias;
@property (copy, nonatomic) NSString *alias;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)avatarThumbJSONTransformer;
+ (id)avatarMediumJSONTransformer;
+ (id)followStatusJSONTransformer;
+ (id)avatarLargerJSONTransformer;
+ (id)followerStatusJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)secUserID;
- (void)setSecUserID:(id)arg0;
- (long long)followStatus;
- (id)avatarThumb;
- (id)avatarMedium;
- (id)remarkName;
- (void)setFollowStatus:(long long)arg0;
- (id)userNameWithScene:(id)arg0;
- (void)setAvatarThumb:(id)arg0;
- (long long)followerStatus;
- (id)aliasWithScene:(id)arg0;
- (void)setFollowerStatus:(long long)arg0;
- (void)setAvatarMedium:(id)arg0;
- (void)setEnableEditAlias:(BOOL)arg0;
- (id)mobileKey;
- (void)setMobileKey:(id)arg0;
- (BOOL)enableEditAlias;
- (id)avatarLarger;
- (void)setRemarkName:(id)arg0;
- (void)setAvatarLarger:(id)arg0;
- (id)relationDescText;
- (void)setRelationDescText:(id)arg0;
- (void)setSignature:(id)arg0;
- (id)alias;
- (id)userID;
- (id)signature;
- (id)nickname;
- (void).cxx_destruct;
- (void)setUserID:(id)arg0;
- (void)setNickname:(id)arg0;
- (void)setAlias:(id)arg0;

@end