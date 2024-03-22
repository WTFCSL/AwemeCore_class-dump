//
//     Generated by private class-dump
//

@class UrlStructV2, ImageUrlStructV2;

@interface NowPostInfoV2 : GPBMessage

@property (retain, nonatomic) UrlStructV2 *backImage;
@property (nonatomic) BOOL hasBackImage;
@property (retain, nonatomic) UrlStructV2 *backImageThumbnail;
@property (nonatomic) BOOL hasBackImageThumbnail;
@property (retain, nonatomic) UrlStructV2 *frontImage;
@property (nonatomic) BOOL hasFrontImage;
@property (retain, nonatomic) UrlStructV2 *frontImageThumbnail;
@property (nonatomic) BOOL hasFrontImageThumbnail;
@property (retain, nonatomic) UrlStructV2 *fuzzyImage;
@property (nonatomic) BOOL hasFuzzyImage;
@property (nonatomic) int nowStatus;
@property (nonatomic) BOOL hasNowStatus;
@property (nonatomic) long long postPushedAtSec;
@property (nonatomic) BOOL hasPostPushedAtSec;
@property (nonatomic) BOOL isPostToday;
@property (nonatomic) BOOL hasIsPostToday;
@property (retain, nonatomic) ImageUrlStructV2 *imageCompositeEnlargeFront;
@property (nonatomic) BOOL hasImageCompositeEnlargeFront;
@property (retain, nonatomic) UrlStructV2 *backFuzzyImage;
@property (nonatomic) BOOL hasBackFuzzyImage;
@property (retain, nonatomic) UrlStructV2 *frontFuzzyImage;
@property (nonatomic) BOOL hasFrontFuzzyImage;

+ (id)descriptor;

@end
