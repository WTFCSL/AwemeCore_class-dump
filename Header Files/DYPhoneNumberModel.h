//
//     Generated by private class-dump
//

@class NSString;

@interface DYPhoneNumberModel : MTLModel <NSCopying> {
    BOOL _shouldShowMaskNumber;
    NSString *_countryCode;
    NSString *_number;
}

@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSString *number;
@property (nonatomic) BOOL shouldShowMaskNumber;

- (BOOL)shouldShowMaskNumber;
- (void)setShouldShowMaskNumber:(BOOL)arg0;
- (id)hideFourPlacesForPhoneNumberWithoutCountryCode:(id)arg0;
- (id)numberWithCountryCode;
- (id)numberStringValueWithStar;
- (id)numberStringValueWithStarHaveCountryCode:(BOOL)arg0;
- (id)numberStringWithSpaceAfterCountryCode;
- (id)numberStringWithSpecialFormat;
- (id)number;
- (id)countryCode;
- (void)setNumber:(id)arg0;
- (void)setCountryCode:(id)arg0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)initWithString:(id)arg0;
- (BOOL)isEqual:(id)arg0;

@end
