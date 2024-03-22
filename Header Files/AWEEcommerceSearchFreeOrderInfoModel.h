//
//     Generated by private class-dump
//

@class NSDictionary, NSArray, AWEEcommerceSearchFreeOrderAtmosphereModel;

@interface AWEEcommerceSearchFreeOrderInfoModel : AWEBaseApiModel {
    double _awardExpireTime;
    NSDictionary *_awardExpiredTitle;
    NSArray *_awardExpiringDes;
    AWEEcommerceSearchFreeOrderAtmosphereModel *_singleColumnAtmosphere;
    AWEEcommerceSearchFreeOrderAtmosphereModel *_doubleColumnAtmosphere;
}

@property (nonatomic) double awardExpireTime;
@property (retain, nonatomic) NSDictionary *awardExpiredTitle;
@property (retain, nonatomic) NSArray *awardExpiringDes;
@property (retain, nonatomic) AWEEcommerceSearchFreeOrderAtmosphereModel *singleColumnAtmosphere;
@property (retain, nonatomic) AWEEcommerceSearchFreeOrderAtmosphereModel *doubleColumnAtmosphere;

+ (id)singleColumnAtmosphereJSONTransformer;
+ (id)doubleColumnAtmosphereJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (double)awardExpireTime;
- (void)setAwardExpireTime:(double)arg0;
- (id)awardExpiredTitle;
- (void)setAwardExpiredTitle:(id)arg0;
- (id)awardExpiringDes;
- (void)setAwardExpiringDes:(id)arg0;
- (id)singleColumnAtmosphere;
- (void)setSingleColumnAtmosphere:(id)arg0;
- (id)doubleColumnAtmosphere;
- (void)setDoubleColumnAtmosphere:(id)arg0;
- (void).cxx_destruct;

@end
