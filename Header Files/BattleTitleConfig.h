//
//     Generated by private class-dump
//

@class NSString, HTSLiveImage;

@interface BattleTitleConfig : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *scheme;
@property (copy, nonatomic) NSString *hotsoonScheme;
@property (retain, nonatomic) HTSLiveImage *newIcon;
@property (nonatomic) BOOL hasNewIcon;
@property (retain, nonatomic) HTSLiveImage *preIcon;
@property (nonatomic) BOOL hasPreIcon;
@property (retain, nonatomic) HTSLiveImage *iconBackImg;
@property (nonatomic) BOOL hasIconBackImg;
@property (retain, nonatomic) HTSLiveImage *background;
@property (nonatomic) BOOL hasBackground;
@property (nonatomic) long long backgroundShowDelayMs;
@property (copy, nonatomic) NSString *openScheme;

+ (id)descriptor;

@end
