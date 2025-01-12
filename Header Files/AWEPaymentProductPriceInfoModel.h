//
//     Generated by private class-dump
//

@class NSString;

@interface AWEPaymentProductPriceInfoModel : AWEBaseApiModel {
    NSString *_currencyType;
    NSString *_currentPrice;
    NSString *_originPrice;
    NSString *_priceUnit;
    NSString *_startHint;
}

@property (copy, nonatomic) NSString *currencyType;
@property (copy, nonatomic) NSString *currentPrice;
@property (copy, nonatomic) NSString *originPrice;
@property (copy, nonatomic) NSString *priceUnit;
@property (copy, nonatomic) NSString *startHint;

+ (id)JSONKeyPathsByPropertyKey;

- (id)currencyType;
- (void)setCurrencyType:(id)arg0;
- (id)originPrice;
- (void)setOriginPrice:(id)arg0;
- (id)currentPrice;
- (void)setCurrentPrice:(id)arg0;
- (id)priceUnit;
- (void)setPriceUnit:(id)arg0;
- (id)startHint;
- (void)setStartHint:(id)arg0;
- (void).cxx_destruct;

@end
