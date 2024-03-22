//
//     Generated by private class-dump
//

@class NSString, HTSLiveCommon;

@interface HTSLiveLotteryEventMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) long long lotteryId;
@property (nonatomic) int lotteryStatus;
@property (nonatomic) long long lotteryStartTime;
@property (nonatomic) long long lotteryDrawTime;
@property (nonatomic) long long lotteryCurrentTime;
@property (copy, nonatomic) NSString *rulePageScheme;

+ (id)descriptor;

@end