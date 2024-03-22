//
//     Generated by private class-dump
//

@class NSString, HTSLiveImage;

@interface HTSLiveLinkerItemContent : IESLivePBBaseMessage

@property (nonatomic) long long itemId;
@property (nonatomic) long long authorId;
@property (copy, nonatomic) NSString *authorName;
@property (retain, nonatomic) HTSLiveImage *avatarThumb;
@property (nonatomic) BOOL hasAvatarThumb;
@property (retain, nonatomic) HTSLiveImage *avatarMedium;
@property (nonatomic) BOOL hasAvatarMedium;
@property (retain, nonatomic) HTSLiveImage *avatarLarge;
@property (nonatomic) BOOL hasAvatarLarge;
@property (copy, nonatomic) NSString *itemDescription;
@property (copy, nonatomic) NSString *musicId;
@property (copy, nonatomic) NSString *musicTitle;
@property (copy, nonatomic) NSString *musicAuthor;
@property (copy, nonatomic) NSString *musicURL;
@property (nonatomic) long long commentCount;

+ (id)descriptor;

@end