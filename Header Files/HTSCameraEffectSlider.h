//
//     Generated by private class-dump
//

@class NSString, UILabel, UIView, HTSCustomSlider;
@protocol IESLiveLanguageService, IESLiveBeautyProvider;

@interface HTSCameraEffectSlider : UIView <IESLiveSliderProtocol> {
    BOOL _showIndicator;
    BOOL _needStep;
    id /* block */ _valueChangedBlock;
    id /* block */ _changeEndBlock;
    NSString *_title;
    HTSCustomSlider *_slider;
    UILabel *_titleLabel;
    UILabel *_indicatorLabel;
    UIView *_defaultPoint;
    long long _currentValue;
    id<IESLiveLanguageService> _languageService;
    id<IESLiveBeautyProvider> _beautyProvider;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *indicatorLabel;
@property (retain, nonatomic) UIView *defaultPoint;
@property (retain, nonatomic) HTSCustomSlider *slider;
@property (nonatomic) long long currentValue;
@property (retain, nonatomic) id<IESLiveLanguageService> languageService;
@property (retain, nonatomic) id<IESLiveBeautyProvider> beautyProvider;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) BOOL needStep;
@property (copy, nonatomic) id /* block */ valueChangedBlock;
@property (copy, nonatomic) id /* block */ changeEndBlock;
@property (nonatomic) BOOL showIndicator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setSliderHeight:(double)arg0;
- (id)languageService;
- (void)setLanguageService:(id)arg0;
- (void)setIndicatorLabel:(id)arg0;
- (void)setShowIndicator:(BOOL)arg0;
- (void)setSliderItemWidth:(double)arg0;
- (void)setChangeEndBlock:(id /* block */)arg0;
- (void)setDefaultDisplayValue:(long long)arg0;
- (id)defaultPoint;
- (void)setDefaultPoint:(id)arg0;
- (id /* block */)changeEndBlock;
- (id)beautyProvider;
- (void)setBeautyProvider:(id)arg0;
- (void)slideChanged:(id)arg0;
- (void)dragExit:(id)arg0;
- (void)updateIndicatorLabelDisplayAndFrame:(long long)arg0;
- (BOOL)needStep;
- (void)updateIndicatorLabelDisplay:(long long)arg0;
- (void)updateIndicatorLabelFrame:(long long)arg0;
- (void)setTitleLabelWidth:(double)arg0 needAdjustFont:(BOOL)arg1;
- (void)setNeedStep:(BOOL)arg0;
- (BOOL)showIndicator;
- (void).cxx_destruct;
- (long long)currentValue;
- (void)setMaximumTrackTintColor:(id)arg0;
- (id)slider;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setSlider:(id)arg0;
- (id)title;
- (void)setMinimumTrackTintColor:(id)arg0;
- (void)setCurrentValue:(long long)arg0;
- (void)layoutSubviews;
- (void)setValue:(long long)arg0;
- (void)setTitleLabel:(id)arg0;
- (void)setTitle:(id)arg0;
- (id /* block */)valueChangedBlock;
- (void)setValueChangedBlock:(id /* block */)arg0;
- (id)indicatorLabel;

@end