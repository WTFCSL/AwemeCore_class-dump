//
//     Generated by private class-dump
//

@class NSString, MusicPromoteLinkInfoStructV2;

@interface MusicPromoteCommentAnchorStructV2 : GPBMessage

@property (copy, nonatomic) NSString *tag;
@property (nonatomic) BOOL hasTag;
@property (copy, nonatomic) NSString *comment;
@property (nonatomic) BOOL hasComment;
@property (nonatomic) long long metaSongId;
@property (nonatomic) BOOL hasMetaSongId;
@property (retain, nonatomic) MusicPromoteLinkInfoStructV2 *musicPromoteLinkInfo;
@property (nonatomic) BOOL hasMusicPromoteLinkInfo;

+ (id)descriptor;

@end
