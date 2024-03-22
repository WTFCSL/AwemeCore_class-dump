//
//     Generated by private class-dump
//

@class NSString, UIImageView, NSTimer, CAKeyframeAnimation, ACCFocusViewModel, ACCExposureSlider;
@protocol ACCRecordSwitchModeService, ACCRecorderViewContainer, ACCCameraService, ACCRecordPropService;

@interface ACCFocusComponent : ACCFeatureComponent <ACCRecordConfigAudioHandler, ACCCameraLifeCircleEvent, ACCCameraControlEvent, CAAnimationDelegate, ACCRecordSwitchModeServiceSubscriber> {
    BOOL _isFirstAppear;
    BOOL _isOnFocusAndExposureAnimating;
    id<ACCRecorderViewContainer> _viewContainer;
    id<ACCCameraService> _cameraService;
    id<ACCRecordSwitchModeService> _switchModeService;
    id<ACCRecordPropService> _propService;
    ACCFocusViewModel *_viewModel;
    ACCExposureSlider *_exposureSlider;
    UIImageView *_focusImageView;
    NSTimer *_exposureSliderHideTimer;
    CAKeyframeAnimation *_fadeOutAnimation;
    long long _removeActionVersion;
}

@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (nonatomic) BOOL isFirstAppear;
@property (nonatomic) BOOL isOnFocusAndExposureAnimating;
@property (retain, nonatomic) ACCFocusViewModel *viewModel;
@property (retain, nonatomic) ACCExposureSlider *exposureSlider;
@property (retain, nonatomic) UIImageView *focusImageView;
@property (retain, nonatomic) NSTimer *exposureSliderHideTimer;
@property (retain, nonatomic) CAKeyframeAnimation *fadeOutAnimation;
@property (nonatomic) long long removeActionVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setIsFirstAppear:(BOOL)arg0;
- (id)cameraService;
- (void)setCameraService:(id)arg0;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (void)componentDidAppear;
- (unsigned long long)preferredLoadPhase;
- (void)componentWillAppear;
- (id)serviceBinding;
- (void)bindServices:(id)arg0;
- (id)switchModeService;
- (void)switchModeServiceWillChangeToMode:(id)arg0 oldMode:(id)arg1;
- (void)setSwitchModeService:(id)arg0;
- (id)propService;
- (void)setPropService:(id)arg0;
- (void)onDidManuallyAdjustFocusPoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)onDidManuallyAdjustFocusAndExposurePoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)onDidManuallyAdjustExposureBiasWithRatio:(float)arg0 exposureRatio:(float)arg1;
- (void)onWillSwitchToCameraPosition:(long long)arg0;
- (void)p_bindViewModels;
- (void)p_readExistData;
- (void)cancelExposureSliderHideTimer;
- (void)p_didSetEffectWithPack:(id)arg0;
- (void)hideFocusAndExposureSlider;
- (void)cancelExposureSliderFadeOutAnimation;
- (long long)removeActionVersion;
- (void)setRemoveActionVersion:(long long)arg0;
- (id)focusImageView;
- (void)setIsOnFocusAndExposureAnimating:(BOOL)arg0;
- (void)startExposureSliderHideTimerWithVersion:(long long)arg0;
- (void)setExposureSliderHideTimer:(id)arg0;
- (id)exposureSliderHideTimer;
- (id)fadeOutAnimation;
- (void)willFocusAtPoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)willFocusAndExposureAtPoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)startExposureSliderFadeOutAnimation;
- (BOOL)isOnFocusAndExposureAnimating;
- (void)setExposureSlider:(id)arg0;
- (void)setFocusImageView:(id)arg0;
- (void)setFadeOutAnimation:(id)arg0;
- (void).cxx_destruct;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)animationDidStop:(id)arg0 finished:(BOOL)arg1;
- (BOOL)isFirstAppear;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;
- (id)exposureSlider;

@end