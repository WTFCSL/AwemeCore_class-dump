//
//     Generated by private class-dump
//

@class NSString, IESECGoodsDetailModel, IESECRecommendReasonModel;

@interface IESECRecommmendCommonPromotionWrapperModel : MTLModel <MTLJSONSerializing> {
    BOOL _isInLive;
    NSString *_pID;
    IESECGoodsDetailModel *_promotionInfo;
    NSString *_recommendInfo;
    IESECRecommendReasonModel *_recReason;
    NSString *_coverTag;
    NSString *_discountContent;
}

@property (copy, nonatomic) NSString *pID;
@property (retain, nonatomic) IESECGoodsDetailModel *promotionInfo;
@property (copy, nonatomic) NSString *recommendInfo;
@property (retain, nonatomic) IESECRecommendReasonModel *recReason;
@property (nonatomic) BOOL isInLive;
@property (copy, nonatomic) NSString *coverTag;
@property (copy, nonatomic) NSString *discountContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)recommendInfo;
- (void)setRecommendInfo:(id)arg0;
- (void)setPID:(id)arg0;
- (id)pID;
- (id)promotionInfo;
- (void)setPromotionInfo:(id)arg0;
- (BOOL)isInLive;
- (id)discountContent;
- (void)setDiscountContent:(id)arg0;
- (id)recReason;
- (void)setRecReason:(id)arg0;
- (BOOL)hasRecReason;
- (void)setIsInLive:(BOOL)arg0;
- (id)coverTag;
- (void)setCoverTag:(id)arg0;
- (void).cxx_destruct;

@end
