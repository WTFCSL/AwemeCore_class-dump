//
//     Generated by private class-dump
//

@class NSString;

@interface BattleBuffCardMeta : IESLivePBBaseMessage

@property (nonatomic) int battleBuffCardType;
@property (copy, nonatomic) NSString *effectJson;
@property (nonatomic) long long effectStartTimeMs;
@property (nonatomic) long long effectDurationMs;
@property (nonatomic) long long createTimeMs;
@property (copy, nonatomic) NSString *cardExtraInfo;

+ (id)descriptor;

@end
