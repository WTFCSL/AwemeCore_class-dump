//
//     Generated by private class-dump
//

@class IESLiveLinkMicProfitBannerInfoText, HTSLiveImage, HTSLiveText;

@interface IESLiveLinkMicProfitBannerInfo : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveText *description_p;
@property (nonatomic) BOOL hasDescription_p;
@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;
@property (retain, nonatomic) HTSLiveImage *background;
@property (nonatomic) BOOL hasBackground;
@property (retain, nonatomic) IESLiveLinkMicProfitBannerInfoText *textInfo;
@property (nonatomic) BOOL hasTextInfo;

+ (id)descriptor;

@end
