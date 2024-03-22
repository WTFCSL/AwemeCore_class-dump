//
//     Generated by private class-dump
//

@class ACCCameraSubscription, NSString, NSNumber, UIViewController;
@protocol VERecorderPublicProtocol;

@interface ACCCameraControlWrapper : NSObject <ACCCameraBuildListener, ACCCreativePathMessage, ACCCameraControlProtocolD> {
    BOOL _audioCaptureInitializing;
    BOOL _enableMultiZoomCapability;
    BOOL _skipSetCameraType;
    BOOL _isSwapCamera;
    BOOL _isFlashEnable;
    BOOL _isTorchEnable;
    BOOL _supprotZoom;
    BOOL _scanManualOperationZoomFactor;
    BOOL _recorderDisappeared;
    BOOL _applicationIsBackground;
    void *_cameraContext;
    NSString *_capturePreset;
    ACCCameraSubscription *_subscription;
    id<VERecorderPublicProtocol> _camera;
    long long _currentCameraPosition;
    double _currentExposureBias;
    unsigned long long _flashMode;
    unsigned long long _torchMode;
    id /* block */ _switchFrontTorchBlcok;
    NSNumber *_brightness;
    double _zoomFactor;
    double _maxZoomFactor;
    double _minZoomFactor;
    UIViewController *_recorderViewController;
    struct CGSize { double width; double height; } _outputSize;
    struct CGPoint { double x; double y; } _exposurePoint;
    struct CGPoint { double x; double y; } _focusPoint;
}

@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (nonatomic) void *cameraContext;
@property (nonatomic) struct CGSize { double width; double height; } outputSize;
@property (weak, nonatomic) id<VERecorderPublicProtocol> camera;
@property (nonatomic) BOOL isSwapCamera;
@property (nonatomic) long long currentCameraPosition;
@property (nonatomic) struct CGPoint { double x; double y; } exposurePoint;
@property (nonatomic) struct CGPoint { double x; double y; } focusPoint;
@property (nonatomic) double currentExposureBias;
@property (nonatomic) unsigned long long flashMode;
@property (nonatomic) unsigned long long torchMode;
@property (copy, nonatomic) id /* block */ switchFrontTorchBlcok;
@property (retain, nonatomic) NSNumber *brightness;
@property (nonatomic) BOOL isFlashEnable;
@property (nonatomic) BOOL isTorchEnable;
@property (nonatomic) BOOL supprotZoom;
@property (nonatomic) double zoomFactor;
@property (nonatomic) double maxZoomFactor;
@property (nonatomic) double minZoomFactor;
@property (nonatomic) BOOL scanManualOperationZoomFactor;
@property (nonatomic) BOOL recorderDisappeared;
@property (weak, nonatomic) UIViewController *recorderViewController;
@property (nonatomic) BOOL applicationIsBackground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL enableMultiZoomCapability;
@property (nonatomic) NSString *capturePreset;
@property (nonatomic) BOOL skipSetCameraType;
@property (readonly, nonatomic) BOOL audioCaptureInitializing;

- (void)startAudioCapture:(id /* block */)arg0 withPrivacyCert:(id)arg1;
- (BOOL)isAudioCaptureRuning;
- (void)releaseAudioCapture;
- (void)pauseCameraCapture;
- (void)resumeCameraCapture;
- (long long)currentCameraPosition;
- (void)setMaxZoomFactor:(double)arg0;
- (void)setFrontPreferredStabilizationMode:(long long)arg0;
- (void)setRearPreferredStabilizationMode:(long long)arg0;
- (BOOL)handleTouchDown:(struct CGPoint { double x0; double x1; })arg0 withType:(unsigned long long)arg1;
- (BOOL)handleTouchUp:(struct CGPoint { double x0; double x1; })arg0 withType:(unsigned long long)arg1;
- (BOOL)handlePanEventWithTranslation:(struct CGPoint { double x0; double x1; })arg0 location:(struct CGPoint { double x0; double x1; })arg1;
- (BOOL)handleLongPressEventWithLocation:(struct CGPoint { double x0; double x1; })arg0;
- (BOOL)handleScaleEvent:(double)arg0;
- (BOOL)handleDoubleClickEvent:(struct CGPoint { double x0; double x1; })arg0;
- (void)stopVideoCaptureWithPrivacyCert:(id)arg0;
- (void)startVideoCaptureWithPrivacyCert:(id)arg0;
- (void *)cameraContext;
- (void)setCameraContext:(void *)arg0;
- (void)setPreviewRotationMode:(unsigned long long)arg0;
- (struct CGSize { double x0; double x1; })captureSize;
- (void)setFirstRenderBlock:(id /* block */)arg0;
- (void)initAudioCapture:(id /* block */)arg0;
- (void)setPureCameraMode:(BOOL)arg0;
- (void)turnLensCombinedEnhanceAlgorithm:(BOOL)arg0;
- (void)resetPreferredFrameRate:(unsigned long long)arg0;
- (void)resetFocusModeWithTransform:(long long)arg0 point:(struct CGPoint { double x0; double x1; })arg1;
- (struct CGPoint { double x0; double x1; })exposurePoint;
- (void)resetExposureModeWithTransform:(long long)arg0 point:(struct CGPoint { double x0; double x1; })arg1;
- (void)removeHTSGLPreview;
- (void)resetCaptureRatio:(long long)arg0 then:(id /* block */)arg1;
- (void)resetCaptureRatio:(long long)arg0 preferredSize:(struct CGSize { double x0; double x1; })arg1 then:(id /* block */)arg2;
- (void)resetCaptureRatio:(long long)arg0 preferredPreset:(id)arg1 previewSize:(struct CGSize { double x0; double x1; })arg2 outputSize:(struct CGSize { double x0; double x1; })arg3 then:(id /* block */)arg4;
- (void)startAudioCaptureWithPrivacyCert:(id)arg0;
- (void)stopAudioCaptureWithPrivacyCert:(id)arg0;
- (void)startVideoCaptureWithAppStatusCheckWithPrivacyCert:(id)arg0;
- (id)cameraZoomSupportedInfo;
- (void)setOutputDirection:(long long)arg0;
- (void)cancelVideoRecord;
- (void)setBGVideoAutoRepeat:(BOOL)arg0;
- (BOOL)updateTouchInfoForGestureRecognition:(struct _VETouchInfo { unsigned int x0; struct CGPoint { double x0; double x1; } x1; float x2; float x3; int x4; long long x5; })arg0;
- (id)capturePreset;
- (void)setCapturePreset:(id)arg0;
- (id)getCameraConfig;
- (id)captureFrame;
- (BOOL)getIgnoreNotificatio;
- (BOOL)isCameraCapabilitySupportedZoom;
- (void)setCurrentCameraPosition:(long long)arg0;
- (void)changeOutputSize:(struct CGSize { double x0; double x1; })arg0;
- (BOOL)checkConfigNeedInterrupt:(id)arg0;
- (void)resetCameraRecordConfig:(id)arg0 cameraComplete:(id /* block */)arg1;
- (void)syncCameraActualPosition;
- (void)resetCameraZoomFactor;
- (void)setCameraProvider:(id)arg0;
- (void)switchToCameraPosition:(long long)arg0;
- (void)switchToCameraPosition:(long long)arg0 withResetScale:(BOOL)arg1;
- (void)switchToOppositeCameraPosition;
- (void)switchToOppositeCameraPositionWithResetScale:(BOOL)arg0;
- (void)updateDeviceInfoWhenCameraHasPrepared;
- (void)switchToFlashMode:(unsigned long long)arg0;
- (void)switchToTorchMode:(unsigned long long)arg0;
- (void)turnOnUniversalTorch;
- (void)turnOffUniversalTorch;
- (void)registerTorch:(id /* block */)arg0 forCamera:(long long)arg1;
- (long long)getNextFlashMode;
- (long long)getNextTorchMode;
- (void)setCameraMaxZoomFactor:(double)arg0;
- (void)changeToZoomFactorWithAnimation:(double)arg0;
- (void)animationChangeToZoomFactor:(double)arg0;
- (BOOL)currentInVirtualCameraMode;
- (void)scanQrcodeChangeToZoomFactor:(double)arg0 byUser:(BOOL)arg1;
- (void)changeFocusPointTo:(struct CGPoint { double x0; double x1; })arg0;
- (void)changeExposurePointTo:(struct CGPoint { double x0; double x1; })arg0;
- (void)changeFocusAndExposurePointTo:(struct CGPoint { double x0; double x1; })arg0;
- (void)changeExposureBiasWithRatio:(float)arg0;
- (void)resetExposureBias;
- (double)currentExposureBias;
- (void)startAudioCaptureWithPrivacyCert:(id)arg0 tryNumber:(long long)arg1 completeBlock:(id /* block */)arg2;
- (void)resumeHTSGLPreviewWithView:(id)arg0;
- (void)preferredCameraType:(long long)arg0;
- (void)notNeedAutoStartAudioCapture:(BOOL)arg0;
- (void)ignoreNotification:(BOOL)arg0;
- (long long)currenCaptureRatio;
- (void)resetCapturePreferredSize:(struct CGSize { double x0; double x1; })arg0 then:(id /* block */)arg1;
- (void)resetCapturePreset:(id)arg0 previewSize:(struct CGSize { double x0; double x1; })arg1 then:(id /* block */)arg2;
- (void)captureFrameWhenStopCaptre:(id /* block */)arg0;
- (void)clearCaptureFrame;
- (BOOL)audioCaptureInitializing;
- (BOOL)isFlashEnable;
- (BOOL)isTorchEnable;
- (BOOL)supprotZoom;
- (BOOL)scanManualOperationZoomFactor;
- (void)enableHorizontalScreenMode:(unsigned long long)arg0 resetRotation:(unsigned long long)arg1;
- (id)lastBlurredCaptureFrame;
- (id)lastCaptureFrame;
- (BOOL)enableMultiZoomCapability;
- (void)setEnableMultiZoomCapability:(BOOL)arg0;
- (BOOL)skipSetCameraType;
- (void)setSkipSetCameraType:(BOOL)arg0;
- (void)creativePathPageWillAppear:(unsigned long long)arg0 controller:(id)arg1;
- (void)creativePathPageWillDisappear:(unsigned long long)arg0 controller:(id)arg1;
- (BOOL)p_verifyCameraContext;
- (void)onCameraInit:(id)arg0;
- (id /* block */)provideRecordInfoBlock;
- (void)recorderWillAppearNotification:(id)arg0;
- (BOOL)isCameraTorchCapabilitySupported;
- (void)setIsTorchEnable:(BOOL)arg0;
- (void)setIsFlashEnable:(BOOL)arg0;
- (void)setSupprotZoom:(BOOL)arg0;
- (void)setExposurePoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)setCurrentExposureBias:(double)arg0;
- (void)setScanManualOperationZoomFactor:(BOOL)arg0;
- (BOOL)enableZoomOpt;
- (BOOL)p_needToSwitchCamera;
- (void)switchCamera:(long long)arg0 captureFrame:(BOOL)arg1 resetCameraScale:(BOOL)arg2;
- (void)setCameraFirstRenderBlock;
- (void)setIsSwapCamera:(BOOL)arg0;
- (BOOL)isSwapCamera;
- (id /* block */)switchFrontTorchBlcok;
- (void)setSwitchFrontTorchBlcok:(id /* block */)arg0;
- (BOOL)applicationIsBackground;
- (BOOL)recorderDisappeared;
- (id)_BPEATokenDesc:(id)arg0;
- (BOOL)checkStateValid:(id)arg0;
- (void)startVideoCaptureWithAppStatusCheck:(BOOL)arg0 withPrivacyCert:(id)arg1;
- (void)didStopVideoCapture:(BOOL)arg0;
- (id)recorderViewController;
- (void)setRecorderViewController:(id)arg0;
- (void)setRecorderDisappeared:(BOOL)arg0;
- (void)setApplicationIsBackground:(BOOL)arg0;
- (void)setMinZoomFactor:(double)arg0;
- (void)setTorchMode:(unsigned long long)arg0;
- (long long)exposureMode;
- (unsigned long long)torchMode;
- (double)zoomFactor;
- (unsigned long long)flashMode;
- (id)init;
- (id)camera;
- (void)setFlashMode:(unsigned long long)arg0;
- (id)deviceType;
- (void)setCamera:(id)arg0;
- (id)brightness;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })focusPoint;
- (void)setZoomFactor:(double)arg0;
- (void)setBrightness:(id)arg0;
- (long long)status;
- (BOOL)handleTouchEvent:(struct CGPoint { double x0; double x1; })arg0;
- (struct CGSize { double x0; double x1; })outputSize;
- (double)maxZoomFactor;
- (id)previewView;
- (void)setSubscription:(id)arg0;
- (void)dealloc;
- (void)addSubscriber:(id)arg0;
- (id)subscription;
- (void)setFocusPoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)setOutputSize:(struct CGSize { double x0; double x1; })arg0;
- (void)applicationDidEnterBackgroundNotification:(id)arg0;
- (void)applicationWillEnterForegroundNotification:(id)arg0;
- (BOOL)handleRotationEvent:(double)arg0;
- (double)minZoomFactor;
- (void)changeToZoomFactor:(double)arg0;
- (void)setPreviewModeType:(long long)arg0;
- (void)switchCamera:(long long)arg0;

@end