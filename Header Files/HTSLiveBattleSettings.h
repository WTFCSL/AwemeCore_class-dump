//
//     Generated by private class-dump
//

@class NSString, BattleTitleConfig, HTSLiveImage, BattleConfigSetting, BattleBarConfig, GPBEnumArray;

@interface HTSLiveBattleSettings : IESLivePBBaseMessage

@property (readonly, copy, nonatomic) NSString *mixInitiatorId;
@property (nonatomic) long long battleId;
@property (nonatomic) long long startTimeMs;
@property (nonatomic) long long duration;
@property (copy, nonatomic) NSString *theme;
@property (nonatomic) long long channelId;
@property (nonatomic) long long matchType;
@property (copy, nonatomic) NSString *bannerURL;
@property (nonatomic) long long subType;
@property (nonatomic) int mode;
@property (copy, nonatomic) NSString *config;
@property (copy, nonatomic) NSString *notifySchemeURL;
@property (copy, nonatomic) NSString *hotsoonNotifySchemeURL;
@property (retain, nonatomic) HTSLiveImage *unknwonField1;
@property (nonatomic) BOOL hasUnknwonField1;
@property (copy, nonatomic) NSString *unknwonField2;
@property (copy, nonatomic) NSString *unknwonField3;
@property (retain, nonatomic) BattleTitleConfig *titleConfig;
@property (nonatomic) BOOL hasTitleConfig;
@property (retain, nonatomic) BattleTitleConfig *punishConfig;
@property (nonatomic) BOOL hasPunishConfig;
@property (nonatomic) long long punishDuration;
@property (nonatomic) long long punishStartTimeMs;
@property (nonatomic) int optimizeVersion;
@property (nonatomic) BOOL punishOptimizeOn;
@property (nonatomic) long long bloodDisplayDuration;
@property (nonatomic) long long statusDisplayDuration;
@property (copy, nonatomic) NSString *toast;
@property (nonatomic) BOOL needCloseLinkmic;
@property (nonatomic) BOOL displayLastResult;
@property (copy, nonatomic) NSString *normalActivityName;
@property (nonatomic) int inviteType;
@property (retain, nonatomic) BattleConfigSetting *battleConfigSetting;
@property (nonatomic) BOOL hasBattleConfigSetting;
@property (retain, nonatomic) BattleBarConfig *barConfig;
@property (nonatomic) BOOL hasBarConfig;
@property (retain, nonatomic) BattleBarConfig *hotsoonBarConfig;
@property (nonatomic) BOOL hasHotsoonBarConfig;
@property (nonatomic) long long initiatorId;
@property (nonatomic) int battleType;
@property (nonatomic) long long finished;
@property (retain, nonatomic) GPBEnumArray *playTagsArray;
@property (readonly, nonatomic) unsigned long long playTagsArray_Count;
@property (nonatomic) long long stealTowerDuration;
@property (copy, nonatomic) NSString *lynxData;

+ (id)descriptor;

- (id)mixInitiatorId;

@end