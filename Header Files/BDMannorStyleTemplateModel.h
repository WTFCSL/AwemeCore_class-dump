//
//     Generated by private class-dump
//

@class NSNumber, NSDictionary, NSString;

@interface BDMannorStyleTemplateModel : MTLModel <MTLJSONSerializing> {
    NSNumber *_templateID;
    NSDictionary *_componentData;
    NSDictionary *_componentRelation;
}

@property (retain, nonatomic) NSNumber *templateID;
@property (copy, nonatomic) NSDictionary *componentData;
@property (copy, nonatomic) NSDictionary *componentRelation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)componentDataJSONTransformer;
+ (id)componentRelationJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)componentData;
- (void)setComponentData:(id)arg0;
- (id)componentRelation;
- (void)setComponentRelation:(id)arg0;
- (void).cxx_destruct;
- (id)templateID;
- (void)setTemplateID:(id)arg0;

@end