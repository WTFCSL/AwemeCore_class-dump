//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface BDPoiItem : NSObject <NSCopying> {
    NSString *_identifier;
    NSString *_name;
    NSString *_address;
    NSString *_district;
    NSString *_city;
    NSString *_province;
    NSString *_country;
    NSString *_formattedAddress;
    NSString *_tel;
    NSString *_distance;
    NSString *_serviceID;
    NSDictionary *_details;
    struct CLLocationCoordinate2D { double latitude; double longitude; } _coordinate2D;
}

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate2D;
@property (copy, nonatomic) NSString *address;
@property (copy, nonatomic) NSString *district;
@property (copy, nonatomic) NSString *city;
@property (copy, nonatomic) NSString *province;
@property (copy, nonatomic) NSString *country;
@property (copy, nonatomic) NSString *formattedAddress;
@property (copy, nonatomic) NSString *tel;
@property (copy, nonatomic) NSString *distance;
@property (copy, nonatomic) NSString *serviceID;
@property (copy, nonatomic) NSDictionary *details;

+ (id)poiItemWithDictionary:(id)arg0;

- (void)setCoordinate2D:(struct CLLocationCoordinate2D { double x0; double x1; })arg0;
- (void)setProvince:(id)arg0;
- (void)setTel:(id)arg0;
- (struct CLLocationCoordinate2D { double x0; double x1; })coordinate2D;
- (id)province;
- (id)tel;
- (id)distance;
- (id)city;
- (id)country;
- (id)details;
- (void)setDistance:(id)arg0;
- (void).cxx_destruct;
- (void)setCity:(id)arg0;
- (void)setAddress:(id)arg0;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)identifier;
- (void)setDetails:(id)arg0;
- (void)setServiceID:(id)arg0;
- (id)serviceID;
- (void)setCountry:(id)arg0;
- (void)setName:(id)arg0;
- (id)name;
- (id)address;
- (void)setIdentifier:(id)arg0;
- (void)setFormattedAddress:(id)arg0;
- (id)formattedAddress;
- (void)setDistrict:(id)arg0;
- (id)district;

@end
