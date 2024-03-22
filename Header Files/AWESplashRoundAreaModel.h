//
//     Generated by private class-dump
//

@class NSString;

@interface AWESplashRoundAreaModel : MTLModel <MTLJSONSerializing> {
    BOOL _hideDayCount;
    long long _style;
    NSString *_buttonText;
    long long _textIndex;
    double _serverTime;
    NSString *_countdownText;
}

@property (nonatomic) long long style;
@property (copy, nonatomic) NSString *buttonText;
@property (nonatomic) long long textIndex;
@property (nonatomic) double serverTime;
@property (copy, nonatomic) NSString *countdownText;
@property (nonatomic) BOOL hideDayCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setServerTime:(double)arg0;
- (id)countdownText;
- (BOOL)hideDayCount;
- (void)setCountdownText:(id)arg0;
- (void)setHideDayCount:(BOOL)arg0;
- (long long)style;
- (double)serverTime;
- (void).cxx_destruct;
- (id)buttonText;
- (void)setStyle:(long long)arg0;
- (long long)textIndex;
- (void)setTextIndex:(long long)arg0;
- (void)setButtonText:(id)arg0;

@end