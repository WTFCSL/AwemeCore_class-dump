//
//     Generated by private class-dump
//

@class NSString, IESECLiveGoodsExtraModel, NSDictionary, NSNumber;

@interface IESECLiveGoodsPriceInfoModel : MTLModel <MTLJSONSerializing> {
    NSNumber *_productID;
    NSString *_priceHeader;
    NSNumber *_minPrice;
    NSNumber *_maxPrice;
    NSString *_minPriceStr;
    NSNumber *_marketPrice;
    IESECLiveGoodsExtraModel *_extra;
    NSDictionary *_updatedEventParam;
}

@property (retain, nonatomic) NSNumber *productID;
@property (copy, nonatomic) NSString *priceHeader;
@property (retain, nonatomic) NSNumber *minPrice;
@property (retain, nonatomic) NSNumber *maxPrice;
@property (copy, nonatomic) NSString *minPriceStr;
@property (retain, nonatomic) NSNumber *marketPrice;
@property (retain, nonatomic) IESECLiveGoodsExtraModel *extra;
@property (retain, nonatomic) NSDictionary *updatedEventParam;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setExtra:(id)arg0;
- (id)minPrice;
- (void)setMinPrice:(id)arg0;
- (id)maxPrice;
- (void)setMaxPrice:(id)arg0;
- (id)marketPrice;
- (void)setMarketPrice:(id)arg0;
- (id)priceHeader;
- (void)setPriceHeader:(id)arg0;
- (id)minPriceStr;
- (void)setMinPriceStr:(id)arg0;
- (id)updatedEventParam;
- (void)setUpdatedEventParam:(id)arg0;
- (id)productID;
- (void).cxx_destruct;
- (void)setProductID:(id)arg0;
- (id)extra;

@end
