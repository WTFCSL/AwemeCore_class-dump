//
//     Generated by private class-dump
//

@class NSString, HTSLiveCommon, GPBInt32Array, NSMutableDictionary;

@interface HTSLiveLotteryEventNewMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) long long lotteryId;
@property (nonatomic) int lotteryStatus;
@property (nonatomic) long long lotteryStartTime;
@property (nonatomic) long long lotteryDrawTime;
@property (nonatomic) long long lotteryCurrentTime;
@property (copy, nonatomic) NSString *rulePageScheme;
@property (nonatomic) long long prizeType;
@property (copy, nonatomic) NSString *lotteryAuditFailureReason;
@property (retain, nonatomic) GPBInt32Array *conditionsArray;
@property (readonly, nonatomic) unsigned long long conditionsArray_Count;
@property (retain, nonatomic) NSMutableDictionary *extra;
@property (readonly, nonatomic) unsigned long long extra_Count;
@property (nonatomic) BOOL useNewDrawInteraction;
@property (nonatomic) long long prizeCount;
@property (nonatomic) long long luckyCount;
@property (copy, nonatomic) NSString *clientBizData;
@property (copy, nonatomic) NSString *serverBizData;
@property (copy, nonatomic) NSString *uiConfig;
@property (copy, nonatomic) NSString *awardName;
@property (copy, nonatomic) NSString *awardDescription;
@property (nonatomic) long long maxRandomDelayDurationByMs;

+ (id)descriptor;

@end
