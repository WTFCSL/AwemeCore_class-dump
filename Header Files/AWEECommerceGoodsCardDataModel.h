//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface AWEECommerceGoodsCardDataModel : AWEBaseApiModel {
    NSString *_promotionId;
    NSDictionary *_promotionInfo;
    NSDictionary *_recommendInfo;
    NSString *_link;
}

@property (copy, nonatomic) NSString *promotionId;
@property (copy, nonatomic) NSDictionary *promotionInfo;
@property (copy, nonatomic) NSDictionary *recommendInfo;
@property (copy, nonatomic) NSString *link;

+ (id)JSONKeyPathsByPropertyKey;

- (id)promotionId;
- (void)setPromotionId:(id)arg0;
- (id)recommendInfo;
- (void)setRecommendInfo:(id)arg0;
- (id)promotionInfo;
- (void)setPromotionInfo:(id)arg0;
- (void)setLink:(id)arg0;
- (void).cxx_destruct;
- (id)link;

@end