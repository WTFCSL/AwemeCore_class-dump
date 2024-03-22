//
//     Generated by private class-dump
//

@class NSString, CJPayVoucherInfoModel;

@interface CJPayCreditPayMethodModel : CJPayChannelModel {
    NSString *_installment;
    long long _fee;
    long long _payAmountPerInstallment;
    long long _totalAmountPerInstallment;
    NSString *_voucherFeeMsg;
    NSString *_voucherPlatformMsg;
    CJPayVoucherInfoModel *_voucherInfo;
    NSString *_standardRecDesc;
    NSString *_standardShowAmount;
    NSString *_standardVoucherLabel;
    NSString *_crossedPrice;
    NSString *_firstPageVoucherMsg;
}

@property (copy, nonatomic) NSString *installment;
@property (nonatomic) long long fee;
@property (nonatomic) long long payAmountPerInstallment;
@property (nonatomic) long long totalAmountPerInstallment;
@property (copy, nonatomic) NSString *voucherFeeMsg;
@property (copy, nonatomic) NSString *voucherPlatformMsg;
@property (retain, nonatomic) CJPayVoucherInfoModel *voucherInfo;
@property (copy, nonatomic) NSString *standardRecDesc;
@property (copy, nonatomic) NSString *standardShowAmount;
@property (copy, nonatomic) NSString *standardVoucherLabel;
@property (copy, nonatomic) NSString *crossedPrice;
@property (copy, nonatomic) NSString *firstPageVoucherMsg;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;
+ (id)basicDict;

- (id)voucherInfo;
- (void)setVoucherInfo:(id)arg0;
- (id)requestNeedParams;
- (id)buildShowConfig;
- (void)setStandardRecDesc:(id)arg0;
- (void)setStandardShowAmount:(id)arg0;
- (id)standardRecDesc;
- (id)standardShowAmount;
- (long long)fee;
- (id)standardVoucherLabel;
- (void)setStandardVoucherLabel:(id)arg0;
- (id)firstPageVoucherMsg;
- (void)setInstallment:(id)arg0;
- (void)setFee:(long long)arg0;
- (long long)payAmountPerInstallment;
- (void)setPayAmountPerInstallment:(long long)arg0;
- (long long)totalAmountPerInstallment;
- (void)setTotalAmountPerInstallment:(long long)arg0;
- (id)voucherFeeMsg;
- (void)setVoucherFeeMsg:(id)arg0;
- (id)voucherPlatformMsg;
- (void)setVoucherPlatformMsg:(id)arg0;
- (id)crossedPrice;
- (void)setCrossedPrice:(id)arg0;
- (void)setFirstPageVoucherMsg:(id)arg0;
- (void).cxx_destruct;
- (id)installment;

@end