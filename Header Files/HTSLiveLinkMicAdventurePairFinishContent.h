//
//     Generated by private class-dump
//

@class IESLiveAdventurePairInfo, NSString;

@interface HTSLiveLinkMicAdventurePairFinishContent : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveAdventurePairInfo *pairInfo;
@property (nonatomic) BOOL hasPairInfo;
@property (copy, nonatomic) NSString *toast;
@property (nonatomic) int finishReason;

+ (id)descriptor;

@end