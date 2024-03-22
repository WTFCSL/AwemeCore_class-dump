//
//     Generated by private class-dump
//

@class NSNumber, AWETeenModeAlertConfigModel;

@interface AWEMinorStatusModel : AWEBaseApiModel {
    BOOL _quickSwitchEnable;
    BOOL _minorMode;
    BOOL _hasPassword;
    AWETeenModeAlertConfigModel *_windowConfig;
    long long _minorModeType;
    long long _screenTime;
    NSNumber *_enterFourTeenModeTS;
}

@property (nonatomic) BOOL quickSwitchEnable;
@property (retain, nonatomic) AWETeenModeAlertConfigModel *windowConfig;
@property (nonatomic) BOOL minorMode;
@property (nonatomic) long long minorModeType;
@property long long screenTime;
@property (nonatomic) BOOL hasPassword;
@property (retain, nonatomic) NSNumber *enterFourTeenModeTS;

+ (id)windowConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setMinorMode:(BOOL)arg0;
- (BOOL)minorMode;
- (long long)minorModeType;
- (id)enterFourTeenModeTS;
- (id)windowConfig;
- (void)setQuickSwitchEnable:(BOOL)arg0;
- (void)setMinorModeType:(long long)arg0;
- (void)setWindowConfig:(id)arg0;
- (BOOL)quickSwitchEnable;
- (void)setEnterFourTeenModeTS:(id)arg0;
- (void).cxx_destruct;
- (BOOL)hasPassword;
- (long long)screenTime;
- (void)setScreenTime:(long long)arg0;
- (void)setHasPassword:(BOOL)arg0;

@end
