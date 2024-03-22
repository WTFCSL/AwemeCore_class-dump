//
//     Generated by private class-dump
//

@class NSString;

@interface AWEAddressModel : AWEBaseApiModel <AWEStudioAddressModelProtocol> {
    NSString *_simpleAddr;
    NSString *_province;
    NSString *_city;
    NSString *_address;
    NSString *_district;
    NSString *_cityCode;
    NSString *_country;
    NSString *_countryCode;
    NSString *_districtCode;
    NSString *_cityCodeV2;
    NSString *_addressWithExtraInfo;
    NSString *_imTownName;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *simpleAddr;
@property (retain, nonatomic) NSString *province;
@property (retain, nonatomic) NSString *city;
@property (retain, nonatomic) NSString *address;
@property (retain, nonatomic) NSString *district;
@property (retain, nonatomic) NSString *cityCode;
@property (retain, nonatomic) NSString *country;
@property (retain, nonatomic) NSString *countryCode;
@property (retain, nonatomic) NSString *districtCode;
@property (retain, nonatomic) NSString *cityCodeV2;
@property (retain, nonatomic) NSString *addressWithExtraInfo;
@property (retain, nonatomic) NSString *imTownName;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setProvince:(id)arg0;
- (id)province;
- (id)simpleAddr;
- (void)setSimpleAddr:(id)arg0;
- (id)districtCode;
- (void)setDistrictCode:(id)arg0;
- (id)cityCodeV2;
- (void)setCityCodeV2:(id)arg0;
- (id)addressWithExtraInfo;
- (void)setAddressWithExtraInfo:(id)arg0;
- (id)imTownName;
- (void)setImTownName:(id)arg0;
- (id)countryCode;
- (id)city;
- (id)country;
- (void)setCountryCode:(id)arg0;
- (void).cxx_destruct;
- (void)setCity:(id)arg0;
- (void)setAddress:(id)arg0;
- (void)setCountry:(id)arg0;
- (id)address;
- (id)cityCode;
- (void)setCityCode:(id)arg0;
- (void)setDistrict:(id)arg0;
- (id)district;

@end
