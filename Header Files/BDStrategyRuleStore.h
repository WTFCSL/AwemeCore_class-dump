//
//     Generated by private class-dump
//

@class NSString, NSArray, BDREDiGraph, BDRuleGroupModel, NSMutableDictionary, BDRuleHitConditionModel, BDStrategyParseRuleStore, NSDictionary;

@interface BDStrategyRuleStore : NSObject {
    BOOL _enableFFF;
    BOOL _enableRuleFFF;
    BOOL _enableSelectCache;
    BOOL _strategySelectBreak;
    BOOL _ruleExecBreak;
    BOOL _shouldUseRuleFFF;
    NSString *_source;
    NSArray *_reportParams;
    BDRuleGroupModel *_strategyMapRuleModel;
    BDREDiGraph *_strategyMapGraph;
    NSMutableDictionary *_ruleGroupGraphs;
    BDStrategyParseRuleStore *_subStore;
    BDRuleHitConditionModel *_strategyHitConditionModel;
    NSDictionary *_constPoolRawDict;
}

@property (copy, nonatomic) NSString *source;
@property (nonatomic) BOOL enableFFF;
@property (nonatomic) BOOL enableRuleFFF;
@property (nonatomic) BOOL enableSelectCache;
@property (nonatomic) BOOL strategySelectBreak;
@property (nonatomic) BOOL ruleExecBreak;
@property (nonatomic) BOOL shouldUseRuleFFF;
@property (retain, nonatomic) NSArray *reportParams;
@property (retain, nonatomic) BDRuleGroupModel *strategyMapRuleModel;
@property (retain, nonatomic) BDREDiGraph *strategyMapGraph;
@property (retain, nonatomic) NSMutableDictionary *ruleGroupGraphs;
@property (retain, nonatomic) BDStrategyParseRuleStore *subStore;
@property (retain, nonatomic) BDRuleHitConditionModel *strategyHitConditionModel;
@property (retain, nonatomic) NSDictionary *constPoolRawDict;

- (void)loadCommandsAndEnableExecutor:(BOOL)arg0;
- (id)jsonFormat;
- (id)strategyRuleWithName:(id)arg0;
- (void)setStrategySelectBreak:(BOOL)arg0;
- (void)setRuleExecBreak:(BOOL)arg0;
- (void)setShouldUseRuleFFF:(BOOL)arg0;
- (void)setStrategyMapRuleModel:(id)arg0;
- (void)setStrategyMapGraph:(id)arg0;
- (id)ruleGroupGraphs;
- (id)subStore;
- (id)strategyMapRule;
- (BOOL)enableFFF;
- (id)strategyMapRuleModel;
- (BOOL)enableRuleFFF;
- (void)setStrategyHitConditionModel:(id)arg0;
- (void)extractConstPool:(id)arg0;
- (void)setConstPoolRawDict:(id)arg0;
- (id)strategyHitConditionModel;
- (id)constPoolRawDict;
- (BOOL)strategySelectBreak;
- (BOOL)ruleExecBreak;
- (void)loadGraphExecutor;
- (void)updateStrategies:(id)arg0;
- (id)hitConditionModel;
- (id)ruleGroupGraphWithName:(id)arg0;
- (id)strategySelectMD5;
- (void)setEnableFFF:(BOOL)arg0;
- (void)setEnableRuleFFF:(BOOL)arg0;
- (BOOL)enableSelectCache;
- (void)setEnableSelectCache:(BOOL)arg0;
- (BOOL)shouldUseRuleFFF;
- (id)reportParams;
- (void)setReportParams:(id)arg0;
- (id)strategyMapGraph;
- (void)setRuleGroupGraphs:(id)arg0;
- (void)setSubStore:(id)arg0;
- (id)initWithSource:(id)arg0;
- (id)source;
- (void).cxx_destruct;
- (void)clear;
- (void)setSource:(id)arg0;

@end