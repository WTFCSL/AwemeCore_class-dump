//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface BDRuleFliterModel : NSObject {
    NSString *_strategyKey;
    NSDictionary *_strategyFilters;
}

@property (readonly, copy, nonatomic) NSString *strategyKey;
@property (readonly, nonatomic) NSDictionary *strategyFilters;

- (id)strategyFilters;
- (BOOL)checkRuleCludeWithRuleKey:(id)arg0 params:(id)arg1;
- (id)strategyKey;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg0 key:(id)arg1;

@end