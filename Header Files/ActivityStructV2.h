//
//     Generated by private class-dump
//

@class UrlStructV2;

@interface ActivityStructV2 : GPBMessage

@property (nonatomic) int useMusicCount;
@property (nonatomic) BOOL hasUseMusicCount;
@property (nonatomic) int diggCount;
@property (nonatomic) BOOL hasDiggCount;
@property (retain, nonatomic) UrlStructV2 *musicCoverURL;
@property (nonatomic) BOOL hasMusicCoverURL;
@property (retain, nonatomic) UrlStructV2 *musicQrcodeURL;
@property (nonatomic) BOOL hasMusicQrcodeURL;

+ (id)descriptor;

@end