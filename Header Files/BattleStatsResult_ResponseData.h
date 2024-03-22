//
//     Generated by private class-dump
//

@class NSMutableDictionary, BattleTask, TeamTask, BattleMode, SurvivalInfo, BreakthroughInfo, NSMutableArray, BattleSettings, GPBInt64ObjectDictionary, NSString, OperationalPlay, BattleSkinConfig, ChannelInfo;

@interface BattleStatsResult_ResponseData : IESLivePBBaseMessage

@property (readonly, copy, nonatomic) NSString *mixRivalAnchorId;
@property (readonly, nonatomic) NSMutableDictionary *mixUserInfos;
@property (retain, nonatomic) BattleTask *battleTask;
@property (nonatomic) BOOL hasBattleTask;
@property (nonatomic) long long channelId;
@property (retain, nonatomic) BattleMode *battleMode;
@property (nonatomic) BOOL hasBattleMode;
@property (retain, nonatomic) BattleSettings *battleSettings;
@property (nonatomic) BOOL hasBattleSettings;
@property (retain, nonatomic) NSMutableArray *battleArmiesArray;
@property (readonly, nonatomic) unsigned long long battleArmiesArray_Count;
@property (retain, nonatomic) ChannelInfo *channelInfo;
@property (nonatomic) BOOL hasChannelInfo;
@property (retain, nonatomic) NSMutableArray *battleScoresArray;
@property (readonly, nonatomic) unsigned long long battleScoresArray_Count;
@property (retain, nonatomic) NSMutableArray *anchorsArray;
@property (readonly, nonatomic) unsigned long long anchorsArray_Count;
@property (nonatomic) long long loserId;
@property (nonatomic) long long rivalAnchorId;
@property (nonatomic) int skinType;
@property (retain, nonatomic) GPBInt64ObjectDictionary *userInfos;
@property (readonly, nonatomic) unsigned long long userInfos_Count;
@property (retain, nonatomic) TeamTask *teamTask;
@property (nonatomic) BOOL hasTeamTask;
@property (retain, nonatomic) OperationalPlay *multipleMatches;
@property (nonatomic) BOOL hasMultipleMatches;
@property (copy, nonatomic) NSString *teamTaskJson;
@property (nonatomic) int endReason;
@property (copy, nonatomic) NSString *cutShortPrompt;
@property (copy, nonatomic) NSString *cutShortToast;
@property (nonatomic) BOOL cutShortWin;
@property (retain, nonatomic) BattleSkinConfig *skinConfig;
@property (nonatomic) BOOL hasSkinConfig;
@property (retain, nonatomic) BreakthroughInfo *breakthroughInfo;
@property (nonatomic) BOOL hasBreakthroughInfo;
@property (retain, nonatomic) SurvivalInfo *survivalInfo;
@property (nonatomic) BOOL hasSurvivalInfo;

+ (id)descriptor;

- (id)mixRivalAnchorId;
- (id)mixUserInfos;

@end
