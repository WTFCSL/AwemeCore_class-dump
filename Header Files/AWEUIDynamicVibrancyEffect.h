//
//     Generated by private class-dump
//

@class AWEUIDynamicBlurEffect;

@interface AWEUIDynamicVibrancyEffect : UIVibrancyEffect {
    AWEUIDynamicBlurEffect *_awe_blurEffect;
}

@property (retain, nonatomic) AWEUIDynamicBlurEffect *awe_blurEffect;

+ (id)dynamicVibrancyEffectForBlurEffect:(id)arg0 inTheme:(long long)arg1;
+ (id)dynamicVibrancyEffectForBlurEffect:(id)arg0;

- (void)setAwe_blurEffect:(id)arg0;
- (id)vibrancyEffectInSpecificTheme:(long long)arg0;
- (id)awe_blurEffect;
- (id)vibrancyEffectInCurrentTheme;
- (void).cxx_destruct;

@end
