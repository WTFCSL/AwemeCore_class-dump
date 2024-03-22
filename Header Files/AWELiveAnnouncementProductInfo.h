//
//     Generated by private class-dump
//

@class NSString;

@interface AWELiveAnnouncementProductInfo : AWEBaseApiModel {
    NSString *_promotionId;
    NSString *_productId;
    NSString *_title;
    NSString *_coverUrl;
    NSString *_priceText;
    NSString *_scheme;
    NSString *_pricePrefix;
}

@property (copy, nonatomic) NSString *promotionId;
@property (copy, nonatomic) NSString *productId;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *coverUrl;
@property (copy, nonatomic) NSString *priceText;
@property (copy, nonatomic) NSString *scheme;
@property (copy, nonatomic) NSString *pricePrefix;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setCoverUrl:(id)arg0;
- (id)coverUrl;
- (id)promotionId;
- (void)setPromotionId:(id)arg0;
- (id)pricePrefix;
- (void)setPricePrefix:(id)arg0;
- (void)setScheme:(id)arg0;
- (void).cxx_destruct;
- (id)scheme;
- (id)title;
- (id)productId;
- (void)setTitle:(id)arg0;
- (void)setProductId:(id)arg0;
- (id)priceText;
- (void)setPriceText:(id)arg0;

@end
