//
//     Generated by private class-dump
//

@class NSDictionary, IESECGoodsDetailShopBusinessMetaModel, NSString;

@interface IESECGoodsDetailShopMetaModel : MTLModel <MTLJSONSerializing> {
    NSDictionary *_trackMeta;
    IESECGoodsDetailShopBusinessMetaModel *_businessMeta;
}

@property (copy, nonatomic) NSDictionary *trackMeta;
@property (retain, nonatomic) IESECGoodsDetailShopBusinessMetaModel *businessMeta;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)trackMeta;
- (void)setTrackMeta:(id)arg0;
- (id)businessMeta;
- (void)setBusinessMeta:(id)arg0;
- (void).cxx_destruct;

@end