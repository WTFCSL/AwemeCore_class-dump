//
//     Generated by private class-dump
//

@class NSString, AWENewURLModel;

@interface AWEMusicNewArtistModel : AWEBaseDataModel {
    BOOL _isVerified;
    NSString *_uid;
    NSString *_secUid;
    NSString *_nickname;
    NSString *_handle;
    AWENewURLModel *_avatarURL;
    long long _type;
    NSString *_artistName;
}

@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *handle;
@property (retain, nonatomic) AWENewURLModel *avatarURL;
@property (nonatomic) BOOL isVerified;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *artistName;

+ (id)JSONKeyPathsByPropertyKey;

- (id)secUid;
- (id)avatarURL;
- (void)setAvatarURL:(id)arg0;
- (void)setSecUid:(id)arg0;
- (void)setUid:(id)arg0;
- (id)uid;
- (id)nickname;
- (id)artistName;
- (void).cxx_destruct;
- (long long)type;
- (void)setNickname:(id)arg0;
- (void)setHandle:(id)arg0;
- (void)setType:(long long)arg0;
- (void)setArtistName:(id)arg0;
- (id)handle;
- (BOOL)isVerified;
- (void)setIsVerified:(BOOL)arg0;

@end