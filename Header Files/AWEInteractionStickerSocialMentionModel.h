//
//     Generated by private class-dump
//

@class NSString;
@protocol ACCURLModelProtocol;

@interface AWEInteractionStickerSocialMentionModel : MTLModel <MTLJSONSerializing> {
    NSString *_userID;
    NSString *_userName;
    NSString *_secUserID;
    NSString *_signature;
    long long _followStatus;
    id<ACCURLModelProtocol> _avatarThumb;
}

@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSString *secUserID;
@property (copy, nonatomic) NSString *signature;
@property (nonatomic) long long followStatus;
@property (retain, nonatomic) id<ACCURLModelProtocol> avatarThumb;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)avatarThumbJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)secUserID;
- (void)setSecUserID:(id)arg0;
- (long long)followStatus;
- (id)avatarThumb;
- (void)setFollowStatus:(long long)arg0;
- (void)setAvatarThumb:(id)arg0;
- (void)setSignature:(id)arg0;
- (id)userID;
- (id)signature;
- (id)userName;
- (void).cxx_destruct;
- (void)setUserID:(id)arg0;
- (void)setUserName:(id)arg0;

@end
