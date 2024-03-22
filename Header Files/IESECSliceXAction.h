//
//     Generated by private class-dump
//

@class NSDictionary, NSString, NSArray;

@interface IESECSliceXAction : IESECSliceXBaseModel <IESECSliceXJSONSerializing> {
    BOOL _disable;
    NSString *_type;
    NSDictionary *_fields;
    NSArray *_actions;
    NSDictionary *_originActionDict;
    NSDictionary *_fieldsExprMap;
}

@property (retain, nonatomic) NSDictionary *fieldsExprMap;
@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) NSDictionary *fields;
@property (retain, nonatomic) NSArray *actions;
@property (nonatomic) BOOL disable;
@property (retain, nonatomic) NSDictionary *originActionDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelWithDict:(id)arg0 context:(id)arg1;
+ (id)propertyKeyWithJSONKey;
+ (id)containerPropertyWithGenericClass;

- (void)setDisable:(BOOL)arg0;
- (void)setFieldsExprMap:(id)arg0;
- (void)setOriginActionDict:(id)arg0;
- (id)originActionDict;
- (id)fieldsExprMap;
- (void).cxx_destruct;
- (void)setFields:(id)arg0;
- (id)fields;
- (id)actions;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)type;
- (void)updateModelWithData:(id)arg0;
- (void)setType:(id)arg0;
- (void)setActions:(id)arg0;
- (BOOL)disable;

@end