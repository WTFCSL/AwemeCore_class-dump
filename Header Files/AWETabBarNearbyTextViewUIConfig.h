//
//     Generated by private class-dump
//

@class UIColor, UIImage, NSString;

@interface AWETabBarNearbyTextViewUIConfig : AWETabBarInnerViewUIConfig <AWETabBarInnerViewUIConfigLightModeProtocol> {
    UIImage *_gradientImage;
    UIColor *_selectedDarkColor;
    UIColor *_selectedLightColor;
    UIColor *_unSelectedDarkColor;
    UIColor *_unSelectedLightColor;
    UIColor *_normalTextColor;
    UIColor *_gradientImageColor;
}

@property (retain, nonatomic) UIColor *normalTextColor;
@property (retain, nonatomic) UIColor *gradientImageColor;
@property (retain, nonatomic) UIImage *gradientImage;
@property (retain, nonatomic) UIColor *selectedDarkColor;
@property (retain, nonatomic) UIColor *selectedLightColor;
@property (retain, nonatomic) UIColor *unSelectedDarkColor;
@property (retain, nonatomic) UIColor *unSelectedLightColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)configWithText:(id)arg0;

- (void)setNormalTextColor:(id)arg0;
- (id)normalTextColor;
- (void)updateLightModeWithProgress:(double)arg0;
- (id)selectedDarkColor;
- (void)setSelectedDarkColor:(id)arg0;
- (id)selectedLightColor;
- (void)setSelectedLightColor:(id)arg0;
- (id)unSelectedDarkColor;
- (void)setUnSelectedDarkColor:(id)arg0;
- (id)unSelectedLightColor;
- (void)setUnSelectedLightColor:(id)arg0;
- (id)gradientImageColor;
- (void)setGradientImageColor:(id)arg0;
- (void).cxx_destruct;
- (id)gradientImage;
- (void)setGradientImage:(id)arg0;
- (void)updateTextColor;

@end
