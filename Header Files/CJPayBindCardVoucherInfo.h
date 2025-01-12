//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface CJPayBindCardVoucherInfo : JSONModel {
    NSString *_voucherMsg;
    NSArray *_vouchers;
    NSString *_binVoucherMsg;
    NSString *_aggregateVoucherMsg;
    long long _isNotShowPromotion;
}

@property (copy, nonatomic) NSString *voucherMsg;
@property (copy, nonatomic) NSArray *vouchers;
@property (copy, nonatomic) NSString *binVoucherMsg;
@property (copy, nonatomic) NSString *aggregateVoucherMsg;
@property (nonatomic) long long isNotShowPromotion;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (void)setVoucherMsg:(id)arg0;
- (id)voucherMsg;
- (id)binVoucherMsg;
- (void)setBinVoucherMsg:(id)arg0;
- (id)aggregateVoucherMsg;
- (void)setAggregateVoucherMsg:(id)arg0;
- (long long)isNotShowPromotion;
- (void)setIsNotShowPromotion:(long long)arg0;
- (void).cxx_destruct;
- (id)vouchers;
- (void)setVouchers:(id)arg0;

@end
