//
//     Generated by private class-dump
//

@class BattleAutoMatchResult_ResponseData, BattleAutoMatchResult_Extra;

@interface BattleAutoMatchResult : IESLivePBBaseMessage

@property (retain, nonatomic) BattleAutoMatchResult_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;
@property (retain, nonatomic) BattleAutoMatchResult_Extra *extra;
@property (nonatomic) BOOL hasExtra;

+ (id)descriptor;

@end