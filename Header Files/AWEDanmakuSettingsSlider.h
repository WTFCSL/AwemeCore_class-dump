//
//     Generated by private class-dump
//

@class NSArray, UIView, AWEDanmakuSlider, UITapGestureRecognizer;
@protocol AWEDanmakuSettingsSliderDelegate;

@interface AWEDanmakuSettingsSlider : UIView {
    id<AWEDanmakuSettingsSliderDelegate> _delegate;
    UIView *_container;
    AWEDanmakuSlider *_slider;
    NSArray *_pointList;
    unsigned long long _scene;
    UITapGestureRecognizer *_tapGesture;
}

@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) AWEDanmakuSlider *slider;
@property (copy, nonatomic) NSArray *pointList;
@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (weak, nonatomic) id<AWEDanmakuSettingsSliderDelegate> delegate;

- (double)attachValueWithCurrentValue:(double)arg0 shock:(BOOL)arg1;
- (double)realValueWithCurrentValue:(double)arg0;
- (void)configPointList:(long long)arg0;
- (id)pointList;
- (void)hidePointAtIndex:(long long)arg0;
- (id)configPointView;
- (void)setPointList:(id)arg0;
- (void)makeMediumShock;
- (long long)attachToNearPoint:(double)arg0 forceShock:(BOOL)arg1;
- (void)seekValueAfterTouchEnd:(double)arg0 forceShock:(BOOL)arg1;
- (id)drawSliderThumbImage;
- (void)sliderTouchBegin:(id)arg0;
- (void)sliderTouchChanged:(id)arg0;
- (void)sliderTouchEnd:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 count:(long long)arg1 scene:(unsigned long long)arg2;
- (void)seekToValuePercent:(double)arg0;
- (void)seekToPoint:(long long)arg0;
- (void)awe_setSliderAccessibilityValue:(id)arg0;
- (id)container;
- (void)setScene:(unsigned long long)arg0;
- (void).cxx_destruct;
- (id)slider;
- (void)setContainer:(id)arg0;
- (void)setSlider:(id)arg0;
- (id)tapGesture;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (unsigned long long)scene;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (void)setupUI;
- (void)setTapGesture:(id)arg0;
- (void)handleTapGesture:(id)arg0;

@end
