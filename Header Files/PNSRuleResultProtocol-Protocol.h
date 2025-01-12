//
//     Generated by private class-dump
//

@class NSString, NSArray, NSDictionary;

@protocol PNSRuleResultProtocol <NSObject>

@property (copy, nonatomic) NSString *signature;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSArray *ruleSetNames;
@property (copy, nonatomic) NSArray *values;
@property (copy, nonatomic) NSDictionary *usedParameters;

- (id)usedParameters;
- (id)ruleSetNames;
- (void)setRuleSetNames:(id)arg0;
- (void)setUsedParameters:(id)arg0;
- (void)setSignature:(id)arg0;
- (id)signature;
- (void)setScene:(id)arg0;
- (id)values;
- (void)setValues:(id)arg0;
- (id)scene;

@end
