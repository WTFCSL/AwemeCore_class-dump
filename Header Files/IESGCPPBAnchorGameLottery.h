//
//     Generated by private class-dump
//

@class IESGCPPBGameGiftInfo, IESGCPPBGameCPInfo, GPBInt64Array, GPBInt64ObjectDictionary;

@interface IESGCPPBAnchorGameLottery : GPBMessage

@property (retain, nonatomic) GPBInt64Array *timeOptionsArray;
@property (readonly, nonatomic) unsigned long long timeOptionsArray_Count;
@property (retain, nonatomic) GPBInt64ObjectDictionary *requirementOptions;
@property (readonly, nonatomic) unsigned long long requirementOptions_Count;
@property (retain, nonatomic) GPBInt64ObjectDictionary *enterOptions;
@property (readonly, nonatomic) unsigned long long enterOptions_Count;
@property (retain, nonatomic) IESGCPPBGameGiftInfo *giftInfo;
@property (nonatomic) BOOL hasGiftInfo;
@property (retain, nonatomic) IESGCPPBGameCPInfo *gameInfo;
@property (nonatomic) BOOL hasGameInfo;
@property (nonatomic) BOOL canIssue;
@property (retain, nonatomic) GPBInt64Array *issueOptionsArray;
@property (readonly, nonatomic) unsigned long long issueOptionsArray_Count;
@property (nonatomic) long long lotteryType;

+ (id)descriptor;

@end
