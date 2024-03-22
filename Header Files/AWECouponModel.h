//
//     Generated by private class-dump
//

@class NSString, AWEURLModel;

@interface AWECouponModel : MTLModel <AWEStudioCouponModelProtocol, MTLJSONSerializing> {
    BOOL _isDefaultHeadImage;
    long long _couponID;
    long long _activityID;
    NSString *_merchantName;
    NSString *_discountInfo;
    NSString *_condition;
    NSString *_codeID;
    NSString *_code;
    AWEURLModel *_logoImageURL;
    AWEURLModel *_headerImageURL;
    NSString *_validStart;
    NSString *_validEnd;
    NSString *_validText;
    unsigned long long _couponStatus;
    unsigned long long _couponType;
    unsigned long long _sourceType;
    NSString *_reminder;
    NSString *_validityPeriodText;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long couponID;
@property (nonatomic) long long activityID;
@property (copy, nonatomic) NSString *merchantName;
@property (copy, nonatomic) NSString *discountInfo;
@property (copy, nonatomic) NSString *condition;
@property (copy, nonatomic) NSString *codeID;
@property (copy, nonatomic) NSString *code;
@property (retain, nonatomic) AWEURLModel *logoImageURL;
@property (retain, nonatomic) AWEURLModel *headerImageURL;
@property (copy, nonatomic) NSString *validStart;
@property (copy, nonatomic) NSString *validEnd;
@property (copy, nonatomic) NSString *validText;
@property (nonatomic) unsigned long long couponStatus;
@property (nonatomic) BOOL isDefaultHeadImage;
@property (nonatomic) unsigned long long couponType;
@property (nonatomic) unsigned long long sourceType;
@property (copy, nonatomic) NSString *reminder;
@property (copy, nonatomic) NSString *validityPeriodText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logoImageURLJSONTransformer;
+ (id)headerImageURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)discountInfo;
- (void)setDiscountInfo:(id)arg0;
- (unsigned long long)couponType;
- (long long)couponID;
- (void)setCouponID:(long long)arg0;
- (id)validStart;
- (void)setValidStart:(id)arg0;
- (id)validEnd;
- (void)setValidEnd:(id)arg0;
- (id)validText;
- (void)setValidText:(id)arg0;
- (unsigned long long)couponStatus;
- (void)setCouponStatus:(unsigned long long)arg0;
- (BOOL)isDefaultHeadImage;
- (void)setIsDefaultHeadImage:(BOOL)arg0;
- (void)setCouponType:(unsigned long long)arg0;
- (id)validityPeriodText;
- (void)setValidityPeriodText:(id)arg0;
- (id)couponStatusEventString;
- (id)condition;
- (void)setSourceType:(unsigned long long)arg0;
- (unsigned long long)sourceType;
- (void)setCode:(id)arg0;
- (id)code;
- (void).cxx_destruct;
- (void)setCondition:(id)arg0;
- (id)merchantName;
- (void)setMerchantName:(id)arg0;
- (long long)activityID;
- (id)logoImageURL;
- (id)sourceString;
- (id)reminder;
- (void)setLogoImageURL:(id)arg0;
- (void)setReminder:(id)arg0;
- (void)setActivityID:(long long)arg0;
- (id)headerImageURL;
- (void)setHeaderImageURL:(id)arg0;
- (id)codeID;
- (void)setCodeID:(id)arg0;

@end