//
//     Generated by private class-dump
//

@class HTSLiveUser, NSString, HTSLiveClubInfo, NSMutableArray;

@interface RanklistFansClubResponse_Rank : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) long long score;
@property (nonatomic) long long rank;
@property (copy, nonatomic) NSString *gapDescription;
@property (retain, nonatomic) NSMutableArray *ranksArray;
@property (readonly, nonatomic) unsigned long long ranksArray_Count;
@property (nonatomic) long long lastCycleRank;
@property (retain, nonatomic) HTSLiveClubInfo *fansClub;
@property (nonatomic) BOOL hasFansClub;

+ (id)descriptor;

@end
