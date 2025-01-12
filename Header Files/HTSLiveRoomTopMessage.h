//
//     Generated by private class-dump
//

@class HTSLiveText, HTSLiveBackground, HTSLiveCommon, HTSLiveImage;

@interface HTSLiveRoomTopMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) HTSLiveImage *actionIcon;
@property (nonatomic) BOOL hasActionIcon;
@property (retain, nonatomic) HTSLiveBackground *background;
@property (nonatomic) BOOL hasBackground;
@property (nonatomic) long long foldDuration;
@property (nonatomic) long long displayDuration;
@property (retain, nonatomic) HTSLiveText *firstTitle;
@property (nonatomic) BOOL hasFirstTitle;
@property (retain, nonatomic) HTSLiveText *secondTitle;
@property (nonatomic) BOOL hasSecondTitle;

+ (id)descriptor;

@end
