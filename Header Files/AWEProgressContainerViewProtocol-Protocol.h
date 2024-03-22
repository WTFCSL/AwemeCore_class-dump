//
//     Generated by private class-dump
//

@class UISlider, UIView;
@protocol AWEProgressContainerViewDelegate, AWEProgressDecoratorViewProtocol;

@protocol AWEProgressContainerViewProtocol <NSObject>

@property (weak, nonatomic) id<AWEProgressContainerViewDelegate> delegate;
@property (readonly, nonatomic) UISlider *progressSlider;
@property (retain, nonatomic) UIView<AWEProgressDecoratorViewProtocol> *decoratorView;
@property (nonatomic) BOOL enablePanGesture;
@property (readonly, nonatomic) double currentPercentage;
@property (nonatomic) double minimumValue;
@property (nonatomic) double maximumValue;

- (void)setThumbImage:(id)arg0;
- (void)setSliderHeight:(double)arg0;
- (BOOL)enablePanGesture;
- (id)decoratorView;
- (void)setDecoratorView:(id)arg0;
- (void)setCurrentPercentage:(double)arg0 animate:(BOOL)arg1;
- (void)setHideUnderView:(BOOL)arg0;
- (void)setUnderViewHeight:(double)arg0;
- (void)setUnderViewBackgroundColor:(id)arg0;
- (void)setSliderEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (void)setSliderCornerRaidus:(double)arg0;
- (void)setMinimumTrackImage:(id)arg0;
- (void)setMaximumTrackImage:(id)arg0;
- (void)shouldUseThumbHeightAsHotZoneMaximumOffsetY:(BOOL)arg0;
- (void)setHotZoneMinimumOffsetY:(double)arg0;
- (void)setHotZoneMaximumOffsetY:(double)arg0;
- (void)setEnablePanGesture:(BOOL)arg0;
- (void)setMaximumTrackTintColor:(id)arg0;
- (void)setThumbImage:(id)arg0 forState:(unsigned long long)arg1;
- (double)maximumValue;
- (double)minimumValue;
- (void)setMaximumValue:(double)arg0;
- (id)delegate;
- (void)setMinimumTrackTintColor:(id)arg0;
- (void)setDelegate:(id)arg0;
- (void)setMinimumValue:(double)arg0;
- (void)setThumbTintColor:(id)arg0;
- (id)progressSlider;
- (double)currentPercentage;

@end