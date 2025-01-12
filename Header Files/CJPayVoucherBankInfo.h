//
//     Generated by private class-dump
//

@class NSString;

@interface CJPayVoucherBankInfo : JSONModel {
    NSString *_iconUrl;
    NSString *_cardVoucherMsg;
    NSString *_cardBinVoucherMsg;
    NSString *_voucherBank;
}

@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *cardVoucherMsg;
@property (copy, nonatomic) NSString *cardBinVoucherMsg;
@property (copy, nonatomic) NSString *voucherBank;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (id)iconUrl;
- (void)setIconUrl:(id)arg0;
- (id)voucherBank;
- (void)setVoucherBank:(id)arg0;
- (id)cardVoucherMsg;
- (id)cardBinVoucherMsg;
- (void)setCardVoucherMsg:(id)arg0;
- (void)setCardBinVoucherMsg:(id)arg0;
- (void).cxx_destruct;
- (BOOL)hasVoucher;

@end
