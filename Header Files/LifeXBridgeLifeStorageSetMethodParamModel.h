//
//     Generated by private class-dump
//

@class NSString;

@interface LifeXBridgeLifeStorageSetMethodParamModel : BDXBridgeModel {
    NSString *_key;
    NSString *_domain;
    id _value;
}

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *domain;
@property (retain, nonatomic) id value;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (id)key;
- (void).cxx_destruct;
- (id)value;
- (void)setKey:(id)arg0;
- (id)domain;
- (void)setValue:(id)arg0;
- (void)setDomain:(id)arg0;

@end
