//
//     Generated by private class-dump
//

@class AWEURLModel, UIImage, AFDUserVirtualAnimationAvatarModel;

@interface AFDUserVirtualReallyAvatarModel : NSObject {
    AFDUserVirtualAnimationAvatarModel *_virtualAnimationAvatar;
    AWEURLModel *_virtualAvatar;
    UIImage *_virtualLocalImage;
    long long _avatarVersion;
}

@property (retain, nonatomic) AFDUserVirtualAnimationAvatarModel *virtualAnimationAvatar;
@property (retain, nonatomic) AWEURLModel *virtualAvatar;
@property (retain, nonatomic) UIImage *virtualLocalImage;
@property (nonatomic) long long avatarVersion;
@property (readonly, nonatomic) BOOL hasVirtualAvatarData;

- (id)virtualAvatar;
- (void)setVirtualAvatar:(id)arg0;
- (id)virtualAnimationAvatar;
- (id)virtualLocalImage;
- (BOOL)hasVirtualAvatarData;
- (long long)avatarVersion;
- (void)setAvatarVersion:(long long)arg0;
- (void)setVirtualAnimationAvatar:(id)arg0;
- (void)setVirtualLocalImage:(id)arg0;
- (void).cxx_destruct;

@end
