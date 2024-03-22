//
//     Generated by private class-dump
//

@class NSDictionary, NSString, NSArray;

@interface TSPKRuleExecuteResultModel : NSObject {
    NSDictionary *_input;
    NSDictionary *_usedStateParams;
    NSString *_strategyMD5;
    NSString *_scene;
    NSArray *_strategies;
    NSArray *_hitRules;
}

@property (copy, nonatomic) NSDictionary *input;
@property (copy, nonatomic) NSDictionary *usedStateParams;
@property (copy, nonatomic) NSString *strategyMD5;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSArray *strategies;
@property (copy, nonatomic) NSArray *hitRules;
@property (readonly, nonatomic) BOOL isCompliant;

- (id)hitRules;
- (void)setHitRules:(id)arg0;
- (void)setStrategies:(id)arg0;
- (void)setStrategyMD5:(id)arg0;
- (void)setUsedStateParams:(id)arg0;
- (BOOL)isCompliant;
- (id)usedStateParams;
- (id)strategyMD5;
- (void)setScene:(id)arg0;
- (id)input;
- (void).cxx_destruct;
- (void)setInput:(id)arg0;
- (id)scene;
- (id)strategies;

@end
