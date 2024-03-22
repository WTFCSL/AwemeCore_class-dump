//
//     Generated by private class-dump
//

@class NSString, VIRUnitModel, VIRTimingRuleModel;

@interface VIRRuleTask : NSObject {
    VIRTimingRuleModel *_timingRule;
    VIRUnitModel *_unitModel;
    NSString *_factorKey;
    NSString *_taskKey;
}

@property (copy, nonatomic) NSString *factorKey;
@property (copy, nonatomic) NSString *taskKey;
@property (retain, nonatomic) VIRTimingRuleModel *timingRule;
@property (retain, nonatomic) VIRUnitModel *unitModel;

+ (id)modelWithData:(id)arg0;

- (id)taskKey;
- (void)setTaskKey:(id)arg0;
- (id)factorKey;
- (id)timingRule;
- (id)unitModel;
- (void)setTimingRule:(id)arg0;
- (void)setUnitModel:(id)arg0;
- (void)setFactorKey:(id)arg0;
- (void).cxx_destruct;

@end