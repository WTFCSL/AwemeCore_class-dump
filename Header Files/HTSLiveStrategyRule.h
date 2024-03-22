//
//     Generated by private class-dump
//

@class NSString, NSMutableArray, HTSLiveDefaultResult;

@interface HTSLiveStrategyRule : IESLivePBBaseMessage <NSMutableCopying>

@property (nonatomic) BOOL live_isScheduleTask;
@property (nonatomic) double live_executeInterval;
@property (nonatomic) double live_lastExecuteTimeMS;
@property (nonatomic) long long strategyId;
@property (copy, nonatomic) NSString *strategyName;
@property (retain, nonatomic) NSMutableArray *featuresArray;
@property (readonly, nonatomic) unsigned long long featuresArray_Count;
@property (retain, nonatomic) HTSLiveDefaultResult *defaultValue;
@property (nonatomic) BOOL hasDefaultValue;
@property (retain, nonatomic) NSMutableArray *ruleDetailsArray;
@property (readonly, nonatomic) unsigned long long ruleDetailsArray_Count;
@property (nonatomic) int ruleType;
@property (nonatomic) long long version;
@property (nonatomic) int strategyStatus;

+ (id)descriptor;

- (id)strategyName;
- (BOOL)live_isScheduleTask;
- (void)setLive_isScheduleTask:(BOOL)arg0;
- (double)live_executeInterval;
- (void)setLive_executeInterval:(double)arg0;
- (double)live_lastExecuteTimeMS;
- (void)setLive_lastExecuteTimeMS:(double)arg0;
- (BOOL)relatedWith:(id)arg0;
- (id)toDolphinStrategy;
- (id)mutableCopyWithZone:(struct _NSZone { } *)arg0;

@end
