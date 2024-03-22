//
//     Generated by private class-dump
//

@class NSString, NSDictionary, CJPayBindCardVoucherInfo;

@interface CJPayMemBankInfoModel : JSONModel {
    NSString *_bankCardID;
    NSString *_bankCode;
    NSString *_bankName;
    NSString *_cardType;
    NSString *_iconURL;
    NSString *_cardNoMask;
    NSString *_cardNumStr;
    NSString *_perpayLimit;
    NSString *_perdayLimit;
    double _cellHeight;
    NSString *_cardBinVoucher;
    NSDictionary *_voucherInfoDict;
    CJPayBindCardVoucherInfo *_debitBindCardVoucherInfo;
    CJPayBindCardVoucherInfo *_creditBindCardVoucherInfo;
}

@property (copy, nonatomic) NSString *bankCardID;
@property (copy, nonatomic) NSString *bankCode;
@property (copy, nonatomic) NSString *bankName;
@property (copy, nonatomic) NSString *cardType;
@property (copy, nonatomic) NSString *iconURL;
@property (copy, nonatomic) NSString *cardNoMask;
@property (copy, nonatomic) NSString *cardNumStr;
@property (copy, nonatomic) NSString *perpayLimit;
@property (copy, nonatomic) NSString *perdayLimit;
@property (nonatomic) double cellHeight;
@property (copy, nonatomic) NSString *cardBinVoucher;
@property (copy, nonatomic) NSDictionary *voucherInfoDict;
@property (retain, nonatomic) CJPayBindCardVoucherInfo *debitBindCardVoucherInfo;
@property (retain, nonatomic) CJPayBindCardVoucherInfo *creditBindCardVoucherInfo;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (id)bankCode;
- (void)setBankCode:(id)arg0;
- (id)cardNoMask;
- (void)setCardNoMask:(id)arg0;
- (id)perdayLimit;
- (void)setPerdayLimit:(id)arg0;
- (id)perpayLimit;
- (void)setPerpayLimit:(id)arg0;
- (id)bankCardID;
- (void)setBankCardID:(id)arg0;
- (void)setVoucherInfoDict:(id)arg0;
- (id)cardBinVoucher;
- (void)setCardBinVoucher:(id)arg0;
- (id)voucherInfoDict;
- (id)debitBindCardVoucherInfo;
- (id)creditBindCardVoucherInfo;
- (id)toQuickPayCardModel;
- (id)cardNumStr;
- (void)setCardNumStr:(id)arg0;
- (void)setDebitBindCardVoucherInfo:(id)arg0;
- (void)setCreditBindCardVoucherInfo:(id)arg0;
- (void).cxx_destruct;
- (void)setIconURL:(id)arg0;
- (id)iconURL;
- (id)cardType;
- (void)setCardType:(id)arg0;
- (double)cellHeight;
- (void)setCellHeight:(double)arg0;
- (id)bankName;
- (void)setBankName:(id)arg0;

@end
