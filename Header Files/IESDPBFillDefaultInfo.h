//
//     Generated by private class-dump
//

@class NSString, IESDPBDefinitionNodeProperty, NSMutableDictionary;

@interface IESDPBFillDefaultInfo : NSObject {
    NSString *_key;
    IESDPBDefinitionNodeProperty *_value;
    NSMutableDictionary *_context;
}

@property (retain, nonatomic) NSString *key;
@property (weak, nonatomic) IESDPBDefinitionNodeProperty *value;
@property (weak, nonatomic) NSMutableDictionary *context;

+ (void)fillDefaultValueFor:(id)arg0 defConf:(id)arg1 defNode:(id)arg2 context:(id)arg3;

- (BOOL)isFQValue;
- (BOOL)isMapValue;
- (BOOL)isNormalValue;
- (id)key;
- (void).cxx_destruct;
- (id)value;
- (void)setContext:(id)arg0;
- (void)setKey:(id)arg0;
- (id)context;
- (id)initWithKey:(id)arg0 value:(id)arg1;
- (void)setValue:(id)arg0;

@end
