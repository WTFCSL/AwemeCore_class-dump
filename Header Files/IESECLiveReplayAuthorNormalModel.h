//
//     Generated by private class-dump
//

@class NSString, NSNumber, IESECLiveImageURLModel;

@interface IESECLiveReplayAuthorNormalModel : MTLModel <MTLJSONSerializing> {
    long long _followStatus;
    NSString *_nickname;
    NSNumber *_userID;
    NSString *_secUserID;
    IESECLiveImageURLModel *_avatarThumb;
}

@property (nonatomic) long long followStatus;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSNumber *userID;
@property (copy, nonatomic) NSString *secUserID;
@property (copy, nonatomic) IESECLiveImageURLModel *avatarThumb;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)secUserID;
- (void)setSecUserID:(id)arg0;
- (long long)followStatus;
- (id)avatarThumb;
- (void)setFollowStatus:(long long)arg0;
- (void)setAvatarThumb:(id)arg0;
- (id)userID;
- (id)nickname;
- (void).cxx_destruct;
- (void)setUserID:(id)arg0;
- (void)setNickname:(id)arg0;

@end