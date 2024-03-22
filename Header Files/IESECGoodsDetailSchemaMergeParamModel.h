//
//     Generated by private class-dump
//

@class NSString, IESECGoodsDetailSchemaMergeMergeParamsModel, NSDictionary;

@interface IESECGoodsDetailSchemaMergeParamModel : IESLiveBridgeModel {
    BOOL _avoidOpen;
    NSString *_schema;
    IESECGoodsDetailSchemaMergeMergeParamsModel *_mergeParams;
    NSString *_btm;
    NSDictionary *_bcmParams;
}

@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) IESECGoodsDetailSchemaMergeMergeParamsModel *mergeParams;
@property (nonatomic) BOOL avoidOpen;
@property (copy, nonatomic) NSString *btm;
@property (copy, nonatomic) NSDictionary *bcmParams;

+ (id)modelCustomPropertyMapper;

- (id)btm;
- (void)setBtm:(id)arg0;
- (id)bcmParams;
- (void)setBcmParams:(id)arg0;
- (id)mergeParams;
- (void)setMergeParams:(id)arg0;
- (BOOL)avoidOpen;
- (void)setAvoidOpen:(BOOL)arg0;
- (void)setSchema:(id)arg0;
- (void).cxx_destruct;
- (id)schema;

@end