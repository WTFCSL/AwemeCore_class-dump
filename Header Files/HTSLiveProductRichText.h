//
//     Generated by private class-dump
//

@class HTSLiveProductRichText_Text, HTSLiveProductRichText_Image, HTSLiveProductRichText_CountDown;

@interface HTSLiveProductRichText : IESLivePBBaseMessage

@property (nonatomic) int richType;
@property (retain, nonatomic) HTSLiveProductRichText_Text *text;
@property (nonatomic) BOOL hasText;
@property (retain, nonatomic) HTSLiveProductRichText_Image *image;
@property (nonatomic) BOOL hasImage;
@property (retain, nonatomic) HTSLiveProductRichText_CountDown *countDown;
@property (nonatomic) BOOL hasCountDown;

+ (id)descriptor;

@end
