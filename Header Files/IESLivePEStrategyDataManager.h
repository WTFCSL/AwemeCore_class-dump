//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface IESLivePEStrategyDataManager : NSObject {
    NSMutableDictionary *_strategyModels;
}

@property (retain, nonatomic) NSMutableDictionary *strategyModels;

- (id)strategyModels;
- (id)getRelatedStrategyWithFactorKey:(id)arg0;
- (void)addStrategyModel:(id)arg0;
- (id)getStrategyModelWithStrategyKey:(id)arg0;
- (id)getRelatedStrategyWithFactorKeyArray:(id)arg0;
- (void)setStrategyModels:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
