//
//     Generated by private class-dump
//

@class NSString;

@interface AWEPOIInStoreCouponModel : MTLModel <MTLJSONSerializing> {
    NSString *_title;
    NSString *_subtitle;
    NSString *_priceTitle;
    NSString *_priceSubtitle;
    NSString *_benefitEntityId;
    long long _couponId;
    long long _couponType;
    NSString *_couponTag;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *priceTitle;
@property (copy, nonatomic) NSString *priceSubtitle;
@property (copy, nonatomic) NSString *benefitEntityId;
@property (nonatomic) long long couponId;
@property (nonatomic) long long couponType;
@property (copy, nonatomic) NSString *couponTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setCouponId:(long long)arg0;
- (long long)couponId;
- (long long)couponType;
- (void)setCouponType:(long long)arg0;
- (id)priceTitle;
- (id)priceSubtitle;
- (void)setPriceTitle:(id)arg0;
- (void)setPriceSubtitle:(id)arg0;
- (id)benefitEntityId;
- (void)setBenefitEntityId:(id)arg0;
- (id)couponTag;
- (void)setCouponTag:(id)arg0;
- (void).cxx_destruct;
- (id)title;
- (id)subtitle;
- (void)setSubtitle:(id)arg0;
- (void)setTitle:(id)arg0;

@end
