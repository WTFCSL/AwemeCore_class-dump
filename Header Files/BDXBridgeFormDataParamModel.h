//
//     Generated by private class-dump
//

@class NSString;

@interface BDXBridgeFormDataParamModel : BDXBridgeModel {
    NSString *_key;
    NSString *_value;
}

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *value;

+ (id)requiredKeyPaths;
+ (id)formDataParamWithKey:(id)arg0 andValue:(id)arg1;
+ (id)JSONKeyPathsByPropertyKey;

- (id)key;
- (void).cxx_destruct;
- (id)value;
- (void)setKey:(id)arg0;
- (void)setValue:(id)arg0;

@end
