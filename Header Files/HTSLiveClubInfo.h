//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;

@interface HTSLiveClubInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long activeFansCount;
@property (nonatomic) long long totalFansCount;
@property (nonatomic) long long todayNewFansCount;
@property (nonatomic) long long hotRank;
@property (retain, nonatomic) NSMutableArray *taskStatsArray;
@property (readonly, nonatomic) unsigned long long taskStatsArray_Count;

+ (id)descriptor;

@end
