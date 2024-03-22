//
//     Generated by private class-dump
//

@class NSString, HTSLiveAvatar;

@interface HTSLiveStarProfile : IESLivePBBaseMessage

@property (nonatomic) int status;
@property (retain, nonatomic) HTSLiveAvatar *avatarURL;
@property (nonatomic) BOOL hasAvatarURL;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *description_p;
@property (nonatomic) BOOL followed;
@property (copy, nonatomic) NSString *roomId;
@property (copy, nonatomic) NSString *uid;
@property (nonatomic) long long startTime;
@property (copy, nonatomic) NSString *reservationId;
@property (copy, nonatomic) NSString *cardId;
@property (nonatomic) long long followCount;
@property (nonatomic) int color;

+ (id)descriptor;

@end