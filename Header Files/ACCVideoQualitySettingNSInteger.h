//
//     Generated by private class-dump
//

@interface ACCVideoQualitySettingNSInteger : ACCVideoQualitySettingValue {
    long long _hdValue;
    long long _defaultValue;
    id /* block */ _lazyValue;
}

@property (nonatomic) long long hdValue;
@property (nonatomic) long long defaultValue;
@property (copy, nonatomic) id /* block */ lazyValue;

+ (id)modelCustomPropertyMapper;

- (void)setLazyValue:(id /* block */)arg0;
- (id /* block */)lazyValue;
- (long long)hdValue;
- (void)setHdValue:(long long)arg0;
- (void)setDefaultValue:(long long)arg0;
- (long long)defaultValue;
- (void).cxx_destruct;

@end