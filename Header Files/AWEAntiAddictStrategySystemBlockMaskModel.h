//
//     Generated by private class-dump
//

@class NSNumber, NSString;

@interface AWEAntiAddictStrategySystemBlockMaskModel : MTLModel <MTLJSONSerializing, AWEAntiAddictStrategyThresholdUnitProtocol> {
    NSNumber *_liveTimeWorkday;
    NSNumber *_fatigueValueWorkday;
    NSNumber *_liveTimeWeekend;
    NSNumber *_fatigueValueWeekend;
    NSNumber *_forceRemindBlockTime;
    long long _timeRange;
}

@property (readonly, copy, nonatomic) NSNumber *liveTimeWorkday;
@property (readonly, copy, nonatomic) NSNumber *fatigueValueWorkday;
@property (readonly, copy, nonatomic) NSNumber *liveTimeWeekend;
@property (readonly, copy, nonatomic) NSNumber *fatigueValueWeekend;
@property (readonly, copy, nonatomic) NSNumber *forceRemindBlockTime;
@property (readonly, nonatomic) long long timeRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (double)currentFatigueValueAtDate:(id)arg0;
- (long long)currentLiveTimeInSecondAtDate:(id)arg0;
- (id)forceRemindBlockTime;
- (id)liveTimeWorkday;
- (id)fatigueValueWorkday;
- (id)liveTimeWeekend;
- (id)fatigueValueWeekend;
- (id)initWithLiveTimeWorkday:(long long)arg0 fatigueValueWorkday:(double)arg1 liveTimeWeekend:(long long)arg2 fatigueValueWeekend:(double)arg3 forceRemindBlockTime:(long long)arg4;
- (void).cxx_destruct;
- (BOOL)isValid;
- (long long)timeRange;
- (BOOL)isEqual:(id)arg0;

@end
