//
//     Generated by private class-dump
//

@class NSString, HTSLiveImage, IESLiveActivityBadges_GradientColor;

@interface IESLiveActivityBadges_Badge : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *image;
@property (nonatomic) BOOL hasImage;
@property (copy, nonatomic) NSString *rewardDate;
@property (copy, nonatomic) NSString *expireDate;
@property (copy, nonatomic) NSString *description_p;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) IESLiveActivityBadges_GradientColor *bgColor;
@property (nonatomic) BOOL hasBgColor;
@property (retain, nonatomic) HTSLiveImage *bgIcon;
@property (nonatomic) BOOL hasBgIcon;

+ (id)descriptor;

@end
