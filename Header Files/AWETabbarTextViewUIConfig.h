//
//     Generated by private class-dump
//

@class UIColor;

@interface AWETabbarTextViewUIConfig : AWETabBarInnerViewUIConfig {
    UIColor *_selectedDarkColor;
    UIColor *_selectedLightColor;
    UIColor *_unSelectedDarkColor;
    UIColor *_unSelectedLightColor;
}

@property (retain, nonatomic) UIColor *selectedDarkColor;
@property (retain, nonatomic) UIColor *selectedLightColor;
@property (retain, nonatomic) UIColor *unSelectedDarkColor;
@property (retain, nonatomic) UIColor *unSelectedLightColor;

+ (id)configWithText:(id)arg0 shouldTransform:(BOOL)arg1;

- (void)dealloc;
- (void)updateLightModeWithProgress:(double)arg0;
- (id)selectedDarkColor;
- (void)setSelectedDarkColor:(id)arg0;
- (id)selectedLightColor;
- (void)setSelectedLightColor:(id)arg0;
- (id)unSelectedDarkColor;
- (void)setUnSelectedDarkColor:(id)arg0;
- (id)unSelectedLightColor;
- (void)setUnSelectedLightColor:(id)arg0;
- (void).cxx_destruct;

@end
