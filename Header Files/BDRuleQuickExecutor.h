//
//     Generated by private class-dump
//

@class NSString;

@interface BDRuleQuickExecutor : NSObject {
    NSString *_cel;
}

@property (copy, nonatomic) NSString *cel;

- (void)setCel:(id)arg0;
- (void)logEventWithCost:(double)arg0 envCost:(double)arg1 code:(long long)arg2;
- (void)logEventWithCost:(double)arg0 envCost:(double)arg1;
- (id)cel;
- (id)initWithCel:(id)arg0;
- (BOOL)evaluateWithEnv:(id)arg0 error:(id *)arg1;
- (id)valueOfKey:(id)arg0 env:(id)arg1 error:(id *)arg2;
- (void)logEventWithCost:(double)arg0;
- (void).cxx_destruct;

@end
