//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface IESECLiveGoodsListHeaderPromotionRightItemModel : MTLModel <MTLJSONSerializing> {
    NSString *_jumpURL;
    NSArray *_contentItems;
    NSString *_schemaParamType;
}

@property (copy, nonatomic) NSString *jumpURL;
@property (retain, nonatomic) NSArray *contentItems;
@property (copy, nonatomic) NSString *schemaParamType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contentItemsJSONTransformer;
+ (id)defaultContentItemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setJumpURL:(id)arg0;
- (id)jumpURL;
- (id)schemaParamType;
- (void)setSchemaParamType:(id)arg0;
- (void)setContentItems:(id)arg0;
- (void).cxx_destruct;
- (id)contentItems;

@end