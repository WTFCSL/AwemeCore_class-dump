//
//     Generated by private class-dump
//

@class NSString, HTSLiveImage;

@interface HTSLiveCommentRole : IESLivePBBaseMessage

@property (nonatomic) long long roleId;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) HTSLiveImage *avatar;
@property (nonatomic) BOOL hasAvatar;

+ (id)descriptor;

@end
