//
//     Generated by private class-dump
//

@class NSString, HTSLiveImage;

@interface HTSLiveWishContributor_Contributor : IESLivePBBaseMessage

@property (nonatomic) long long userId;
@property (copy, nonatomic) NSString *secUserId;
@property (retain, nonatomic) HTSLiveImage *avatar;
@property (nonatomic) BOOL hasAvatar;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *scoreDesc;

+ (id)descriptor;

@end
