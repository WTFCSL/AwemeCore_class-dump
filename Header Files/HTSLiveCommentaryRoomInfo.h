//
//     Generated by private class-dump
//

@class NSString, HTSLiveImage;

@interface HTSLiveCommentaryRoomInfo : IESLivePBBaseMessage

@property (nonatomic) long long userId;
@property (retain, nonatomic) HTSLiveImage *avatar;
@property (nonatomic) BOOL hasAvatar;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long roomId;

+ (id)descriptor;

@end
