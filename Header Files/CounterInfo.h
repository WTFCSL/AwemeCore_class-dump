//
//     Generated by private class-dump
//

@class NSMutableArray, CounterRule;

@interface CounterInfo : IESLivePBBaseMessage

@property (nonatomic) long long counterId;
@property (retain, nonatomic) NSMutableArray *playersArray;
@property (readonly, nonatomic) unsigned long long playersArray_Count;
@property (nonatomic) long long startTime;
@property (nonatomic) long long expectFinishTime;
@property (nonatomic) long long actualFinishTime;
@property (retain, nonatomic) CounterRule *rule;
@property (nonatomic) BOOL hasRule;
@property (retain, nonatomic) NSMutableArray *topContributorsArray;
@property (readonly, nonatomic) unsigned long long topContributorsArray_Count;
@property (nonatomic) long long updateTime;

+ (id)descriptor;

@end