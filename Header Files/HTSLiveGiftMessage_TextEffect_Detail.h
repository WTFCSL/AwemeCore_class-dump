//
//     Generated by private class-dump
//

@class NSString, HTSLiveImage, HTSLiveText;

@interface HTSLiveGiftMessage_TextEffect_Detail : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveText *text;
@property (nonatomic) BOOL hasText;
@property (nonatomic) int textFontSize;
@property (retain, nonatomic) HTSLiveImage *background;
@property (nonatomic) BOOL hasBackground;
@property (nonatomic) int start;
@property (nonatomic) int duration;
@property (nonatomic) int x;
@property (nonatomic) int y;
@property (nonatomic) int width;
@property (nonatomic) int height;
@property (nonatomic) int shadowDx;
@property (nonatomic) int shadowDy;
@property (nonatomic) int shadowRadius;
@property (copy, nonatomic) NSString *shadowColor;
@property (copy, nonatomic) NSString *strokeColor;
@property (nonatomic) int strokeWidth;

+ (id)descriptor;

@end
