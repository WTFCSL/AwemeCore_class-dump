//
//     Generated by private class-dump
//

@class NSString;

@interface CJPaySMSVerificationRequestModel : JSONModel {
    BOOL _usesCloseButton;
    NSString *_phoneNumberText;
    NSString *_titleText;
    NSString *_qaURLString;
    NSString *_qaTitle;
    unsigned long long _codeCount;
    long long _countDownSeconds;
    unsigned long long _animationType;
    NSString *_identify;
}

@property (copy, nonatomic) NSString *phoneNumberText;
@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *qaURLString;
@property (copy, nonatomic) NSString *qaTitle;
@property (nonatomic) unsigned long long codeCount;
@property (nonatomic) long long countDownSeconds;
@property (nonatomic) unsigned long long animationType;
@property (nonatomic) BOOL usesCloseButton;
@property (copy, nonatomic) NSString *identify;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (id)phoneNumberText;
- (BOOL)usesCloseButton;
- (unsigned long long)codeCount;
- (void)setCodeCount:(unsigned long long)arg0;
- (id)qaURLString;
- (id)qaTitle;
- (void)setAnimationTypeWithNSString:(id)arg0;
- (void)setUsesCloseButtonWithNSString:(id)arg0;
- (void)setPhoneNumberText:(id)arg0;
- (void)setQaURLString:(id)arg0;
- (void)setQaTitle:(id)arg0;
- (void)setUsesCloseButton:(BOOL)arg0;
- (void)setTitleText:(id)arg0;
- (void).cxx_destruct;
- (void)setAnimationType:(unsigned long long)arg0;
- (id)titleText;
- (unsigned long long)animationType;
- (long long)countDownSeconds;
- (void)setCountDownSeconds:(long long)arg0;
- (id)identify;
- (void)setIdentify:(id)arg0;

@end