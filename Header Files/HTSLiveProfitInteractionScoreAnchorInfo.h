//
//     Generated by private class-dump
//

@class NSString, ProfitInteractionSetting;

@interface HTSLiveProfitInteractionScoreAnchorInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *score;
@property (retain, nonatomic) ProfitInteractionSetting *interactionSetting;
@property (nonatomic) BOOL hasInteractionSetting;
@property (nonatomic) BOOL reachScoreDisplayThreshold;

+ (id)descriptor;

@end
