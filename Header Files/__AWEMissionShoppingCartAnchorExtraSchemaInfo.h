//
//     Generated by private class-dump
//

@class NSString;

@interface __AWEMissionShoppingCartAnchorExtraSchemaInfo : MTLModel <MTLJSONSerializing> {
    long long _type;
    NSString *_schema;
}

@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *schema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setSchema:(id)arg0;
- (void).cxx_destruct;
- (long long)type;
- (void)setType:(long long)arg0;
- (id)schema;

@end
