//
//     Generated by private class-dump
//

@class NSString, HTSLiveCommon;

@interface HTSLiveInteractOpenRewardMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (copy, nonatomic) NSString *appId;
@property (nonatomic) long long startId;
@property (nonatomic) int rewardId;
@property (nonatomic) int rewardCount;
@property (nonatomic) int rewardDiamonds;
@property (copy, nonatomic) NSString *rewardName;

+ (id)descriptor;

@end
