//
//     Generated by private class-dump
//

@class AWEURLModel, NSString, AWECoCreatorLiveModel, AWECoCreatorExternModel;

@interface AWECoCreatorModel : MTLModel <MTLJSONSerializing> {
    NSString *_userId;
    NSString *_secUid;
    NSString *_nickName;
    NSString *_roleTitle;
    long long _roleId;
    long long _index;
    unsigned long long _inviteStatus;
    long long _followStatus;
    long long _followerStatus;
    AWEURLModel *_avatar;
    NSString *_customVerify;
    NSString *_enterpriseVerifyReason;
    long long _followerCount;
    AWECoCreatorExternModel *_externModel;
    AWECoCreatorLiveModel *_liveModel;
}

@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *roleTitle;
@property (nonatomic) long long roleId;
@property (nonatomic) long long index;
@property (nonatomic) unsigned long long inviteStatus;
@property (nonatomic) long long followStatus;
@property (nonatomic) long long followerStatus;
@property (retain, nonatomic) AWEURLModel *avatar;
@property (copy, nonatomic) NSString *customVerify;
@property (copy, nonatomic) NSString *enterpriseVerifyReason;
@property (nonatomic) long long followerCount;
@property (retain, nonatomic) AWECoCreatorExternModel *externModel;
@property (retain, nonatomic) AWECoCreatorLiveModel *liveModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)avatarJSONTransformer;
+ (id)liveModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (long long)followStatus;
- (id)secUid;
- (void)setFollowStatus:(long long)arg0;
- (void)setFollowerCount:(long long)arg0;
- (long long)followerStatus;
- (long long)followerCount;
- (void)setSecUid:(id)arg0;
- (void)setFollowerStatus:(long long)arg0;
- (id)customVerify;
- (void)setCustomVerify:(id)arg0;
- (id)enterpriseVerifyReason;
- (void)setEnterpriseVerifyReason:(id)arg0;
- (id)externModel;
- (void)setExternModel:(id)arg0;
- (id)liveModel;
- (void)setLiveModel:(id)arg0;
- (void)setIndex:(long long)arg0;
- (void)setNickName:(id)arg0;
- (void).cxx_destruct;
- (id)userId;
- (long long)index;
- (id)nickName;
- (void)setUserId:(id)arg0;
- (id)avatar;
- (void)setAvatar:(id)arg0;
- (unsigned long long)inviteStatus;
- (long long)roleId;
- (void)setRoleId:(long long)arg0;
- (void)setInviteStatus:(unsigned long long)arg0;
- (id)roleTitle;
- (void)setRoleTitle:(id)arg0;

@end