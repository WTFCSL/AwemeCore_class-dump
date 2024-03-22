//
//     Generated by private class-dump
//

@class NSString;

@interface BDPCDDynamicCardLowestPriceModel : BDPCDDynamicCardAtomicModel {
    BOOL _disabled;
    NSString *_textContent;
    NSString *_discount;
    NSString *_originPrice;
    NSString *_currentPrice;
    NSString *_currentPricePrefix;
}

@property (nonatomic) BOOL disabled;
@property (copy, nonatomic) NSString *textContent;
@property (copy, nonatomic) NSString *discount;
@property (copy, nonatomic) NSString *originPrice;
@property (copy, nonatomic) NSString *currentPrice;
@property (copy, nonatomic) NSString *currentPricePrefix;

- (id)originPrice;
- (void)setOriginPrice:(id)arg0;
- (id)discount;
- (void)setDiscount:(id)arg0;
- (id)currentPrice;
- (void)setCurrentPrice:(id)arg0;
- (id)currentPricePrefix;
- (id)priceTextWithDict:(id)arg0;
- (void)setCurrentPricePrefix:(id)arg0;
- (BOOL)disabled;
- (void)setDisabled:(BOOL)arg0;
- (void).cxx_destruct;
- (id)initWithDict:(id)arg0;
- (id)textContent;
- (void)setTextContent:(id)arg0;

@end
