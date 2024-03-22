//
//     Generated by private class-dump
//

@class NSString;

@interface BDPAddressModel : BDPBasePluginModel {
    BOOL _isDefault;
    NSString *_name;
    NSString *_phoneNumber;
    NSString *_provinceName;
    NSString *_provinceCode;
    NSString *_cityName;
    NSString *_cityCode;
    NSString *_countyName;
    NSString *_countyCode;
    NSString *_cityId;
    NSString *_detailInfo;
    NSString *_label;
    long long _nationalCode;
    long long _addrId;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *provinceName;
@property (copy, nonatomic) NSString *provinceCode;
@property (copy, nonatomic) NSString *cityName;
@property (copy, nonatomic) NSString *cityCode;
@property (copy, nonatomic) NSString *countyName;
@property (copy, nonatomic) NSString *countyCode;
@property (copy, nonatomic) NSString *cityId;
@property (copy, nonatomic) NSString *detailInfo;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) long long nationalCode;
@property (nonatomic) BOOL isDefault;
@property (nonatomic) long long addrId;

+ (id)modelCustomPropertyMapper;

- (void)setDetailInfo:(id)arg0;
- (id)detailInfo;
- (void)setProvinceCode:(id)arg0;
- (id)provinceCode;
- (id)provinceName;
- (id)countyName;
- (void)setProvinceName:(id)arg0;
- (void)setCountyName:(id)arg0;
- (void)setCountyCode:(id)arg0;
- (void)setAddrId:(long long)arg0;
- (long long)addrId;
- (id)countyCode;
- (id)cityId;
- (void)setCityId:(id)arg0;
- (long long)nationalCode;
- (void)setNationalCode:(long long)arg0;
- (void).cxx_destruct;
- (id)phoneNumber;
- (void)setPhoneNumber:(id)arg0;
- (void)setLabel:(id)arg0;
- (BOOL)isDefault;
- (void)setName:(id)arg0;
- (id)label;
- (void)setIsDefault:(BOOL)arg0;
- (id)name;
- (id)cityCode;
- (void)setCityCode:(id)arg0;
- (id)cityName;
- (void)setCityName:(id)arg0;

@end