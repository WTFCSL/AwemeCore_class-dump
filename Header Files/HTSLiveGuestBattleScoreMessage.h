//
//     Generated by private class-dump
//

@class HTSLiveCommon, HTSLiveGuestBattleInfo;

@interface HTSLiveGuestBattleScoreMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) HTSLiveGuestBattleInfo *battleInfo;
@property (nonatomic) BOOL hasBattleInfo;
@property (nonatomic) BOOL crownUpgrade;

+ (id)descriptor;

@end
