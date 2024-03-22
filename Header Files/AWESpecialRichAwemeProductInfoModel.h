//
//     Generated by private class-dump
//

@class NSString;

@interface AWESpecialRichAwemeProductInfoModel : AWEBaseApiModel {
    long long _productId;
    long long _commentCount;
    long long _price;
    long long _maxPrice;
    NSString *_priceDescriptionString;
    NSString *_salesString;
    NSString *_commodityId;
    long long _commodityType;
    long long _anchorType;
}

@property (nonatomic) long long productId;
@property (nonatomic) long long commentCount;
@property (nonatomic) long long price;
@property (nonatomic) long long maxPrice;
@property (copy, nonatomic) NSString *priceDescriptionString;
@property (copy, nonatomic) NSString *salesString;
@property (copy, nonatomic) NSString *commodityId;
@property (nonatomic) long long commodityType;
@property (nonatomic) long long anchorType;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)maxPrice;
- (void)setMaxPrice:(long long)arg0;
- (id)priceDescriptionString;
- (void)setPriceDescriptionString:(id)arg0;
- (id)salesString;
- (void)setSalesString:(id)arg0;
- (id)commodityId;
- (void)setCommodityId:(id)arg0;
- (long long)commodityType;
- (void)setCommodityType:(long long)arg0;
- (long long)price;
- (long long)anchorType;
- (void).cxx_destruct;
- (long long)productId;
- (void)setPrice:(long long)arg0;
- (long long)commentCount;
- (void)setProductId:(long long)arg0;
- (void)setCommentCount:(long long)arg0;
- (void)setAnchorType:(long long)arg0;

@end
