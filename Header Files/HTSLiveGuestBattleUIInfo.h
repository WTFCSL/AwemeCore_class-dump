//
//     Generated by private class-dump
//

@class HTSLiveImage;

@interface HTSLiveGuestBattleUIInfo : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *openAnimation;
@property (nonatomic) BOOL hasOpenAnimation;
@property (retain, nonatomic) HTSLiveImage *scoreIcon;
@property (nonatomic) BOOL hasScoreIcon;
@property (retain, nonatomic) HTSLiveImage *hotBattleOpenAnimation;
@property (nonatomic) BOOL hasHotBattleOpenAnimation;
@property (retain, nonatomic) HTSLiveImage *sprintOpenAnimation;
@property (nonatomic) BOOL hasSprintOpenAnimation;

+ (id)descriptor;

@end