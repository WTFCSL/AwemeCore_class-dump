//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface AWESplashSkipModel : MTLModel <MTLJSONSerializing> {
    BOOL _enableCountdown;
    NSString *_textColor;
    double _widthExtra;
    double _heightExtra;
    double _fakeClickHeight;
    double _fakeClickWidth;
    NSString *_text;
    NSString *_countdownUnit;
    NSString *_backgroundColor;
    long long _skipAction;
    NSDictionary *_slideSkipInfo;
}

@property (nonatomic) BOOL enableCountdown;
@property (copy, nonatomic) NSString *textColor;
@property (nonatomic) double widthExtra;
@property (nonatomic) double heightExtra;
@property (nonatomic) double fakeClickHeight;
@property (nonatomic) double fakeClickWidth;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *countdownUnit;
@property (copy, nonatomic) NSString *backgroundColor;
@property (nonatomic) long long skipAction;
@property (copy, nonatomic) NSDictionary *slideSkipInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)slideSkipInfo;
- (BOOL)enableCountdown;
- (void)setEnableCountdown:(BOOL)arg0;
- (double)widthExtra;
- (void)setWidthExtra:(double)arg0;
- (double)heightExtra;
- (void)setHeightExtra:(double)arg0;
- (double)fakeClickHeight;
- (void)setFakeClickHeight:(double)arg0;
- (double)fakeClickWidth;
- (void)setFakeClickWidth:(double)arg0;
- (id)countdownUnit;
- (void)setCountdownUnit:(id)arg0;
- (long long)skipAction;
- (void)setSkipAction:(long long)arg0;
- (void)setSlideSkipInfo:(id)arg0;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (id)text;
- (id)backgroundColor;
- (void)setTextColor:(id)arg0;
- (void)setBackgroundColor:(id)arg0;
- (id)textColor;

@end