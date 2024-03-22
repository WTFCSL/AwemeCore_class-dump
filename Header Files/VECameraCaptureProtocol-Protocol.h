//
//     Generated by private class-dump
//

@class NSArray, NSString, IESMMARCameraRendererWrapper, IESMMCaptureKitConfig, HTSGLContext;
@protocol IESMMARCameraDelegate, IESMMARCameraRenderer;

@protocol VECameraCaptureProtocol <IESMMCameraWhiteBalanceProtocol>

+ (id)sharedInstanceWithConfig:(id)arg0;
+ (void)releaseCaptureKit;
+ (id)sharedInstance;
+ (BOOL)isMultiCamSupported;

@property (readonly, nonatomic) NSArray *virtualDeviceSwitchOverVideoZoomFactors;
@property (readonly, nonatomic) double videoZoomFactorUpscaleThreshold;
@property (readonly, nonatomic) double minAvailableVideoZoomFactor;
@property (readonly, nonatomic) double maxAvailableVideoZoomFactor;
@property (readonly, nonatomic) NSString *deviceType;
@property (readonly, nonatomic) long long currentStabilizationMode;
@property (nonatomic) long long frontPreferredStabilizationMode;
@property (nonatomic) long long rearPreferredStabilizationMode;
@property (copy, nonatomic) id /* block */ videoAttachmentsCallback;
@property (copy, nonatomic) id /* block */ videoOutputCallback;
@property (copy, nonatomic) id /* block */ captureActionBlock;
@property (copy, nonatomic) id /* block */ subjectAreaDidChangeNotification;
@property (copy, nonatomic) id /* block */ torchChangeBlock;
@property (copy, nonatomic) id /* block */ faceBoundsCallbackBlock;
@property (nonatomic) unsigned long long cameraInfoRequirement;
@property (copy, nonatomic) id /* block */ cameraInfoBlock;
@property (retain, nonatomic) IESMMCaptureKitConfig *configuration;
@property (retain, nonatomic) HTSGLContext *context;
@property (nonatomic) BOOL capturePaused;
@property (nonatomic, getter=isCaptureWithAudio) BOOL captureWithAudio;
@property (nonatomic) unsigned long long frameCount;
@property (retain, nonatomic) IESMMARCameraRendererWrapper *arRendererWrapper;
@property (weak, nonatomic) id<IESMMARCameraDelegate> delegate;
@property (weak, nonatomic) id<IESMMARCameraRenderer> renderer;
@property (nonatomic) long long videoOrientation;

- (void)setCaptureWithAudio:(BOOL)arg0;
- (void)setCameraInfoBlock:(id /* block */)arg0;
- (void)setCameraInfoRequirement:(unsigned long long)arg0;
- (void)startCameraCapture:(id)arg0;
- (void)startCameraCapture:(id)arg0 completionHandler:(id /* block */)arg1;
- (BOOL)isCaptureWithAudio;
- (BOOL)capturePaused;
- (void)pauseCameraCapture;
- (void)resumeCameraCapture;
- (void)calculateCreatCameraTimes;
- (BOOL)startVideoCaptureWithAppStatusCheck:(id)arg0;
- (BOOL)startVideoCaptureWithAppStatusCheck:(id)arg0 completionHandler:(id /* block */)arg1;
- (void)stopCameraCapture:(id)arg0;
- (void)stopCameraCaptureWithCompleteBlock:(id /* block */)arg0 withPrivacyCert:(id)arg1;
- (BOOL)isCameraModeSupported:(long long)arg0;
- (id /* block */)videoAttachmentsCallback;
- (id /* block */)videoOutputCallback;
- (void)setVideoOutputCallback:(id /* block */)arg0;
- (long long)currentCameraPosition;
- (unsigned long long)cameraInfoRequirement;
- (id /* block */)cameraInfoBlock;
- (void)setCapturePaused:(BOOL)arg0;
- (id)initWithCameraConfiguration:(id)arg0;
- (void)switchCameraPosition:(id)arg0;
- (void)setFrameRateWithMinimum:(unsigned long long)arg0 maximum:(unsigned long long)arg1;
- (void)setTorchEnable:(BOOL)arg0;
- (BOOL)cameraSetZoomFactor:(double)arg0;
- (void)setSessionPreset:(id)arg0 then:(id /* block */)arg1;
- (id /* block */)captureActionBlock;
- (void)switchCameraFormatToDolbyVision:(BOOL)arg0;
- (id /* block */)subjectAreaDidChangeNotification;
- (void)setFocusMode:(long long)arg0 pointValue:(id)arg1 then:(id /* block */)arg2;
- (void)setExposureMode:(long long)arg0 pointValue:(id)arg1 then:(id /* block */)arg2;
- (id /* block */)faceBoundsCallbackBlock;
- (BOOL)resetOrientation:(long long)arg0;
- (void)releaseCapture;
- (void)disableHighFrameRateFpsAndResetToPreset:(id)arg0;
- (id)currentDeviceFormats;
- (void)setDeviceFormat:(id)arg0 then:(id /* block */)arg1;
- (void)setCaptureActionBlock:(id /* block */)arg0;
- (void)setSubjectAreaDidChangeNotification:(id /* block */)arg0;
- (id /* block */)torchChangeBlock;
- (void)setTorchChangeBlock:(id /* block */)arg0;
- (void)setFaceBoundsCallbackBlock:(id /* block */)arg0;
- (double)currentCameraZoomFactor;
- (BOOL)cameraZoomSupported;
- (double)maxCameraZoomFactor;
- (double)maxExposureBias;
- (double)minExposureBias;
- (void)changeExposureBias:(double)arg0;
- (void)setMaxZoomFactor:(double)arg0;
- (long long)frontPreferredStabilizationMode;
- (void)setFrontPreferredStabilizationMode:(long long)arg0;
- (long long)rearPreferredStabilizationMode;
- (void)setRearPreferredStabilizationMode:(long long)arg0;
- (BOOL)exposureAtPoint:(struct CGPoint { double x0; double x1; })arg0;
- (BOOL)cameraRampToZoomFactor:(double)arg0 withRate:(double)arg1;
- (BOOL)isCaptureInterruptted;
- (BOOL)isSupportFlashMode:(long long)arg0;
- (id)getRealTimeCaptureFrameRate;
- (void)switchCameraFormatToPhotoCapture:(BOOL)arg0;
- (void)resetDropFrameCount:(int)arg0;
- (void)turnLensSharpen:(BOOL)arg0;
- (struct CGPoint { double x0; double x1; })exposurePoint;
- (id)currentSystemPressureState;
- (void)getCurrentDeviceFormatsSafty:(id /* block */)arg0;
- (void)setVideoAttachmentsCallback:(id /* block */)arg0;
- (void)setActiveColorSpace:(unsigned long long)arg0 completionHandler:(id /* block */)arg1;
- (void)setProcessSyncFlag:(BOOL)arg0;
- (void)turnBachFaceDetect:(BOOL)arg0;
- (void)turnRhythmicMotion:(BOOL)arg0;
- (int)currentProcessType;
- (void)updateCameraProcessParams:(id)arg0 complete:(id /* block */)arg1;
- (void)turnShakingDetect:(BOOL)arg0 param:(id)arg1 withResult:(id /* block */)arg2;
- (void)turnImageDefinitionDetect:(BOOL)arg0 param:(id)arg1 withResult:(id /* block */)arg2;
- (void)turnQrcodeDetect:(BOOL)arg0 param:(id)arg1 completeResult:(id /* block */)arg2 zoomFactor:(id /* block */)arg3 needSelect:(id /* block */)arg4;
- (void)qrcodeDetectResetZoomFactor:(float)arg0 byUser:(BOOL)arg1;
- (void)turnSystemEnigma:(BOOL)arg0 param:(id)arg1 completeResult:(id /* block */)arg2;
- (void)turnScan:(BOOL)arg0 param:(id)arg1 completeResult:(id /* block */)arg2;
- (void)switchMultiCam:(long long)arg0;
- (void)setMultiCaptureKitUseParallelQueue:(BOOL)arg0;
- (id)cameraZoomSupportedInfo;
- (id)supportedBaseFocalLengthArray;
- (void)setSkipBinnedFormatInMultiCam:(long long)arg0;
- (BOOL)checkConfig:(id)arg0;
- (void)setRecorderConfig:(id)arg0 cameraComplete:(id /* block */)arg1;
- (void)processExternalVideoInput:(struct opaqueCMSampleBuffer { } *)arg0;
- (BOOL)needProcess;
- (void)closeProcess;
- (BOOL)focusAtPoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)captureImageWithTracker:(id)arg0 completionHandler:(id /* block */)arg1;
- (void)captureHDImageWithTracker:(id)arg0 completionHandler:(id /* block */)arg1;
- (void)turnEnigma:(BOOL)arg0 param:(id)arg1 completeResult:(id /* block */)arg2 zoomFactor:(id /* block */)arg3;
- (void)turnEnigma:(BOOL)arg0 param:(id)arg1 completeResults:(id /* block */)arg2;
- (BOOL)resetOrientation:(long long)arg0 then:(id /* block */)arg1;
- (void)setMirror:(BOOL)arg0 then:(id /* block */)arg1;
- (void)switchMultiCam:(long long)arg0 fromMode:(long long)arg1 needRelease:(BOOL)arg2;
- (double)videoCaptureFrameRate;
- (void)chooseBestFormatWithMaxFps:(long long)arg0 minFps:(long long)arg1;
- (void)forceStopCameraCaptureWithCompleteBlock:(id /* block */)arg0 withPrivacyCert:(id)arg1;
- (BOOL)isCaptureRunning;
- (void)setCurrentVEExposureMode:(long long)arg0;
- (BOOL)enableSystemAutoFaceAE:(BOOL)arg0;
- (float)getCurrentFrameRate;
- (id)getCameraProperty;
- (BOOL)isStablizationSupported;
- (long long)currentStabilizationMode;
- (BOOL)isCaptureConfigReady;
- (void)cameraSetZoomFactor:(double)arg0 frontZoomFactor:(double)arg1;
- (void)setEnableSystemDetect:(BOOL)arg0;
- (BOOL)hasFlash;
- (float)ISO;
- (id)activeFormat;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })exposureDuration;
- (BOOL)isRunning;
- (void)setResolution:(struct CGSize { double x0; double x1; })arg0;
- (unsigned long long)primaryConstituentDeviceRestrictedSwitchingBehaviorConditions;
- (BOOL)setFlashMode:(long long)arg0;
- (id)deviceType;
- (id)virtualDeviceSwitchOverVideoZoomFactors;
- (struct CGPoint { double x0; double x1; })focusPoint;
- (double)exposureBias;
- (void)setContext:(id)arg0;
- (BOOL)setFocusMode:(long long)arg0;
- (unsigned long long)frameCount;
- (unsigned long long)activeColorSpace;
- (BOOL)isMultiCamSession;
- (double)maxAvailableVideoZoomFactor;
- (void)setExposureModeCustomWithDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0 ISO:(float)arg1 completionHandler:(id /* block */)arg2;
- (BOOL)setExposureMode:(long long)arg0;
- (id)fallbackPrimaryConstituentDevices;
- (void)setFrameRate:(unsigned long long)arg0;
- (id)activePrimaryConstituentDevice;
- (id)configuration;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })activeVideoMaxFrameDuration;
- (id)context;
- (BOOL)setPrimaryConstituentDeviceSwitchingBehavior:(long long)arg0 restrictedSwitchingBehaviorConditions:(unsigned long long)arg1;
- (BOOL)isAdjustingFocus;
- (BOOL)hasTorch;
- (void)setSessionPreset:(id)arg0;
- (id)supportedFallbackPrimaryConstituentDevices;
- (long long)primaryConstituentDeviceSwitchingBehavior;
- (float)maxISO;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })activeVideoMinFrameDuration;
- (double)minAvailableVideoZoomFactor;
- (void)setFrameCount:(unsigned long long)arg0;
- (float)minISO;
- (void)setConfiguration:(id)arg0;
- (double)videoZoomFactorUpscaleThreshold;
- (struct CGSize { double x0; double x1; })highResolutionStillImageDimensions;
- (BOOL)isVirtualDevice;
- (id)constituentDevices;
- (void)setMirror:(BOOL)arg0;

@optional

- (void)commitConfiguration:(id)arg0;
- (id)arRendererWrapper;
- (void)setArRendererWrapper:(id)arg0;
- (long long)videoOrientation;
- (void)setVideoOrientation:(long long)arg0;
- (void)setRenderer:(id)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (id)renderer;
- (struct CGSize { double x0; double x1; })imageResolution;

@end