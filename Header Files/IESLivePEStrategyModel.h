//
//     Generated by private class-dump
//

@class NSString, NSArray, NSDictionary;

@interface IESLivePEStrategyModel : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSArray *factorKeys;
@property (copy, nonatomic) NSArray *rules;
@property (copy, nonatomic) NSArray *results;
@property (nonatomic) long long defaultResult;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)rulesJSONTransformer;
+ (id)resultsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

@end