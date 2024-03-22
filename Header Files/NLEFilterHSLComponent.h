//
//     Generated by private class-dump
//

@interface NLEFilterHSLComponent : NSObject {
    long long _colorMode;
    double _hue;
    double _saturation;
    double _brightness;
}

@property (nonatomic) long long colorMode;
@property (nonatomic) double hue;
@property (nonatomic) double saturation;
@property (nonatomic) double brightness;

+ (id)kTypeName;
+ (long long)ColorModeCount;
+ (id)Color_Mode;
+ (id)Hue;
+ (id)Saturation;
+ (id)Brightness;

- (long long)colorMode;
- (void)setColorMode:(long long)arg0;
- (id)init;
- (void)setSaturation:(double)arg0;
- (double)saturation;
- (double)brightness;
- (void)setBrightness:(double)arg0;
- (double)hue;
- (void)setHue:(double)arg0;

@end