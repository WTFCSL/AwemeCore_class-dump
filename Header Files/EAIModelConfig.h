//
//     Generated by private class-dump
//

@class NSString, EAIModelSchema, EAIModelFileUrl;

@interface EAIModelConfig : MTLModel <MTLJSONSerializing> {
    int _status;
    int _type;
    NSString *_name;
    NSString *_version;
    EAIModelFileUrl *_fileUrl;
    EAIModelSchema *_schema;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *version;
@property (retain, nonatomic) EAIModelFileUrl *fileUrl;
@property (nonatomic) int status;
@property (nonatomic) int type;
@property (retain, nonatomic) EAIModelSchema *schema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setSchema:(id)arg0;
- (void)setVersion:(id)arg0;
- (void).cxx_destruct;
- (int)status;
- (int)type;
- (void)setType:(int)arg0;
- (id)version;
- (void)setStatus:(int)arg0;
- (void)setName:(id)arg0;
- (id)schema;
- (id)name;
- (id)fileUrl;
- (void)setFileUrl:(id)arg0;

@end