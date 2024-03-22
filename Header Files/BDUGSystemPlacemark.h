//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface BDUGSystemPlacemark : BDUGBasePlacemark <NSCopying, NSSecureCoding> {
    NSString *_detailedAddress;
    NSString *_postalCode;
    NSString *_ISOcountryCode;
    NSString *_inlandWater;
    NSString *_ocean;
    NSArray *_areasOfInterest;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *detailedAddress;
@property (copy, nonatomic) NSString *postalCode;
@property (copy, nonatomic) NSString *ISOcountryCode;
@property (copy, nonatomic) NSString *inlandWater;
@property (copy, nonatomic) NSString *ocean;
@property (copy, nonatomic) NSArray *areasOfInterest;

+ (BOOL)supportsSecureCoding;

- (void)setDetailedAddress:(id)arg0;
- (id)detailedAddress;
- (id)areasOfInterest;
- (id)postalCode;
- (void)setPostalCode:(id)arg0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)initWithCoder:(id)arg0;
- (id)ocean;
- (void)encodeWithCoder:(id)arg0;
- (id)inlandWater;
- (void)setInlandWater:(id)arg0;
- (void)setOcean:(id)arg0;
- (id)ISOcountryCode;
- (void)setAreasOfInterest:(id)arg0;
- (void)setISOcountryCode:(id)arg0;
- (id)toJSON;

@end