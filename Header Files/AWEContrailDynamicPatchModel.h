//
//     Generated by private class-dump
//

@class NSDictionary, NSString;

@interface AWEContrailDynamicPatchModel : MTLModel <MTLJSONSerializing> {
    NSDictionary *_rawData;
    NSString *_schema;
    NSDictionary *_clientData;
}

@property (copy, nonatomic) NSDictionary *rawData;
@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) NSDictionary *clientData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithParams:(id)arg0 schema:(id)arg1 clientData:(id)arg2;
- (void)setSchema:(id)arg0;
- (void).cxx_destruct;
- (void)setClientData:(id)arg0;
- (id)rawData;
- (void)setRawData:(id)arg0;
- (id)clientData;
- (id)schema;

@end
