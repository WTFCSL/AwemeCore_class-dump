//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface IESECRelationActivityDynamicComponentModel : MTLModel <MTLJSONSerializing> {
    NSString *_name;
    NSString *_data;
    NSString *_moduleUrl;
    unsigned long long _containerType;
    NSArray *_rules;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *data;
@property (copy, nonatomic) NSString *moduleUrl;
@property (nonatomic) unsigned long long containerType;
@property (copy, nonatomic) NSArray *rules;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)rulesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)moduleUrl;
- (void)setModuleUrl:(id)arg0;
- (id)data;
- (void).cxx_destruct;
- (void)setRules:(id)arg0;
- (void)setData:(id)arg0;
- (void)setName:(id)arg0;
- (id)rules;
- (id)name;
- (unsigned long long)containerType;
- (void)setContainerType:(unsigned long long)arg0;

@end
