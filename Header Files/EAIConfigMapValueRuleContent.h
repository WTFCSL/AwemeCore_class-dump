//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface EAIConfigMapValueRuleContent : MTLModel <MTLJSONSerializing> {
    NSArray *_keys;
    NSArray *_values;
}

@property (retain, nonatomic) NSArray *keys;
@property (retain, nonatomic) NSArray *values;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)keys;
- (void)setKeys:(id)arg0;
- (void).cxx_destruct;
- (id)values;
- (void)setValues:(id)arg0;

@end