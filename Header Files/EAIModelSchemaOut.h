//
//     Generated by private class-dump
//

@class NSString;

@interface EAIModelSchemaOut : MTLModel <MTLJSONSerializing> {
    int _index;
    int _valueSize;
    NSString *_valueType;
}

@property (nonatomic) int index;
@property (copy, nonatomic) NSString *valueType;
@property (nonatomic) int valueSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setIndex:(int)arg0;
- (void).cxx_destruct;
- (id)valueType;
- (void)setValueType:(id)arg0;
- (int)index;
- (int)valueSize;
- (void)setValueSize:(int)arg0;

@end