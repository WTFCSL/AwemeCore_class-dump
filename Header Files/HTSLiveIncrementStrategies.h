//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface HTSLiveIncrementStrategies : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *incrementStrategiesArray;
@property (readonly, nonatomic) unsigned long long incrementStrategiesArray_Count;
@property (retain, nonatomic) NSMutableArray *deleteStrategiesArray;
@property (readonly, nonatomic) unsigned long long deleteStrategiesArray_Count;

+ (id)descriptor;

- (id)deleteStrategiesArray;
- (id)incrementStrategiesArray;

@end
