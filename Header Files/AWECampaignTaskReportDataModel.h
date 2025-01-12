//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AWECampaignTaskReportDataModel : MTLModel <MTLJSONSerializing> {
    NSArray *_schemaList;
    NSArray *_popSchemaList;
    NSArray *_instanceList;
    NSString *_message;
}

@property (retain, nonatomic) NSArray *schemaList;
@property (retain, nonatomic) NSArray *popSchemaList;
@property (retain, nonatomic) NSArray *instanceList;
@property (copy, nonatomic) NSString *message;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instanceListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)popSchemaList;
- (id)schemaList;
- (void)setSchemaList:(id)arg0;
- (id)instanceList;
- (void)setPopSchemaList:(id)arg0;
- (void)setInstanceList:(id)arg0;
- (void)setMessage:(id)arg0;
- (void).cxx_destruct;
- (id)message;

@end
