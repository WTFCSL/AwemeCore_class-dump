//
//     Generated by private class-dump
//

@class HTSLiveCommon, HTSLiveImage;

@interface HTSLiveBattleDrawPropMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) int status;
@property (nonatomic) int reason;
@property (retain, nonatomic) HTSLiveImage *animation;
@property (nonatomic) BOOL hasAnimation;
@property (nonatomic) long long propId;
@property (nonatomic) long long battleId;

+ (id)descriptor;

@end
