//
//     Generated by private class-dump
//

@class NSString, NSNumber, NSArray;

@interface AWEIMDouyinRedPacketUserInfo : AWEBaseApiModel {
    NSString *_secUid;
    NSString *_nickname;
    NSString *_avatar;
    NSNumber *_fansStatus;
    NSString *_uid;
    NSArray *_multiAvatarUrlList;
}

@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *avatar;
@property (retain, nonatomic) NSNumber *fansStatus;
@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSArray *multiAvatarUrlList;

+ (id)JSONKeyPathsByPropertyKey;

- (id)secUid;
- (void)setSecUid:(id)arg0;
- (id)fansStatus;
- (id)multiAvatarUrlList;
- (void)setFansStatus:(id)arg0;
- (void)setMultiAvatarUrlList:(id)arg0;
- (void)setUid:(id)arg0;
- (id)uid;
- (id)nickname;
- (void).cxx_destruct;
- (void)setNickname:(id)arg0;
- (id)avatar;
- (void)setAvatar:(id)arg0;

@end
