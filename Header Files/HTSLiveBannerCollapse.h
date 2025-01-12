//
//     Generated by private class-dump
//

@class NSString, HTSLiveImage, HTSLiveText;

@interface HTSLiveBannerCollapse : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveText *collapseTitle;
@property (nonatomic) BOOL hasCollapseTitle;
@property (retain, nonatomic) HTSLiveImage *collapseImage;
@property (nonatomic) BOOL hasCollapseImage;
@property (nonatomic) BOOL enable;
@property (copy, nonatomic) NSString *backgroundColor;
@property (nonatomic) long long collapseHeight;
@property (copy, nonatomic) NSString *verticalLineColor;

+ (id)descriptor;

@end
