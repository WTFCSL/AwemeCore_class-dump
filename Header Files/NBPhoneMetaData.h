//
//     Generated by private class-dump
//

@class NSString, NSArray, NSNumber, NBPhoneNumberDesc;

@interface NBPhoneMetaData : NSObject {
    BOOL _sameMobileAndFixedLinePattern;
    BOOL _mainCountryForCode;
    BOOL _leadingZeroPossible;
    NBPhoneNumberDesc *_generalDesc;
    NBPhoneNumberDesc *_fixedLine;
    NBPhoneNumberDesc *_mobile;
    NBPhoneNumberDesc *_tollFree;
    NBPhoneNumberDesc *_premiumRate;
    NBPhoneNumberDesc *_sharedCost;
    NBPhoneNumberDesc *_personalNumber;
    NBPhoneNumberDesc *_voip;
    NBPhoneNumberDesc *_pager;
    NBPhoneNumberDesc *_uan;
    NBPhoneNumberDesc *_emergency;
    NBPhoneNumberDesc *_voicemail;
    NBPhoneNumberDesc *_noInternationalDialling;
    NSString *_codeID;
    NSNumber *_countryCode;
    NSString *_internationalPrefix;
    NSString *_preferredInternationalPrefix;
    NSString *_nationalPrefix;
    NSString *_preferredExtnPrefix;
    NSString *_nationalPrefixForParsing;
    NSString *_nationalPrefixTransformRule;
    NSArray *_numberFormats;
    NSArray *_intlNumberFormats;
    NSString *_leadingDigits;
}

@property (retain, nonatomic) NBPhoneNumberDesc *generalDesc;
@property (retain, nonatomic) NBPhoneNumberDesc *fixedLine;
@property (retain, nonatomic) NBPhoneNumberDesc *mobile;
@property (retain, nonatomic) NBPhoneNumberDesc *tollFree;
@property (retain, nonatomic) NBPhoneNumberDesc *premiumRate;
@property (retain, nonatomic) NBPhoneNumberDesc *sharedCost;
@property (retain, nonatomic) NBPhoneNumberDesc *personalNumber;
@property (retain, nonatomic) NBPhoneNumberDesc *voip;
@property (retain, nonatomic) NBPhoneNumberDesc *pager;
@property (retain, nonatomic) NBPhoneNumberDesc *uan;
@property (retain, nonatomic) NBPhoneNumberDesc *emergency;
@property (retain, nonatomic) NBPhoneNumberDesc *voicemail;
@property (retain, nonatomic) NBPhoneNumberDesc *noInternationalDialling;
@property (retain, nonatomic) NSString *codeID;
@property (retain, nonatomic) NSNumber *countryCode;
@property (retain, nonatomic) NSString *internationalPrefix;
@property (retain, nonatomic) NSString *preferredInternationalPrefix;
@property (retain, nonatomic) NSString *nationalPrefix;
@property (retain, nonatomic) NSString *preferredExtnPrefix;
@property (retain, nonatomic) NSString *nationalPrefixForParsing;
@property (retain, nonatomic) NSString *nationalPrefixTransformRule;
@property (nonatomic) BOOL sameMobileAndFixedLinePattern;
@property (retain, nonatomic) NSArray *numberFormats;
@property (retain, nonatomic) NSArray *intlNumberFormats;
@property (nonatomic) BOOL mainCountryForCode;
@property (retain, nonatomic) NSString *leadingDigits;
@property (nonatomic) BOOL leadingZeroPossible;

- (id)countryCode;
- (id)init;
- (void)setCountryCode:(id)arg0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg0;
- (id)description;
- (void)encodeWithCoder:(id)arg0;
- (id)emergency;
- (void)setEmergency:(id)arg0;
- (void)setVoicemail:(id)arg0;
- (id)voicemail;
- (id)initWithEntry:(id)arg0;
- (id)numberFormatsFromEntry:(id)arg0;
- (id)generalDesc;
- (void)setGeneralDesc:(id)arg0;
- (id)fixedLine;
- (void)setFixedLine:(id)arg0;
- (id)mobile;
- (void)setMobile:(id)arg0;
- (id)tollFree;
- (void)setTollFree:(id)arg0;
- (id)premiumRate;
- (void)setPremiumRate:(id)arg0;
- (id)sharedCost;
- (void)setSharedCost:(id)arg0;
- (id)personalNumber;
- (void)setPersonalNumber:(id)arg0;
- (id)voip;
- (void)setVoip:(id)arg0;
- (id)pager;
- (void)setPager:(id)arg0;
- (id)uan;
- (void)setUan:(id)arg0;
- (id)noInternationalDialling;
- (void)setNoInternationalDialling:(id)arg0;
- (id)codeID;
- (void)setCodeID:(id)arg0;
- (id)internationalPrefix;
- (void)setInternationalPrefix:(id)arg0;
- (id)preferredInternationalPrefix;
- (void)setPreferredInternationalPrefix:(id)arg0;
- (id)nationalPrefix;
- (void)setNationalPrefix:(id)arg0;
- (id)preferredExtnPrefix;
- (void)setPreferredExtnPrefix:(id)arg0;
- (id)nationalPrefixForParsing;
- (void)setNationalPrefixForParsing:(id)arg0;
- (id)nationalPrefixTransformRule;
- (void)setNationalPrefixTransformRule:(id)arg0;
- (BOOL)sameMobileAndFixedLinePattern;
- (void)setSameMobileAndFixedLinePattern:(BOOL)arg0;
- (id)numberFormats;
- (void)setNumberFormats:(id)arg0;
- (id)intlNumberFormats;
- (void)setIntlNumberFormats:(id)arg0;
- (BOOL)mainCountryForCode;
- (void)setMainCountryForCode:(BOOL)arg0;
- (id)leadingDigits;
- (void)setLeadingDigits:(id)arg0;
- (BOOL)leadingZeroPossible;
- (void)setLeadingZeroPossible:(BOOL)arg0;

@end
