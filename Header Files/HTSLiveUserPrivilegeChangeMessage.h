//
//     Generated by private class-dump
//

@class HTSLiveCommon, HTSLiveImage;

@interface HTSLiveUserPrivilegeChangeMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) int userPrivilegeType;
@property (nonatomic) long long userId;
@property (retain, nonatomic) HTSLiveImage *avatarBorder;
@property (nonatomic) BOOL hasAvatarBorder;
@property (retain, nonatomic) HTSLiveImage *thumbAvatarBorder;
@property (nonatomic) BOOL hasThumbAvatarBorder;

+ (id)descriptor;

@end
