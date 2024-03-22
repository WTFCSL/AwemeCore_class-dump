//
//     Generated by private class-dump
//

@class NSString, BattleStarActivityGradeMedal;

@interface BattleStarActivityGrade : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *grade;
@property (nonatomic) long long level;
@property (nonatomic) long long starCount;
@property (nonatomic) long long targetStarCount;
@property (retain, nonatomic) BattleStarActivityGradeMedal *starActivityGradeMedal;
@property (nonatomic) BOOL hasStarActivityGradeMedal;
@property (nonatomic) int gradeEnum;

+ (id)descriptor;

@end
