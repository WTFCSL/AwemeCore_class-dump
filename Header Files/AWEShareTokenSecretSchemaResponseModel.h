//
//     Generated by private class-dump
//

@class NSString, AWEShareTokenSecretSchemaDataResponseModel;

@interface AWEShareTokenSecretSchemaResponseModel : MTLModel <MTLJSONSerializing> {
    unsigned long long _st;
    NSString *_msg;
    AWEShareTokenSecretSchemaDataResponseModel *_data;
}

@property (nonatomic) unsigned long long st;
@property (copy, nonatomic) NSString *msg;
@property (retain, nonatomic) AWEShareTokenSecretSchemaDataResponseModel *data;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setSt:(unsigned long long)arg0;
- (id)data;
- (void).cxx_destruct;
- (void)setData:(id)arg0;
- (unsigned long long)st;
- (id)msg;
- (void)setMsg:(id)arg0;

@end
