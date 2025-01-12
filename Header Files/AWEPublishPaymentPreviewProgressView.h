//
//     Generated by private class-dump
//

@class AWEPaymentPreviewSlider, UIView;
@protocol AAWEPublishPaymentPreviewProgressViewDelegate;

@interface AWEPublishPaymentPreviewProgressView : UIView {
    BOOL _isNormalStatus;
    BOOL _isSliding;
    id<AAWEPublishPaymentPreviewProgressViewDelegate> _delegate;
    AWEPaymentPreviewSlider *_progressSlider;
    UIView *_gestureView;
    UIView *_progressDotView;
    double _maxRatio;
}

@property (retain, nonatomic) AWEPaymentPreviewSlider *progressSlider;
@property (retain, nonatomic) UIView *gestureView;
@property (retain, nonatomic) UIView *progressDotView;
@property (nonatomic) double maxRatio;
@property (nonatomic) BOOL isNormalStatus;
@property (nonatomic) BOOL isSliding;
@property (weak, nonatomic) id<AAWEPublishPaymentPreviewProgressViewDelegate> delegate;

- (void)progressSliderValueChanged:(id)arg0;
- (BOOL)isNormalStatus;
- (void)setIsNormalStatus:(BOOL)arg0;
- (BOOL)isSliding;
- (void)setIsSliding:(BOOL)arg0;
- (void)updateProgressSliderToStrong;
- (void)updateProgressSliderToNormal;
- (void)sliderProgressSliderTouchBegan:(id)arg0;
- (void)sliderProgressSliderTouchEnded:(id)arg0;
- (void)updateMinimumTrackImage;
- (void)updateSliderValueWithGesture:(id)arg0;
- (void)updateCurrentTime:(double)arg0 totalTime:(double)arg1 animated:(BOOL)arg2;
- (void)updateDotViewRatio:(double)arg0;
- (id)progressDotView;
- (void)setProgressDotView:(id)arg0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (id)init;
- (void).cxx_destruct;
- (void)handleGesture:(id)arg0;
- (id)delegate;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (void)setupUI;
- (double)maxRatio;
- (void)setMaxRatio:(double)arg0;
- (id)progressSlider;
- (void)setProgressSlider:(id)arg0;
- (id)gestureView;
- (void)setGestureView:(id)arg0;

@end
