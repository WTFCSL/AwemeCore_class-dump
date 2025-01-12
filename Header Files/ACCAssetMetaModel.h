//
//     Generated by private class-dump
//

@class NSString, ACCMomentWorkMetaModel;

@interface ACCAssetMetaModel : MTLModel <MTLJSONSerializing> {
    NSString *_product;
    NSString *_propList;
    NSString *_duetOriginID;
    NSString *_duetFrom;
    ACCMomentWorkMetaModel *_momentWorkMeta;
}

@property (copy, nonatomic) NSString *product;
@property (copy, nonatomic) NSString *propList;
@property (copy, nonatomic) NSString *duetOriginID;
@property (copy, nonatomic) NSString *duetFrom;
@property (retain, nonatomic) ACCMomentWorkMetaModel *momentWorkMeta;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)propListJSONTransformer;
+ (id)momentWorkMetaJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)duetOriginID;
- (void)setDuetOriginID:(id)arg0;
- (id)propList;
- (void)setPropList:(id)arg0;
- (void)setDuetFrom:(id)arg0;
- (id)duetFrom;
- (id)momentWorkMeta;
- (void)setMomentWorkMeta:(id)arg0;
- (void).cxx_destruct;
- (id)product;
- (void)setProduct:(id)arg0;

@end
