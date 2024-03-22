//
//     Generated by private class-dump
//

@class NSString, AWEURLModel;

@interface AWEMixCollectedUserModel : AWEBaseApiModel {
    BOOL _isFromNotice;
    BOOL _privateAccount;
    NSString *_uid;
    NSString *_nickname;
    NSString *_secUid;
    AWEURLModel *_avatarThumb;
    long long _followStatus;
    long long _followerStatus;
    double _collectTimestamp;
    long long _hideHerPostStatus;
}

@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *secUid;
@property (retain, nonatomic) AWEURLModel *avatarThumb;
@property (nonatomic) long long followStatus;
@property (nonatomic) long long followerStatus;
@property (nonatomic) double collectTimestamp;
@property (nonatomic) BOOL isFromNotice;
@property (nonatomic) long long hideHerPostStatus;
@property (nonatomic) BOOL privateAccount;

+ (id)avatarThumbJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (long long)followStatus;
- (id)avatarThumb;
- (id)secUid;
- (void)setFollowStatus:(long long)arg0;
- (long long)hideHerPostStatus;
- (void)setHideHerPostStatus:(long long)arg0;
- (BOOL)privateAccount;
- (void)setAvatarThumb:(id)arg0;
- (long long)followerStatus;
- (void)setSecUid:(id)arg0;
- (void)setFollowerStatus:(long long)arg0;
- (void)setPrivateAccount:(BOOL)arg0;
- (BOOL)isFromNotice;
- (void)setIsFromNotice:(BOOL)arg0;
- (double)collectTimestamp;
- (void)setCollectTimestamp:(double)arg0;
- (void)setUid:(id)arg0;
- (id)uid;
- (id)nickname;
- (void).cxx_destruct;
- (void)setNickname:(id)arg0;

@end