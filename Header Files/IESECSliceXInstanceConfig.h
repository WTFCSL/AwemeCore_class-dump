//
//     Generated by private class-dump
//

@class NSDictionary, NSString;

@interface IESECSliceXInstanceConfig : NSObject <IESECSliceXInstanceConfig, NSCopying> {
    BOOL _fitPhoneWidth;
    BOOL _enableClickDebounce;
    NSString *_bizIdentify;
    unsigned long long _clickIntervalTime;
    double _viewScaleRatio;
    double _fontScaleRatio;
    NSDictionary *_customGlobalProps;
    long long _deltaTime;
    NSDictionary *_globalProps;
}

@property (retain, nonatomic) NSDictionary *globalProps;
@property (readonly, nonatomic) long long deltaTime;
@property (readonly, nonatomic) NSString *bizIdentify;
@property (nonatomic) BOOL fitPhoneWidth;
@property (nonatomic) BOOL enableClickDebounce;
@property (nonatomic) unsigned long long clickIntervalTime;
@property (nonatomic) double viewScaleRatio;
@property (nonatomic) double fontScaleRatio;
@property (copy, nonatomic) NSDictionary *customGlobalProps;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCustomGlobalProps:(id)arg0;
- (void)setGlobalProps:(id)arg0;
- (id)globalProps;
- (void)setServerTime:(unsigned long long)arg0;
- (id)customGlobalProps;
- (BOOL)fitPhoneWidth;
- (void)setFitPhoneWidth:(BOOL)arg0;
- (void)setFontScaleRatio:(double)arg0;
- (double)fontScaleRatio;
- (double)viewScaleRatio;
- (id)bizIdentify;
- (BOOL)enableClickDebounce;
- (unsigned long long)clickIntervalTime;
- (id)initWithBizIdentify:(id)arg0;
- (void)setEnableClickDebounce:(BOOL)arg0;
- (void)setClickIntervalTime:(unsigned long long)arg0;
- (void)setViewScaleRatio:(double)arg0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (long long)deltaTime;

@end
