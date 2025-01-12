//
//     Generated by private class-dump
//

@class NSString;

@interface HunterProcessorKVModel : MTLModel <MTLJSONSerializing> {
    NSString *_key;
    NSString *_value;
}

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)key;
- (void).cxx_destruct;
- (id)value;
- (void)setKey:(id)arg0;
- (void)setValue:(id)arg0;

@end
