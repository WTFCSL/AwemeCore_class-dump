//
//     Generated by private class-dump
//

@class NSString;

@interface AWEAccountPhoneNumber : NSObject <NSCopying> {
    NSString *_countryCode;
    NSString *_number;
}

@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSString *number;

- (id)numberStringValueWithStar;
- (id)number;
- (id)countryCode;
- (void)setNumber:(id)arg0;
- (void)setCountryCode:(id)arg0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)initWithString:(id)arg0;
- (id)stringValue;
- (BOOL)isEqual:(id)arg0;

@end