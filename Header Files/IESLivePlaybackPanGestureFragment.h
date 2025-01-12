//
//     Generated by private class-dump
//

@class MPVolumeView, NSString, IESLivePlaybackPanGestureStore, UISlider, UIPanGestureRecognizer, IESLivePlaybackBrightnessVolumnView;
@protocol IESLivePlaybackBrightnessVolumeActions;

@interface IESLivePlaybackPanGestureFragment : IESLivePlaybackComponent <UIGestureRecognizerDelegate, IESLiveAudienceBrightnessVolumeRouter, IESLivePlaybackBrightnessVolumReaction, IESLivePlaybackLandscapeLockAction, IESLivePlaybackCustomAutoHideAnimService, IESLivePlaybackLandscapePictureScaleRouter, IESLivePlaybackComponentLifeCycle> {
    BOOL _isGestureHandling;
    BOOL _isSeeking;
    BOOL _isAutoHidden;
    BOOL _enableBrightnessAdjust;
    BOOL _isHideBeforeSeekForPlayerControl;
    IESLivePlaybackPanGestureStore *_store;
    long long _orientation;
    UIPanGestureRecognizer *_panGesture;
    UISlider *_volumeSlider;
    MPVolumeView *_mpVolumnView;
    double _originBrightness;
    double _adjustedBrightness;
    double _lastVolValue;
    IESLivePlaybackBrightnessVolumnView *_brightnessVolumnView;
    double _originValue;
    id<IESLivePlaybackBrightnessVolumeActions> _brightnessVolumeActionsDispatcher;
    double _brightnessGap;
    struct CGPoint { double x; double y; } _currentGestureLoc;
}

@property (retain, nonatomic) IESLivePlaybackPanGestureStore *store;
@property (nonatomic) long long orientation;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (retain, nonatomic) UISlider *volumeSlider;
@property (retain, nonatomic) MPVolumeView *mpVolumnView;
@property (nonatomic) struct CGPoint { double x; double y; } currentGestureLoc;
@property (nonatomic) double originBrightness;
@property (nonatomic) double adjustedBrightness;
@property (nonatomic) double lastVolValue;
@property (nonatomic) BOOL isGestureHandling;
@property (nonatomic) BOOL isSeeking;
@property (nonatomic) BOOL isAutoHidden;
@property (retain, nonatomic) IESLivePlaybackBrightnessVolumnView *brightnessVolumnView;
@property (nonatomic) double originValue;
@property (retain, nonatomic) id<IESLivePlaybackBrightnessVolumeActions> brightnessVolumeActionsDispatcher;
@property (nonatomic) BOOL enableBrightnessAdjust;
@property (nonatomic) double brightnessGap;
@property (nonatomic) BOOL isHideBeforeSeekForPlayerControl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL disableCustomVolume;

- (void)trackEvent:(id)arg0 params:(id)arg1;
- (void)setIsSeeking:(BOOL)arg0;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (void)componentWillAppear;
- (void)handleKeyboardShowNoti:(id)arg0;
- (void)handleKeyboardHideNoti:(id)arg0;
- (void)setOriginBrightness:(double)arg0;
- (double)originBrightness;
- (void)addPanGesture;
- (void)componentBindService;
- (void)componentCreate;
- (void)componentOrientationChanged:(long long)arg0;
- (BOOL)enableBrightnessAdjust;
- (void)setEnableBrightnessAdjust:(BOOL)arg0;
- (BOOL)isAdjusting;
- (void)landscapeViewsTransformToHidden:(BOOL)arg0;
- (void)portraitViewsTransformToHidden:(BOOL)arg0;
- (BOOL)usePadNewStyle;
- (void)beginAdjusting:(long long)arg0;
- (void)endAdjusting;
- (void)handleSystemBrightnessDidChanged:(id)arg0;
- (void)beginAdjustingInLocation:(struct CGPoint { double x0; double x1; })arg0;
- (void)adjustingInLocation:(struct CGPoint { double x0; double x1; })arg0;
- (void)endAdjustingInLocation:(struct CGPoint { double x0; double x1; })arg0;
- (BOOL)isAdjustable;
- (void)setBrightnessGap:(double)arg0;
- (id)mpVolumnView;
- (void)volumeDidChange:(double)arg0;
- (BOOL)isGestureHandling;
- (id)brightnessVolumnView;
- (void)setSystemVolumeViewHidden:(BOOL)arg0;
- (void)layoutBrightnessVolumnViewIfNeeded;
- (void)setAdjustedBrightness:(double)arg0;
- (void)beginSeekInLocation:(struct CGPoint { double x0; double x1; })arg0;
- (void)endSeekInLocation:(struct CGPoint { double x0; double x1; })arg0;
- (void)seekingInLocation:(struct CGPoint { double x0; double x1; })arg0;
- (struct CGPoint { double x0; double x1; })currentGestureLoc;
- (double)brightnessGap;
- (double)_calculateValue:(double)arg0 addition:(double)arg1;
- (void)setBrightnessVolumnValue:(double)arg0 type:(long long)arg1;
- (void)resetBrightnessVolumnViewWithAdjustingType:(long long)arg0;
- (void)setCurrentGestureLoc:(struct CGPoint { double x0; double x1; })arg0;
- (void)setOriginValue:(double)arg0;
- (double)originValue;
- (void)seekValueInLocation:(struct CGPoint { double x0; double x1; })arg0;
- (id)userInteractionEnableView;
- (id)brightnessVolumeActionsDispatcher;
- (long long)adjustingTypeInLocation:(struct CGPoint { double x0; double x1; })arg0;
- (void)setIsGestureHandling:(BOOL)arg0;
- (double)adjustingValueInLocation:(struct CGPoint { double x0; double x1; })arg0;
- (void)setBrightnessVolumnViewValue:(double)arg0 type:(long long)arg1;
- (void)brightnessVolumnDidBeginAdjusting:(id)arg0;
- (void)brightnessVolumnDidEndAdjusting:(id)arg0;
- (void)brightnessVolumn:(id)arg0 didUpdateValue:(double)arg1;
- (void)setMpVolumnView:(id)arg0;
- (double)adjustedBrightness;
- (void)setBrightnessVolumnView:(id)arg0;
- (void)setBrightnessVolumeActionsDispatcher:(id)arg0;
- (void)lockStatusChange:(BOOL)arg0;
- (void)setIsAutoHidden:(BOOL)arg0;
- (void)changeIconWithAdjustingType:(long long)arg0 value:(double)arg1;
- (void)setIsHideBeforeSeekForPlayerControl:(BOOL)arg0;
- (BOOL)isHideBeforeSeekForPlayerControl;
- (BOOL)isAutoHidden;
- (void)setLastVolValue:(double)arg0;
- (double)lastVolValue;
- (void).cxx_destruct;
- (id)store;
- (long long)orientation;
- (void)setStore:(id)arg0;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (void)setOrientation:(long long)arg0;
- (BOOL)isSeeking;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(void *)arg3;
- (void)addObserver;
- (id)panGesture;
- (void)setPanGesture:(id)arg0;
- (void)updateValue:(double)arg0;
- (void)handlePanGesture:(id)arg0;
- (id)volumeSlider;
- (void)setVolumeSlider:(id)arg0;

@end
