//
//     Generated by private class-dump
//

@class NSString, HTSLiveImage;

@interface HTSLiveEpisodeActors : IESLivePBBaseMessage

@property (nonatomic) long long userId;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) HTSLiveImage *avatar;
@property (nonatomic) BOOL hasAvatar;
@property (nonatomic) long long verifyType;
@property (copy, nonatomic) NSString *label;

+ (id)descriptor;

@end
