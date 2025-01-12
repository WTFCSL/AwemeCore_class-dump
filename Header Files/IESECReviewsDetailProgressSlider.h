//
//     Generated by private class-dump
//

@class UIImageView, IESECReviewsDetailProgressSliderConfiguration, UIView, UIPanGestureRecognizer;

@interface IESECReviewsDetailProgressSlider : UIControl {
    UIView *_minimumTrackView;
    UIView *_maximumTrackView;
    UIImageView *_thumbImageView;
    UIPanGestureRecognizer *_panGesture;
    IESECReviewsDetailProgressSliderConfiguration *_normalConfiguration;
    IESECReviewsDetailProgressSliderConfiguration *_activatedConfiguration;
    BOOL _activated;
    double _value;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _responseAreaInsets;
}

@property (nonatomic) double value;
@property (nonatomic, getter=isActivated) BOOL activated;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } responseAreaInsets;

+ (id)sliderWithConfigurationForNormal:(id)arg0 configurationForActivated:(id)arg1;

- (id)initWithConfigurationForNormal:(id)arg0 configurationForActivated:(id)arg1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })responseAreaInsets;
- (void)setResponseAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (BOOL)isActivated;
- (void)setActivated:(BOOL)arg0;
- (void).cxx_destruct;
- (double)value;
- (void)handleGesture:(id)arg0;
- (void)layoutSubviews;
- (void)setValue:(double)arg0;
- (void)setupSubviews;

@end
