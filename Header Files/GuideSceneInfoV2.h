//
//     Generated by private class-dump
//

@class DiamondExposeInfoV2, FeedOriginGidInfoV2, NSString;

@interface GuideSceneInfoV2 : GPBMessage

@property (nonatomic) int guideSceneType;
@property (nonatomic) BOOL hasGuideSceneType;
@property (retain, nonatomic) FeedOriginGidInfoV2 *feedOriginGidInfo;
@property (nonatomic) BOOL hasFeedOriginGidInfo;
@property (retain, nonatomic) DiamondExposeInfoV2 *diamondExposeInfo;
@property (nonatomic) BOOL hasDiamondExposeInfo;
@property (copy, nonatomic) NSString *feedOriginGidInfoStr;
@property (nonatomic) BOOL hasFeedOriginGidInfoStr;
@property (copy, nonatomic) NSString *diamondExposeInfoStr;
@property (nonatomic) BOOL hasDiamondExposeInfoStr;

+ (id)descriptor;

@end
