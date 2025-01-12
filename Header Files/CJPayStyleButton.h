//
//     Generated by private class-dump
//

@class UIColor, NSObject;
@protocol OS_dispatch_source;

@interface CJPayStyleButton : CJPayLoadingButton {
    BOOL _isVerticalGradientFilling;
    BOOL _isGradientNormalBackground;
    BOOL _isGradientDisabledBackground;
    double _cornerRadius;
    UIColor *_titleColor;
    double _disabledAlpha;
    UIColor *_normalBackgroundColorStart;
    UIColor *_normalBackgroundColorEnd;
    UIColor *_disabledBackgroundColorStart;
    UIColor *_disabledBackgroundColorEnd;
}

@property (retain, nonatomic) NSObject<OS_dispatch_source> *cjButtonFreezeTimer;
@property (nonatomic) BOOL isGradientNormalBackground;
@property (nonatomic) BOOL isGradientDisabledBackground;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) UIColor *titleColor;
@property (nonatomic) double disabledAlpha;
@property (retain, nonatomic) UIColor *normalBackgroundColorStart;
@property (retain, nonatomic) UIColor *normalBackgroundColorEnd;
@property (retain, nonatomic) UIColor *disabledBackgroundColorStart;
@property (retain, nonatomic) UIColor *disabledBackgroundColorEnd;
@property (nonatomic) BOOL isVerticalGradientFilling;

+ (id)p_imageFromGradientColors:(id)arg0 size:(struct CGSize { double x0; double x1; })arg1 startPoint:(struct CGPoint { double x0; double x1; })arg2 endPoint:(struct CGPoint { double x0; double x1; })arg3;

- (void)_UIAppearance_setDisabledBackgroundColorEnd:(id)arg0;
- (void)_UIAppearance_setDisabledBackgroundColorStart:(id)arg0;
- (void)_UIAppearance_setNormalBackgroundColorEnd:(id)arg0;
- (void)_UIAppearance_setNormalBackgroundColorStart:(id)arg0;
- (void)_UIAppearance_setDisabledAlpha:(double)arg0;
- (void)_UIAppearance_setTitleColor:(id)arg0;
- (void)_UIAppearance_setCornerRadius:(double)arg0;
- (void)setDisabledAlpha:(double)arg0;
- (void)p_installDefaultAppearance;
- (void)setIsVerticalGradientFilling:(BOOL)arg0;
- (void)setNormalBackgroundColorStart:(id)arg0;
- (void)setNormalBackgroundColorEnd:(id)arg0;
- (id)normalBackgroundColorStart;
- (id)normalBackgroundColorEnd;
- (void)setDisabledBackgroundColorStart:(id)arg0;
- (void)setDisabledBackgroundColorEnd:(id)arg0;
- (id)disabledBackgroundColorStart;
- (id)disabledBackgroundColorEnd;
- (void)setCjButtonFreezeTimer:(id)arg0;
- (id)cjButtonFreezeTimer;
- (void)freezeFor:(long long)arg0;
- (BOOL)isGradientNormalBackground;
- (void)p_applyGradientStyleWithSize:(struct CGSize { double x0; double x1; })arg0 startColor:(id)arg1 endColor:(id)arg2 forState:(unsigned long long)arg3;
- (void)setIsGradientNormalBackground:(BOOL)arg0;
- (BOOL)isGradientDisabledBackground;
- (void)setIsGradientDisabledBackground:(BOOL)arg0;
- (void)p_applyNormalBackground;
- (void)p_applyDisabledBackground;
- (void)p_applySolidColor:(id)arg0 forState:(unsigned long long)arg1;
- (BOOL)isVerticalGradientFilling;
- (void).cxx_destruct;
- (double)cornerRadius;
- (id)titleColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setEnabled:(BOOL)arg0;
- (void)setTitleColor:(id)arg0;
- (void)layoutSubviews;
- (void)setCornerRadius:(double)arg0;
- (double)disabledAlpha;

@end
