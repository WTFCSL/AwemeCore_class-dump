//
//     Generated by private class-dump
//

@class UIColor, NSString, UIView, CALayer, UILongPressGestureRecognizer;
@protocol AWEFeedProgressSliderDelegate;

@interface AWEFeedProgressSlider : UIView <UIGestureRecognizerDelegate, AWEFeedProgressSliderProtocol> {
    CALayer *_sliderLeftLayer;
    CALayer *_thumbContainerLayer;
    CALayer *_thumbLayer;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _priviousBounds;
    double _currentWidth;
    double _currentHeight;
    double _currentLeftWidth;
    double _YOffset;
    double _minOffset;
    UIView *_containerView;
    UILongPressGestureRecognizer *_thumbGesture;
    double _sliderThumbLeftRightOffset;
    double _sliderThumbTopOffset;
    double _sliderThumbHotZoneOffset;
    BOOL _limitUpperActionArea;
    BOOL _continuous;
    BOOL _isV3SettingNotDefaultStyle;
    BOOL _isUsedForMain;
    BOOL _hideContainer;
    float _value;
    float _maximumValue;
    float _minimumValue;
    UIColor *_minimumTrackTintColor;
    UIColor *_maximumTrackTintColor;
    double _hotZoneMaximumY;
    double _hotZoneMinimumY;
    id<AWEFeedProgressSliderDelegate> _progressSliderDelegate;
    UIView *_sliderRightView;
}

@property (retain, nonatomic) UIView *sliderRightView;
@property (weak, nonatomic) id<AWEFeedProgressSliderDelegate> progressSliderDelegate;
@property (nonatomic) BOOL hideContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) float value;
@property (nonatomic) float maximumValue;
@property (nonatomic) float minimumValue;
@property (retain, nonatomic) UIColor *minimumTrackTintColor;
@property (retain, nonatomic) UIColor *maximumTrackTintColor;
@property (nonatomic) BOOL limitUpperActionArea;
@property (nonatomic, getter=isContinuous) BOOL continuous;
@property (nonatomic) BOOL isV3SettingNotDefaultStyle;
@property (nonatomic) double hotZoneMinimumY;
@property (nonatomic) double hotZoneMaximumY;
@property (nonatomic) BOOL isUsedForMain;

- (void)setIsUsedForMain:(BOOL)arg0;
- (BOOL)isUsedForMain;
- (double)hotZoneMinimumY;
- (BOOL)limitUpperActionArea;
- (BOOL)isV3SettingNotDefaultStyle;
- (double)hotZoneMaximumY;
- (void)setValue:(float)arg0 animatedDuration:(double)arg1;
- (void)setLimitUpperActionArea:(BOOL)arg0;
- (void)setIsV3SettingNotDefaultStyle:(BOOL)arg0;
- (void)setHotZoneMinimumY:(double)arg0;
- (void)setHotZoneMaximumY:(double)arg0;
- (void)updateUIWithAnimation:(BOOL)arg0 duration:(double)arg1 forceUpdate:(BOOL)arg2;
- (id)sliderRightView;
- (BOOL)hideContainer;
- (void)handleProgressGesture:(id)arg0;
- (BOOL)shouldUseAnimation;
- (id)progressSliderDelegate;
- (void)setHideContainer:(BOOL)arg0;
- (void)setThumbHotZoneOffset:(double)arg0;
- (void)setProgressSliderDelegate:(id)arg0;
- (void)setSliderRightView:(id)arg0;
- (void)setContinuous:(BOOL)arg0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (void)setMaximumTrackTintColor:(id)arg0;
- (float)value;
- (void)setThumbImage:(id)arg0 forState:(unsigned long long)arg1;
- (id)maximumTrackTintColor;
- (float)maximumValue;
- (void)accessibilityDecrement;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (float)minimumValue;
- (void)setMaximumValue:(float)arg0;
- (void)setMinimumTrackTintColor:(id)arg0;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (BOOL)isContinuous;
- (void)accessibilityIncrement;
- (void)layoutSubviews;
- (void)setValue:(float)arg0;
- (BOOL)isAccessibilityElement;
- (void)setMinimumValue:(float)arg0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (id)minimumTrackTintColor;
- (id)accessibilityValue;
- (void)addTarget:(id)arg0 action:(SEL)arg1 forControlEvents:(unsigned long long)arg2;
- (void)setupUI;

@end
