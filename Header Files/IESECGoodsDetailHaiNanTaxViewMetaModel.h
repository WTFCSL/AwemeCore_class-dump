//
//     Generated by private class-dump
//

@class NSDictionary, NSString, IESECGoodsDetailHaiNanTaxViewBusinessMetaModel;

@interface IESECGoodsDetailHaiNanTaxViewMetaModel : MTLModel <MTLJSONSerializing> {
    NSDictionary *_trackMetaParams;
    IESECGoodsDetailHaiNanTaxViewBusinessMetaModel *_businessMetaParams;
}

@property (retain, nonatomic) NSDictionary *trackMetaParams;
@property (retain, nonatomic) IESECGoodsDetailHaiNanTaxViewBusinessMetaModel *businessMetaParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)businessMetaParams;
- (id)trackMetaParams;
- (void)setTrackMetaParams:(id)arg0;
- (void)setBusinessMetaParams:(id)arg0;
- (void).cxx_destruct;

@end
