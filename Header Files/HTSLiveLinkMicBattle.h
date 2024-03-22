//
//     Generated by private class-dump
//

@class OperationalPlay, BattleSkinConfig, HTSLiveBattleMode, IESLiveLinkIconConfig, NSString, NSMutableDictionary, GPBInt64ObjectDictionary, HTSLiveCommon, HTSLiveBattleTask, HTSLiveBattleSettings;

@interface HTSLiveLinkMicBattle : IESLivePBBaseMessage

@property (readonly, nonatomic) NSMutableDictionary *mixUserInfos;
@property (nonatomic) BOOL isCacheMessage;
@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) HTSLiveBattleSettings *battleSettings;
@property (nonatomic) BOOL hasBattleSettings;
@property (retain, nonatomic) HTSLiveBattleMode *battleMode;
@property (nonatomic) BOOL hasBattleMode;
@property (retain, nonatomic) HTSLiveBattleTask *battleTask;
@property (nonatomic) BOOL hasBattleTask;
@property (nonatomic) int skinType;
@property (retain, nonatomic) GPBInt64ObjectDictionary *userInfos;
@property (readonly, nonatomic) unsigned long long userInfos_Count;
@property (retain, nonatomic) OperationalPlay *operationalPlay;
@property (nonatomic) BOOL hasOperationalPlay;
@property (nonatomic) int battleType;
@property (nonatomic) BOOL relativeScore;
@property (nonatomic) BOOL normalToMultiple;
@property (retain, nonatomic) BattleSkinConfig *skinConfig;
@property (nonatomic) BOOL hasSkinConfig;
@property (retain, nonatomic) IESLiveLinkIconConfig *linkIconConfig;
@property (nonatomic) BOOL hasLinkIconConfig;
@property (copy, nonatomic) NSString *requestSource;
@property (copy, nonatomic) NSString *eventTrackingInfo;

+ (id)descriptor;

- (id)mixUserInfos;
- (BOOL)isCacheMessage;
- (void)setIsCacheMessage:(BOOL)arg0;

@end
