//
//     Generated by private class-dump
//

@class NSString;

@interface AWESecurityRiskWarningParamModel : MTLModel <MTLJSONSerializing> {
    long long _paramType;
    NSString *_key;
    NSString *_text;
    NSString *_target;
}

@property (nonatomic) long long paramType;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setParamType:(long long)arg0;
- (id)key;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (void)setTarget:(id)arg0;
- (id)target;
- (void)setKey:(id)arg0;
- (id)text;
- (long long)paramType;

@end
