//
//     Generated by private class-dump
//

@class NSDictionary, IESECGoodsDetailProcessFlowBizMeta;

@interface IESECGoodsDetailProcessFlowMetaModel : IESECBaseApiModel {
    NSDictionary *_trackMeta;
    IESECGoodsDetailProcessFlowBizMeta *_businessMeta;
}

@property (copy, nonatomic) NSDictionary *trackMeta;
@property (copy, nonatomic) IESECGoodsDetailProcessFlowBizMeta *businessMeta;

+ (id)JSONKeyPathsByPropertyKey;

- (id)trackMeta;
- (void)setTrackMeta:(id)arg0;
- (id)businessMeta;
- (void)setBusinessMeta:(id)arg0;
- (void).cxx_destruct;

@end
