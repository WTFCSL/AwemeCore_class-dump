//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface AWELocationEditResult : NSObject {
    BOOL _isAutoLocated;
    NSString *_countryCode;
    NSString *_country;
    NSString *_province;
    NSString *_city;
    NSString *_district;
    NSNumber *_countryId;
    NSNumber *_provinceId;
    NSNumber *_cityId;
    NSNumber *_districtId;
}

@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSString *country;
@property (copy, nonatomic) NSString *province;
@property (copy, nonatomic) NSString *city;
@property (copy, nonatomic) NSString *district;
@property (copy, nonatomic) NSNumber *countryId;
@property (copy, nonatomic) NSNumber *provinceId;
@property (copy, nonatomic) NSNumber *cityId;
@property (copy, nonatomic) NSNumber *districtId;
@property (nonatomic) BOOL isAutoLocated;

- (void)setProvince:(id)arg0;
- (id)province;
- (id)countryId;
- (id)provinceId;
- (id)cityId;
- (id)districtId;
- (id)generateIdList;
- (void)setCountryId:(id)arg0;
- (void)setProvinceId:(id)arg0;
- (void)setCityId:(id)arg0;
- (void)setDistrictId:(id)arg0;
- (BOOL)isAutoLocated;
- (void)setIsAutoLocated:(BOOL)arg0;
- (id)countryCode;
- (id)city;
- (id)country;
- (void)setCountryCode:(id)arg0;
- (void).cxx_destruct;
- (void)setCity:(id)arg0;
- (void)setCountry:(id)arg0;
- (void)setDistrict:(id)arg0;
- (id)district;

@end
