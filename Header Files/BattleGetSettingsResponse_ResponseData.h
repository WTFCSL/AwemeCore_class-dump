//
//     Generated by private class-dump
//

@class IESLiveBattleUserSettings, PrecisionMatchSettings;

@interface BattleGetSettingsResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveBattleUserSettings *settings;
@property (nonatomic) BOOL hasSettings;
@property (retain, nonatomic) PrecisionMatchSettings *precisionMatchSettings;
@property (nonatomic) BOOL hasPrecisionMatchSettings;

+ (id)descriptor;

@end