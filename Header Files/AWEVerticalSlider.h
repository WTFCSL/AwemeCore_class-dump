//
//     Generated by private class-dump
//

@class UIColor, AWESlider, UIImageView, UIView, UIPanGestureRecognizer, CALayer;

@interface AWEVerticalSlider : UIView {
    AWESlider *_slider;
    UIColor *_sliderBackgroundColor;
    UIColor *_sliderForegroundColor;
    UIView *_sliderBackgroundContainerView;
    UIView *_sliderBackgroundView;
    UIView *_sliderForegroundView;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UIImageView *_displayImageView;
    double _lastSliderValue;
    CALayer *_foregroundLayer;
}

@property (retain, nonatomic) AWESlider *slider;
@property (retain, nonatomic) UIView *sliderBackgroundContainerView;
@property (retain, nonatomic) UIView *sliderBackgroundView;
@property (retain, nonatomic) UIView *sliderForegroundView;
@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property (retain, nonatomic) UIImageView *displayImageView;
@property (nonatomic) double lastSliderValue;
@property (retain, nonatomic) CALayer *foregroundLayer;
@property (retain, nonatomic) UIColor *sliderBackgroundColor;
@property (retain, nonatomic) UIColor *sliderForegroundColor;

- (void)setSliderBackgroundColor:(id)arg0;
- (void)setupDefaultValues;
- (id)sliderBackgroundColor;
- (id)sliderBackgroundView;
- (void)setSliderBackgroundView:(id)arg0;
- (void)setLastSliderValue:(double)arg0;
- (double)lastSliderValue;
- (id)sliderForegroundView;
- (void)setSliderValue:(float)arg0 animated:(BOOL)arg1 forceUpdate:(BOOL)arg2;
- (void)layoutForegroundView;
- (id)displayImageView;
- (void)setDisplayImageView:(id)arg0;
- (void)p_changeColor:(double)arg0;
- (void)setSliderForegroundColor:(id)arg0;
- (void)updateMaximumValue:(double)arg0;
- (void)configMinimumValue:(double)arg0 maximumValue:(double)arg1 defaultValue:(double)arg2;
- (void)setupDisplayImageViewConfig:(id)arg0;
- (id)sliderForegroundColor;
- (id)sliderBackgroundContainerView;
- (void)setSliderBackgroundContainerView:(id)arg0;
- (void)setSliderForegroundView:(id)arg0;
- (void)setForegroundLayer:(id)arg0;
- (void)setPanGestureRecognizer:(id)arg0;
- (id)panGestureRecognizer;
- (void).cxx_destruct;
- (id)slider;
- (void)accessibilityDecrement;
- (void)setup;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setSlider:(id)arg0;
- (void)accessibilityIncrement;
- (void)layoutSubviews;
- (id)accessibilityValue;
- (id)foregroundLayer;
- (void)didPan:(id)arg0;
- (void)setSliderValue:(float)arg0 animated:(BOOL)arg1;

@end