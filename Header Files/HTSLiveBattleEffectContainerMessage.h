//
//     Generated by private class-dump
//

@class NSString, HTSLiveCommon;

@interface HTSLiveBattleEffectContainerMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) long long channelId;
@property (nonatomic) long long battleId;
@property (copy, nonatomic) NSString *battleEffectInfo;

+ (id)descriptor;

@end