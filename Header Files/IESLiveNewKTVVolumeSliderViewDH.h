//
//     Generated by private class-dump
//

@class UILabel, UISlider;

@interface IESLiveNewKTVVolumeSliderViewDH : UIView {
    float _value;
    float _minimumValue;
    float _maximumValue;
    id /* block */ _valueChangedEvent;
    UILabel *_titleLabel;
    UILabel *_valueLabel;
    UISlider *_volumeSlider;
}

@property (copy, nonatomic) id /* block */ valueChangedEvent;
@property (nonatomic) float value;
@property (nonatomic) float minimumValue;
@property (nonatomic) float maximumValue;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *valueLabel;
@property (retain, nonatomic) UISlider *volumeSlider;

- (void)sliderValueChanged:(id)arg0 forEvent:(id)arg1;
- (void)setValueChangedEvent:(id /* block */)arg0;
- (id /* block */)valueChangedEvent;
- (id)init;
- (void).cxx_destruct;
- (float)value;
- (id)titleLabel;
- (float)maximumValue;
- (float)minimumValue;
- (void)setMaximumValue:(float)arg0;
- (void)setValue:(float)arg0;
- (void)setTitleLabel:(id)arg0;
- (void)setMinimumValue:(float)arg0;
- (id)valueLabel;
- (void)setValueLabel:(id)arg0;
- (id)volumeSlider;
- (void)setVolumeSlider:(id)arg0;

@end
