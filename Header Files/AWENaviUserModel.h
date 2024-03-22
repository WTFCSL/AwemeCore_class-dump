//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWENaviUserModel : NSObject <AWENaviUserProtocol> {
    BOOL _selected;
    long long _gender;
    long long _followStatus;
    NSString *_uid;
    NSString *_secUid;
    NSString *_nickname;
    NSArray *_avatarURLs;
}

@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic) long long gender;
@property (nonatomic) long long followStatus;
@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSArray *avatarURLs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)followStatus;
- (id)secUid;
- (void)setFollowStatus:(long long)arg0;
- (id)avatarURLs;
- (void)setSecUid:(id)arg0;
- (void)setAvatarURLs:(id)arg0;
- (void)setUid:(id)arg0;
- (id)uid;
- (id)init;
- (id)nickname;
- (void).cxx_destruct;
- (void)setNickname:(id)arg0;
- (long long)gender;
- (void)setSelected:(BOOL)arg0;
- (void)setGender:(long long)arg0;
- (BOOL)isSelected;

@end