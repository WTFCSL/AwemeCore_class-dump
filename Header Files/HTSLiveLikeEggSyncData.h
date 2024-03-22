//
//     Generated by private class-dump
//

@class NSString, HTSLiveLikeEggTrayColor, HTSLiveCommon, HTSLiveLikeEggJumpDetail;

@interface HTSLiveLikeEggSyncData : IESLivePBBaseMessage

@property (nonatomic) long long originalDuration;
@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) HTSLiveLikeEggTrayColor *trayColor;
@property (nonatomic) BOOL hasTrayColor;
@property (nonatomic) long long userStartTimestamp;
@property (nonatomic) long long userStartSecond;
@property (nonatomic) long long duration;
@property (retain, nonatomic) HTSLiveLikeEggJumpDetail *jumpDetail;
@property (nonatomic) BOOL hasJumpDetail;
@property (copy, nonatomic) NSString *prepareContent;
@property (nonatomic) long long prepareDuration;
@property (copy, nonatomic) NSString *finishContent;
@property (nonatomic) long long finishDuration;
@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;

+ (id)descriptor;

- (long long)originalDuration;
- (void)setOriginalDuration:(long long)arg0;

@end