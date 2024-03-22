//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSMutableArray;

@interface BDREDiGraph : NSObject {
    NSMutableDictionary *_outputNodeMap;
    NSMutableDictionary *_trieNodeMap;
    NSMutableArray *_entryNodes;
    NSMutableArray *_outNodes;
    NSMutableArray *_fallBackRuleModels;
    NSMutableArray *_defaultOutputNodes;
}

@property (retain, nonatomic) NSMutableDictionary *outputNodeMap;
@property (retain, nonatomic) NSMutableDictionary *trieNodeMap;
@property (retain, nonatomic) NSMutableArray *entryNodes;
@property (retain, nonatomic) NSMutableArray *outNodes;
@property (retain, nonatomic) NSMutableArray *fallBackRuleModels;
@property (retain, nonatomic) NSMutableArray *defaultOutputNodes;

- (id)travelWithParams:(id)arg0 needBreak:(BOOL)arg1;
- (BOOL)hasTrieNode;
- (id)defaultOutputNodes;
- (id)entryNodes;
- (id)fallBackRuleModels;
- (id)getOutputNodeWithValue:(id)arg0;
- (void)addFallBackRuleModel:(id)arg0;
- (id)outputNodeMap;
- (id)trieNodeMap;
- (void)addCommandTree:(id)arg0 index:(long long)arg1 outputValue:(id)arg2 ruleModel:(id)arg3;
- (id)getEntryNodeWithIdentifier:(id)arg0;
- (void)setOutputNodeMap:(id)arg0;
- (void)setTrieNodeMap:(id)arg0;
- (void)setEntryNodes:(id)arg0;
- (void)setFallBackRuleModels:(id)arg0;
- (void)setDefaultOutputNodes:(id)arg0;
- (id)getConstNodeWithValue:(id)arg0;
- (void)addOutGraphNode:(id)arg0;
- (id)getTrieNodeWithIdentifier:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)outNodes;
- (void)setOutNodes:(id)arg0;

@end