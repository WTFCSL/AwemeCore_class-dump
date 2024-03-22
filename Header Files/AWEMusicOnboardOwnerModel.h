//
//     Generated by private class-dump
//

@class NSString, AWEURLModel;

@interface AWEMusicOnboardOwnerModel : AWEBaseApiModel {
    BOOL _isVerified;
    NSString *_uid;
    NSString *_secUid;
    NSString *_nickname;
    NSString *_handle;
    AWEURLModel *_avatarURL;
    long long _type;
}

@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *handle;
@property (retain, nonatomic) AWEURLModel *avatarURL;
@property (nonatomic) BOOL isVerified;
@property (nonatomic) long long type;

+ (id)avatarURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)secUid;
- (id)avatarURL;
- (void)setAvatarURL:(id)arg0;
- (void)setSecUid:(id)arg0;
- (void)setUid:(id)arg0;
- (id)uid;
- (id)nickname;
- (void).cxx_destruct;
- (long long)type;
- (void)setNickname:(id)arg0;
- (void)setHandle:(id)arg0;
- (void)setType:(long long)arg0;
- (id)handle;
- (BOOL)isVerified;
- (void)setIsVerified:(BOOL)arg0;

@end
