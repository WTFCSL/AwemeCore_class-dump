//
//     Generated by private class-dump
//

@class NSArray, NSString, NSDictionary;

@interface AWEECOMIMCouponModel : NSObject <AWEECOMIMSubCardCouponProtocol> {
    BOOL _isCouponReceived;
    BOOL _shouldHiddenReceivedImg;
    NSString *_couponName;
    NSString *_urlString;
    long long _originCouponType;
    long long _couponType;
    long long _kefuCouponType;
    long long _periodType;
    long long _validPeriod;
    NSString *_startTimeString;
    NSString *_expiretimeString;
    long long _status;
    NSString *_couponMetaId;
    NSString *_couponId;
    NSString *_couponUserId;
    NSString *_couponSrc;
    NSString *_extraMap;
    NSString *_shopId;
    NSString *_couponTypeString;
    NSString *_disCountDisplayString;
    NSString *_disCountString;
    long long _disCountInFen;
    long long _creditInFen;
    long long _thresholdInFen;
    NSString *_thresholdString;
    NSString *_couponTypeDesc;
    NSString *_couponValidTimeStr;
    NSDictionary *_extraMapDict;
    NSArray *_discountTypeArr;
    NSArray *_amountTypeArr;
    NSArray *_fullAmountTypeArr;
}

@property (copy, nonatomic) NSArray *discountTypeArr;
@property (copy, nonatomic) NSArray *amountTypeArr;
@property (copy, nonatomic) NSArray *fullAmountTypeArr;
@property (copy, nonatomic) NSString *disCountDisplayString;
@property (copy, nonatomic) NSString *couponName;
@property (copy, nonatomic) NSString *urlString;
@property (nonatomic) long long originCouponType;
@property (nonatomic) long long couponType;
@property (nonatomic) long long kefuCouponType;
@property (nonatomic) long long periodType;
@property (nonatomic) long long validPeriod;
@property (copy, nonatomic) NSString *startTimeString;
@property (copy, nonatomic) NSString *expiretimeString;
@property (nonatomic) long long status;
@property (copy, nonatomic) NSString *couponMetaId;
@property (copy, nonatomic) NSString *couponId;
@property (copy, nonatomic) NSString *couponUserId;
@property (copy, nonatomic) NSString *couponSrc;
@property (copy, nonatomic) NSString *extraMap;
@property (copy, nonatomic) NSString *shopId;
@property (copy, nonatomic) NSString *couponTypeString;
@property (copy, nonatomic) NSString *disCountString;
@property (nonatomic) long long disCountInFen;
@property (nonatomic) long long creditInFen;
@property (nonatomic) long long thresholdInFen;
@property (copy, nonatomic) NSString *thresholdString;
@property (readonly, copy, nonatomic) NSString *couponDesc;
@property (copy, nonatomic) NSString *couponTypeDesc;
@property (copy, nonatomic) NSString *couponValidTimeStr;
@property (readonly, copy, nonatomic) NSString *couponBtnText;
@property (readonly, nonatomic) BOOL isCouponReceived;
@property (readonly, nonatomic) BOOL isCouponValid;
@property (copy, nonatomic) NSDictionary *extraMapDict;
@property (nonatomic) BOOL shouldHiddenReceivedImg;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)showOnePriceNum:(long long)arg0;

- (void)setCouponId:(id)arg0;
- (void)setCouponName:(id)arg0;
- (id)couponId;
- (id)couponName;
- (id)extraMap;
- (void)setExtraMap:(id)arg0;
- (id)shopId;
- (void)setShopId:(id)arg0;
- (long long)couponType;
- (void)setCouponType:(long long)arg0;
- (id)couponDesc;
- (id)thresholdString;
- (id)disCountDisplayString;
- (id)couponValidTimeStr;
- (id)couponBtnText;
- (BOOL)isCouponValid;
- (BOOL)isCouponUnUsed;
- (BOOL)shouldHiddenReceivedImg;
- (BOOL)isCouponExpired;
- (id)couponMetaId;
- (BOOL)isCouponUsed;
- (BOOL)isCouponNotReceived;
- (id)couponUserId;
- (id)couponSrc;
- (id)extraMapDict;
- (void)setExpiretimeString:(id)arg0;
- (void)setShouldHiddenReceivedImg:(BOOL)arg0;
- (void)setDisCountString:(id)arg0;
- (void)setThresholdInFen:(long long)arg0;
- (void)setCreditInFen:(long long)arg0;
- (void)setValidPeriod:(long long)arg0;
- (void)setCouponMetaId:(id)arg0;
- (void)setCouponUserId:(id)arg0;
- (void)setCouponSrc:(id)arg0;
- (void)setExtraMapDict:(id)arg0;
- (void)setCouponTypeDesc:(id)arg0;
- (void)setOriginCouponType:(long long)arg0;
- (void)setKefuCouponType:(long long)arg0;
- (id)formatDateString:(id)arg0;
- (id)discountTypeArr;
- (id)amountTypeArr;
- (id)fullAmountTypeArr;
- (id)disCountString;
- (long long)creditInFen;
- (long long)thresholdInFen;
- (id)couponTypeDesc;
- (long long)kefuCouponType;
- (long long)validPeriod;
- (id)startTimeString;
- (id)expiretimeString;
- (id)validTimeDateStringWithStartTimeString:(id)arg0 expireTimeString:(id)arg1;
- (id)couponTypeString;
- (BOOL)isCouponReceived;
- (long long)originCouponType;
- (void)setCouponTypeString:(id)arg0;
- (void)setDisCountDisplayString:(id)arg0;
- (long long)disCountInFen;
- (void)setDisCountInFen:(long long)arg0;
- (void)setThresholdString:(id)arg0;
- (void)setCouponValidTimeStr:(id)arg0;
- (void)setDiscountTypeArr:(id)arg0;
- (void)setAmountTypeArr:(id)arg0;
- (void)setFullAmountTypeArr:(id)arg0;
- (id)urlString;
- (void).cxx_destruct;
- (long long)status;
- (void)setStatus:(long long)arg0;
- (void)setUrlString:(id)arg0;
- (long long)periodType;
- (void)setPeriodType:(long long)arg0;
- (void)setStartTimeString:(id)arg0;

@end