//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface IESLivePEStrategyRuleModel : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *expression;
@property (nonatomic) double weight;
@property (nonatomic) double score;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *factor;
@property (nonatomic) BOOL isMultiply;
@property (nonatomic) double plusNum;
@property (nonatomic) double multiplyNum;
@property (nonatomic) double exponentNum;
@property (copy, nonatomic) NSString *mappingType;
@property (nonatomic) double pMax;
@property (nonatomic) double pMin;
@property (nonatomic) long long execute;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

@end
