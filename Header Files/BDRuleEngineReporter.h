//
//     Generated by private class-dump
//

@interface BDRuleEngineReporter : NSObject

+ (void)log:(id)arg0 tags:(id)arg1 block:(id /* block */)arg2;
+ (void)delayLog:(id)arg0 tags:(id)arg1 block:(id /* block */)arg2;
+ (void)log:(id)arg0 tags:(id)arg1 delay:(unsigned long long)arg2 block:(id /* block */)arg3;
+ (BOOL)shouldSampleWithTags:(id)arg0;
+ (void)log:(id)arg0 metric:(id)arg1 category:(id)arg2 extra:(id)arg3;
+ (id)tracker;
+ (id)monitor;

@end
