//
//     Generated by private class-dump
//

@class OperationalPlay, NSString, BattleSkinConfig, BreakthroughInfo, SurvivalInfo, NSMutableDictionary, GPBInt64ObjectDictionary, HTSLiveCommon, NSMutableArray, HTSLiveBattleSettings;

@interface HTSLiveLinkMicBattleFinish : IESLivePBBaseMessage

@property (readonly, nonatomic) NSMutableDictionary *mixUserInfos;
@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) HTSLiveBattleSettings *battleSettings;
@property (nonatomic) BOOL hasBattleSettings;
@property (retain, nonatomic) NSMutableArray *battleArmiesArray;
@property (readonly, nonatomic) unsigned long long battleArmiesArray_Count;
@property (retain, nonatomic) NSMutableArray *battleScoresArray;
@property (readonly, nonatomic) unsigned long long battleScoresArray_Count;
@property (retain, nonatomic) NSMutableArray *anchorsArray;
@property (readonly, nonatomic) unsigned long long anchorsArray_Count;
@property (retain, nonatomic) GPBInt64ObjectDictionary *gradeChanges;
@property (readonly, nonatomic) unsigned long long gradeChanges_Count;
@property (retain, nonatomic) OperationalPlay *operationalPlay;
@property (nonatomic) BOOL hasOperationalPlay;
@property (nonatomic) int endReason;
@property (copy, nonatomic) NSString *cutShortPrompt;
@property (copy, nonatomic) NSString *cutShortToast;
@property (nonatomic) BOOL cutShortWin;
@property (retain, nonatomic) GPBInt64ObjectDictionary *userInfos;
@property (readonly, nonatomic) unsigned long long userInfos_Count;
@property (nonatomic) int killFinishType;
@property (retain, nonatomic) BreakthroughInfo *breakthroughInfo;
@property (nonatomic) BOOL hasBreakthroughInfo;
@property (retain, nonatomic) BattleSkinConfig *skinConfig;
@property (nonatomic) BOOL hasSkinConfig;
@property (nonatomic) int skinType;
@property (retain, nonatomic) SurvivalInfo *survivalInfo;
@property (nonatomic) BOOL hasSurvivalInfo;
@property (copy, nonatomic) NSString *eventTrackingInfo;

+ (id)descriptor;

- (id)mixUserInfos;

@end
