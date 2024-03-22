//
//     Generated by private class-dump
//

@class NSString, NSMutableString, NSRegularExpression, NBPhoneNumberUtil, NSMutableArray, NBPhoneMetaData;

@interface NBAsYouTypeFormatter : NSObject {
    BOOL _isSuccessfulFormatting;
    BOOL _ableToFormat_;
    BOOL _inputHasFormatting_;
    BOOL _isCompleteNumber_;
    BOOL _isExpectingCountryCallingCode_;
    BOOL _shouldAddSpaceAfterNationalPrefix_;
    NSString *_DIGIT_PLACEHOLDER_;
    NSString *_SEPARATOR_BEFORE_NATIONAL_NUMBER_;
    NSString *_currentOutput_;
    NSString *_currentFormattingPattern_;
    NSString *_defaultCountry_;
    NSString *_nationalPrefixExtracted_;
    NSMutableString *_formattingTemplate_;
    NSMutableString *_accruedInput_;
    NSMutableString *_prefixBeforeNationalNumber_;
    NSMutableString *_accruedInputWithoutFormatting_;
    NSMutableString *_nationalNumber_;
    NSRegularExpression *_DIGIT_PATTERN_;
    NSRegularExpression *_NATIONAL_PREFIX_SEPARATORS_PATTERN_;
    NSRegularExpression *_CHARACTER_CLASS_PATTERN_;
    NSRegularExpression *_STANDALONE_DIGIT_PATTERN_;
    NSRegularExpression *_ELIGIBLE_FORMAT_PATTERN_;
    NBPhoneNumberUtil *_phoneUtil_;
    unsigned long long _lastMatchPosition_;
    unsigned long long _originalPosition_;
    unsigned long long _positionToRemember_;
    unsigned long long _MIN_LEADING_DIGITS_LENGTH_;
    NSMutableArray *_possibleFormats_;
    NBPhoneMetaData *_currentMetaData_;
    NBPhoneMetaData *_defaultMetaData_;
    NBPhoneMetaData *_EMPTY_METADATA_;
}

@property (retain, nonatomic) NSString *DIGIT_PLACEHOLDER_;
@property (nonatomic) NSString *SEPARATOR_BEFORE_NATIONAL_NUMBER_;
@property (retain, nonatomic) NSString *currentOutput_;
@property (retain, nonatomic) NSString *currentFormattingPattern_;
@property (retain, nonatomic) NSString *defaultCountry_;
@property (retain, nonatomic) NSString *nationalPrefixExtracted_;
@property (retain, nonatomic) NSMutableString *formattingTemplate_;
@property (retain, nonatomic) NSMutableString *accruedInput_;
@property (retain, nonatomic) NSMutableString *prefixBeforeNationalNumber_;
@property (retain, nonatomic) NSMutableString *accruedInputWithoutFormatting_;
@property (retain, nonatomic) NSMutableString *nationalNumber_;
@property (retain, nonatomic) NSRegularExpression *DIGIT_PATTERN_;
@property (retain, nonatomic) NSRegularExpression *NATIONAL_PREFIX_SEPARATORS_PATTERN_;
@property (retain, nonatomic) NSRegularExpression *CHARACTER_CLASS_PATTERN_;
@property (retain, nonatomic) NSRegularExpression *STANDALONE_DIGIT_PATTERN_;
@property (retain, nonatomic) NSRegularExpression *ELIGIBLE_FORMAT_PATTERN_;
@property (nonatomic) BOOL ableToFormat_;
@property (nonatomic) BOOL inputHasFormatting_;
@property (nonatomic) BOOL isCompleteNumber_;
@property (nonatomic) BOOL isExpectingCountryCallingCode_;
@property (nonatomic) BOOL shouldAddSpaceAfterNationalPrefix_;
@property (retain, nonatomic) NBPhoneNumberUtil *phoneUtil_;
@property (nonatomic) unsigned long long lastMatchPosition_;
@property (nonatomic) unsigned long long originalPosition_;
@property (nonatomic) unsigned long long positionToRemember_;
@property (nonatomic) unsigned long long MIN_LEADING_DIGITS_LENGTH_;
@property (retain, nonatomic) NSMutableArray *possibleFormats_;
@property (retain, nonatomic) NBPhoneMetaData *currentMetaData_;
@property (retain, nonatomic) NBPhoneMetaData *defaultMetaData_;
@property (retain, nonatomic) NBPhoneMetaData *EMPTY_METADATA_;
@property (readonly, nonatomic) BOOL isSuccessfulFormatting;

- (void)setDIGIT_PLACEHOLDER_:(id)arg0;
- (void)setSEPARATOR_BEFORE_NATIONAL_NUMBER_:(id)arg0;
- (void)setMIN_LEADING_DIGITS_LENGTH_:(unsigned long long)arg0;
- (id)DIGIT_PLACEHOLDER_;
- (id)initWithRegionCodeForTest:(id)arg0 bundle:(id)arg1;
- (void)setEMPTY_METADATA_:(id)arg0;
- (id)EMPTY_METADATA_;
- (unsigned long long)MIN_LEADING_DIGITS_LENGTH_;
- (id)SEPARATOR_BEFORE_NATIONAL_NUMBER_;
- (id)initWithRegionCodeForTest:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)clear;
- (id)description;
- (id)initWithRegionCode:(id)arg0;
- (id)initWithRegionCode:(id)arg0 bundle:(id)arg1;
- (id)getMetadataForRegion_:(id)arg0;
- (BOOL)maybeCreateNewTemplate_;
- (void)getAvailableFormats_:(id)arg0;
- (BOOL)isFormatEligible_:(id)arg0;
- (void)narrowDownPossibleFormats_:(id)arg0;
- (BOOL)createFormattingTemplate_:(id)arg0;
- (id)getFormattingTemplate_:(id)arg0 numberFormat:(id)arg1;
- (id)removeLastDigitAndRememberPosition;
- (id)removeLastDigit;
- (id)inputStringAndRememberPosition:(id)arg0;
- (id)inputString:(id)arg0;
- (id)inputDigit:(id)arg0;
- (id)inputDigitAndRememberPosition:(id)arg0;
- (id)inputDigitWithOptionToRememberPosition_:(id)arg0 rememberPosition:(BOOL)arg1;
- (id)attemptToChoosePatternWithPrefixExtracted_;
- (BOOL)ableToExtractLongerNdd_;
- (BOOL)isDigitOrLeadingPlusSign_:(id)arg0;
- (id)attemptToFormatAccruedDigits_;
- (id)appendNationalNumber_:(id)arg0;
- (long long)getRememberedPosition;
- (id)attemptToChooseFormattingPattern_;
- (id)inputAccruedNationalNumber_;
- (BOOL)isNanpaNumberWithNationalPrefix_;
- (id)removeNationalPrefixFromNationalNumber_;
- (BOOL)attemptToExtractIdd_;
- (BOOL)attemptToExtractCountryCallingCode_;
- (id)normalizeAndAccrueDigitsAndPlusSign_:(id)arg0 rememberPosition:(BOOL)arg1;
- (id)inputDigitHelper_:(id)arg0;
- (BOOL)isSuccessfulFormatting;
- (id)currentOutput_;
- (void)setCurrentOutput_:(id)arg0;
- (id)currentFormattingPattern_;
- (void)setCurrentFormattingPattern_:(id)arg0;
- (id)defaultCountry_;
- (void)setDefaultCountry_:(id)arg0;
- (id)nationalPrefixExtracted_;
- (void)setNationalPrefixExtracted_:(id)arg0;
- (id)formattingTemplate_;
- (void)setFormattingTemplate_:(id)arg0;
- (id)accruedInput_;
- (void)setAccruedInput_:(id)arg0;
- (id)prefixBeforeNationalNumber_;
- (void)setPrefixBeforeNationalNumber_:(id)arg0;
- (id)accruedInputWithoutFormatting_;
- (void)setAccruedInputWithoutFormatting_:(id)arg0;
- (id)nationalNumber_;
- (void)setNationalNumber_:(id)arg0;
- (id)DIGIT_PATTERN_;
- (void)setDIGIT_PATTERN_:(id)arg0;
- (id)NATIONAL_PREFIX_SEPARATORS_PATTERN_;
- (void)setNATIONAL_PREFIX_SEPARATORS_PATTERN_:(id)arg0;
- (id)CHARACTER_CLASS_PATTERN_;
- (void)setCHARACTER_CLASS_PATTERN_:(id)arg0;
- (id)STANDALONE_DIGIT_PATTERN_;
- (void)setSTANDALONE_DIGIT_PATTERN_:(id)arg0;
- (id)ELIGIBLE_FORMAT_PATTERN_;
- (void)setELIGIBLE_FORMAT_PATTERN_:(id)arg0;
- (BOOL)ableToFormat_;
- (void)setAbleToFormat_:(BOOL)arg0;
- (BOOL)inputHasFormatting_;
- (void)setInputHasFormatting_:(BOOL)arg0;
- (BOOL)isCompleteNumber_;
- (void)setIsCompleteNumber_:(BOOL)arg0;
- (BOOL)isExpectingCountryCallingCode_;
- (void)setIsExpectingCountryCallingCode_:(BOOL)arg0;
- (BOOL)shouldAddSpaceAfterNationalPrefix_;
- (void)setShouldAddSpaceAfterNationalPrefix_:(BOOL)arg0;
- (id)phoneUtil_;
- (void)setPhoneUtil_:(id)arg0;
- (unsigned long long)lastMatchPosition_;
- (void)setLastMatchPosition_:(unsigned long long)arg0;
- (unsigned long long)originalPosition_;
- (void)setOriginalPosition_:(unsigned long long)arg0;
- (unsigned long long)positionToRemember_;
- (void)setPositionToRemember_:(unsigned long long)arg0;
- (id)possibleFormats_;
- (void)setPossibleFormats_:(id)arg0;
- (id)currentMetaData_;
- (void)setCurrentMetaData_:(id)arg0;
- (id)defaultMetaData_;
- (void)setDefaultMetaData_:(id)arg0;

@end