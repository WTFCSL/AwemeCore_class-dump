//
//     Generated by private class-dump
//

@class NSString, HTSLiveImage;

@interface FansclubMeResult_PopularityRank : IESLivePBBaseMessage

@property (nonatomic) long long rank;
@property (nonatomic) long long score;
@property (copy, nonatomic) NSString *rankDesc;
@property (nonatomic) long long lastWeekRank;
@property (retain, nonatomic) HTSLiveImage *badge;
@property (nonatomic) BOOL hasBadge;

+ (id)descriptor;

@end
