//
//     Generated by private class-dump
//

@class NSString;

@interface AWEUserHometownModel : MTLModel <MTLJSONSerializing> {
    NSString *_country;
    NSString *_countryCode;
    NSString *_province;
    NSString *_provinceCode;
    NSString *_city;
    NSString *_cityCode;
    NSString *_district;
    NSString *_districtCode;
    NSString *_subDistrict;
    NSString *_subDistrictCode;
}

@property (copy, nonatomic) NSString *country;
@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSString *province;
@property (copy, nonatomic) NSString *provinceCode;
@property (copy, nonatomic) NSString *city;
@property (copy, nonatomic) NSString *cityCode;
@property (copy, nonatomic) NSString *district;
@property (copy, nonatomic) NSString *districtCode;
@property (copy, nonatomic) NSString *subDistrict;
@property (copy, nonatomic) NSString *subDistrictCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setProvince:(id)arg0;
- (id)province;
- (id)districtCode;
- (void)setDistrictCode:(id)arg0;
- (void)setProvinceCode:(id)arg0;
- (id)provinceCode;
- (id)subDistrict;
- (void)setSubDistrict:(id)arg0;
- (id)subDistrictCode;
- (void)setSubDistrictCode:(id)arg0;
- (id)countryCode;
- (id)city;
- (id)country;
- (void)setCountryCode:(id)arg0;
- (void).cxx_destruct;
- (void)setCity:(id)arg0;
- (void)setCountry:(id)arg0;
- (id)cityCode;
- (void)setCityCode:(id)arg0;
- (void)setDistrict:(id)arg0;
- (id)district;

@end
