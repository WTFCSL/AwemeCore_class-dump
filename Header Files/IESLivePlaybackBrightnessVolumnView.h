//
//     Generated by private class-dump
//

@class UIImageView, UIView;

@interface IESLivePlaybackBrightnessVolumnView : UIView {
    float _value;
    float _minimumValue;
    float _maximumValue;
    UIImageView *_iconImageView;
    UIView *_sliderBackground;
    UIView *_sliderView;
}

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIView *sliderBackground;
@property (retain, nonatomic) UIView *sliderView;
@property (nonatomic) float value;
@property (nonatomic) float minimumValue;
@property (nonatomic) float maximumValue;

- (void)updateIconImage:(id)arg0;
- (id)sliderBackground;
- (void)calculateValueAndLayout:(double)arg0;
- (void)setSliderBackground:(id)arg0;
- (id)sliderView;
- (void).cxx_destruct;
- (float)value;
- (void)tintColorDidChange;
- (float)maximumValue;
- (void)setup;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (float)minimumValue;
- (void)setMaximumValue:(float)arg0;
- (void)setSliderView:(id)arg0;
- (void)layoutSubviews;
- (void)setValue:(float)arg0;
- (id)iconImageView;
- (void)setMinimumValue:(float)arg0;
- (void)setIconImageView:(id)arg0;
- (void)updateValue:(double)arg0;

@end
