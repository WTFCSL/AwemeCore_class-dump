//
//     Generated by private class-dump
//

@class SurvivalInfo, HTSLiveCommon, HTSLiveBattleSettings;

@interface HTSLiveBattleStateSyncMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) HTSLiveBattleSettings *battleSettings;
@property (nonatomic) BOOL hasBattleSettings;
@property (retain, nonatomic) SurvivalInfo *survivalInfo;
@property (nonatomic) BOOL hasSurvivalInfo;

+ (id)descriptor;

@end