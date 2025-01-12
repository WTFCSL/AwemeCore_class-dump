//
//     Generated by private class-dump
//

@class NSString;

@interface CJPayFeeQueryResponse : CJPayBaseResponse {
    long long _totalAmount;
    long long _realFee;
    long long _freeQuotaFee;
    long long _freeQuota;
    long long _arrivalAmount;
    NSString *_feeRate;
    long long _minimumFee;
    long long _availableFreeQuota;
    long long _decreaseBalance;
    NSString *_freeQuotaUrl;
}

@property (nonatomic) long long totalAmount;
@property (nonatomic) long long realFee;
@property (nonatomic) long long freeQuotaFee;
@property (nonatomic) long long freeQuota;
@property (nonatomic) long long arrivalAmount;
@property (copy, nonatomic) NSString *feeRate;
@property (nonatomic) long long minimumFee;
@property (nonatomic) long long availableFreeQuota;
@property (nonatomic) long long decreaseBalance;
@property (copy, nonatomic) NSString *freeQuotaUrl;

+ (id)keyMapper;

- (long long)realFee;
- (void)setRealFee:(long long)arg0;
- (long long)freeQuotaFee;
- (void)setFreeQuotaFee:(long long)arg0;
- (long long)freeQuota;
- (void)setFreeQuota:(long long)arg0;
- (long long)arrivalAmount;
- (void)setArrivalAmount:(long long)arg0;
- (id)feeRate;
- (void)setFeeRate:(id)arg0;
- (long long)availableFreeQuota;
- (void)setAvailableFreeQuota:(long long)arg0;
- (long long)decreaseBalance;
- (void)setDecreaseBalance:(long long)arg0;
- (id)freeQuotaUrl;
- (void)setFreeQuotaUrl:(id)arg0;
- (void).cxx_destruct;
- (long long)totalAmount;
- (void)setTotalAmount:(long long)arg0;
- (long long)minimumFee;
- (void)setMinimumFee:(long long)arg0;

@end
