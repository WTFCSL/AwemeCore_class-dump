//
//     Generated by private class-dump
//

@class NSDictionary;

@interface LSSStrategyFactory : NSObject {
    NSDictionary *_name2StrategyClassMap;
}

@property (copy, nonatomic) NSDictionary *name2StrategyClassMap;

+ (id)defaultStrategyFactory;

- (id)runStartegy:(long long)arg0 projectKey:(id)arg1 sdkInfo:(id)arg2;
- (void)updateStrategyInfo:(id)arg0;
- (id)name2StrategyClassMap;
- (void)setName2StrategyClassMap:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
