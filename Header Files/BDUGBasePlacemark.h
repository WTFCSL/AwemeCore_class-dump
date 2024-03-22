//
//     Generated by private class-dump
//

@class NSString, NSArray, NSDictionary, BDUGGpsInfo;

@interface BDUGBasePlacemark : NSObject <NSCopying, NSSecureCoding> {
    BOOL _addressJoint;
    BOOL _disputed;
    BOOL _geocodeSucceed;
    NSString *_address;
    NSString *_country;
    NSString *_administrativeArea;
    NSString *_subAdministrativeArea;
    NSString *_city;
    NSString *_district;
    NSString *_cityCode;
    NSString *_street;
    NSString *_streetNumber;
    NSString *_floor;
    long long _source;
    long long _geoType;
    BDUGGpsInfo *_latLng;
    NSArray *_poiList;
    NSArray *_aoiList;
    NSDictionary *_extraInfo;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *address;
@property (nonatomic) BOOL addressJoint;
@property (copy, nonatomic) NSString *country;
@property (copy, nonatomic) NSString *administrativeArea;
@property (copy, nonatomic) NSString *subAdministrativeArea;
@property (copy, nonatomic) NSString *city;
@property (copy, nonatomic) NSString *district;
@property (copy, nonatomic) NSString *cityCode;
@property (copy, nonatomic) NSString *street;
@property (copy, nonatomic) NSString *streetNumber;
@property (copy, nonatomic) NSString *floor;
@property (nonatomic, getter=isDisputed) BOOL disputed;
@property (nonatomic) long long source;
@property (nonatomic) long long geoType;
@property (nonatomic, getter=isGeocodeSucceed) BOOL geocodeSucceed;
@property (retain, nonatomic) BDUGGpsInfo *latLng;
@property (copy, nonatomic) NSArray *poiList;
@property (copy, nonatomic) NSArray *aoiList;
@property (copy, nonatomic) NSDictionary *extraInfo;

+ (BOOL)supportsSecureCoding;

- (void)setExtraInfo:(id)arg0;
- (void)setPoiList:(id)arg0;
- (id)poiList;
- (void)setStreetNumber:(id)arg0;
- (id)initWithAddress:(id)arg0 addressJoint:(BOOL)arg1 country:(id)arg2 administrativeArea:(id)arg3 subAdministrativeArea:(id)arg4 city:(id)arg5 district:(id)arg6 cityCode:(id)arg7 street:(id)arg8 streetNumber:(id)arg9 floor:(id)arg10 disputed:(BOOL)arg11 source:(long long)arg12 geoType:(long long)arg13 geocodeSucceed:(BOOL)arg14 latLng:(id)arg15 poiList:(id)arg16 aoiList:(id)arg17 extraInfo:(id)arg18;
- (BOOL)addressJoint;
- (id)streetNumber;
- (BOOL)isGeocodeSucceed;
- (id)aoiList;
- (void)setAddressJoint:(BOOL)arg0;
- (void)setGeocodeSucceed:(BOOL)arg0;
- (void)setAoiList:(id)arg0;
- (BOOL)isDisputed;
- (id)city;
- (id)country;
- (id)administrativeArea;
- (id)subAdministrativeArea;
- (long long)source;
- (void).cxx_destruct;
- (void)setCity:(id)arg0;
- (void)setAddress:(id)arg0;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)initWithCoder:(id)arg0;
- (void)setSubAdministrativeArea:(id)arg0;
- (void)setCountry:(id)arg0;
- (void)setSource:(long long)arg0;
- (void)setAdministrativeArea:(id)arg0;
- (void)encodeWithCoder:(id)arg0;
- (id)latLng;
- (id)address;
- (void)setLatLng:(id)arg0;
- (id)street;
- (void)setStreet:(id)arg0;
- (long long)geoType;
- (void)setGeoType:(long long)arg0;
- (id)floor;
- (id)cityCode;
- (void)setCityCode:(id)arg0;
- (void)setDistrict:(id)arg0;
- (id)district;
- (id)extraInfo;
- (void)setFloor:(id)arg0;
- (void)setDisputed:(BOOL)arg0;
- (id)toJSON;

@end
