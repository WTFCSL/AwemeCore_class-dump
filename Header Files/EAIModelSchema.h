//
//     Generated by private class-dump
//

@class NSString, EAIModelSchemaIn, EAIModelSchemaOut;

@interface EAIModelSchema : MTLModel <MTLJSONSerializing> {
    EAIModelSchemaIn *_schemaIn;
    EAIModelSchemaOut *_schemaout;
}

@property (retain, nonatomic) EAIModelSchemaIn *schemaIn;
@property (retain, nonatomic) EAIModelSchemaOut *schemaout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)schemaIn;
- (void)setSchemaIn:(id)arg0;
- (id)schemaout;
- (void)setSchemaout:(id)arg0;
- (void).cxx_destruct;

@end
