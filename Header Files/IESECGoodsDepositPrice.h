//
//     Generated by private class-dump
//

@class NSNumber, NSString;

@interface IESECGoodsDepositPrice : MTLModel <MTLJSONSerializing> {
    NSNumber *_depositPrice;
    NSNumber *_discountMinPrice;
    NSNumber *_discountMaxPrice;
}

@property (retain, nonatomic) NSNumber *depositPrice;
@property (retain, nonatomic) NSNumber *discountMinPrice;
@property (retain, nonatomic) NSNumber *discountMaxPrice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)discountMinPrice;
- (void)setDiscountMinPrice:(id)arg0;
- (id)discountMaxPrice;
- (id)depositPrice;
- (void)setDepositPrice:(id)arg0;
- (void)setDiscountMaxPrice:(id)arg0;
- (void).cxx_destruct;

@end
