//
//     Generated by private class-dump
//

@class NSString, HTSLiveImage, HTSLiveUser_FollowInfo;

@interface HTSLiveLiveUser : IESLivePBBaseMessage

@property (nonatomic) long long id_p;
@property (copy, nonatomic) NSString *nickname;
@property (retain, nonatomic) HTSLiveImage *avatarThumb;
@property (nonatomic) BOOL hasAvatarThumb;
@property (retain, nonatomic) HTSLiveImage *avatarMedium;
@property (nonatomic) BOOL hasAvatarMedium;
@property (retain, nonatomic) HTSLiveImage *avatarLarge;
@property (nonatomic) BOOL hasAvatarLarge;
@property (retain, nonatomic) HTSLiveUser_FollowInfo *followInfo;
@property (nonatomic) BOOL hasFollowInfo;

+ (id)descriptor;

@end