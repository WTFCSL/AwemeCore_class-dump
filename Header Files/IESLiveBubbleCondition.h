//
//     Generated by private class-dump
//

@class NSNumber;

@interface IESLiveBubbleCondition : NSObject {
    NSNumber *_weeklyFrequency;
    NSNumber *_totalTimes;
    NSNumber *_validityPeriod;
    id /* block */ _trigger;
}

@property (retain, nonatomic) NSNumber *weeklyFrequency;
@property (retain, nonatomic) NSNumber *totalTimes;
@property (retain, nonatomic) NSNumber *validityPeriod;
@property (copy, nonatomic) id /* block */ trigger;

+ (id)conditionWithTrigger:(id /* block */)arg0;

- (id)totalTimes;
- (void)setTotalTimes:(id)arg0;
- (void)setValidityPeriod:(id)arg0;
- (id)validityPeriod;
- (id)weeklyFrequency;
- (void)setWeeklyFrequency:(id)arg0;
- (void).cxx_destruct;
- (id /* block */)trigger;
- (void)setTrigger:(id /* block */)arg0;

@end
