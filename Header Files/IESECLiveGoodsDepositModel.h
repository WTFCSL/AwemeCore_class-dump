//
//     Generated by private class-dump
//

@class NSNumber, NSString;

@interface IESECLiveGoodsDepositModel : MTLModel <MTLJSONSerializing> {
    NSNumber *_originPrice;
    NSNumber *_depositPrice;
    NSString *_depositDiscountDesc;
}

@property (retain, nonatomic) NSNumber *originPrice;
@property (retain, nonatomic) NSNumber *depositPrice;
@property (retain, nonatomic) NSString *depositDiscountDesc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)originPrice;
- (void)setOriginPrice:(id)arg0;
- (id)depositPrice;
- (void)setDepositPrice:(id)arg0;
- (id)depositDiscountDesc;
- (void)setDepositDiscountDesc:(id)arg0;
- (void).cxx_destruct;

@end
