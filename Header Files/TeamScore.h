//
//     Generated by private class-dump
//

@class HTSLiveTeamBaseInfo;

@interface TeamScore : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveTeamBaseInfo *teamBaseInfo;
@property (nonatomic) BOOL hasTeamBaseInfo;
@property (nonatomic) int matchCount;
@property (nonatomic) int winCount;
@property (nonatomic) int drewCount;
@property (nonatomic) int loseCount;
@property (nonatomic) int goalCount;
@property (nonatomic) int loseBallCount;
@property (nonatomic) int score;

+ (id)descriptor;

@end