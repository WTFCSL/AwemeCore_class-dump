//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface EAIConfigOneHotValueRuleContent : MTLModel <MTLJSONSerializing> {
    NSArray *_enums;
    NSString *_other;
}

@property (retain, nonatomic) NSArray *enums;
@property (copy, nonatomic) NSString *other;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setEnums:(id)arg0;
- (void).cxx_destruct;
- (id)other;
- (void)setOther:(id)arg0;
- (id)enums;

@end