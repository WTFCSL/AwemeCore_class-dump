//
//     Generated by private class-dump
//

@class BDSingleRuleResult, NSArray, NSString, NSDictionary, NSError;

@interface BDRuleResultModel : NSObject {
    BOOL _strategySelectHitCache;
    BOOL _strategySelectFromGraph;
    BOOL _strategySelectFromGraphTrie;
    BOOL _executeFromRuleFFF;
    BOOL _isMainThread;
    NSError *_engineError;
    BDSingleRuleResult *_value;
    NSArray *_values;
    NSArray *_fffRuleValues;
    NSArray *_ruleSetNames;
    NSString *_scene;
    NSString *_signature;
    NSString *_uuid;
    NSString *_key;
    double _fetchParametersCost;
    double _sceneSelectCost;
    double _strategySelectCost;
    double _ruleBuildCost;
    double _ruleExecCost;
    double _cost;
    NSDictionary *_usedParameters;
}

@property (retain, nonatomic) NSError *engineError;
@property (retain, nonatomic) BDSingleRuleResult *value;
@property (retain, nonatomic) NSArray *values;
@property (retain, nonatomic) NSArray *fffRuleValues;
@property (retain, nonatomic) NSArray *ruleSetNames;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *signature;
@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSString *key;
@property (nonatomic) double fetchParametersCost;
@property (nonatomic) double sceneSelectCost;
@property (nonatomic) double strategySelectCost;
@property (nonatomic) double ruleBuildCost;
@property (nonatomic) double ruleExecCost;
@property (nonatomic) double cost;
@property (nonatomic) BOOL strategySelectHitCache;
@property (nonatomic) BOOL strategySelectFromGraph;
@property (nonatomic) BOOL strategySelectFromGraphTrie;
@property (nonatomic) BOOL executeFromRuleFFF;
@property (nonatomic) BOOL isMainThread;
@property (copy, nonatomic) NSDictionary *usedParameters;

+ (id)instanceWithError:(id)arg0 uuid:(id)arg1;

- (id)usedParameters;
- (void)setEngineError:(id)arg0;
- (id)engineError;
- (id)fffRuleValues;
- (void)setFffRuleValues:(id)arg0;
- (id)ruleSetNames;
- (void)setRuleSetNames:(id)arg0;
- (double)fetchParametersCost;
- (void)setFetchParametersCost:(double)arg0;
- (double)sceneSelectCost;
- (void)setSceneSelectCost:(double)arg0;
- (double)strategySelectCost;
- (void)setStrategySelectCost:(double)arg0;
- (double)ruleBuildCost;
- (void)setRuleBuildCost:(double)arg0;
- (double)ruleExecCost;
- (void)setRuleExecCost:(double)arg0;
- (BOOL)strategySelectHitCache;
- (void)setStrategySelectHitCache:(BOOL)arg0;
- (BOOL)strategySelectFromGraph;
- (void)setStrategySelectFromGraph:(BOOL)arg0;
- (BOOL)strategySelectFromGraphTrie;
- (void)setStrategySelectFromGraphTrie:(BOOL)arg0;
- (BOOL)executeFromRuleFFF;
- (void)setExecuteFromRuleFFF:(BOOL)arg0;
- (void)setIsMainThread:(BOOL)arg0;
- (void)setUsedParameters:(id)arg0;
- (void)computeCostWithContext:(id)arg0;
- (void)setSignature:(id)arg0;
- (id)key;
- (id)signature;
- (id)initWithUUID:(id)arg0;
- (void)setScene:(id)arg0;
- (void).cxx_destruct;
- (void)setUuid:(id)arg0;
- (id)value;
- (id)values;
- (BOOL)isMainThread;
- (void)setKey:(id)arg0;
- (void)setValues:(id)arg0;
- (id)description;
- (id)uuid;
- (double)cost;
- (void)setValue:(id)arg0;
- (id)scene;
- (void)setCost:(double)arg0;

@end
