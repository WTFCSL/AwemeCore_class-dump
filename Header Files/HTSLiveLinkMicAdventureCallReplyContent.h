//
//     Generated by private class-dump
//

@class IESLiveAdventurePairInfo, NSString;

@interface HTSLiveLinkMicAdventureCallReplyContent : IESLivePBBaseMessage

@property (nonatomic) long long toUserId;
@property (nonatomic) int status;
@property (retain, nonatomic) IESLiveAdventurePairInfo *pairInfo;
@property (nonatomic) BOOL hasPairInfo;
@property (nonatomic) long long nextCallTime;
@property (copy, nonatomic) NSString *inviterRtcExtInfo;
@property (copy, nonatomic) NSString *inviterLiveCoreInfo;

+ (id)descriptor;

@end
