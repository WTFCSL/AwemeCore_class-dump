//
//     Generated by private class-dump
//

@class NSString, HTSLiveImage, HTSLiveText;

@interface HTSLiveGiftBanner : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveText *displayText;
@property (nonatomic) BOOL hasDisplayText;
@property (copy, nonatomic) NSString *displayTextBgColor;
@property (retain, nonatomic) HTSLiveImage *boxImg;
@property (nonatomic) BOOL hasBoxImg;
@property (retain, nonatomic) HTSLiveImage *bgImg;
@property (nonatomic) BOOL hasBgImg;
@property (copy, nonatomic) NSString *schemeURL;
@property (nonatomic) BOOL animate;
@property (nonatomic) long long boxId;
@property (nonatomic) long long availableBoxCount;

+ (id)descriptor;

@end
