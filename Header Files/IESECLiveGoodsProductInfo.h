//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface IESECLiveGoodsProductInfo : NSObject {
    BOOL _priceCondition;
    NSString *_productID;
    NSString *_promotionID;
    unsigned long long _explainType;
    NSArray *_payLoad;
}

@property (copy, nonatomic) NSString *productID;
@property (copy, nonatomic) NSString *promotionID;
@property (nonatomic) unsigned long long explainType;
@property (retain, nonatomic) NSArray *payLoad;
@property (nonatomic) BOOL priceCondition;

+ (id)productInfoFromGoodsModel:(id)arg0 payLoadUpdateType:(long long)arg1;

- (id)promotionID;
- (void)setPromotionID:(id)arg0;
- (void)setPayLoad:(id)arg0;
- (id)payLoad;
- (void)setExplainType:(unsigned long long)arg0;
- (unsigned long long)explainType;
- (BOOL)priceCondition;
- (void)setPriceCondition:(BOOL)arg0;
- (id)productID;
- (void).cxx_destruct;
- (void)setProductID:(id)arg0;

@end